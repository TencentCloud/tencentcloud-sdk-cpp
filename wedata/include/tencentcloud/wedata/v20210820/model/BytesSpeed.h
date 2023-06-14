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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BYTESSPEED_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BYTESSPEED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SpeedValue.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实时任务同步速度 字节/s
                */
                class BytesSpeed : public AbstractModel
                {
                public:
                    BytesSpeed();
                    ~BytesSpeed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取速度值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 速度值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SpeedValue> GetValues() const;

                    /**
                     * 设置速度值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 速度值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<SpeedValue>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 速度值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SpeedValue> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BYTESSPEED_H_
