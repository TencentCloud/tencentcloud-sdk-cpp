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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CCNSWITCHINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CCNSWITCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/RegionCidrConfig.h>
#include <tencentcloud/cfw/v20190904/model/InterconnectPair.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ccn实例开关信息
                */
                class CcnSwitchInfo : public AbstractModel
                {
                public:
                    CcnSwitchInfo();
                    ~CcnSwitchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ccn的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnId ccn的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置ccn的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ccnId ccn的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取开关接入模式，1:自动接入,2:手动接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SwitchMode 开关接入模式，1:自动接入,2:手动接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSwitchMode() const;

                    /**
                     * 设置开关接入模式，1:自动接入,2:手动接入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switchMode 开关接入模式，1:自动接入,2:手动接入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitchMode(const uint64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取引流路由方法 0:多路由表, 1:策略路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutingMode 引流路由方法 0:多路由表, 1:策略路由
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置引流路由方法 0:多路由表, 1:策略路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _routingMode 引流路由方法 0:多路由表, 1:策略路由
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoutingMode(const int64_t& _routingMode);

                    /**
                     * 判断参数 RoutingMode 是否已赋值
                     * @return RoutingMode 是否已赋值
                     * 
                     */
                    bool RoutingModeHasBeenSet() const;

                    /**
                     * 获取地域级别CIDR配置
                     * @return RegionCidrConfigs 地域级别CIDR配置
                     * 
                     */
                    std::vector<RegionCidrConfig> GetRegionCidrConfigs() const;

                    /**
                     * 设置地域级别CIDR配置
                     * @param _regionCidrConfigs 地域级别CIDR配置
                     * 
                     */
                    void SetRegionCidrConfigs(const std::vector<RegionCidrConfig>& _regionCidrConfigs);

                    /**
                     * 判断参数 RegionCidrConfigs 是否已赋值
                     * @return RegionCidrConfigs 是否已赋值
                     * 
                     */
                    bool RegionCidrConfigsHasBeenSet() const;

                    /**
                     * 获取互联集合对列表
                     * @return InterconnectPairs 互联集合对列表
                     * 
                     */
                    std::vector<InterconnectPair> GetInterconnectPairs() const;

                    /**
                     * 设置互联集合对列表
                     * @param _interconnectPairs 互联集合对列表
                     * 
                     */
                    void SetInterconnectPairs(const std::vector<InterconnectPair>& _interconnectPairs);

                    /**
                     * 判断参数 InterconnectPairs 是否已赋值
                     * @return InterconnectPairs 是否已赋值
                     * 
                     */
                    bool InterconnectPairsHasBeenSet() const;

                    /**
                     * 获取引流通用CIDR(废弃)
                     * @return FwVpcCidr 引流通用CIDR(废弃)
                     * 
                     */
                    std::string GetFwVpcCidr() const;

                    /**
                     * 设置引流通用CIDR(废弃)
                     * @param _fwVpcCidr 引流通用CIDR(废弃)
                     * 
                     */
                    void SetFwVpcCidr(const std::string& _fwVpcCidr);

                    /**
                     * 判断参数 FwVpcCidr 是否已赋值
                     * @return FwVpcCidr 是否已赋值
                     * 
                     */
                    bool FwVpcCidrHasBeenSet() const;

                private:

                    /**
                     * ccn的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 开关接入模式，1:自动接入,2:手动接入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * 引流路由方法 0:多路由表, 1:策略路由
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                    /**
                     * 地域级别CIDR配置
                     */
                    std::vector<RegionCidrConfig> m_regionCidrConfigs;
                    bool m_regionCidrConfigsHasBeenSet;

                    /**
                     * 互联集合对列表
                     */
                    std::vector<InterconnectPair> m_interconnectPairs;
                    bool m_interconnectPairsHasBeenSet;

                    /**
                     * 引流通用CIDR(废弃)
                     */
                    std::string m_fwVpcCidr;
                    bool m_fwVpcCidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CCNSWITCHINFO_H_
