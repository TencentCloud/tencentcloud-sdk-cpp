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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPHNODE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPHNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * Flink Job 运行图的点信息
                */
                class JobGraphNode : public AbstractModel
                {
                public:
                    JobGraphNode();
                    ~JobGraphNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 节点描述
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
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 节点名称
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
                     * 获取节点并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parallelism 节点并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParallelism() const;

                    /**
                     * 设置节点并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parallelism 节点并行度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParallelism(const int64_t& _parallelism);

                    /**
                     * 判断参数 Parallelism 是否已赋值
                     * @return Parallelism 是否已赋值
                     * 
                     */
                    bool ParallelismHasBeenSet() const;

                private:

                    /**
                     * 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点并行度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parallelism;
                    bool m_parallelismHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBGRAPHNODE_H_
