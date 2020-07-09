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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Connection.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 生产者
                */
                class Producer : public AbstractModel
                {
                public:
                    Producer();
                    ~Producer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境（命名空间）名称。
                     * @param EnvironmentId 环境（命名空间）名称。
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取主题名称。
                     * @return TopicName 主题名称。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称。
                     * @param TopicName 主题名称。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CountConnect 连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCountConnect() const;

                    /**
                     * 设置连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CountConnect 连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCountConnect(const int64_t& _countConnect);

                    /**
                     * 判断参数 CountConnect 是否已赋值
                     * @return CountConnect 是否已赋值
                     */
                    bool CountConnectHasBeenSet() const;

                    /**
                     * 获取连接集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectionSets 连接集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Connection> GetConnectionSets() const;

                    /**
                     * 设置连接集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConnectionSets 连接集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConnectionSets(const std::vector<Connection>& _connectionSets);

                    /**
                     * 判断参数 ConnectionSets 是否已赋值
                     * @return ConnectionSets 是否已赋值
                     */
                    bool ConnectionSetsHasBeenSet() const;

                private:

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 连接数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_countConnect;
                    bool m_countConnectHasBeenSet;

                    /**
                     * 连接集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Connection> m_connectionSets;
                    bool m_connectionSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCER_H_
