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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例慢查询信息
                */
                class SlowQueriesItem : public AbstractModel
                {
                public:
                    SlowQueriesItem();
                    ~SlowQueriesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行时间戳
                     * @return Timestamp 执行时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置执行时间戳
                     * @param _timestamp 执行时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取执行时长，单位秒
                     * @return QueryTime 执行时长，单位秒
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置执行时长，单位秒
                     * @param _queryTime 执行时长，单位秒
                     * 
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取sql语句
                     * @return SqlText sql语句
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置sql语句
                     * @param _sqlText sql语句
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取客户端host
                     * @return UserHost 客户端host
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置客户端host
                     * @param _userHost 客户端host
                     * 
                     */
                    void SetUserHost(const std::string& _userHost);

                    /**
                     * 判断参数 UserHost 是否已赋值
                     * @return UserHost 是否已赋值
                     * 
                     */
                    bool UserHostHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return Database 数据库名
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库名
                     * @param _database 数据库名
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取锁时长，单位秒
                     * @return LockTime 锁时长，单位秒
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置锁时长，单位秒
                     * @param _lockTime 锁时长，单位秒
                     * 
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取扫描行数
                     * @return RowsExamined 扫描行数
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置扫描行数
                     * @param _rowsExamined 扫描行数
                     * 
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     * 
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取返回行数
                     * @return RowsSent 返回行数
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置返回行数
                     * @param _rowsSent 返回行数
                     * 
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取sql模板
                     * @return SqlTemplate sql模板
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置sql模板
                     * @param _sqlTemplate sql模板
                     * 
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取sql语句md5
                     * @return SqlMd5 sql语句md5
                     * 
                     */
                    std::string GetSqlMd5() const;

                    /**
                     * 设置sql语句md5
                     * @param _sqlMd5 sql语句md5
                     * 
                     */
                    void SetSqlMd5(const std::string& _sqlMd5);

                    /**
                     * 判断参数 SqlMd5 是否已赋值
                     * @return SqlMd5 是否已赋值
                     * 
                     */
                    bool SqlMd5HasBeenSet() const;

                    /**
                     * 获取远程读取次数
数据库内核版本大于3.1.12
                     * @return SyncReadCountRemote 远程读取次数
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetSyncReadCountRemote() const;

                    /**
                     * 设置远程读取次数
数据库内核版本大于3.1.12
                     * @param _syncReadCountRemote 远程读取次数
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetSyncReadCountRemote(const int64_t& _syncReadCountRemote);

                    /**
                     * 判断参数 SyncReadCountRemote 是否已赋值
                     * @return SyncReadCountRemote 是否已赋值
                     * 
                     */
                    bool SyncReadCountRemoteHasBeenSet() const;

                    /**
                     * 获取远程读取的字节数
数据库内核版本大于3.1.12
                     * @return SyncReadBytesRemote 远程读取的字节数
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetSyncReadBytesRemote() const;

                    /**
                     * 设置远程读取的字节数
数据库内核版本大于3.1.12
                     * @param _syncReadBytesRemote 远程读取的字节数
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetSyncReadBytesRemote(const int64_t& _syncReadBytesRemote);

                    /**
                     * 判断参数 SyncReadBytesRemote 是否已赋值
                     * @return SyncReadBytesRemote 是否已赋值
                     * 
                     */
                    bool SyncReadBytesRemoteHasBeenSet() const;

                    /**
                     * 获取远程读取所花费的时间（微秒）
数据库内核版本大于3.1.12
                     * @return SyncReadTimeRemote 远程读取所花费的时间（微秒）
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetSyncReadTimeRemote() const;

                    /**
                     * 设置远程读取所花费的时间（微秒）
数据库内核版本大于3.1.12
                     * @param _syncReadTimeRemote 远程读取所花费的时间（微秒）
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetSyncReadTimeRemote(const int64_t& _syncReadTimeRemote);

                    /**
                     * 判断参数 SyncReadTimeRemote 是否已赋值
                     * @return SyncReadTimeRemote 是否已赋值
                     * 
                     */
                    bool SyncReadTimeRemoteHasBeenSet() const;

                    /**
                     * 获取远程写入次数
数据库内核版本大于3.1.12
                     * @return SyncWriteCountRemote 远程写入次数
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetSyncWriteCountRemote() const;

                    /**
                     * 设置远程写入次数
数据库内核版本大于3.1.12
                     * @param _syncWriteCountRemote 远程写入次数
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetSyncWriteCountRemote(const int64_t& _syncWriteCountRemote);

                    /**
                     * 判断参数 SyncWriteCountRemote 是否已赋值
                     * @return SyncWriteCountRemote 是否已赋值
                     * 
                     */
                    bool SyncWriteCountRemoteHasBeenSet() const;

                    /**
                     * 获取远程写入的字节数。
数据库内核版本大于3.1.12
                     * @return SyncWriteBytesRemote 远程写入的字节数。
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetSyncWriteBytesRemote() const;

                    /**
                     * 设置远程写入的字节数。
数据库内核版本大于3.1.12
                     * @param _syncWriteBytesRemote 远程写入的字节数。
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetSyncWriteBytesRemote(const int64_t& _syncWriteBytesRemote);

                    /**
                     * 判断参数 SyncWriteBytesRemote 是否已赋值
                     * @return SyncWriteBytesRemote 是否已赋值
                     * 
                     */
                    bool SyncWriteBytesRemoteHasBeenSet() const;

                    /**
                     * 获取远程写入所花费的时间（微秒）。
数据库内核版本大于3.1.12
                     * @return SyncWriteTimeRemote 远程写入所花费的时间（微秒）。
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetSyncWriteTimeRemote() const;

                    /**
                     * 设置远程写入所花费的时间（微秒）。
数据库内核版本大于3.1.12
                     * @param _syncWriteTimeRemote 远程写入所花费的时间（微秒）。
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetSyncWriteTimeRemote(const int64_t& _syncWriteTimeRemote);

                    /**
                     * 判断参数 SyncWriteTimeRemote 是否已赋值
                     * @return SyncWriteTimeRemote 是否已赋值
                     * 
                     */
                    bool SyncWriteTimeRemoteHasBeenSet() const;

                    /**
                     * 获取事务提交延迟（微秒）
数据库内核版本大于3.1.12
                     * @return TrxCommitDelay 事务提交延迟（微秒）
数据库内核版本大于3.1.12
                     * 
                     */
                    int64_t GetTrxCommitDelay() const;

                    /**
                     * 设置事务提交延迟（微秒）
数据库内核版本大于3.1.12
                     * @param _trxCommitDelay 事务提交延迟（微秒）
数据库内核版本大于3.1.12
                     * 
                     */
                    void SetTrxCommitDelay(const int64_t& _trxCommitDelay);

                    /**
                     * 判断参数 TrxCommitDelay 是否已赋值
                     * @return TrxCommitDelay 是否已赋值
                     * 
                     */
                    bool TrxCommitDelayHasBeenSet() const;

                private:

                    /**
                     * 执行时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 执行时长，单位秒
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * sql语句
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * 客户端host
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 锁时长，单位秒
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * 扫描行数
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * 返回行数
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * sql模板
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * sql语句md5
                     */
                    std::string m_sqlMd5;
                    bool m_sqlMd5HasBeenSet;

                    /**
                     * 远程读取次数
数据库内核版本大于3.1.12
                     */
                    int64_t m_syncReadCountRemote;
                    bool m_syncReadCountRemoteHasBeenSet;

                    /**
                     * 远程读取的字节数
数据库内核版本大于3.1.12
                     */
                    int64_t m_syncReadBytesRemote;
                    bool m_syncReadBytesRemoteHasBeenSet;

                    /**
                     * 远程读取所花费的时间（微秒）
数据库内核版本大于3.1.12
                     */
                    int64_t m_syncReadTimeRemote;
                    bool m_syncReadTimeRemoteHasBeenSet;

                    /**
                     * 远程写入次数
数据库内核版本大于3.1.12
                     */
                    int64_t m_syncWriteCountRemote;
                    bool m_syncWriteCountRemoteHasBeenSet;

                    /**
                     * 远程写入的字节数。
数据库内核版本大于3.1.12
                     */
                    int64_t m_syncWriteBytesRemote;
                    bool m_syncWriteBytesRemoteHasBeenSet;

                    /**
                     * 远程写入所花费的时间（微秒）。
数据库内核版本大于3.1.12
                     */
                    int64_t m_syncWriteTimeRemote;
                    bool m_syncWriteTimeRemoteHasBeenSet;

                    /**
                     * 事务提交延迟（微秒）
数据库内核版本大于3.1.12
                     */
                    int64_t m_trxCommitDelay;
                    bool m_trxCommitDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLOWQUERIESITEM_H_
