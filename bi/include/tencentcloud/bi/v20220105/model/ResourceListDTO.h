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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_RESOURCELISTDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_RESOURCELISTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ResourceItem.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 操作的资源权限
                */
                class ResourceListDTO : public AbstractModel
                {
                public:
                    ResourceListDTO();
                    ~ResourceListDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntityId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEntityId() const;

                    /**
                     * 设置资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entityId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntityId(const int64_t& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodeType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const int64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceList 资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceItem> GetResourceList() const;

                    /**
                     * 设置资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceList 资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceList(const std::vector<ResourceItem>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                private:

                    /**
                     * 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 资源权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceItem> m_resourceList;
                    bool m_resourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_RESOURCELISTDTO_H_
