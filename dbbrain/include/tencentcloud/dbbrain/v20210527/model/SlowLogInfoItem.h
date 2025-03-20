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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGINFOITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 慢日志详细信息
                */
                class SlowLogInfoItem : public AbstractModel
                {
                public:
                    SlowLogInfoItem();
                    ~SlowLogInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢日志开始时间
                     * @return Timestamp 慢日志开始时间
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置慢日志开始时间
                     * @param _timestamp 慢日志开始时间
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

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
                     * 获取数据库
                     * @return Database 数据库
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置数据库
                     * @param _database 数据库
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
                     * 获取User来源
                     * @return UserName User来源
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User来源
                     * @param _userName User来源
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
                     * 获取IP来源
                     * @return UserHost IP来源
                     * 
                     */
                    std::string GetUserHost() const;

                    /**
                     * 设置IP来源
                     * @param _userHost IP来源
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
                     * 获取执行时间,单位秒
                     * @return QueryTime 执行时间,单位秒
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置执行时间,单位秒
                     * @param _queryTime 执行时间,单位秒
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
                     * 获取锁时间,单位秒
                     * @return LockTime 锁时间,单位秒
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置锁时间,单位秒
                     * @param _lockTime 锁时间,单位秒
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

                private:

                    /**
                     * 慢日志开始时间
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * sql语句
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * 数据库
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * User来源
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * IP来源
                     */
                    std::string m_userHost;
                    bool m_userHostHasBeenSet;

                    /**
                     * 执行时间,单位秒
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 锁时间,单位秒
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SLOWLOGINFOITEM_H_
