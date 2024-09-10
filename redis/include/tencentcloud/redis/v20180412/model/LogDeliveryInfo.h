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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGDELIVERYINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGDELIVERYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 日志投递信息
                */
                class LogDeliveryInfo : public AbstractModel
                {
                public:
                    LogDeliveryInfo();
                    ~LogDeliveryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志投递开启状态，开启：true，关闭：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 日志投递开启状态，开启：true，关闭：false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置日志投递开启状态，开启：true，关闭：false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 日志投递开启状态，开启：true，关闭：false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取日志集ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId 日志集ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logsetId 日志集ID。
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
                     * 获取日志主题ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 日志主题ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId 日志主题ID。
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

                    /**
                     * 获取日志集所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogRegion 日志集所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置日志集所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logRegion 日志集所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     * 
                     */
                    bool LogRegionHasBeenSet() const;

                private:

                    /**
                     * 日志投递开启状态，开启：true，关闭：false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 日志集ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGDELIVERYINFO_H_
