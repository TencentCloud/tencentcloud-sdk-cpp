/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_HTTPPROBE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_HTTPPROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/HttpHeader.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * HTTP探测配置
                */
                class HttpProbe : public AbstractModel
                {
                public:
                    HttpProbe();
                    ~HttpProbe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 请求路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 请求端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置请求端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 请求端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取请求地址，默认Pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host 请求地址，默认Pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置请求地址，默认Pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host 请求地址，默认Pod的IP
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求模式  HTTP|HTTPS，默认HTTP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scheme 请求模式  HTTP|HTTPS，默认HTTP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置请求模式  HTTP|HTTPS，默认HTTP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheme 请求模式  HTTP|HTTPS，默认HTTP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取HTTP的请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers HTTP的请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HttpHeader> GetHeaders() const;

                    /**
                     * 设置HTTP的请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers HTTP的请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<HttpHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 请求地址，默认Pod的IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 请求模式  HTTP|HTTPS，默认HTTP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * HTTP的请求头
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HttpHeader> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_HTTPPROBE_H_
