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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_IMPALAQUERY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_IMPALAQUERY_H_

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
                * Impala查询详情
                */
                class ImpalaQuery : public AbstractModel
                {
                public:
                    ImpalaQuery();
                    ~ImpalaQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取运行时间
                     * @return Duration 运行时间
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置运行时间
                     * @param _duration 运行时间
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取获取行数
                     * @return RowsFetched 获取行数
                     * 
                     */
                    int64_t GetRowsFetched() const;

                    /**
                     * 设置获取行数
                     * @param _rowsFetched 获取行数
                     * 
                     */
                    void SetRowsFetched(const int64_t& _rowsFetched);

                    /**
                     * 判断参数 RowsFetched 是否已赋值
                     * @return RowsFetched 是否已赋值
                     * 
                     */
                    bool RowsFetchedHasBeenSet() const;

                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
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
                     * 获取默认DB
                     * @return DefaultDB 默认DB
                     * 
                     */
                    std::string GetDefaultDB() const;

                    /**
                     * 设置默认DB
                     * @param _defaultDB 默认DB
                     * 
                     */
                    void SetDefaultDB(const std::string& _defaultDB);

                    /**
                     * 判断参数 DefaultDB 是否已赋值
                     * @return DefaultDB 是否已赋值
                     * 
                     */
                    bool DefaultDBHasBeenSet() const;

                    /**
                     * 获取执行的Coordinator节点
                     * @return Coordinator 执行的Coordinator节点
                     * 
                     */
                    std::string GetCoordinator() const;

                    /**
                     * 设置执行的Coordinator节点
                     * @param _coordinator 执行的Coordinator节点
                     * 
                     */
                    void SetCoordinator(const std::string& _coordinator);

                    /**
                     * 判断参数 Coordinator 是否已赋值
                     * @return Coordinator 是否已赋值
                     * 
                     */
                    bool CoordinatorHasBeenSet() const;

                    /**
                     * 获取单节点内存峰值
                     * @return MaxNodePeakMemoryUsage 单节点内存峰值
                     * 
                     */
                    std::string GetMaxNodePeakMemoryUsage() const;

                    /**
                     * 设置单节点内存峰值
                     * @param _maxNodePeakMemoryUsage 单节点内存峰值
                     * 
                     */
                    void SetMaxNodePeakMemoryUsage(const std::string& _maxNodePeakMemoryUsage);

                    /**
                     * 判断参数 MaxNodePeakMemoryUsage 是否已赋值
                     * @return MaxNodePeakMemoryUsage 是否已赋值
                     * 
                     */
                    bool MaxNodePeakMemoryUsageHasBeenSet() const;

                    /**
                     * 获取查询类型
                     * @return QueryType 查询类型
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型
                     * @param _queryType 查询类型
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取扫描的HDFS行数
                     * @return ScanHDFSRows 扫描的HDFS行数
                     * 
                     */
                    int64_t GetScanHDFSRows() const;

                    /**
                     * 设置扫描的HDFS行数
                     * @param _scanHDFSRows 扫描的HDFS行数
                     * 
                     */
                    void SetScanHDFSRows(const int64_t& _scanHDFSRows);

                    /**
                     * 判断参数 ScanHDFSRows 是否已赋值
                     * @return ScanHDFSRows 是否已赋值
                     * 
                     */
                    bool ScanHDFSRowsHasBeenSet() const;

                    /**
                     * 获取扫描的Kudu行数
                     * @return ScanKUDURows 扫描的Kudu行数
                     * 
                     */
                    int64_t GetScanKUDURows() const;

                    /**
                     * 设置扫描的Kudu行数
                     * @param _scanKUDURows 扫描的Kudu行数
                     * 
                     */
                    void SetScanKUDURows(const int64_t& _scanKUDURows);

                    /**
                     * 判断参数 ScanKUDURows 是否已赋值
                     * @return ScanKUDURows 是否已赋值
                     * 
                     */
                    bool ScanKUDURowsHasBeenSet() const;

                    /**
                     * 获取扫描的总行数
                     * @return ScanRowsTotal 扫描的总行数
                     * 
                     */
                    int64_t GetScanRowsTotal() const;

                    /**
                     * 设置扫描的总行数
                     * @param _scanRowsTotal 扫描的总行数
                     * 
                     */
                    void SetScanRowsTotal(const int64_t& _scanRowsTotal);

                    /**
                     * 判断参数 ScanRowsTotal 是否已赋值
                     * @return ScanRowsTotal 是否已赋值
                     * 
                     */
                    bool ScanRowsTotalHasBeenSet() const;

                    /**
                     * 获取读取的总字节数
                     * @return TotalBytesRead 读取的总字节数
                     * 
                     */
                    int64_t GetTotalBytesRead() const;

                    /**
                     * 设置读取的总字节数
                     * @param _totalBytesRead 读取的总字节数
                     * 
                     */
                    void SetTotalBytesRead(const int64_t& _totalBytesRead);

                    /**
                     * 判断参数 TotalBytesRead 是否已赋值
                     * @return TotalBytesRead 是否已赋值
                     * 
                     */
                    bool TotalBytesReadHasBeenSet() const;

                    /**
                     * 获取发送的总字节数
                     * @return TotalBytesSent 发送的总字节数
                     * 
                     */
                    int64_t GetTotalBytesSent() const;

                    /**
                     * 设置发送的总字节数
                     * @param _totalBytesSent 发送的总字节数
                     * 
                     */
                    void SetTotalBytesSent(const int64_t& _totalBytesSent);

                    /**
                     * 判断参数 TotalBytesSent 是否已赋值
                     * @return TotalBytesSent 是否已赋值
                     * 
                     */
                    bool TotalBytesSentHasBeenSet() const;

                    /**
                     * 获取CPU总时间
                     * @return TotalCpuTime CPU总时间
                     * 
                     */
                    int64_t GetTotalCpuTime() const;

                    /**
                     * 设置CPU总时间
                     * @param _totalCpuTime CPU总时间
                     * 
                     */
                    void SetTotalCpuTime(const int64_t& _totalCpuTime);

                    /**
                     * 判断参数 TotalCpuTime 是否已赋值
                     * @return TotalCpuTime 是否已赋值
                     * 
                     */
                    bool TotalCpuTimeHasBeenSet() const;

                    /**
                     * 获取内部数据发送总量(Bytes)
                     * @return TotalInnerBytesSent 内部数据发送总量(Bytes)
                     * 
                     */
                    int64_t GetTotalInnerBytesSent() const;

                    /**
                     * 设置内部数据发送总量(Bytes)
                     * @param _totalInnerBytesSent 内部数据发送总量(Bytes)
                     * 
                     */
                    void SetTotalInnerBytesSent(const int64_t& _totalInnerBytesSent);

                    /**
                     * 判断参数 TotalInnerBytesSent 是否已赋值
                     * @return TotalInnerBytesSent 是否已赋值
                     * 
                     */
                    bool TotalInnerBytesSentHasBeenSet() const;

                    /**
                     * 获取内部扫描数据发送总量(Bytes)
                     * @return TotalScanBytesSent 内部扫描数据发送总量(Bytes)
                     * 
                     */
                    int64_t GetTotalScanBytesSent() const;

                    /**
                     * 设置内部扫描数据发送总量(Bytes)
                     * @param _totalScanBytesSent 内部扫描数据发送总量(Bytes)
                     * 
                     */
                    void SetTotalScanBytesSent(const int64_t& _totalScanBytesSent);

                    /**
                     * 判断参数 TotalScanBytesSent 是否已赋值
                     * @return TotalScanBytesSent 是否已赋值
                     * 
                     */
                    bool TotalScanBytesSentHasBeenSet() const;

                    /**
                     * 获取预估单节点内存
                     * @return EstimatedPerHostMemBytes 预估单节点内存
                     * 
                     */
                    int64_t GetEstimatedPerHostMemBytes() const;

                    /**
                     * 设置预估单节点内存
                     * @param _estimatedPerHostMemBytes 预估单节点内存
                     * 
                     */
                    void SetEstimatedPerHostMemBytes(const int64_t& _estimatedPerHostMemBytes);

                    /**
                     * 判断参数 EstimatedPerHostMemBytes 是否已赋值
                     * @return EstimatedPerHostMemBytes 是否已赋值
                     * 
                     */
                    bool EstimatedPerHostMemBytesHasBeenSet() const;

                    /**
                     * 获取从缓存中获取的数据行数
                     * @return NumRowsFetchedFromCache 从缓存中获取的数据行数
                     * 
                     */
                    int64_t GetNumRowsFetchedFromCache() const;

                    /**
                     * 设置从缓存中获取的数据行数
                     * @param _numRowsFetchedFromCache 从缓存中获取的数据行数
                     * 
                     */
                    void SetNumRowsFetchedFromCache(const int64_t& _numRowsFetchedFromCache);

                    /**
                     * 判断参数 NumRowsFetchedFromCache 是否已赋值
                     * @return NumRowsFetchedFromCache 是否已赋值
                     * 
                     */
                    bool NumRowsFetchedFromCacheHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取单节点内存峰值和(Bytes)
                     * @return PerNodePeakMemoryBytesSum 单节点内存峰值和(Bytes)
                     * 
                     */
                    int64_t GetPerNodePeakMemoryBytesSum() const;

                    /**
                     * 设置单节点内存峰值和(Bytes)
                     * @param _perNodePeakMemoryBytesSum 单节点内存峰值和(Bytes)
                     * 
                     */
                    void SetPerNodePeakMemoryBytesSum(const int64_t& _perNodePeakMemoryBytesSum);

                    /**
                     * 判断参数 PerNodePeakMemoryBytesSum 是否已赋值
                     * @return PerNodePeakMemoryBytesSum 是否已赋值
                     * 
                     */
                    bool PerNodePeakMemoryBytesSumHasBeenSet() const;

                    /**
                     * 获取后端个数
                     * @return BackendsCount 后端个数
                     * 
                     */
                    int64_t GetBackendsCount() const;

                    /**
                     * 设置后端个数
                     * @param _backendsCount 后端个数
                     * 
                     */
                    void SetBackendsCount(const int64_t& _backendsCount);

                    /**
                     * 判断参数 BackendsCount 是否已赋值
                     * @return BackendsCount 是否已赋值
                     * 
                     */
                    bool BackendsCountHasBeenSet() const;

                    /**
                     * 获取fragment数
                     * @return FragmentInstancesCount fragment数
                     * 
                     */
                    int64_t GetFragmentInstancesCount() const;

                    /**
                     * 设置fragment数
                     * @param _fragmentInstancesCount fragment数
                     * 
                     */
                    void SetFragmentInstancesCount(const int64_t& _fragmentInstancesCount);

                    /**
                     * 判断参数 FragmentInstancesCount 是否已赋值
                     * @return FragmentInstancesCount 是否已赋值
                     * 
                     */
                    bool FragmentInstancesCountHasBeenSet() const;

                    /**
                     * 获取剩余未完成Fragment数
                     * @return RemainingFragmentCount 剩余未完成Fragment数
                     * 
                     */
                    int64_t GetRemainingFragmentCount() const;

                    /**
                     * 设置剩余未完成Fragment数
                     * @param _remainingFragmentCount 剩余未完成Fragment数
                     * 
                     */
                    void SetRemainingFragmentCount(const int64_t& _remainingFragmentCount);

                    /**
                     * 判断参数 RemainingFragmentCount 是否已赋值
                     * @return RemainingFragmentCount 是否已赋值
                     * 
                     */
                    bool RemainingFragmentCountHasBeenSet() const;

                private:

                    /**
                     * 执行语句
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * 查询ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行时间
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 获取行数
                     */
                    int64_t m_rowsFetched;
                    bool m_rowsFetchedHasBeenSet;

                    /**
                     * 用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 默认DB
                     */
                    std::string m_defaultDB;
                    bool m_defaultDBHasBeenSet;

                    /**
                     * 执行的Coordinator节点
                     */
                    std::string m_coordinator;
                    bool m_coordinatorHasBeenSet;

                    /**
                     * 单节点内存峰值
                     */
                    std::string m_maxNodePeakMemoryUsage;
                    bool m_maxNodePeakMemoryUsageHasBeenSet;

                    /**
                     * 查询类型
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 扫描的HDFS行数
                     */
                    int64_t m_scanHDFSRows;
                    bool m_scanHDFSRowsHasBeenSet;

                    /**
                     * 扫描的Kudu行数
                     */
                    int64_t m_scanKUDURows;
                    bool m_scanKUDURowsHasBeenSet;

                    /**
                     * 扫描的总行数
                     */
                    int64_t m_scanRowsTotal;
                    bool m_scanRowsTotalHasBeenSet;

                    /**
                     * 读取的总字节数
                     */
                    int64_t m_totalBytesRead;
                    bool m_totalBytesReadHasBeenSet;

                    /**
                     * 发送的总字节数
                     */
                    int64_t m_totalBytesSent;
                    bool m_totalBytesSentHasBeenSet;

                    /**
                     * CPU总时间
                     */
                    int64_t m_totalCpuTime;
                    bool m_totalCpuTimeHasBeenSet;

                    /**
                     * 内部数据发送总量(Bytes)
                     */
                    int64_t m_totalInnerBytesSent;
                    bool m_totalInnerBytesSentHasBeenSet;

                    /**
                     * 内部扫描数据发送总量(Bytes)
                     */
                    int64_t m_totalScanBytesSent;
                    bool m_totalScanBytesSentHasBeenSet;

                    /**
                     * 预估单节点内存
                     */
                    int64_t m_estimatedPerHostMemBytes;
                    bool m_estimatedPerHostMemBytesHasBeenSet;

                    /**
                     * 从缓存中获取的数据行数
                     */
                    int64_t m_numRowsFetchedFromCache;
                    bool m_numRowsFetchedFromCacheHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 单节点内存峰值和(Bytes)
                     */
                    int64_t m_perNodePeakMemoryBytesSum;
                    bool m_perNodePeakMemoryBytesSumHasBeenSet;

                    /**
                     * 后端个数
                     */
                    int64_t m_backendsCount;
                    bool m_backendsCountHasBeenSet;

                    /**
                     * fragment数
                     */
                    int64_t m_fragmentInstancesCount;
                    bool m_fragmentInstancesCountHasBeenSet;

                    /**
                     * 剩余未完成Fragment数
                     */
                    int64_t m_remainingFragmentCount;
                    bool m_remainingFragmentCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_IMPALAQUERY_H_
