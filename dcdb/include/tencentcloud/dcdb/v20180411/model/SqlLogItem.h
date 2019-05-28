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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SQLLOGITEM_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SQLLOGITEM_H_

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
                * 描述一条sql日志的详细信息。
                */
                class SqlLogItem : public AbstractModel
                {
                public:
                    SqlLogItem();
                    ~SqlLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本条日志在消息队列中的偏移量。
                     * @return Offset 本条日志在消息队列中的偏移量。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置本条日志在消息队列中的偏移量。
                     * @param Offset 本条日志在消息队列中的偏移量。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取执行本条sql的用户。
                     * @return User 执行本条sql的用户。
                     */
                    std::string GetUser() const;

                    /**
                     * 设置执行本条sql的用户。
                     * @param User 执行本条sql的用户。
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取执行本条sql的客户端IP+端口。
                     * @return Client 执行本条sql的客户端IP+端口。
                     */
                    std::string GetClient() const;

                    /**
                     * 设置执行本条sql的客户端IP+端口。
                     * @param Client 执行本条sql的客户端IP+端口。
                     */
                    void SetClient(const std::string& _client);

                    /**
                     * 判断参数 Client 是否已赋值
                     * @return Client 是否已赋值
                     */
                    bool ClientHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return DbName 数据库名称。
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称。
                     * @param DbName 数据库名称。
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取执行的sql语句。
                     * @return Sql 执行的sql语句。
                     */
                    std::string GetSql() const;

                    /**
                     * 设置执行的sql语句。
                     * @param Sql 执行的sql语句。
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取返回的数据行数。
                     * @return SelectRowNum 返回的数据行数。
                     */
                    uint64_t GetSelectRowNum() const;

                    /**
                     * 设置返回的数据行数。
                     * @param SelectRowNum 返回的数据行数。
                     */
                    void SetSelectRowNum(const uint64_t& _selectRowNum);

                    /**
                     * 判断参数 SelectRowNum 是否已赋值
                     * @return SelectRowNum 是否已赋值
                     */
                    bool SelectRowNumHasBeenSet() const;

                    /**
                     * 获取影响行数。
                     * @return AffectRowNum 影响行数。
                     */
                    uint64_t GetAffectRowNum() const;

                    /**
                     * 设置影响行数。
                     * @param AffectRowNum 影响行数。
                     */
                    void SetAffectRowNum(const uint64_t& _affectRowNum);

                    /**
                     * 判断参数 AffectRowNum 是否已赋值
                     * @return AffectRowNum 是否已赋值
                     */
                    bool AffectRowNumHasBeenSet() const;

                    /**
                     * 获取Sql执行时间戳。
                     * @return Timestamp Sql执行时间戳。
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Sql执行时间戳。
                     * @param Timestamp Sql执行时间戳。
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Sql耗时，单位为毫秒。
                     * @return TimeCostMs Sql耗时，单位为毫秒。
                     */
                    uint64_t GetTimeCostMs() const;

                    /**
                     * 设置Sql耗时，单位为毫秒。
                     * @param TimeCostMs Sql耗时，单位为毫秒。
                     */
                    void SetTimeCostMs(const uint64_t& _timeCostMs);

                    /**
                     * 判断参数 TimeCostMs 是否已赋值
                     * @return TimeCostMs 是否已赋值
                     */
                    bool TimeCostMsHasBeenSet() const;

                    /**
                     * 获取Sql返回码，0为成功。
                     * @return ResultCode Sql返回码，0为成功。
                     */
                    uint64_t GetResultCode() const;

                    /**
                     * 设置Sql返回码，0为成功。
                     * @param ResultCode Sql返回码，0为成功。
                     */
                    void SetResultCode(const uint64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                private:

                    /**
                     * 本条日志在消息队列中的偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 执行本条sql的用户。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 执行本条sql的客户端IP+端口。
                     */
                    std::string m_client;
                    bool m_clientHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 执行的sql语句。
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 返回的数据行数。
                     */
                    uint64_t m_selectRowNum;
                    bool m_selectRowNumHasBeenSet;

                    /**
                     * 影响行数。
                     */
                    uint64_t m_affectRowNum;
                    bool m_affectRowNumHasBeenSet;

                    /**
                     * Sql执行时间戳。
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Sql耗时，单位为毫秒。
                     */
                    uint64_t m_timeCostMs;
                    bool m_timeCostMsHasBeenSet;

                    /**
                     * Sql返回码，0为成功。
                     */
                    uint64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SQLLOGITEM_H_
