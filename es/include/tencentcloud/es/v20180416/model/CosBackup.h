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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES cos自动备份信息
                */
                class CosBackup : public AbstractModel
                {
                public:
                    CosBackup();
                    ~CosBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启cos自动备份
                     * @return IsAutoBackup 是否开启cos自动备份
                     */
                    bool GetIsAutoBackup() const;

                    /**
                     * 设置是否开启cos自动备份
                     * @param IsAutoBackup 是否开启cos自动备份
                     */
                    void SetIsAutoBackup(const bool& _isAutoBackup);

                    /**
                     * 判断参数 IsAutoBackup 是否已赋值
                     * @return IsAutoBackup 是否已赋值
                     */
                    bool IsAutoBackupHasBeenSet() const;

                    /**
                     * 获取自动备份执行时间（精确到小时）, e.g. "22:00"
                     * @return BackupTime 自动备份执行时间（精确到小时）, e.g. "22:00"
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置自动备份执行时间（精确到小时）, e.g. "22:00"
                     * @param BackupTime 自动备份执行时间（精确到小时）, e.g. "22:00"
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     */
                    bool BackupTimeHasBeenSet() const;

                private:

                    /**
                     * 是否开启cos自动备份
                     */
                    bool m_isAutoBackup;
                    bool m_isAutoBackupHasBeenSet;

                    /**
                     * 自动备份执行时间（精确到小时）, e.g. "22:00"
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COSBACKUP_H_
