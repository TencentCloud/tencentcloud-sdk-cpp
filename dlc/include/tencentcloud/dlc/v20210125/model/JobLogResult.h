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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_JOBLOGRESULT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_JOBLOGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 日志详情
                */
                class JobLogResult : public AbstractModel
                {
                public:
                    JobLogResult();
                    ~JobLogResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志时间戳，毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 日志时间戳，毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置日志时间戳，毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 日志时间戳，毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取日志topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 日志topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志topic id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId 日志topic id
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
                     * 获取日志topic name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 日志topic name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志topic name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicName 日志topic name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取日志内容，json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogJson 日志内容，json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置日志内容，json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logJson 日志内容，json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogJson(const std::string& _logJson);

                    /**
                     * 判断参数 LogJson 是否已赋值
                     * @return LogJson 是否已赋值
                     * 
                     */
                    bool LogJsonHasBeenSet() const;

                    /**
                     * 获取日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgLogId 日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgLogId 日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                private:

                    /**
                     * 日志时间戳，毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 日志topic id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志topic name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 日志内容，json字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                    /**
                     * 日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_JOBLOGRESULT_H_
