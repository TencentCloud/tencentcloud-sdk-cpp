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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_COMMONBACKUPPOINT_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_COMMONBACKUPPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/BackupDetail.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 共同备份点信息
                */
                class CommonBackupPoint : public AbstractModel
                {
                public:
                    CommonBackupPoint();
                    ~CommonBackupPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共同时间点（精确到小时）
                     * @return BackupCommonTime 共同时间点（精确到小时）
                     * 
                     */
                    std::string GetBackupCommonTime() const;

                    /**
                     * 设置共同时间点（精确到小时）
                     * @param _backupCommonTime 共同时间点（精确到小时）
                     * 
                     */
                    void SetBackupCommonTime(const std::string& _backupCommonTime);

                    /**
                     * 判断参数 BackupCommonTime 是否已赋值
                     * @return BackupCommonTime 是否已赋值
                     * 
                     */
                    bool BackupCommonTimeHasBeenSet() const;

                    /**
                     * 获取共同备份点信息
                     * @return BackupDetailSet 共同备份点信息
                     * 
                     */
                    std::vector<BackupDetail> GetBackupDetailSet() const;

                    /**
                     * 设置共同备份点信息
                     * @param _backupDetailSet 共同备份点信息
                     * 
                     */
                    void SetBackupDetailSet(const std::vector<BackupDetail>& _backupDetailSet);

                    /**
                     * 判断参数 BackupDetailSet 是否已赋值
                     * @return BackupDetailSet 是否已赋值
                     * 
                     */
                    bool BackupDetailSetHasBeenSet() const;

                private:

                    /**
                     * 共同时间点（精确到小时）
                     */
                    std::string m_backupCommonTime;
                    bool m_backupCommonTimeHasBeenSet;

                    /**
                     * 共同备份点信息
                     */
                    std::vector<BackupDetail> m_backupDetailSet;
                    bool m_backupDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_COMMONBACKUPPOINT_H_
