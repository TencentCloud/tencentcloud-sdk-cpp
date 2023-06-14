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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEGROUP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/GroupResource.h>
#include <tencentcloud/tione/v20211111/model/Instance.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 资源组
                */
                class ResourceGroup : public AbstractModel
                {
                public:
                    ResourceGroup();
                    ~ResourceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组id
                     * @return ResourceGroupId 资源组id
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _resourceGroupId 资源组id
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称
                     * @return ResourceGroupName 资源组名称
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置资源组名称
                     * @param _resourceGroupName 资源组名称
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取可用节点个数(运行中的节点)
                     * @return FreeInstance 可用节点个数(运行中的节点)
                     * 
                     */
                    uint64_t GetFreeInstance() const;

                    /**
                     * 设置可用节点个数(运行中的节点)
                     * @param _freeInstance 可用节点个数(运行中的节点)
                     * 
                     */
                    void SetFreeInstance(const uint64_t& _freeInstance);

                    /**
                     * 判断参数 FreeInstance 是否已赋值
                     * @return FreeInstance 是否已赋值
                     * 
                     */
                    bool FreeInstanceHasBeenSet() const;

                    /**
                     * 获取总节点个数(所有节点)
                     * @return TotalInstance 总节点个数(所有节点)
                     * 
                     */
                    uint64_t GetTotalInstance() const;

                    /**
                     * 设置总节点个数(所有节点)
                     * @param _totalInstance 总节点个数(所有节点)
                     * 
                     */
                    void SetTotalInstance(const uint64_t& _totalInstance);

                    /**
                     * 判断参数 TotalInstance 是否已赋值
                     * @return TotalInstance 是否已赋值
                     * 
                     */
                    bool TotalInstanceHasBeenSet() const;

                    /**
                     * 获取资资源组已用的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedResource 资资源组已用的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GroupResource GetUsedResource() const;

                    /**
                     * 设置资资源组已用的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedResource 资资源组已用的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedResource(const GroupResource& _usedResource);

                    /**
                     * 判断参数 UsedResource 是否已赋值
                     * @return UsedResource 是否已赋值
                     * 
                     */
                    bool UsedResourceHasBeenSet() const;

                    /**
                     * 获取资源组总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalResource 资源组总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GroupResource GetTotalResource() const;

                    /**
                     * 设置资源组总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalResource 资源组总资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalResource(const GroupResource& _totalResource);

                    /**
                     * 判断参数 TotalResource 是否已赋值
                     * @return TotalResource 是否已赋值
                     * 
                     */
                    bool TotalResourceHasBeenSet() const;

                    /**
                     * 获取节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSet 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Instance> GetInstanceSet() const;

                    /**
                     * 设置节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSet 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceSet(const std::vector<Instance>& _instanceSet);

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组名称
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 可用节点个数(运行中的节点)
                     */
                    uint64_t m_freeInstance;
                    bool m_freeInstanceHasBeenSet;

                    /**
                     * 总节点个数(所有节点)
                     */
                    uint64_t m_totalInstance;
                    bool m_totalInstanceHasBeenSet;

                    /**
                     * 资资源组已用的资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GroupResource m_usedResource;
                    bool m_usedResourceHasBeenSet;

                    /**
                     * 资源组总资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GroupResource m_totalResource;
                    bool m_totalResourceHasBeenSet;

                    /**
                     * 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Instance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEGROUP_H_
