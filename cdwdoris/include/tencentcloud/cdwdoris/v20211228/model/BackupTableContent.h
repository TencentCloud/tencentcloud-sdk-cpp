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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPTABLECONTENT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPTABLECONTENT_H_

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
                * 备份表信息
                */
                class BackupTableContent : public AbstractModel
                {
                public:
                    BackupTableContent();
                    ~BackupTableContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取表
                     * @return Table 表
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置表
                     * @param _table 表
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取表总字节数
                     * @return TotalBytes 表总字节数
                     * 
                     */
                    int64_t GetTotalBytes() const;

                    /**
                     * 设置表总字节数
                     * @param _totalBytes 表总字节数
                     * 
                     */
                    void SetTotalBytes(const int64_t& _totalBytes);

                    /**
                     * 判断参数 TotalBytes 是否已赋值
                     * @return TotalBytes 是否已赋值
                     * 
                     */
                    bool TotalBytesHasBeenSet() const;

                    /**
                     * 获取表单个副本的大小
                     * @return SingleReplicaBytes 表单个副本的大小
                     * 
                     */
                    std::string GetSingleReplicaBytes() const;

                    /**
                     * 设置表单个副本的大小
                     * @param _singleReplicaBytes 表单个副本的大小
                     * 
                     */
                    void SetSingleReplicaBytes(const std::string& _singleReplicaBytes);

                    /**
                     * 判断参数 SingleReplicaBytes 是否已赋值
                     * @return SingleReplicaBytes 是否已赋值
                     * 
                     */
                    bool SingleReplicaBytesHasBeenSet() const;

                    /**
                     * 获取备份状态
                     * @return BackupStatus 备份状态
                     * 
                     */
                    int64_t GetBackupStatus() const;

                    /**
                     * 设置备份状态
                     * @param _backupStatus 备份状态
                     * 
                     */
                    void SetBackupStatus(const int64_t& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取备份的错误信息
                     * @return BackupErrorMsg 备份的错误信息
                     * 
                     */
                    std::string GetBackupErrorMsg() const;

                    /**
                     * 设置备份的错误信息
                     * @param _backupErrorMsg 备份的错误信息
                     * 
                     */
                    void SetBackupErrorMsg(const std::string& _backupErrorMsg);

                    /**
                     * 判断参数 BackupErrorMsg 是否已赋值
                     * @return BackupErrorMsg 是否已赋值
                     * 
                     */
                    bool BackupErrorMsgHasBeenSet() const;

                    /**
                     * 获取该库表是否绑定降冷策略
                     * @return IsOpenCoolDown 该库表是否绑定降冷策略
                     * 
                     */
                    bool GetIsOpenCoolDown() const;

                    /**
                     * 设置该库表是否绑定降冷策略
                     * @param _isOpenCoolDown 该库表是否绑定降冷策略
                     * 
                     */
                    void SetIsOpenCoolDown(const bool& _isOpenCoolDown);

                    /**
                     * 判断参数 IsOpenCoolDown 是否已赋值
                     * @return IsOpenCoolDown 是否已赋值
                     * 
                     */
                    bool IsOpenCoolDownHasBeenSet() const;

                private:

                    /**
                     * 数据库
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 表
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 表总字节数
                     */
                    int64_t m_totalBytes;
                    bool m_totalBytesHasBeenSet;

                    /**
                     * 表单个副本的大小
                     */
                    std::string m_singleReplicaBytes;
                    bool m_singleReplicaBytesHasBeenSet;

                    /**
                     * 备份状态
                     */
                    int64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * 备份的错误信息
                     */
                    std::string m_backupErrorMsg;
                    bool m_backupErrorMsgHasBeenSet;

                    /**
                     * 该库表是否绑定降冷策略
                     */
                    bool m_isOpenCoolDown;
                    bool m_isOpenCoolDownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPTABLECONTENT_H_
