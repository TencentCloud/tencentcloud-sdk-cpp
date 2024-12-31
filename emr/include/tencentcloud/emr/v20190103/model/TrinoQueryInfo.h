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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TRINOQUERYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TRINOQUERYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * trino 查询信息
                */
                class TrinoQueryInfo : public AbstractModel
                {
                public:
                    TrinoQueryInfo();
                    ~TrinoQueryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取catalog
                     * @return Catalog catalog
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置catalog
                     * @param _catalog catalog
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取提交IP
                     * @return ClientIpAddr 提交IP
                     * 
                     */
                    std::string GetClientIpAddr() const;

                    /**
                     * 设置提交IP
                     * @param _clientIpAddr 提交IP
                     * 
                     */
                    void SetClientIpAddr(const std::string& _clientIpAddr);

                    /**
                     * 判断参数 ClientIpAddr 是否已赋值
                     * @return ClientIpAddr 是否已赋值
                     * 
                     */
                    bool ClientIpAddrHasBeenSet() const;

                    /**
                     * 获取切片数
                     * @return CompletedSplits 切片数
                     * 
                     */
                    std::string GetCompletedSplits() const;

                    /**
                     * 设置切片数
                     * @param _completedSplits 切片数
                     * 
                     */
                    void SetCompletedSplits(const std::string& _completedSplits);

                    /**
                     * 判断参数 CompletedSplits 是否已赋值
                     * @return CompletedSplits 是否已赋值
                     * 
                     */
                    bool CompletedSplitsHasBeenSet() const;

                    /**
                     * 获取CPU时间
                     * @return CpuTime CPU时间
                     * 
                     */
                    int64_t GetCpuTime() const;

                    /**
                     * 设置CPU时间
                     * @param _cpuTime CPU时间
                     * 
                     */
                    void SetCpuTime(const int64_t& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取累计内存
                     * @return CumulativeMemory 累计内存
                     * 
                     */
                    int64_t GetCumulativeMemory() const;

                    /**
                     * 设置累计内存
                     * @param _cumulativeMemory 累计内存
                     * 
                     */
                    void SetCumulativeMemory(const int64_t& _cumulativeMemory);

                    /**
                     * 判断参数 CumulativeMemory 是否已赋值
                     * @return CumulativeMemory 是否已赋值
                     * 
                     */
                    bool CumulativeMemoryHasBeenSet() const;

                    /**
                     * 获取执行时长
                     * @return DurationMillis 执行时长
                     * 
                     */
                    int64_t GetDurationMillis() const;

                    /**
                     * 设置执行时长
                     * @param _durationMillis 执行时长
                     * 
                     */
                    void SetDurationMillis(const int64_t& _durationMillis);

                    /**
                     * 判断参数 DurationMillis 是否已赋值
                     * @return DurationMillis 是否已赋值
                     * 
                     */
                    bool DurationMillisHasBeenSet() const;

                    /**
                     * 获取结束时间 (s)
                     * @return EndTime 结束时间 (s)
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间 (s)
                     * @param _endTime 结束时间 (s)
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查询ID
                     * @return Id 查询ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置查询ID
                     * @param _id 查询ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取内部传输量
                     * @return InternalNetworkBytes 内部传输量
                     * 
                     */
                    int64_t GetInternalNetworkBytes() const;

                    /**
                     * 设置内部传输量
                     * @param _internalNetworkBytes 内部传输量
                     * 
                     */
                    void SetInternalNetworkBytes(const int64_t& _internalNetworkBytes);

                    /**
                     * 判断参数 InternalNetworkBytes 是否已赋值
                     * @return InternalNetworkBytes 是否已赋值
                     * 
                     */
                    bool InternalNetworkBytesHasBeenSet() const;

                    /**
                     * 获取输出字节数
                     * @return OutputBytes 输出字节数
                     * 
                     */
                    int64_t GetOutputBytes() const;

                    /**
                     * 设置输出字节数
                     * @param _outputBytes 输出字节数
                     * 
                     */
                    void SetOutputBytes(const int64_t& _outputBytes);

                    /**
                     * 判断参数 OutputBytes 是否已赋值
                     * @return OutputBytes 是否已赋值
                     * 
                     */
                    bool OutputBytesHasBeenSet() const;

                    /**
                     * 获取峰值内存量
                     * @return PeakUserMemoryBytes 峰值内存量
                     * 
                     */
                    int64_t GetPeakUserMemoryBytes() const;

                    /**
                     * 设置峰值内存量
                     * @param _peakUserMemoryBytes 峰值内存量
                     * 
                     */
                    void SetPeakUserMemoryBytes(const int64_t& _peakUserMemoryBytes);

                    /**
                     * 判断参数 PeakUserMemoryBytes 是否已赋值
                     * @return PeakUserMemoryBytes 是否已赋值
                     * 
                     */
                    bool PeakUserMemoryBytesHasBeenSet() const;

                    /**
                     * 获取物理输入量
                     * @return PhysicalInputBytes 物理输入量
                     * 
                     */
                    int64_t GetPhysicalInputBytes() const;

                    /**
                     * 设置物理输入量
                     * @param _physicalInputBytes 物理输入量
                     * 
                     */
                    void SetPhysicalInputBytes(const int64_t& _physicalInputBytes);

                    /**
                     * 判断参数 PhysicalInputBytes 是否已赋值
                     * @return PhysicalInputBytes 是否已赋值
                     * 
                     */
                    bool PhysicalInputBytesHasBeenSet() const;

                    /**
                     * 获取处理输入量
                     * @return ProcessedInputBytes 处理输入量
                     * 
                     */
                    int64_t GetProcessedInputBytes() const;

                    /**
                     * 设置处理输入量
                     * @param _processedInputBytes 处理输入量
                     * 
                     */
                    void SetProcessedInputBytes(const int64_t& _processedInputBytes);

                    /**
                     * 判断参数 ProcessedInputBytes 是否已赋值
                     * @return ProcessedInputBytes 是否已赋值
                     * 
                     */
                    bool ProcessedInputBytesHasBeenSet() const;

                    /**
                     * 获取编译时长
                     * @return SqlCompileTime 编译时长
                     * 
                     */
                    int64_t GetSqlCompileTime() const;

                    /**
                     * 设置编译时长
                     * @param _sqlCompileTime 编译时长
                     * 
                     */
                    void SetSqlCompileTime(const int64_t& _sqlCompileTime);

                    /**
                     * 判断参数 SqlCompileTime 是否已赋值
                     * @return SqlCompileTime 是否已赋值
                     * 
                     */
                    bool SqlCompileTimeHasBeenSet() const;

                    /**
                     * 获取开始时间 (s)
                     * @return StartTime 开始时间 (s)
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间 (s)
                     * @param _startTime 开始时间 (s)
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取执行状态
                     * @return State 执行状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置执行状态
                     * @param _state 执行状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取执行语句
                     * @return Statement 执行语句
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置执行语句
                     * @param _statement 执行语句
                     * 
                     */
                    void SetStatement(const std::string& _statement);

                    /**
                     * 判断参数 Statement 是否已赋值
                     * @return Statement 是否已赋值
                     * 
                     */
                    bool StatementHasBeenSet() const;

                    /**
                     * 获取提交用户
                     * @return User 提交用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置提交用户
                     * @param _user 提交用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取写入字节数
                     * @return WrittenBytes 写入字节数
                     * 
                     */
                    int64_t GetWrittenBytes() const;

                    /**
                     * 设置写入字节数
                     * @param _writtenBytes 写入字节数
                     * 
                     */
                    void SetWrittenBytes(const int64_t& _writtenBytes);

                    /**
                     * 判断参数 WrittenBytes 是否已赋值
                     * @return WrittenBytes 是否已赋值
                     * 
                     */
                    bool WrittenBytesHasBeenSet() const;

                private:

                    /**
                     * catalog
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 提交IP
                     */
                    std::string m_clientIpAddr;
                    bool m_clientIpAddrHasBeenSet;

                    /**
                     * 切片数
                     */
                    std::string m_completedSplits;
                    bool m_completedSplitsHasBeenSet;

                    /**
                     * CPU时间
                     */
                    int64_t m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * 累计内存
                     */
                    int64_t m_cumulativeMemory;
                    bool m_cumulativeMemoryHasBeenSet;

                    /**
                     * 执行时长
                     */
                    int64_t m_durationMillis;
                    bool m_durationMillisHasBeenSet;

                    /**
                     * 结束时间 (s)
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 内部传输量
                     */
                    int64_t m_internalNetworkBytes;
                    bool m_internalNetworkBytesHasBeenSet;

                    /**
                     * 输出字节数
                     */
                    int64_t m_outputBytes;
                    bool m_outputBytesHasBeenSet;

                    /**
                     * 峰值内存量
                     */
                    int64_t m_peakUserMemoryBytes;
                    bool m_peakUserMemoryBytesHasBeenSet;

                    /**
                     * 物理输入量
                     */
                    int64_t m_physicalInputBytes;
                    bool m_physicalInputBytesHasBeenSet;

                    /**
                     * 处理输入量
                     */
                    int64_t m_processedInputBytes;
                    bool m_processedInputBytesHasBeenSet;

                    /**
                     * 编译时长
                     */
                    int64_t m_sqlCompileTime;
                    bool m_sqlCompileTimeHasBeenSet;

                    /**
                     * 开始时间 (s)
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 执行状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 执行语句
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * 提交用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 写入字节数
                     */
                    int64_t m_writtenBytes;
                    bool m_writtenBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TRINOQUERYINFO_H_
