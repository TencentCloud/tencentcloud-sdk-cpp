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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPULLPROTOCOLPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPULLPROTOCOLPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 回源 HTTPS 配置参数。
                */
                class OriginPullProtocolParameters : public AbstractModel
                {
                public:
                    OriginPullProtocolParameters();
                    ~OriginPullProtocolParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源协议配置，取值有：
<li>http：使用 HTTP 协议回源；</li>
<li>https：使用 HTTPS 协议回源；</li>
<li>follow：协议跟随。</li>
                     * @return Protocol 回源协议配置，取值有：
<li>http：使用 HTTP 协议回源；</li>
<li>https：使用 HTTPS 协议回源；</li>
<li>follow：协议跟随。</li>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置回源协议配置，取值有：
<li>http：使用 HTTP 协议回源；</li>
<li>https：使用 HTTPS 协议回源；</li>
<li>follow：协议跟随。</li>
                     * @param _protocol 回源协议配置，取值有：
<li>http：使用 HTTP 协议回源；</li>
<li>https：使用 HTTPS 协议回源；</li>
<li>follow：协议跟随。</li>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 回源协议配置，取值有：
<li>http：使用 HTTP 协议回源；</li>
<li>https：使用 HTTPS 协议回源；</li>
<li>follow：协议跟随。</li>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPULLPROTOCOLPARAMETERS_H_
