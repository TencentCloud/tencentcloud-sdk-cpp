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
                     * 获取状态码，取值为 301、302、303、307、308 之一。
                     * @return StatusCode 状态码，取值为 301、302、303、307、308 之一。
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置状态码，取值为 301、302、303、307、308 之一。
                     * @param _statusCode 状态码，取值为 301、302、303、307、308 之一。
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
                     * 获取目标请求协议，取值有：
<li>http：目标请求协议 HTTP；</li>
<li>https：目标请求协议 HTTPS；</li>
<li>follow：跟随请求。</li>
                     * @return Protocol 目标请求协议，取值有：
<li>http：目标请求协议 HTTP；</li>
<li>https：目标请求协议 HTTPS；</li>
<li>follow：跟随请求。</li>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置目标请求协议，取值有：
<li>http：目标请求协议 HTTP；</li>
<li>https：目标请求协议 HTTPS；</li>
<li>follow：跟随请求。</li>
                     * @param _protocol 目标请求协议，取值有：
<li>http：目标请求协议 HTTP；</li>
<li>https：目标请求协议 HTTPS；</li>
<li>follow：跟随请求。</li>
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
                     * 获取目标 HostName 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName 目标 HostName 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostName GetHostName() const;

                    /**
                     * 设置目标 HostName 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostName 目标 HostName 。
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
                     * 获取目标路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URLPath 目标路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    URLPath GetURLPath() const;

                    /**
                     * 设置目标路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRLPath 目标路径。
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
                     * 获取携带查询参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryString 携带查询参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessURLRedirectQueryString GetQueryString() const;

                    /**
                     * 设置携带查询参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryString 携带查询参数。
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
                     * 状态码，取值为 301、302、303、307、308 之一。
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 目标请求协议，取值有：
<li>http：目标请求协议 HTTP；</li>
<li>https：目标请求协议 HTTPS；</li>
<li>follow：跟随请求。</li>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 目标 HostName 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostName m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 目标路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    URLPath m_uRLPath;
                    bool m_uRLPathHasBeenSet;

                    /**
                     * 携带查询参数。
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
