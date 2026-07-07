/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_HTTPREDIRECTINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_HTTPREDIRECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * HTTP重定向信息
                */
                class HTTPRedirectInfo : public AbstractModel
                {
                public:
                    HTTPRedirectInfo();
                    ~HTTPRedirectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重定向的HTTP码，支持301、302、303、307、 308。
                     * @return HttpCode 重定向的HTTP码，支持301、302、303、307、 308。
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置重定向的HTTP码，支持301、302、303、307、 308。
                     * @param _httpCode 重定向的HTTP码，支持301、302、303、307、 308。
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取重定向的主机地址，默认值${host}。长度3 ~ 128个字符，支持的字符集为：a-z 0-9 _ . -。
                     * @return Host 重定向的主机地址，默认值${host}。长度3 ~ 128个字符，支持的字符集为：a-z 0-9 _ . -。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置重定向的主机地址，默认值${host}。长度3 ~ 128个字符，支持的字符集为：a-z 0-9 _ . -。
                     * @param _host 重定向的主机地址，默认值${host}。长度3 ~ 128个字符，支持的字符集为：a-z 0-9 _ . -。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取重定向的路径，默认值${path}。长度1 ~ 128个字符，支持的字符集为：a-z 0-9  ? =  _  . - / : 。
                     * @return Path 重定向的路径，默认值${path}。长度1 ~ 128个字符，支持的字符集为：a-z 0-9  ? =  _  . - / : 。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置重定向的路径，默认值${path}。长度1 ~ 128个字符，支持的字符集为：a-z 0-9  ? =  _  . - / : 。
                     * @param _path 重定向的路径，默认值${path}。长度1 ~ 128个字符，支持的字符集为：a-z 0-9  ? =  _  . - / : 。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取重定向的端口，默认值 ${port}。取值1 ~ 65535。
                     * @return Port 重定向的端口，默认值 ${port}。取值1 ~ 65535。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置重定向的端口，默认值 ${port}。取值1 ~ 65535。
                     * @param _port 重定向的端口，默认值 ${port}。取值1 ~ 65535。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取重定向的协议，取值：HTTP,HTTPS，默认值${protocol}。
                     * @return Protocol 重定向的协议，取值：HTTP,HTTPS，默认值${protocol}。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置重定向的协议，取值：HTTP,HTTPS，默认值${protocol}。
                     * @param _protocol 重定向的协议，取值：HTTP,HTTPS，默认值${protocol}。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取重定向的查询字符串，默认值${query}。长度1 ~ 128字符，支持可打印字符，不支持 #[]{}\|<>& 和空格。
                     * @return Query 重定向的查询字符串，默认值${query}。长度1 ~ 128字符，支持可打印字符，不支持 #[]{}\|<>& 和空格。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置重定向的查询字符串，默认值${query}。长度1 ~ 128字符，支持可打印字符，不支持 #[]{}\|<>& 和空格。
                     * @param _query 重定向的查询字符串，默认值${query}。长度1 ~ 128字符，支持可打印字符，不支持 #[]{}\|<>& 和空格。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * 重定向的HTTP码，支持301、302、303、307、 308。
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 重定向的主机地址，默认值${host}。长度3 ~ 128个字符，支持的字符集为：a-z 0-9 _ . -。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 重定向的路径，默认值${path}。长度1 ~ 128个字符，支持的字符集为：a-z 0-9  ? =  _  . - / : 。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 重定向的端口，默认值 ${port}。取值1 ~ 65535。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 重定向的协议，取值：HTTP,HTTPS，默认值${protocol}。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 重定向的查询字符串，默认值${query}。长度1 ~ 128字符，支持可打印字符，不支持 #[]{}\|<>& 和空格。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_HTTPREDIRECTINFO_H_
