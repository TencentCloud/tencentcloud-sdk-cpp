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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKREPORTDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKREPORTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 离线任务统计指标明细
                */
                class TaskReportDetail : public AbstractModel
                {
                public:
                    TaskReportDetail();
                    ~TaskReportDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务实例ID
                     * @return InstanceId 任务实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置任务实例ID
                     * @param InstanceId 任务实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例数据运行时间
                     * @return CurRunDate 实例数据运行时间
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例数据运行时间
                     * @param CurRunDate 实例数据运行时间
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取实例实际下发时间
                     * @return IssueDate 实例实际下发时间
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置实例实际下发时间
                     * @param IssueDate 实例实际下发时间
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取任务状态码。1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行。
                     * @return TaskState 任务状态码。1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行。
                     */
                    std::string GetTaskState() const;

                    /**
                     * 设置任务状态码。1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行。
                     * @param TaskState 任务状态码。1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行。
                     */
                    void SetTaskState(const std::string& _taskState);

                    /**
                     * 判断参数 TaskState 是否已赋值
                     * @return TaskState 是否已赋值
                     */
                    bool TaskStateHasBeenSet() const;

                    /**
                     * 获取总读取条数
                     * @return TotalReadRecords 总读取条数
                     */
                    uint64_t GetTotalReadRecords() const;

                    /**
                     * 设置总读取条数
                     * @param TotalReadRecords 总读取条数
                     */
                    void SetTotalReadRecords(const uint64_t& _totalReadRecords);

                    /**
                     * 判断参数 TotalReadRecords 是否已赋值
                     * @return TotalReadRecords 是否已赋值
                     */
                    bool TotalReadRecordsHasBeenSet() const;

                    /**
                     * 获取总读取字节数
                     * @return TotalReadBytes 总读取字节数
                     */
                    uint64_t GetTotalReadBytes() const;

                    /**
                     * 设置总读取字节数
                     * @param TotalReadBytes 总读取字节数
                     */
                    void SetTotalReadBytes(const uint64_t& _totalReadBytes);

                    /**
                     * 判断参数 TotalReadBytes 是否已赋值
                     * @return TotalReadBytes 是否已赋值
                     */
                    bool TotalReadBytesHasBeenSet() const;

                    /**
                     * 获取总写入条数
                     * @return TotalWriteRecords 总写入条数
                     */
                    uint64_t GetTotalWriteRecords() const;

                    /**
                     * 设置总写入条数
                     * @param TotalWriteRecords 总写入条数
                     */
                    void SetTotalWriteRecords(const uint64_t& _totalWriteRecords);

                    /**
                     * 判断参数 TotalWriteRecords 是否已赋值
                     * @return TotalWriteRecords 是否已赋值
                     */
                    bool TotalWriteRecordsHasBeenSet() const;

                    /**
                     * 获取总写入字节数
                     * @return TotalWriteBytes 总写入字节数
                     */
                    uint64_t GetTotalWriteBytes() const;

                    /**
                     * 设置总写入字节数
                     * @param TotalWriteBytes 总写入字节数
                     */
                    void SetTotalWriteBytes(const uint64_t& _totalWriteBytes);

                    /**
                     * 判断参数 TotalWriteBytes 是否已赋值
                     * @return TotalWriteBytes 是否已赋值
                     */
                    bool TotalWriteBytesHasBeenSet() const;

                    /**
                     * 获取写入速度（条/秒）
                     * @return RecordSpeed 写入速度（条/秒）
                     */
                    uint64_t GetRecordSpeed() const;

                    /**
                     * 设置写入速度（条/秒）
                     * @param RecordSpeed 写入速度（条/秒）
                     */
                    void SetRecordSpeed(const uint64_t& _recordSpeed);

                    /**
                     * 判断参数 RecordSpeed 是否已赋值
                     * @return RecordSpeed 是否已赋值
                     */
                    bool RecordSpeedHasBeenSet() const;

                    /**
                     * 获取吞吐（Byte/秒）
                     * @return ByteSpeed 吞吐（Byte/秒）
                     */
                    double GetByteSpeed() const;

                    /**
                     * 设置吞吐（Byte/秒）
                     * @param ByteSpeed 吞吐（Byte/秒）
                     */
                    void SetByteSpeed(const double& _byteSpeed);

                    /**
                     * 判断参数 ByteSpeed 是否已赋值
                     * @return ByteSpeed 是否已赋值
                     */
                    bool ByteSpeedHasBeenSet() const;

                    /**
                     * 获取脏数据条数
                     * @return TotalErrorRecords 脏数据条数
                     */
                    uint64_t GetTotalErrorRecords() const;

                    /**
                     * 设置脏数据条数
                     * @param TotalErrorRecords 脏数据条数
                     */
                    void SetTotalErrorRecords(const uint64_t& _totalErrorRecords);

                    /**
                     * 判断参数 TotalErrorRecords 是否已赋值
                     * @return TotalErrorRecords 是否已赋值
                     */
                    bool TotalErrorRecordsHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例数据运行时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 实例实际下发时间
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 任务状态码。1 正在执行,2 成功,3 失败,4 等待终止,5 正在终止,6 已终止,7 终止失败,9 等待执行。
                     */
                    std::string m_taskState;
                    bool m_taskStateHasBeenSet;

                    /**
                     * 总读取条数
                     */
                    uint64_t m_totalReadRecords;
                    bool m_totalReadRecordsHasBeenSet;

                    /**
                     * 总读取字节数
                     */
                    uint64_t m_totalReadBytes;
                    bool m_totalReadBytesHasBeenSet;

                    /**
                     * 总写入条数
                     */
                    uint64_t m_totalWriteRecords;
                    bool m_totalWriteRecordsHasBeenSet;

                    /**
                     * 总写入字节数
                     */
                    uint64_t m_totalWriteBytes;
                    bool m_totalWriteBytesHasBeenSet;

                    /**
                     * 写入速度（条/秒）
                     */
                    uint64_t m_recordSpeed;
                    bool m_recordSpeedHasBeenSet;

                    /**
                     * 吞吐（Byte/秒）
                     */
                    double m_byteSpeed;
                    bool m_byteSpeedHasBeenSet;

                    /**
                     * 脏数据条数
                     */
                    uint64_t m_totalErrorRecords;
                    bool m_totalErrorRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKREPORTDETAIL_H_
