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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_STARTBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_STARTBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * StartBackupPlan请求参数结构体
                */
                class StartBackupPlanRequest : public AbstractModel
                {
                public:
                    StartBackupPlanRequest();
                    ~StartBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份计划 ID。
                     * @return BackupPlanId 备份计划 ID。
                     * 
                     */
                    std::string GetBackupPlanId() const;

                    /**
                     * 设置备份计划 ID。
                     * @param _backupPlanId 备份计划 ID。
                     * 
                     */
                    void SetBackupPlanId(const std::string& _backupPlanId);

                    /**
                     * 判断参数 BackupPlanId 是否已赋值
                     * @return BackupPlanId 是否已赋值
                     * 
                     */
                    bool BackupPlanIdHasBeenSet() const;

                private:

                    /**
                     * 备份计划 ID。
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_STARTBACKUPPLANREQUEST_H_
