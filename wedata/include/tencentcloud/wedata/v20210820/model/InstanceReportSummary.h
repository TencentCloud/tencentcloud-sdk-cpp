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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEREPORTSUMMARY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEREPORTSUMMARY_H_

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
                * 离线任务实例运行指标概览
                */
                class InstanceReportSummary : public AbstractModel
                {
                public:
                    InstanceReportSummary();
                    ~InstanceReportSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总读取记录数
                     * @return TotalReadRecords 总读取记录数
                     * 
                     */
                    uint64_t GetTotalReadRecords() const;

                    /**
                     * 设置总读取记录数
                     * @param _totalReadRecords 总读取记录数
                     * 
                     */
                    void SetTotalReadRecords(const uint64_t& _totalReadRecords);

                    /**
                     * 判断参数 TotalReadRecords 是否已赋值
                     * @return TotalReadRecords 是否已赋值
                     * 
                     */
                    bool TotalReadRecordsHasBeenSet() const;

                    /**
                     * 获取总读取字节数
                     * @return TotalReadBytes 总读取字节数
                     * 
                     */
                    uint64_t GetTotalReadBytes() const;

                    /**
                     * 设置总读取字节数
                     * @param _totalReadBytes 总读取字节数
                     * 
                     */
                    void SetTotalReadBytes(const uint64_t& _totalReadBytes);

                    /**
                     * 判断参数 TotalReadBytes 是否已赋值
                     * @return TotalReadBytes 是否已赋值
                     * 
                     */
                    bool TotalReadBytesHasBeenSet() const;

                    /**
                     * 获取总写入记录数
                     * @return TotalWriteRecords 总写入记录数
                     * 
                     */
                    uint64_t GetTotalWriteRecords() const;

                    /**
                     * 设置总写入记录数
                     * @param _totalWriteRecords 总写入记录数
                     * 
                     */
                    void SetTotalWriteRecords(const uint64_t& _totalWriteRecords);

                    /**
                     * 判断参数 TotalWriteRecords 是否已赋值
                     * @return TotalWriteRecords 是否已赋值
                     * 
                     */
                    bool TotalWriteRecordsHasBeenSet() const;

                    /**
                     * 获取总写入字节数
                     * @return TotalWriteBytes 总写入字节数
                     * 
                     */
                    uint64_t GetTotalWriteBytes() const;

                    /**
                     * 设置总写入字节数
                     * @param _totalWriteBytes 总写入字节数
                     * 
                     */
                    void SetTotalWriteBytes(const uint64_t& _totalWriteBytes);

                    /**
                     * 判断参数 TotalWriteBytes 是否已赋值
                     * @return TotalWriteBytes 是否已赋值
                     * 
                     */
                    bool TotalWriteBytesHasBeenSet() const;

                    /**
                     * 获取速率（条/秒）
                     * @return RecordSpeed 速率（条/秒）
                     * 
                     */
                    uint64_t GetRecordSpeed() const;

                    /**
                     * 设置速率（条/秒）
                     * @param _recordSpeed 速率（条/秒）
                     * 
                     */
                    void SetRecordSpeed(const uint64_t& _recordSpeed);

                    /**
                     * 判断参数 RecordSpeed 是否已赋值
                     * @return RecordSpeed 是否已赋值
                     * 
                     */
                    bool RecordSpeedHasBeenSet() const;

                    /**
                     * 获取流量（Byte/秒）
                     * @return ByteSpeed 流量（Byte/秒）
                     * 
                     */
                    double GetByteSpeed() const;

                    /**
                     * 设置流量（Byte/秒）
                     * @param _byteSpeed 流量（Byte/秒）
                     * 
                     */
                    void SetByteSpeed(const double& _byteSpeed);

                    /**
                     * 判断参数 ByteSpeed 是否已赋值
                     * @return ByteSpeed 是否已赋值
                     * 
                     */
                    bool ByteSpeedHasBeenSet() const;

                    /**
                     * 获取脏数据记录数
                     * @return TotalErrorRecords 脏数据记录数
                     * 
                     */
                    uint64_t GetTotalErrorRecords() const;

                    /**
                     * 设置脏数据记录数
                     * @param _totalErrorRecords 脏数据记录数
                     * 
                     */
                    void SetTotalErrorRecords(const uint64_t& _totalErrorRecords);

                    /**
                     * 判断参数 TotalErrorRecords 是否已赋值
                     * @return TotalErrorRecords 是否已赋值
                     * 
                     */
                    bool TotalErrorRecordsHasBeenSet() const;

                    /**
                     * 获取脏数据字节数
                     * @return TotalErrorBytes 脏数据字节数
                     * 
                     */
                    uint64_t GetTotalErrorBytes() const;

                    /**
                     * 设置脏数据字节数
                     * @param _totalErrorBytes 脏数据字节数
                     * 
                     */
                    void SetTotalErrorBytes(const uint64_t& _totalErrorBytes);

                    /**
                     * 判断参数 TotalErrorBytes 是否已赋值
                     * @return TotalErrorBytes 是否已赋值
                     * 
                     */
                    bool TotalErrorBytesHasBeenSet() const;

                    /**
                     * 获取任务运行总时长
                     * @return TotalRunDuration 任务运行总时长
                     * 
                     */
                    uint64_t GetTotalRunDuration() const;

                    /**
                     * 设置任务运行总时长
                     * @param _totalRunDuration 任务运行总时长
                     * 
                     */
                    void SetTotalRunDuration(const uint64_t& _totalRunDuration);

                    /**
                     * 判断参数 TotalRunDuration 是否已赋值
                     * @return TotalRunDuration 是否已赋值
                     * 
                     */
                    bool TotalRunDurationHasBeenSet() const;

                    /**
                     * 获取任务开始运行时间
                     * @return BeginRunTime 任务开始运行时间
                     * 
                     */
                    std::string GetBeginRunTime() const;

                    /**
                     * 设置任务开始运行时间
                     * @param _beginRunTime 任务开始运行时间
                     * 
                     */
                    void SetBeginRunTime(const std::string& _beginRunTime);

                    /**
                     * 判断参数 BeginRunTime 是否已赋值
                     * @return BeginRunTime 是否已赋值
                     * 
                     */
                    bool BeginRunTimeHasBeenSet() const;

                    /**
                     * 获取任务结束运行时间
                     * @return EndRunTime 任务结束运行时间
                     * 
                     */
                    std::string GetEndRunTime() const;

                    /**
                     * 设置任务结束运行时间
                     * @param _endRunTime 任务结束运行时间
                     * 
                     */
                    void SetEndRunTime(const std::string& _endRunTime);

                    /**
                     * 判断参数 EndRunTime 是否已赋值
                     * @return EndRunTime 是否已赋值
                     * 
                     */
                    bool EndRunTimeHasBeenSet() const;

                private:

                    /**
                     * 总读取记录数
                     */
                    uint64_t m_totalReadRecords;
                    bool m_totalReadRecordsHasBeenSet;

                    /**
                     * 总读取字节数
                     */
                    uint64_t m_totalReadBytes;
                    bool m_totalReadBytesHasBeenSet;

                    /**
                     * 总写入记录数
                     */
                    uint64_t m_totalWriteRecords;
                    bool m_totalWriteRecordsHasBeenSet;

                    /**
                     * 总写入字节数
                     */
                    uint64_t m_totalWriteBytes;
                    bool m_totalWriteBytesHasBeenSet;

                    /**
                     * 速率（条/秒）
                     */
                    uint64_t m_recordSpeed;
                    bool m_recordSpeedHasBeenSet;

                    /**
                     * 流量（Byte/秒）
                     */
                    double m_byteSpeed;
                    bool m_byteSpeedHasBeenSet;

                    /**
                     * 脏数据记录数
                     */
                    uint64_t m_totalErrorRecords;
                    bool m_totalErrorRecordsHasBeenSet;

                    /**
                     * 脏数据字节数
                     */
                    uint64_t m_totalErrorBytes;
                    bool m_totalErrorBytesHasBeenSet;

                    /**
                     * 任务运行总时长
                     */
                    uint64_t m_totalRunDuration;
                    bool m_totalRunDurationHasBeenSet;

                    /**
                     * 任务开始运行时间
                     */
                    std::string m_beginRunTime;
                    bool m_beginRunTimeHasBeenSet;

                    /**
                     * 任务结束运行时间
                     */
                    std::string m_endRunTime;
                    bool m_endRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEREPORTSUMMARY_H_
