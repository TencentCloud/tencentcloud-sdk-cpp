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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SLOWQUERYRECORD_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SLOWQUERYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 慢查询记录
                */
                class SlowQueryRecord : public AbstractModel
                {
                public:
                    SlowQueryRecord();
                    ~SlowQueryRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询用户
                     * @return OsUser 查询用户
                     * 
                     */
                    std::string GetOsUser() const;

                    /**
                     * 设置查询用户
                     * @param _osUser 查询用户
                     * 
                     */
                    void SetOsUser(const std::string& _osUser);

                    /**
                     * 判断参数 OsUser 是否已赋值
                     * @return OsUser 是否已赋值
                     * 
                     */
                    bool OsUserHasBeenSet() const;

                    /**
                     * 获取查询ID
                     * @return InitialQueryId 查询ID
                     * 
                     */
                    std::string GetInitialQueryId() const;

                    /**
                     * 设置查询ID
                     * @param _initialQueryId 查询ID
                     * 
                     */
                    void SetInitialQueryId(const std::string& _initialQueryId);

                    /**
                     * 判断参数 InitialQueryId 是否已赋值
                     * @return InitialQueryId 是否已赋值
                     * 
                     */
                    bool InitialQueryIdHasBeenSet() const;

                    /**
                     * 获取SQL语句
                     * @return Sql SQL语句
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置SQL语句
                     * @param _sql SQL语句
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return QueryStartTime 开始时间
                     * 
                     */
                    std::string GetQueryStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _queryStartTime 开始时间
                     * 
                     */
                    void SetQueryStartTime(const std::string& _queryStartTime);

                    /**
                     * 判断参数 QueryStartTime 是否已赋值
                     * @return QueryStartTime 是否已赋值
                     * 
                     */
                    bool QueryStartTimeHasBeenSet() const;

                    /**
                     * 获取执行耗时
                     * @return DurationMs 执行耗时
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置执行耗时
                     * @param _durationMs 执行耗时
                     * 
                     */
                    void SetDurationMs(const int64_t& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取读取行数
                     * @return ReadRows 读取行数
                     * 
                     */
                    int64_t GetReadRows() const;

                    /**
                     * 设置读取行数
                     * @param _readRows 读取行数
                     * 
                     */
                    void SetReadRows(const int64_t& _readRows);

                    /**
                     * 判断参数 ReadRows 是否已赋值
                     * @return ReadRows 是否已赋值
                     * 
                     */
                    bool ReadRowsHasBeenSet() const;

                    /**
                     * 获取读取字节数
                     * @return ResultRows 读取字节数
                     * 
                     */
                    int64_t GetResultRows() const;

                    /**
                     * 设置读取字节数
                     * @param _resultRows 读取字节数
                     * 
                     */
                    void SetResultRows(const int64_t& _resultRows);

                    /**
                     * 判断参数 ResultRows 是否已赋值
                     * @return ResultRows 是否已赋值
                     * 
                     */
                    bool ResultRowsHasBeenSet() const;

                    /**
                     * 获取结果字节数
                     * @return ResultBytes 结果字节数
                     * 
                     */
                    uint64_t GetResultBytes() const;

                    /**
                     * 设置结果字节数
                     * @param _resultBytes 结果字节数
                     * 
                     */
                    void SetResultBytes(const uint64_t& _resultBytes);

                    /**
                     * 判断参数 ResultBytes 是否已赋值
                     * @return ResultBytes 是否已赋值
                     * 
                     */
                    bool ResultBytesHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return MemoryUsage 内存
                     * 
                     */
                    int64_t GetMemoryUsage() const;

                    /**
                     * 设置内存
                     * @param _memoryUsage 内存
                     * 
                     */
                    void SetMemoryUsage(const int64_t& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取初始查询IP
                     * @return InitialAddress 初始查询IP
                     * 
                     */
                    std::string GetInitialAddress() const;

                    /**
                     * 设置初始查询IP
                     * @param _initialAddress 初始查询IP
                     * 
                     */
                    void SetInitialAddress(const std::string& _initialAddress);

                    /**
                     * 判断参数 InitialAddress 是否已赋值
                     * @return InitialAddress 是否已赋值
                     * 
                     */
                    bool InitialAddressHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return DbName 数据库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名
                     * @param _dbName 数据库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取是否是查询，0：否，1：查询语句
                     * @return IsQuery 是否是查询，0：否，1：查询语句
                     * 
                     */
                    int64_t GetIsQuery() const;

                    /**
                     * 设置是否是查询，0：否，1：查询语句
                     * @param _isQuery 是否是查询，0：否，1：查询语句
                     * 
                     */
                    void SetIsQuery(const int64_t& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     * 
                     */
                    bool IsQueryHasBeenSet() const;

                    /**
                     * 获取ResultBytes的MB格式
                     * @return ResultBytesMB ResultBytes的MB格式
                     * 
                     */
                    double GetResultBytesMB() const;

                    /**
                     * 设置ResultBytes的MB格式
                     * @param _resultBytesMB ResultBytes的MB格式
                     * 
                     */
                    void SetResultBytesMB(const double& _resultBytesMB);

                    /**
                     * 判断参数 ResultBytesMB 是否已赋值
                     * @return ResultBytesMB 是否已赋值
                     * 
                     */
                    bool ResultBytesMBHasBeenSet() const;

                    /**
                     * 获取MemoryUsage的MB表示
                     * @return MemoryUsageMB MemoryUsage的MB表示
                     * 
                     */
                    double GetMemoryUsageMB() const;

                    /**
                     * 设置MemoryUsage的MB表示
                     * @param _memoryUsageMB MemoryUsage的MB表示
                     * 
                     */
                    void SetMemoryUsageMB(const double& _memoryUsageMB);

                    /**
                     * 判断参数 MemoryUsageMB 是否已赋值
                     * @return MemoryUsageMB 是否已赋值
                     * 
                     */
                    bool MemoryUsageMBHasBeenSet() const;

                    /**
                     * 获取DurationMs的秒表示
                     * @return DurationSec DurationMs的秒表示
                     * 
                     */
                    double GetDurationSec() const;

                    /**
                     * 设置DurationMs的秒表示
                     * @param _durationSec DurationMs的秒表示
                     * 
                     */
                    void SetDurationSec(const double& _durationSec);

                    /**
                     * 判断参数 DurationSec 是否已赋值
                     * @return DurationSec 是否已赋值
                     * 
                     */
                    bool DurationSecHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return State 状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
                     * @param _state 状态
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
                     * 获取Catalog  Name
                     * @return CatalogName Catalog  Name
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Catalog  Name
                     * @param _catalogName Catalog  Name
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取cpu执行时间 
                     * @return CpuTimeMs cpu执行时间 
                     * 
                     */
                    int64_t GetCpuTimeMs() const;

                    /**
                     * 设置cpu执行时间 
                     * @param _cpuTimeMs cpu执行时间 
                     * 
                     */
                    void SetCpuTimeMs(const int64_t& _cpuTimeMs);

                    /**
                     * 判断参数 CpuTimeMs 是否已赋值
                     * @return CpuTimeMs 是否已赋值
                     * 
                     */
                    bool CpuTimeMsHasBeenSet() const;

                    /**
                     * 获取计算组
                     * @return ComputeGroup 计算组
                     * 
                     */
                    std::string GetComputeGroup() const;

                    /**
                     * 设置计算组
                     * @param _computeGroup 计算组
                     * 
                     */
                    void SetComputeGroup(const std::string& _computeGroup);

                    /**
                     * 判断参数 ComputeGroup 是否已赋值
                     * @return ComputeGroup 是否已赋值
                     * 
                     */
                    bool ComputeGroupHasBeenSet() const;

                private:

                    /**
                     * 查询用户
                     */
                    std::string m_osUser;
                    bool m_osUserHasBeenSet;

                    /**
                     * 查询ID
                     */
                    std::string m_initialQueryId;
                    bool m_initialQueryIdHasBeenSet;

                    /**
                     * SQL语句
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_queryStartTime;
                    bool m_queryStartTimeHasBeenSet;

                    /**
                     * 执行耗时
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * 读取行数
                     */
                    int64_t m_readRows;
                    bool m_readRowsHasBeenSet;

                    /**
                     * 读取字节数
                     */
                    int64_t m_resultRows;
                    bool m_resultRowsHasBeenSet;

                    /**
                     * 结果字节数
                     */
                    uint64_t m_resultBytes;
                    bool m_resultBytesHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * 初始查询IP
                     */
                    std::string m_initialAddress;
                    bool m_initialAddressHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 是否是查询，0：否，1：查询语句
                     */
                    int64_t m_isQuery;
                    bool m_isQueryHasBeenSet;

                    /**
                     * ResultBytes的MB格式
                     */
                    double m_resultBytesMB;
                    bool m_resultBytesMBHasBeenSet;

                    /**
                     * MemoryUsage的MB表示
                     */
                    double m_memoryUsageMB;
                    bool m_memoryUsageMBHasBeenSet;

                    /**
                     * DurationMs的秒表示
                     */
                    double m_durationSec;
                    bool m_durationSecHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Catalog  Name
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * cpu执行时间 
                     */
                    int64_t m_cpuTimeMs;
                    bool m_cpuTimeMsHasBeenSet;

                    /**
                     * 计算组
                     */
                    std::string m_computeGroup;
                    bool m_computeGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SLOWQUERYRECORD_H_
