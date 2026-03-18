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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_WILLDELETEITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_WILLDELETEITEM_H_

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
                * 将被删除的备份文件列表
                */
                class WillDeleteItem : public AbstractModel
                {
                public:
                    WillDeleteItem();
                    ~WillDeleteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件ID
                     * @return BackupId 备份文件ID
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份文件ID
                     * @param _backupId 备份文件ID
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份文件名称
                     * @return BackupName 备份文件名称
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份文件名称
                     * @param _backupName 备份文件名称
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                private:

                    /**
                     * 备份文件ID
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份文件名称
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_WILLDELETEITEM_H_
