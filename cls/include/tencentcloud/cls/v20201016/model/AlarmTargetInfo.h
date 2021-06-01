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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 日志告警监控对线
                */
                class AlarmTargetInfo : public AbstractModel
                {
                public:
                    AlarmTargetInfo();
                    ~AlarmTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志集ID。
                     * @return LogsetId 日志集ID。
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID。
                     * @param LogsetId 日志集ID。
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志集名称。
                     * @return LogsetName 日志集名称。
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名称。
                     * @param LogsetName 日志集名称。
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取日志主题ID。
                     * @return TopicId 日志主题ID。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID。
                     * @param TopicId 日志主题ID。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志主题名称。
                     * @return TopicName 日志主题名称。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题名称。
                     * @param TopicName 日志主题名称。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取查询语句。
                     * @return Query 查询语句。
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句。
                     * @param Query 查询语句。
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取告警对象序号。
                     * @return Number 告警对象序号。
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置告警对象序号。
                     * @param Number 告警对象序号。
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取查询范围起始时间相对当前的历史时间，取值为非正，最大值为0，最小值为-1440。
                     * @return StartTimeOffset 查询范围起始时间相对当前的历史时间，取值为非正，最大值为0，最小值为-1440。
                     */
                    int64_t GetStartTimeOffset() const;

                    /**
                     * 设置查询范围起始时间相对当前的历史时间，取值为非正，最大值为0，最小值为-1440。
                     * @param StartTimeOffset 查询范围起始时间相对当前的历史时间，取值为非正，最大值为0，最小值为-1440。
                     */
                    void SetStartTimeOffset(const int64_t& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取查询范围终止时间相对当前的历史时间，取值为非正，须大于StartTimeOffset，最大值为0，最小值为-1440。
                     * @return EndTimeOffset 查询范围终止时间相对当前的历史时间，取值为非正，须大于StartTimeOffset，最大值为0，最小值为-1440。
                     */
                    int64_t GetEndTimeOffset() const;

                    /**
                     * 设置查询范围终止时间相对当前的历史时间，取值为非正，须大于StartTimeOffset，最大值为0，最小值为-1440。
                     * @param EndTimeOffset 查询范围终止时间相对当前的历史时间，取值为非正，须大于StartTimeOffset，最大值为0，最小值为-1440。
                     */
                    void SetEndTimeOffset(const int64_t& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 日志集ID。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集名称。
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志主题ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 查询语句。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 告警对象序号。
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 查询范围起始时间相对当前的历史时间，取值为非正，最大值为0，最小值为-1440。
                     */
                    int64_t m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 查询范围终止时间相对当前的历史时间，取值为非正，须大于StartTimeOffset，最大值为0，最小值为-1440。
                     */
                    int64_t m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMTARGETINFO_H_
