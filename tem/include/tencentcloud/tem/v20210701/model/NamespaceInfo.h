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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Namespace 基础信息
                */
                class NamespaceInfo : public AbstractModel
                {
                public:
                    NamespaceInfo();
                    ~NamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID 信息
                     * @return EnvironmentId ID 信息
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置ID 信息
                     * @param EnvironmentId ID 信息
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取名字（已弃用）
                     * @return NamespaceName 名字（已弃用）
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置名字（已弃用）
                     * @param NamespaceName 名字（已弃用）
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param Region 地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param VpcId vpc id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取subnet id 数组
                     * @return SubnetIds subnet id 数组
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置subnet id 数组
                     * @param SubnetIds subnet id 数组
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedDate 创建时间
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置创建时间
                     * @param CreatedDate 创建时间
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentName 环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvironmentName 环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取APM 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApmInstanceId APM 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置APM 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApmInstanceId APM 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApmInstanceId(const std::string& _apmInstanceId);

                    /**
                     * 判断参数 ApmInstanceId 是否已赋值
                     * @return ApmInstanceId 是否已赋值
                     */
                    bool ApmInstanceIdHasBeenSet() const;

                    /**
                     * 获取环境是否上锁，1为上锁，0则未上锁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locked 环境是否上锁，1为上锁，0则未上锁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置环境是否上锁，1为上锁，0则未上锁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Locked 环境是否上锁，1为上锁，0则未上锁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     */
                    bool LockedHasBeenSet() const;

                private:

                    /**
                     * ID 信息
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 名字（已弃用）
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * subnet id 数组
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * 环境名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * APM 资源 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * 环境是否上锁，1为上锁，0则未上锁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEINFO_H_
