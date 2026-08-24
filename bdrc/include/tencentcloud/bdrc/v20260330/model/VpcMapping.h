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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_VPCMAPPING_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_VPCMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 站点对vpc映射信息
                */
                class VpcMapping : public AbstractModel
                {
                public:
                    VpcMapping();
                    ~VpcMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取映射规则主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 映射规则主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置映射规则主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 映射规则主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取所属容灾策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SitePairId 所属容灾策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置所属容灾策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sitePairId 所属容灾策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                    /**
                     * 获取源端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceVpc 源端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceVpc() const;

                    /**
                     * 设置源端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceVpc 源端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceVpc(const std::string& _sourceVpc);

                    /**
                     * 判断参数 SourceVpc 是否已赋值
                     * @return SourceVpc 是否已赋值
                     * 
                     */
                    bool SourceVpcHasBeenSet() const;

                    /**
                     * 获取源端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceSubnet 源端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceSubnet() const;

                    /**
                     * 设置源端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceSubnet 源端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceSubnet(const std::string& _sourceSubnet);

                    /**
                     * 判断参数 SourceSubnet 是否已赋值
                     * @return SourceSubnet 是否已赋值
                     * 
                     */
                    bool SourceSubnetHasBeenSet() const;

                    /**
                     * 获取目标端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetVpc 目标端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetVpc() const;

                    /**
                     * 设置目标端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetVpc 目标端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetVpc(const std::string& _targetVpc);

                    /**
                     * 判断参数 TargetVpc 是否已赋值
                     * @return TargetVpc 是否已赋值
                     * 
                     */
                    bool TargetVpcHasBeenSet() const;

                    /**
                     * 获取目标端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSubnet 目标端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSubnet() const;

                    /**
                     * 设置目标端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSubnet 目标端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSubnet(const std::string& _targetSubnet);

                    /**
                     * 判断参数 TargetSubnet 是否已赋值
                     * @return TargetSubnet 是否已赋值
                     * 
                     */
                    bool TargetSubnetHasBeenSet() const;

                    /**
                     * 获取映射状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 映射状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置映射状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 映射状态
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
                     * 获取生命周期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeState 生命周期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置生命周期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeState 生命周期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                private:

                    /**
                     * 映射规则主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 所属容灾策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 源端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceVpc;
                    bool m_sourceVpcHasBeenSet;

                    /**
                     * 源端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceSubnet;
                    bool m_sourceSubnetHasBeenSet;

                    /**
                     * 目标端VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetVpc;
                    bool m_targetVpcHasBeenSet;

                    /**
                     * 目标端子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSubnet;
                    bool m_targetSubnetHasBeenSet;

                    /**
                     * 映射状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 生命周期状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_VPCMAPPING_H_
