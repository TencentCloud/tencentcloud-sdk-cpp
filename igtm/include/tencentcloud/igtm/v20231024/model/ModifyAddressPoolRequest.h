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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/Address.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * ModifyAddressPool请求参数结构体
                */
                class ModifyAddressPoolRequest : public AbstractModel
                {
                public:
                    ModifyAddressPoolRequest();
                    ~ModifyAddressPoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>地址池id</p>
                     * @return PoolId <p>地址池id</p>
                     * 
                     */
                    uint64_t GetPoolId() const;

                    /**
                     * 设置<p>地址池id</p>
                     * @param _poolId <p>地址池id</p>
                     * 
                     */
                    void SetPoolId(const uint64_t& _poolId);

                    /**
                     * 判断参数 PoolId 是否已赋值
                     * @return PoolId 是否已赋值
                     * 
                     */
                    bool PoolIdHasBeenSet() const;

                    /**
                     * 获取<p>地址池名称，不允许重复</p>
                     * @return PoolName <p>地址池名称，不允许重复</p>
                     * 
                     */
                    std::string GetPoolName() const;

                    /**
                     * 设置<p>地址池名称，不允许重复</p>
                     * @param _poolName <p>地址池名称，不允许重复</p>
                     * 
                     */
                    void SetPoolName(const std::string& _poolName);

                    /**
                     * 判断参数 PoolName 是否已赋值
                     * @return PoolName 是否已赋值
                     * 
                     */
                    bool PoolNameHasBeenSet() const;

                    /**
                     * 获取<p>流量策略: WEIGHT负载均衡，ALL解析全部</p>
                     * @return TrafficStrategy <p>流量策略: WEIGHT负载均衡，ALL解析全部</p>
                     * 
                     */
                    std::string GetTrafficStrategy() const;

                    /**
                     * 设置<p>流量策略: WEIGHT负载均衡，ALL解析全部</p>
                     * @param _trafficStrategy <p>流量策略: WEIGHT负载均衡，ALL解析全部</p>
                     * 
                     */
                    void SetTrafficStrategy(const std::string& _trafficStrategy);

                    /**
                     * 判断参数 TrafficStrategy 是否已赋值
                     * @return TrafficStrategy 是否已赋值
                     * 
                     */
                    bool TrafficStrategyHasBeenSet() const;

                    /**
                     * 获取<p>监控器id，当监控器已关联策略时，此字段必传</p>
                     * @return MonitorId <p>监控器id，当监控器已关联策略时，此字段必传</p>
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置<p>监控器id，当监控器已关联策略时，此字段必传</p>
                     * @param _monitorId <p>监控器id，当监控器已关联策略时，此字段必传</p>
                     * 
                     */
                    void SetMonitorId(const uint64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取<p>地址列表，全量更新逻辑，对于存量不需要修改的地址信息也需要带上(其中参数里的AddressId需传入正确的值)，否则会被删除。</p>
                     * @return AddressSet <p>地址列表，全量更新逻辑，对于存量不需要修改的地址信息也需要带上(其中参数里的AddressId需传入正确的值)，否则会被删除。</p>
                     * 
                     */
                    std::vector<Address> GetAddressSet() const;

                    /**
                     * 设置<p>地址列表，全量更新逻辑，对于存量不需要修改的地址信息也需要带上(其中参数里的AddressId需传入正确的值)，否则会被删除。</p>
                     * @param _addressSet <p>地址列表，全量更新逻辑，对于存量不需要修改的地址信息也需要带上(其中参数里的AddressId需传入正确的值)，否则会被删除。</p>
                     * 
                     */
                    void SetAddressSet(const std::vector<Address>& _addressSet);

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     * 
                     */
                    bool AddressSetHasBeenSet() const;

                    /**
                     * 获取<p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * @return KeepResource <p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * 
                     */
                    bool GetKeepResource() const;

                    /**
                     * 设置<p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * @param _keepResource <p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     * 
                     */
                    void SetKeepResource(const bool& _keepResource);

                    /**
                     * 判断参数 KeepResource 是否已赋值
                     * @return KeepResource 是否已赋值
                     * 
                     */
                    bool KeepResourceHasBeenSet() const;

                private:

                    /**
                     * <p>地址池id</p>
                     */
                    uint64_t m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * <p>地址池名称，不允许重复</p>
                     */
                    std::string m_poolName;
                    bool m_poolNameHasBeenSet;

                    /**
                     * <p>流量策略: WEIGHT负载均衡，ALL解析全部</p>
                     */
                    std::string m_trafficStrategy;
                    bool m_trafficStrategyHasBeenSet;

                    /**
                     * <p>监控器id，当监控器已关联策略时，此字段必传</p>
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * <p>地址列表，全量更新逻辑，对于存量不需要修改的地址信息也需要带上(其中参数里的AddressId需传入正确的值)，否则会被删除。</p>
                     */
                    std::vector<Address> m_addressSet;
                    bool m_addressSetHasBeenSet;

                    /**
                     * <p>是否保留资源</p><p>枚举值：</p><ul><li>false： 全量操作，会有删除逻辑</li><li>true： 不会删除原有资源</li></ul>
                     */
                    bool m_keepResource;
                    bool m_keepResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLREQUEST_H_
