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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEBACKUPGROUPREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEBACKUPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateBackupGroup请求参数结构体
                */
                class CreateBackupGroupRequest : public AbstractModel
                {
                public:
                    CreateBackupGroupRequest();
                    ~CreateBackupGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要创建备份组的云硬盘ID列表。
                     * @return DiskIds 需要创建备份组的云硬盘ID列表。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置需要创建备份组的云硬盘ID列表。
                     * @param _diskIds 需要创建备份组的云硬盘ID列表。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取备份组的名称
                     * @return BackupGroupName 备份组的名称
                     * 
                     */
                    std::string GetBackupGroupName() const;

                    /**
                     * 设置备份组的名称
                     * @param _backupGroupName 备份组的名称
                     * 
                     */
                    void SetBackupGroupName(const std::string& _backupGroupName);

                    /**
                     * 判断参数 BackupGroupName 是否已赋值
                     * @return BackupGroupName 是否已赋值
                     * 
                     */
                    bool BackupGroupNameHasBeenSet() const;

                    /**
                     * 获取指定备份组到期时间，如果未传入该参数，默认为永久保留。
                     * @return Deadline 指定备份组到期时间，如果未传入该参数，默认为永久保留。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置指定备份组到期时间，如果未传入该参数，默认为永久保留。
                     * @param _deadline 指定备份组到期时间，如果未传入该参数，默认为永久保留。
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * 需要创建备份组的云硬盘ID列表。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 备份组的名称
                     */
                    std::string m_backupGroupName;
                    bool m_backupGroupNameHasBeenSet;

                    /**
                     * 指定备份组到期时间，如果未传入该参数，默认为永久保留。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEBACKUPGROUPREQUEST_H_
