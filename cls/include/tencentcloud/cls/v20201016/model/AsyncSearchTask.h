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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCSEARCHTASK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCSEARCHTASK_H_

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
                * 异步检索任务
                */
                class AsyncSearchTask : public AbstractModel
                {
                public:
                    AsyncSearchTask();
                    ~AsyncSearchTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param LogsetId 日志集ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param TopicId 日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取状态，0表示待开始，1表示运行中，2表示已完成，-1表示失败
                     * @return Status 状态，0表示待开始，1表示运行中，2表示已完成，-1表示失败
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0表示待开始，1表示运行中，2表示已完成，-1表示失败
                     * @param Status 状态，0表示待开始，1表示运行中，2表示已完成，-1表示失败
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取异步检索任务ID
                     * @return AsyncSearchTaskId 异步检索任务ID
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置异步检索任务ID
                     * @param AsyncSearchTaskId 异步检索任务ID
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

                    /**
                     * 获取查询语句
                     * @return Query 查询语句
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询语句
                     * @param Query 查询语句
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取要查询的日志的起始时间，Unix时间戳，单位ms
                     * @return From 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置要查询的日志的起始时间，Unix时间戳，单位ms
                     * @param From 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取要查询的日志的结束时间，Unix时间戳，单位ms
                     * @return To 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置要查询的日志的结束时间，Unix时间戳，单位ms
                     * @param To 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取日志扫描顺序，可选值：asc(升序)、desc(降序)
                     * @return Sort 日志扫描顺序，可选值：asc(升序)、desc(降序)
                     */
                    std::string GetSort() const;

                    /**
                     * 设置日志扫描顺序，可选值：asc(升序)、desc(降序)
                     * @param Sort 日志扫描顺序，可选值：asc(升序)、desc(降序)
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取任务失败的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 任务失败的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置任务失败的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMessage 任务失败的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取异步检索任务匹配的总日志条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogCount 异步检索任务匹配的总日志条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLogCount() const;

                    /**
                     * 设置异步检索任务匹配的总日志条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogCount 异步检索任务匹配的总日志条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogCount(const int64_t& _logCount);

                    /**
                     * 判断参数 LogCount 是否已赋值
                     * @return LogCount 是否已赋值
                     */
                    bool LogCountHasBeenSet() const;

                    /**
                     * 获取任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FinishTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态，0表示待开始，1表示运行中，2表示已完成，-1表示失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 异步检索任务ID
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                    /**
                     * 查询语句
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 要查询的日志的起始时间，Unix时间戳，单位ms
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 要查询的日志的结束时间，Unix时间戳，单位ms
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 日志扫描顺序，可选值：asc(升序)、desc(降序)
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 任务失败的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 异步检索任务匹配的总日志条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logCount;
                    bool m_logCountHasBeenSet;

                    /**
                     * 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCSEARCHTASK_H_
