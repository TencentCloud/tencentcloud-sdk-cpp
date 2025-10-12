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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/BindProject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 资源组详情
                */
                class ExecutorResourceGroupInfo : public AbstractModel
                {
                public:
                    ExecutorResourceGroupInfo();
                    ~ExecutorResourceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组唯一标识
                     * @return Id 资源组唯一标识
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源组唯一标识
                     * @param _id 资源组唯一标识
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取执行资源组类型，不能为空

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupType 执行资源组类型，不能为空

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupType() const;

                    /**
                     * 设置执行资源组类型，不能为空

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupType 执行资源组类型，不能为空

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupType(const std::string& _resourceGroupType);

                    /**
                     * 判断参数 ResourceGroupType 是否已赋值
                     * @return ResourceGroupType 是否已赋值
                     * 
                     */
                    bool ResourceGroupTypeHasBeenSet() const;

                    /**
                     * 获取项目集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateProjects 项目集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BindProject> GetAssociateProjects() const;

                    /**
                     * 设置项目集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associateProjects 项目集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociateProjects(const std::vector<BindProject>& _associateProjects);

                    /**
                     * 判断参数 AssociateProjects 是否已赋值
                     * @return AssociateProjects 是否已赋值
                     * 
                     */
                    bool AssociateProjectsHasBeenSet() const;

                    /**
                     * 获取区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubNet 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubNet() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subNet 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubNet(const std::string& _subNet);

                    /**
                     * 判断参数 SubNet 是否已赋值
                     * @return SubNet 是否已赋值
                     * 
                     */
                    bool SubNetHasBeenSet() const;

                    /**
                     * 获取是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewEnabled 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewEnabled 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewEnabled(const bool& _autoRenewEnabled);

                    /**
                     * 判断参数 AutoRenewEnabled 是否已赋值
                     * @return AutoRenewEnabled 是否已赋值
                     * 
                     */
                    bool AutoRenewEnabledHasBeenSet() const;

                private:

                    /**
                     * 资源组唯一标识
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 执行资源组类型，不能为空

- Schedule --- 调度资源组
- Integration --- 集成资源组
- DataService -- 数据服务资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupType;
                    bool m_resourceGroupTypeHasBeenSet;

                    /**
                     * 项目集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BindProject> m_associateProjects;
                    bool m_associateProjectsHasBeenSet;

                    /**
                     * 区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subNet;
                    bool m_subNetHasBeenSet;

                    /**
                     * 是否自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPINFO_H_
