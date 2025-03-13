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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CROSSREGIONBACKUPITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CROSSREGIONBACKUPITEM_H_

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
                * 跨地域备份各地域备份信息
                */
                class CrossRegionBackupItem : public AbstractModel
                {
                public:
                    CrossRegionBackupItem();
                    ~CrossRegionBackupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份的目标地域
                     * @return CrossRegion 备份的目标地域
                     * 
                     */
                    std::string GetCrossRegion() const;

                    /**
                     * 设置备份的目标地域
                     * @param _crossRegion 备份的目标地域
                     * 
                     */
                    void SetCrossRegion(const std::string& _crossRegion);

                    /**
                     * 判断参数 CrossRegion 是否已赋值
                     * @return CrossRegion 是否已赋值
                     * 
                     */
                    bool CrossRegionHasBeenSet() const;

                    /**
                     * 获取目标地域的备份任务ID
                     * @return BackupId 目标地域的备份任务ID
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置目标地域的备份任务ID
                     * @param _backupId 目标地域的备份任务ID
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
                     * 获取目标地域的备份状态
                     * @return BackupStatus 目标地域的备份状态
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置目标地域的备份状态
                     * @param _backupStatus 目标地域的备份状态
                     * 
                     */
                    void SetBackupStatus(const std::string& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                private:

                    /**
                     * 备份的目标地域
                     */
                    std::string m_crossRegion;
                    bool m_crossRegionHasBeenSet;

                    /**
                     * 目标地域的备份任务ID
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 目标地域的备份状态
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CROSSREGIONBACKUPITEM_H_
