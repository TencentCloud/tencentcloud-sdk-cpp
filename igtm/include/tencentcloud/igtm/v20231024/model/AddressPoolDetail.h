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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSPOOLDETAIL_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSPOOLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 地址池详情
                */
                class AddressPoolDetail : public AbstractModel
                {
                public:
                    AddressPoolDetail();
                    ~AddressPoolDetail() = default;
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

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESSPOOLDETAIL_H_
