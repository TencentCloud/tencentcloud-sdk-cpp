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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BACKUPPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BACKUPPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 时间备份策略详情
                */
                class BackupPolicy : public AbstractModel
                {
                public:
                    BackupPolicy();
                    ~BackupPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份周期时间，取值为monday, tuesday, wednesday, thursday, friday, saturday, sunday。
                     * @return BackupDay 备份周期时间，取值为monday, tuesday, wednesday, thursday, friday, saturday, sunday。
                     * 
                     */
                    std::string GetBackupDay() const;

                    /**
                     * 设置备份周期时间，取值为monday, tuesday, wednesday, thursday, friday, saturday, sunday。
                     * @param _backupDay 备份周期时间，取值为monday, tuesday, wednesday, thursday, friday, saturday, sunday。
                     * 
                     */
                    void SetBackupDay(const std::string& _backupDay);

                    /**
                     * 判断参数 BackupDay 是否已赋值
                     * @return BackupDay 是否已赋值
                     * 
                     */
                    bool BackupDayHasBeenSet() const;

                    /**
                     * 获取备份时间点，格式：HH:mm:ss。
                     * @return BackupTime 备份时间点，格式：HH:mm:ss。
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置备份时间点，格式：HH:mm:ss。
                     * @param _backupTime 备份时间点，格式：HH:mm:ss。
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                private:

                    /**
                     * 备份周期时间，取值为monday, tuesday, wednesday, thursday, friday, saturday, sunday。
                     */
                    std::string m_backupDay;
                    bool m_backupDayHasBeenSet;

                    /**
                     * 备份时间点，格式：HH:mm:ss。
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BACKUPPOLICY_H_
