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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEDBBACKUPSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEDBBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DeleteDBBackups请求参数结构体
                */
                class DeleteDBBackupsRequest : public AbstractModel
                {
                public:
                    DeleteDBBackupsRequest();
                    ~DeleteDBBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id,cmgo-xxxx
                     * @return InstanceId 实例id,cmgo-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id,cmgo-xxxx
                     * @param _instanceId 实例id,cmgo-xxxx
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份文件id列表
                     * @return BackupIds 备份文件id列表
                     * 
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置备份文件id列表
                     * @param _backupIds 备份文件id列表
                     * 
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     * 
                     */
                    bool BackupIdsHasBeenSet() const;

                private:

                    /**
                     * 实例id,cmgo-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份文件id列表
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DELETEDBBACKUPSREQUEST_H_
