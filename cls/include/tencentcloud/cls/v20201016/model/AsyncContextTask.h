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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCCONTEXTTASK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCCONTEXTTASK_H_

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
                * 异步上下文任务
                */
                class AsyncContextTask : public AbstractModel
                {
                public:
                    AsyncContextTask();
                    ~AsyncContextTask() = default;
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
                     * 获取创建时间，时间戳，精确到毫秒
                     * @return CreateTime 创建时间，时间戳，精确到毫秒
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，时间戳，精确到毫秒
                     * @param CreateTime 创建时间，时间戳，精确到毫秒
                     */
                    void SetCreateTime(const int64_t& _createTime);

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
                     * 获取异步上下文任务ID
                     * @return AsyncContextTaskId 异步上下文任务ID
                     */
                    std::string GetAsyncContextTaskId() const;

                    /**
                     * 设置异步上下文任务ID
                     * @param AsyncContextTaskId 异步上下文任务ID
                     */
                    void SetAsyncContextTaskId(const std::string& _asyncContextTaskId);

                    /**
                     * 判断参数 AsyncContextTaskId 是否已赋值
                     * @return AsyncContextTaskId 是否已赋值
                     */
                    bool AsyncContextTaskIdHasBeenSet() const;

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
                     * 获取日志包序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgId 日志包序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志包序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PkgId 日志包序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取日志包内一条日志的序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgLogId 日志包内一条日志的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置日志包内一条日志的序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PkgLogId 日志包内一条日志的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取日志时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 日志时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置日志时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Time 日志时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间，时间戳，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime 任务完成时间，时间戳，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFinishTime() const;

                    /**
                     * 设置任务完成时间，时间戳，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FinishTime 任务完成时间，时间戳，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFinishTime(const int64_t& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取相关联的异步检索ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsyncSearchTaskId 相关联的异步检索ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAsyncSearchTaskId() const;

                    /**
                     * 设置相关联的异步检索ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AsyncSearchTaskId 相关联的异步检索ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAsyncSearchTaskId(const std::string& _asyncSearchTaskId);

                    /**
                     * 判断参数 AsyncSearchTaskId 是否已赋值
                     * @return AsyncSearchTaskId 是否已赋值
                     */
                    bool AsyncSearchTaskIdHasBeenSet() const;

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
                     * 创建时间，时间戳，精确到毫秒
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 状态，0表示待开始，1表示运行中，2表示已完成，-1表示失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 异步上下文任务ID
                     */
                    std::string m_asyncContextTaskId;
                    bool m_asyncContextTaskIdHasBeenSet;

                    /**
                     * 任务失败的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 日志包序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志包内一条日志的序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 日志时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 任务完成时间，时间戳，精确到毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 相关联的异步检索ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asyncSearchTaskId;
                    bool m_asyncSearchTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ASYNCCONTEXTTASK_H_
