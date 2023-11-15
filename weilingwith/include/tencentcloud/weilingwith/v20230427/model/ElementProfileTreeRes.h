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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROFILETREERES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROFILETREERES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ElementProfileTreeNode.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 构件树响应体
                */
                class ElementProfileTreeRes : public AbstractModel
                {
                public:
                    ElementProfileTreeRes();
                    ~ElementProfileTreeRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildingId 建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBuildingId() const;

                    /**
                     * 设置建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildingId 建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuildingId(const std::string& _buildingId);

                    /**
                     * 判断参数 BuildingId 是否已赋值
                     * @return BuildingId 是否已赋值
                     * 
                     */
                    bool BuildingIdHasBeenSet() const;

                    /**
                     * 获取父级构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentElementId 父级构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentElementId() const;

                    /**
                     * 设置父级构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentElementId 父级构件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentElementId(const std::string& _parentElementId);

                    /**
                     * 判断参数 ParentElementId 是否已赋值
                     * @return ParentElementId 是否已赋值
                     * 
                     */
                    bool ParentElementIdHasBeenSet() const;

                    /**
                     * 获取构件树
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Root 构件树
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ElementProfileTreeNode GetRoot() const;

                    /**
                     * 设置构件树
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _root 构件树
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoot(const ElementProfileTreeNode& _root);

                    /**
                     * 判断参数 Root 是否已赋值
                     * @return Root 是否已赋值
                     * 
                     */
                    bool RootHasBeenSet() const;

                private:

                    /**
                     * 建筑id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_buildingId;
                    bool m_buildingIdHasBeenSet;

                    /**
                     * 父级构件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentElementId;
                    bool m_parentElementIdHasBeenSet;

                    /**
                     * 构件树
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ElementProfileTreeNode m_root;
                    bool m_rootHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ELEMENTPROFILETREERES_H_
