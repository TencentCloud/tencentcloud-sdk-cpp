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
                     * 获取地址池id
                     * @return PoolId 地址池id
                     * 
                     */
                    uint64_t GetPoolId() const;

                    /**
                     * 设置地址池id
                     * @param _poolId 地址池id
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
                     * 获取地址池名称，不允许重复
                     * @return PoolName 地址池名称，不允许重复
                     * 
                     */
                    std::string GetPoolName() const;

                    /**
                     * 设置地址池名称，不允许重复
                     * @param _poolName 地址池名称，不允许重复
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
                     * 获取流量策略: WEIGHT负载均衡，ALL解析全部
                     * @return TrafficStrategy 流量策略: WEIGHT负载均衡，ALL解析全部
                     * 
                     */
                    std::string GetTrafficStrategy() const;

                    /**
                     * 设置流量策略: WEIGHT负载均衡，ALL解析全部
                     * @param _trafficStrategy 流量策略: WEIGHT负载均衡，ALL解析全部
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
                     * 获取监控器id
                     * @return MonitorId 监控器id
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置监控器id
                     * @param _monitorId 监控器id
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
                     * 获取地址列表
                     * @return AddressSet 地址列表
                     * 
                     */
                    std::vector<Address> GetAddressSet() const;

                    /**
                     * 设置地址列表
                     * @param _addressSet 地址列表
                     * 
                     */
                    void SetAddressSet(const std::vector<Address>& _addressSet);

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     * 
                     */
                    bool AddressSetHasBeenSet() const;

                private:

                    /**
                     * 地址池id
                     */
                    uint64_t m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * 地址池名称，不允许重复
                     */
                    std::string m_poolName;
                    bool m_poolNameHasBeenSet;

                    /**
                     * 流量策略: WEIGHT负载均衡，ALL解析全部
                     */
                    std::string m_trafficStrategy;
                    bool m_trafficStrategyHasBeenSet;

                    /**
                     * 监控器id
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 地址列表
                     */
                    std::vector<Address> m_addressSet;
                    bool m_addressSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLREQUEST_H_
