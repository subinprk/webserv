/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConfigParse.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 22:37:54 by siun              #+#    #+#             */
/*   Updated: 2024/05/23 18:59:41 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIGPARSE_HPP
# define CONFIGPARSE_HPP
# include <string>
# include <cstring>
# include <exception>
# include <vector>
# include <iostream>
# include <fstream>
# include <iterator>
# include <exception>
# include <algorithm>
# include <sstream>
# include <map>
#include "../CommonIncludes.hpp"

class ConfigParse
{
	private:
		
};

std::string												openFile(std::string path);
std::vector<std::pair<std::string, int> >				findIndent(std::string str);
std::vector<std::vector<std::pair<std::string, int> > >	findChunck(std::vector<std::pair<std::string, int> > indents);
t_server												parseServerConfig(const std::vector<std::pair<std::string, int> >chunck);
std::vector<t_server>									configParse(std::string configFilePath);

# endif
