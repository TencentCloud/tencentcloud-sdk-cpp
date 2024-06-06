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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHDFSPRODUCTVPCINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHDFSPRODUCTVPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/VpcCidrBlock.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * chdfs产品vpc信息
                */
                class CHDFSProductVpcInfo : public AbstractModel
                {
                public:
                    CHDFSProductVpcInfo();
                    ~CHDFSProductVpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id

注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc id

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpc id

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcName vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcName vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取vpc子网信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcCidrBlock vpc子网信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VpcCidrBlock> GetVpcCidrBlock() const;

                    /**
                     * 设置vpc子网信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcCidrBlock vpc子网信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcCidrBlock(const std::vector<VpcCidrBlock>& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取权限组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessGroupId 权限组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置权限组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessGroupId 权限组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                private:

                    /**
                     * vpc id

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * vpc子网信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcCidrBlock> m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 权限组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHDFSPRODUCTVPCINFO_H_
