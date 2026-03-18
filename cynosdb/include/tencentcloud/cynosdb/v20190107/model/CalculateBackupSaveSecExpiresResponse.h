/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/WillDeleteItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CalculateBackupSaveSecExpires返回参数结构体
                */
                class CalculateBackupSaveSecExpiresResponse : public AbstractModel
                {
                public:
                    CalculateBackupSaveSecExpiresResponse();
                    ~CalculateBackupSaveSecExpiresResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取将被删除的备份文件总数
                     * @return WillDeleteBackupFileCount 将被删除的备份文件总数
                     * 
                     */
                    int64_t GetWillDeleteBackupFileCount() const;

                    /**
                     * 判断参数 WillDeleteBackupFileCount 是否已赋值
                     * @return WillDeleteBackupFileCount 是否已赋值
                     * 
                     */
                    bool WillDeleteBackupFileCountHasBeenSet() const;

                    /**
                     * 获取将被删除的备份文件列表
                     * @return WillDeleteBackupFiles 将被删除的备份文件列表
                     * 
                     */
                    std::vector<WillDeleteItem> GetWillDeleteBackupFiles() const;

                    /**
                     * 判断参数 WillDeleteBackupFiles 是否已赋值
                     * @return WillDeleteBackupFiles 是否已赋值
                     * 
                     */
                    bool WillDeleteBackupFilesHasBeenSet() const;

                    /**
                     * 获取将被删除的Binlog文件总数
                     * @return WillDeleteBinlogFileCount 将被删除的Binlog文件总数
                     * 
                     */
                    int64_t GetWillDeleteBinlogFileCount() const;

                    /**
                     * 判断参数 WillDeleteBinlogFileCount 是否已赋值
                     * @return WillDeleteBinlogFileCount 是否已赋值
                     * 
                     */
                    bool WillDeleteBinlogFileCountHasBeenSet() const;

                    /**
                     * 获取将被删除的Binlog文件列表
                     * @return WillDeleteBinlogFiles 将被删除的Binlog文件列表
                     * 
                     */
                    std::vector<WillDeleteItem> GetWillDeleteBinlogFiles() const;

                    /**
                     * 判断参数 WillDeleteBinlogFiles 是否已赋值
                     * @return WillDeleteBinlogFiles 是否已赋值
                     * 
                     */
                    bool WillDeleteBinlogFilesHasBeenSet() const;

                    /**
                     * 获取将被删除的Redolog文件总数
                     * @return WillDeleteRedoLogFileCount 将被删除的Redolog文件总数
                     * 
                     */
                    int64_t GetWillDeleteRedoLogFileCount() const;

                    /**
                     * 判断参数 WillDeleteRedoLogFileCount 是否已赋值
                     * @return WillDeleteRedoLogFileCount 是否已赋值
                     * 
                     */
                    bool WillDeleteRedoLogFileCountHasBeenSet() const;

                    /**
                     * 获取将被删除的Redolog文件列表
                     * @return WillDeleteRedoLogFiles 将被删除的Redolog文件列表
                     * 
                     */
                    std::vector<WillDeleteItem> GetWillDeleteRedoLogFiles() const;

                    /**
                     * 判断参数 WillDeleteRedoLogFiles 是否已赋值
                     * @return WillDeleteRedoLogFiles 是否已赋值
                     * 
                     */
                    bool WillDeleteRedoLogFilesHasBeenSet() const;

                private:

                    /**
                     * 将被删除的备份文件总数
                     */
                    int64_t m_willDeleteBackupFileCount;
                    bool m_willDeleteBackupFileCountHasBeenSet;

                    /**
                     * 将被删除的备份文件列表
                     */
                    std::vector<WillDeleteItem> m_willDeleteBackupFiles;
                    bool m_willDeleteBackupFilesHasBeenSet;

                    /**
                     * 将被删除的Binlog文件总数
                     */
                    int64_t m_willDeleteBinlogFileCount;
                    bool m_willDeleteBinlogFileCountHasBeenSet;

                    /**
                     * 将被删除的Binlog文件列表
                     */
                    std::vector<WillDeleteItem> m_willDeleteBinlogFiles;
                    bool m_willDeleteBinlogFilesHasBeenSet;

                    /**
                     * 将被删除的Redolog文件总数
                     */
                    int64_t m_willDeleteRedoLogFileCount;
                    bool m_willDeleteRedoLogFileCountHasBeenSet;

                    /**
                     * 将被删除的Redolog文件列表
                     */
                    std::vector<WillDeleteItem> m_willDeleteRedoLogFiles;
                    bool m_willDeleteRedoLogFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESRESPONSE_H_
