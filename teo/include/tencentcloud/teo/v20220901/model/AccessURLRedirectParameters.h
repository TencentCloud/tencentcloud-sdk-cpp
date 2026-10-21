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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostName.h>
#include <tencentcloud/teo/v20220901/model/URLPath.h>
#include <tencentcloud/teo/v20220901/model/AccessURLRedirectQueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 访问 URL 重定向 配置参数。
                */
                class AccessURLRedirectParameters : public AbstractModel
                {
                public:
                    AccessURLRedirectParameters();
                    ~AccessURLRedirectParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>状态码，取值为 301、302、303、307、308 之一。</p>
                     * @return StatusCode <p>状态码，取值为 301、302、303、307、308 之一。</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置<p>状态码，取值为 301、302、303、307、308 之一。</p>
                     * @param _statusCode <p>状态码，取值为 301、302、303、307、308 之一。</p>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>目标请求协议。</p><p>枚举值：</p><ul><li>http： 目标请求协议为 HTTP。</li><li>https： 目标请求协议为 HTTPS。</li><li>follow： 跟随请求。</li></ul>
                     * @return Protocol <p>目标请求协议。</p><p>枚举值：</p><ul><li>http： 目标请求协议为 HTTP。</li><li>https： 目标请求协议为 HTTPS。</li><li>follow： 跟随请求。</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>目标请求协议。</p><p>枚举值：</p><ul><li>http： 目标请求协议为 HTTP。</li><li>https： 目标请求协议为 HTTPS。</li><li>follow： 跟随请求。</li></ul>
                     * @param _protocol <p>目标请求协议。</p><p>枚举值：</p><ul><li>http： 目标请求协议为 HTTP。</li><li>https： 目标请求协议为 HTTPS。</li><li>follow： 跟随请求。</li></ul>
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
                     * 获取<p>目标 HostName。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName <p>目标 HostName。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostName GetHostName() const;

                    /**
                     * 设置<p>目标 HostName。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostName <p>目标 HostName。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostName(const HostName& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>目标路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URLPath <p>目标路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    URLPath GetURLPath() const;

                    /**
                     * 设置<p>目标路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRLPath <p>目标路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURLPath(const URLPath& _uRLPath);

                    /**
                     * 判断参数 URLPath 是否已赋值
                     * @return URLPath 是否已赋值
                     * 
                     */
                    bool URLPathHasBeenSet() const;

                    /**
                     * 获取<p>携带查询参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryString <p>携带查询参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessURLRedirectQueryString GetQueryString() const;

                    /**
                     * 设置<p>携带查询参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryString <p>携带查询参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryString(const AccessURLRedirectQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * <p>状态码，取值为 301、302、303、307、308 之一。</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>目标请求协议。</p><p>枚举值：</p><ul><li>http： 目标请求协议为 HTTP。</li><li>https： 目标请求协议为 HTTPS。</li><li>follow： 跟随请求。</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>目标 HostName。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostName m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>目标路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    URLPath m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * <p>携带查询参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessURLRedirectQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPARAMETERS_H_
