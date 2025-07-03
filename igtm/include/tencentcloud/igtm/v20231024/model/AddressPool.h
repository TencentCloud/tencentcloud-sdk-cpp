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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSPOOL_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/InstanceInfo.h>
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
                * 地址池
                */
                class AddressPool : public AbstractModel
                {
                public:
                    AddressPool();
                    ~AddressPool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地址池 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoolId 地址池 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPoolId() const;

                    /**
                     * 设置地址池 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _poolId 地址池 id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地址池名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoolName 地址池名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPoolName() const;

                    /**
                     * 设置地址池名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _poolName 地址池名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地址池地址类型：IPV4、IPV6、DOMAIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddrType 地址池地址类型：IPV4、IPV6、DOMAIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddrType() const;

                    /**
                     * 设置地址池地址类型：IPV4、IPV6、DOMAIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addrType 地址池地址类型：IPV4、IPV6、DOMAIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddrType(const std::string& _addrType);

                    /**
                     * 判断参数 AddrType 是否已赋值
                     * @return AddrType 是否已赋值
                     * 
                     */
                    bool AddrTypeHasBeenSet() const;

                    /**
                     * 获取流量策略: WEIGHT负载均衡，ALL解析全部
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrafficStrategy 流量策略: WEIGHT负载均衡，ALL解析全部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrafficStrategy() const;

                    /**
                     * 设置流量策略: WEIGHT负载均衡，ALL解析全部
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trafficStrategy 流量策略: WEIGHT负载均衡，ALL解析全部
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorId 监控器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置监控器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorId 监控器id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取OK正常，DOWN故障，WARN风险，UNKNOWN未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status OK正常，DOWN故障，WARN风险，UNKNOWN未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置OK正常，DOWN故障，WARN风险，UNKNOWN未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status OK正常，DOWN故障，WARN风险，UNKNOWN未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地址数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressNum 地址数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAddressNum() const;

                    /**
                     * 设置地址数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressNum 地址数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressNum(const int64_t& _addressNum);

                    /**
                     * 判断参数 AddressNum 是否已赋值
                     * @return AddressNum 是否已赋值
                     * 
                     */
                    bool AddressNumHasBeenSet() const;

                    /**
                     * 获取探点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorGroupNum 探点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorGroupNum() const;

                    /**
                     * 设置探点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorGroupNum 探点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorGroupNum(const int64_t& _monitorGroupNum);

                    /**
                     * 判断参数 MonitorGroupNum 是否已赋值
                     * @return MonitorGroupNum 是否已赋值
                     * 
                     */
                    bool MonitorGroupNumHasBeenSet() const;

                    /**
                     * 获取探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorTaskNum 探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorTaskNum() const;

                    /**
                     * 设置探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorTaskNum 探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorTaskNum(const int64_t& _monitorTaskNum);

                    /**
                     * 判断参数 MonitorTaskNum 是否已赋值
                     * @return MonitorTaskNum 是否已赋值
                     * 
                     */
                    bool MonitorTaskNumHasBeenSet() const;

                    /**
                     * 获取实例相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInfo 实例相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceInfo> GetInstanceInfo() const;

                    /**
                     * 设置实例相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInfo 实例相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceInfo(const std::vector<InstanceInfo>& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取地址池地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressSet 地址池地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Address> GetAddressSet() const;

                    /**
                     * 设置地址池地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressSet 地址池地址信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedOn 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedOn 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                private:

                    /**
                     * 地址池 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_poolId;
                    bool m_poolIdHasBeenSet;

                    /**
                     * 地址池名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_poolName;
                    bool m_poolNameHasBeenSet;

                    /**
                     * 地址池地址类型：IPV4、IPV6、DOMAIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addrType;
                    bool m_addrTypeHasBeenSet;

                    /**
                     * 流量策略: WEIGHT负载均衡，ALL解析全部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trafficStrategy;
                    bool m_trafficStrategyHasBeenSet;

                    /**
                     * 监控器id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * OK正常，DOWN故障，WARN风险，UNKNOWN未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地址数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_addressNum;
                    bool m_addressNumHasBeenSet;

                    /**
                     * 探点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorGroupNum;
                    bool m_monitorGroupNumHasBeenSet;

                    /**
                     * 探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorTaskNum;
                    bool m_monitorTaskNumHasBeenSet;

                    /**
                     * 实例相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceInfo> m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * 地址池地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Address> m_addressSet;
                    bool m_addressSetHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSPOOL_H_
