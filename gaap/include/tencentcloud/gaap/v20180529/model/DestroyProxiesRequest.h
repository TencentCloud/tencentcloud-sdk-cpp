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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESTROYPROXIESREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESTROYPROXIESREQUEST_H_

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
                * DestroyProxies请求参数结构体
                */
                class DestroyProxiesRequest : public AbstractModel
                {
                public:
                    DestroyProxiesRequest();
                    ~DestroyProxiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取强制删除标识。
1，强制删除该通道列表，无论是否已经绑定了源站；
0，如果已绑定了源站，则无法删除。
删除多通道时，如果该标识为0，只有所有的通道都没有绑定源站，才允许删除。
                     * @return Force 强制删除标识。
1，强制删除该通道列表，无论是否已经绑定了源站；
0，如果已绑定了源站，则无法删除。
删除多通道时，如果该标识为0，只有所有的通道都没有绑定源站，才允许删除。
                     * 
                     */
                    int64_t GetForce() const;

                    /**
                     * 设置强制删除标识。
1，强制删除该通道列表，无论是否已经绑定了源站；
0，如果已绑定了源站，则无法删除。
删除多通道时，如果该标识为0，只有所有的通道都没有绑定源站，才允许删除。
                     * @param _force 强制删除标识。
1，强制删除该通道列表，无论是否已经绑定了源站；
0，如果已绑定了源站，则无法删除。
删除多通道时，如果该标识为0，只有所有的通道都没有绑定源站，才允许删除。
                     * 
                     */
                    void SetForce(const int64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取（旧参数，请切换到ProxyIds）通道实例ID列表。
                     * @return InstanceIds （旧参数，请切换到ProxyIds）通道实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置（旧参数，请切换到ProxyIds）通道实例ID列表。
                     * @param _instanceIds （旧参数，请切换到ProxyIds）通道实例ID列表。
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
                     * 获取（新参数）通道实例ID列表。
                     * @return ProxyIds （新参数）通道实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置（新参数）通道实例ID列表。
                     * @param _proxyIds （新参数）通道实例ID列表。
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
                     * 强制删除标识。
1，强制删除该通道列表，无论是否已经绑定了源站；
0，如果已绑定了源站，则无法删除。
删除多通道时，如果该标识为0，只有所有的通道都没有绑定源站，才允许删除。
                     */
                    int64_t m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * （旧参数，请切换到ProxyIds）通道实例ID列表。
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
                     * （新参数）通道实例ID列表。
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESTROYPROXIESREQUEST_H_
