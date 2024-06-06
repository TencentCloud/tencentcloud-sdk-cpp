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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MOUNTPOINTASSOCIATES_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MOUNTPOINTASSOCIATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 绑定融合桶信息
                */
                class MountPointAssociates : public AbstractModel
                {
                public:
                    MountPointAssociates();
                    ~MountPointAssociates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桶Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BucketId 桶Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置桶Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucketId 桶Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpcId
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
                     * 获取子网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcCidrBlock 子网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置子网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcCidrBlock 子网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

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

                    /**
                     * 获取权限规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessRuleId 权限规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccessRuleId() const;

                    /**
                     * 设置权限规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessRuleId 权限规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessRuleId(const int64_t& _accessRuleId);

                    /**
                     * 判断参数 AccessRuleId 是否已赋值
                     * @return AccessRuleId 是否已赋值
                     * 
                     */
                    bool AccessRuleIdHasBeenSet() const;

                private:

                    /**
                     * 桶Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 权限组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * 权限规则Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessRuleId;
                    bool m_accessRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MOUNTPOINTASSOCIATES_H_
