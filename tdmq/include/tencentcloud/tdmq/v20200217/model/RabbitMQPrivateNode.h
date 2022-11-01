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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ节点信息
                */
                class RabbitMQPrivateNode : public AbstractModel
                {
                public:
                    RabbitMQPrivateNode();
                    ~RabbitMQPrivateNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeName 节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * 节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_
