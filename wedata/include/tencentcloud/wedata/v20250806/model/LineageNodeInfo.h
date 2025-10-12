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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGENODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageResource.h>
#include <tencentcloud/wedata/v20250806/model/LineageRelation.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * LineageNodeInfo  血缘关系实体
                */
                class LineageNodeInfo : public AbstractModel
                {
                public:
                    LineageNodeInfo();
                    ~LineageNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 当前资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LineageResource GetResource() const;

                    /**
                     * 设置当前资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 当前资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const LineageResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Relation 关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LineageRelation GetRelation() const;

                    /**
                     * 设置关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relation 关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelation(const LineageRelation& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                private:

                    /**
                     * 当前资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LineageResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LineageRelation m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGENODEINFO_H_
