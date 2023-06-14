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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSEPROXIESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSEPROXIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CloseProxies请求参数结构体
                */
                class CloseProxiesRequest : public AbstractModel
                {
                public:
                    CloseProxiesRequest();
                    ~CloseProxiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取（旧参数，请切换到ProxyIds）通道的实例ID。
                     * @return InstanceIds （旧参数，请切换到ProxyIds）通道的实例ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置（旧参数，请切换到ProxyIds）通道的实例ID。
                     * @param _instanceIds （旧参数，请切换到ProxyIds）通道的实例ID。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取（新参数）通道的实例ID。
                     * @return ProxyIds （新参数）通道的实例ID。
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置（新参数）通道的实例ID。
                     * @param _proxyIds （新参数）通道的实例ID。
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                private:

                    /**
                     * （旧参数，请切换到ProxyIds）通道的实例ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
更多详细信息请参阅：如何保证幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * （新参数）通道的实例ID。
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSEPROXIESREQUEST_H_
