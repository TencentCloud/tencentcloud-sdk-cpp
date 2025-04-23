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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/IngressRuleValue.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * ingress rule 配置
                */
                class IngressRule : public AbstractModel
                {
                public:
                    IngressRule();
                    ~IngressRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ingress rule value
                     * @return Http ingress rule value
                     * 
                     */
                    IngressRuleValue GetHttp() const;

                    /**
                     * 设置ingress rule value
                     * @param _http ingress rule value
                     * 
                     */
                    void SetHttp(const IngressRuleValue& _http);

                    /**
                     * 判断参数 Http 是否已赋值
                     * @return Http 是否已赋值
                     * 
                     */
                    bool HttpHasBeenSet() const;

                    /**
                     * 获取host 地址
                     * @return Host host 地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置host 地址
                     * @param _host host 地址
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
                     * 获取协议，选项为 http， https，默认为 http
                     * @return Protocol 协议，选项为 http， https，默认为 http
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，选项为 http， https，默认为 http
                     * @param _protocol 协议，选项为 http， https，默认为 http
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
                     * ingress rule value
                     */
                    IngressRuleValue m_http;
                    bool m_httpHasBeenSet;

                    /**
                     * host 地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 协议，选项为 http， https，默认为 http
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULE_H_
