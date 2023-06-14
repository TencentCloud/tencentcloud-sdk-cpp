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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_LOGCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_LOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 日志配置
                */
                class LogConfig : public AbstractModel
                {
                public:
                    LogConfig();
                    ~LogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志需要投递到cls的日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId 日志需要投递到cls的日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志需要投递到cls的日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logsetId 日志需要投递到cls的日志集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志需要投递到cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 日志需要投递到cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志需要投递到cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId 日志需要投递到cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * 日志需要投递到cls的日志集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志需要投递到cls的主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_LOGCONFIG_H_
