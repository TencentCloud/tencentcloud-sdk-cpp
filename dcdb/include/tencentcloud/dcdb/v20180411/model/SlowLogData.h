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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SLOWLOGDATA_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SLOWLOGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 慢查询条目信息
                */
                class SlowLogData : public AbstractModel
                {
                public:
                    SlowLogData();
                    ~SlowLogData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语句校验和，用于查询详情
                     * @return CheckSum 语句校验和，用于查询详情
                     */
                    std::string GetCheckSum() const;

                    /**
                     * 设置语句校验和，用于查询详情
                     * @param CheckSum 语句校验和，用于查询详情
                     */
                    void SetCheckSum(const std::string& _checkSum);

                    /**
                     * 判断参数 CheckSum 是否已赋值
                     * @return CheckSum 是否已赋值
                     */
                    bool CheckSumHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return Db 数据库名称
                     */
                    std::string GetDb() const;

                    /**
                     * 设置数据库名称
                     * @param Db 数据库名称
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取抽象的SQL语句
                     * @return FingerPrint 抽象的SQL语句
                     */
                    std::string GetFingerPrint() const;

                    /**
                     * 设置抽象的SQL语句
                     * @param FingerPrint 抽象的SQL语句
                     */
                    void SetFingerPrint(const std::string& _fingerPrint);

                    /**
                     * 判断参数 FingerPrint 是否已赋值
                     * @return FingerPrint 是否已赋值
                     */
                    bool FingerPrintHasBeenSet() const;

                    /**
                     * 获取平均的锁时间
                     * @return LockTimeAvg 平均的锁时间
                     */
                    std::string GetLockTimeAvg() const;

                    /**
                     * 设置平均的锁时间
                     * @param LockTimeAvg 平均的锁时间
                     */
                    void SetLockTimeAvg(const std::string& _lockTimeAvg);

                    /**
                     * 判断参数 LockTimeAvg 是否已赋值
                     * @return LockTimeAvg 是否已赋值
                     */
                    bool LockTimeAvgHasBeenSet() const;

                    /**
                     * 获取最大锁时间
                     * @return LockTimeMax 最大锁时间
                     */
                    std::string GetLockTimeMax() const;

                    /**
                     * 设置最大锁时间
                     * @param LockTimeMax 最大锁时间
                     */
                    void SetLockTimeMax(const std::string& _lockTimeMax);

                    /**
                     * 判断参数 LockTimeMax 是否已赋值
                     * @return LockTimeMax 是否已赋值
                     */
                    bool LockTimeMaxHasBeenSet() const;

                    /**
                     * 获取最小锁时间
                     * @return LockTimeMin 最小锁时间
                     */
                    std::string GetLockTimeMin() const;

                    /**
                     * 设置最小锁时间
                     * @param LockTimeMin 最小锁时间
                     */
                    void SetLockTimeMin(const std::string& _lockTimeMin);

                    /**
                     * 判断参数 LockTimeMin 是否已赋值
                     * @return LockTimeMin 是否已赋值
                     */
                    bool LockTimeMinHasBeenSet() const;

                    /**
                     * 获取锁时间总和
                     * @return LockTimeSum 锁时间总和
                     */
                    std::string GetLockTimeSum() const;

                    /**
                     * 设置锁时间总和
                     * @param LockTimeSum 锁时间总和
                     */
                    void SetLockTimeSum(const std::string& _lockTimeSum);

                    /**
                     * 判断参数 LockTimeSum 是否已赋值
                     * @return LockTimeSum 是否已赋值
                     */
                    bool LockTimeSumHasBeenSet() const;

                    /**
                     * 获取查询次数
                     * @return QueryCount 查询次数
                     */
                    std::string GetQueryCount() const;

                    /**
                     * 设置查询次数
                     * @param QueryCount 查询次数
                     */
                    void SetQueryCount(const std::string& _queryCount);

                    /**
                     * 判断参数 QueryCount 是否已赋值
                     * @return QueryCount 是否已赋值
                     */
                    bool QueryCountHasBeenSet() const;

                    /**
                     * 获取平均查询时间
                     * @return QueryTimeAvg 平均查询时间
                     */
                    std::string GetQueryTimeAvg() const;

                    /**
                     * 设置平均查询时间
                     * @param QueryTimeAvg 平均查询时间
                     */
                    void SetQueryTimeAvg(const std::string& _queryTimeAvg);

                    /**
                     * 判断参数 QueryTimeAvg 是否已赋值
                     * @return QueryTimeAvg 是否已赋值
                     */
                    bool QueryTimeAvgHasBeenSet() const;

                    /**
                     * 获取最大查询时间
                     * @return QueryTimeMax 最大查询时间
                     */
                    std::string GetQueryTimeMax() const;

                    /**
                     * 设置最大查询时间
                     * @param QueryTimeMax 最大查询时间
                     */
                    void SetQueryTimeMax(const std::string& _queryTimeMax);

                    /**
                     * 判断参数 QueryTimeMax 是否已赋值
                     * @return QueryTimeMax 是否已赋值
                     */
                    bool QueryTimeMaxHasBeenSet() const;

                    /**
                     * 获取最小查询时间
                     * @return QueryTimeMin 最小查询时间
                     */
                    std::string GetQueryTimeMin() const;

                    /**
                     * 设置最小查询时间
                     * @param QueryTimeMin 最小查询时间
                     */
                    void SetQueryTimeMin(const std::string& _queryTimeMin);

                    /**
                     * 判断参数 QueryTimeMin 是否已赋值
                     * @return QueryTimeMin 是否已赋值
                     */
                    bool QueryTimeMinHasBeenSet() const;

                    /**
                     * 获取查询时间总和
                     * @return QueryTimeSum 查询时间总和
                     */
                    std::string GetQueryTimeSum() const;

                    /**
                     * 设置查询时间总和
                     * @param QueryTimeSum 查询时间总和
                     */
                    void SetQueryTimeSum(const std::string& _queryTimeSum);

                    /**
                     * 判断参数 QueryTimeSum 是否已赋值
                     * @return QueryTimeSum 是否已赋值
                     */
                    bool QueryTimeSumHasBeenSet() const;

                    /**
                     * 获取扫描行数
                     * @return RowsExaminedSum 扫描行数
                     */
                    std::string GetRowsExaminedSum() const;

                    /**
                     * 设置扫描行数
                     * @param RowsExaminedSum 扫描行数
                     */
                    void SetRowsExaminedSum(const std::string& _rowsExaminedSum);

                    /**
                     * 判断参数 RowsExaminedSum 是否已赋值
                     * @return RowsExaminedSum 是否已赋值
                     */
                    bool RowsExaminedSumHasBeenSet() const;

                    /**
                     * 获取发送行数
                     * @return RowsSentSum 发送行数
                     */
                    std::string GetRowsSentSum() const;

                    /**
                     * 设置发送行数
                     * @param RowsSentSum 发送行数
                     */
                    void SetRowsSentSum(const std::string& _rowsSentSum);

                    /**
                     * 判断参数 RowsSentSum 是否已赋值
                     * @return RowsSentSum 是否已赋值
                     */
                    bool RowsSentSumHasBeenSet() const;

                    /**
                     * 获取最后执行时间
                     * @return TsMax 最后执行时间
                     */
                    std::string GetTsMax() const;

                    /**
                     * 设置最后执行时间
                     * @param TsMax 最后执行时间
                     */
                    void SetTsMax(const std::string& _tsMax);

                    /**
                     * 判断参数 TsMax 是否已赋值
                     * @return TsMax 是否已赋值
                     */
                    bool TsMaxHasBeenSet() const;

                    /**
                     * 获取首次执行时间
                     * @return TsMin 首次执行时间
                     */
                    std::string GetTsMin() const;

                    /**
                     * 设置首次执行时间
                     * @param TsMin 首次执行时间
                     */
                    void SetTsMin(const std::string& _tsMin);

                    /**
                     * 判断参数 TsMin 是否已赋值
                     * @return TsMin 是否已赋值
                     */
                    bool TsMinHasBeenSet() const;

                    /**
                     * 获取帐号
                     * @return User 帐号
                     */
                    std::string GetUser() const;

                    /**
                     * 设置帐号
                     * @param User 帐号
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取样例Sql
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExampleSql 样例Sql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExampleSql() const;

                    /**
                     * 设置样例Sql
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExampleSql 样例Sql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExampleSql(const std::string& _exampleSql);

                    /**
                     * 判断参数 ExampleSql 是否已赋值
                     * @return ExampleSql 是否已赋值
                     */
                    bool ExampleSqlHasBeenSet() const;

                    /**
                     * 获取账户的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host 账户的域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHost() const;

                    /**
                     * 设置账户的域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Host 账户的域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * 语句校验和，用于查询详情
                     */
                    std::string m_checkSum;
                    bool m_checkSumHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 抽象的SQL语句
                     */
                    std::string m_fingerPrint;
                    bool m_fingerPrintHasBeenSet;

                    /**
                     * 平均的锁时间
                     */
                    std::string m_lockTimeAvg;
                    bool m_lockTimeAvgHasBeenSet;

                    /**
                     * 最大锁时间
                     */
                    std::string m_lockTimeMax;
                    bool m_lockTimeMaxHasBeenSet;

                    /**
                     * 最小锁时间
                     */
                    std::string m_lockTimeMin;
                    bool m_lockTimeMinHasBeenSet;

                    /**
                     * 锁时间总和
                     */
                    std::string m_lockTimeSum;
                    bool m_lockTimeSumHasBeenSet;

                    /**
                     * 查询次数
                     */
                    std::string m_queryCount;
                    bool m_queryCountHasBeenSet;

                    /**
                     * 平均查询时间
                     */
                    std::string m_queryTimeAvg;
                    bool m_queryTimeAvgHasBeenSet;

                    /**
                     * 最大查询时间
                     */
                    std::string m_queryTimeMax;
                    bool m_queryTimeMaxHasBeenSet;

                    /**
                     * 最小查询时间
                     */
                    std::string m_queryTimeMin;
                    bool m_queryTimeMinHasBeenSet;

                    /**
                     * 查询时间总和
                     */
                    std::string m_queryTimeSum;
                    bool m_queryTimeSumHasBeenSet;

                    /**
                     * 扫描行数
                     */
                    std::string m_rowsExaminedSum;
                    bool m_rowsExaminedSumHasBeenSet;

                    /**
                     * 发送行数
                     */
                    std::string m_rowsSentSum;
                    bool m_rowsSentSumHasBeenSet;

                    /**
                     * 最后执行时间
                     */
                    std::string m_tsMax;
                    bool m_tsMaxHasBeenSet;

                    /**
                     * 首次执行时间
                     */
                    std::string m_tsMin;
                    bool m_tsMinHasBeenSet;

                    /**
                     * 帐号
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 样例Sql
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exampleSql;
                    bool m_exampleSqlHasBeenSet;

                    /**
                     * 账户的域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SLOWLOGDATA_H_
