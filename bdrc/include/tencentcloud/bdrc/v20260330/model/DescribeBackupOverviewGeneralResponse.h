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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPOVERVIEWGENERALRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPOVERVIEWGENERALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/InstanceBackupOverview.h>
#include <tencentcloud/bdrc/v20260330/model/FileBackupOverview.h>
#include <tencentcloud/bdrc/v20260330/model/BackupPolicyOverview.h>
#include <tencentcloud/bdrc/v20260330/model/BackupVaultOverview.h>
#include <tencentcloud/bdrc/v20260330/model/ProtectedResourceOverview.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeBackupOverviewGeneral返回参数结构体
                */
                class DescribeBackupOverviewGeneralResponse : public AbstractModel
                {
                public:
                    DescribeBackupOverviewGeneralResponse();
                    ~DescribeBackupOverviewGeneralResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>整机备份（CVM 备份组）概览数据</p>
                     * @return InstanceBackupOverview <p>整机备份（CVM 备份组）概览数据</p>
                     * 
                     */
                    InstanceBackupOverview GetInstanceBackupOverview() const;

                    /**
                     * 判断参数 InstanceBackupOverview 是否已赋值
                     * @return InstanceBackupOverview 是否已赋值
                     * 
                     */
                    bool InstanceBackupOverviewHasBeenSet() const;

                    /**
                     * 获取<p>文件备份概览数据</p>
                     * @return FileBackupOverview <p>文件备份概览数据</p>
                     * 
                     */
                    FileBackupOverview GetFileBackupOverview() const;

                    /**
                     * 判断参数 FileBackupOverview 是否已赋值
                     * @return FileBackupOverview 是否已赋值
                     * 
                     */
                    bool FileBackupOverviewHasBeenSet() const;

                    /**
                     * 获取<p>备份策略概览</p>
                     * @return BackupPolicyOverview <p>备份策略概览</p>
                     * 
                     */
                    BackupPolicyOverview GetBackupPolicyOverview() const;

                    /**
                     * 判断参数 BackupPolicyOverview 是否已赋值
                     * @return BackupPolicyOverview 是否已赋值
                     * 
                     */
                    bool BackupPolicyOverviewHasBeenSet() const;

                    /**
                     * 获取<p>备份库概览</p>
                     * @return BackupVaultOverview <p>备份库概览</p>
                     * 
                     */
                    BackupVaultOverview GetBackupVaultOverview() const;

                    /**
                     * 判断参数 BackupVaultOverview 是否已赋值
                     * @return BackupVaultOverview 是否已赋值
                     * 
                     */
                    bool BackupVaultOverviewHasBeenSet() const;

                    /**
                     * 获取<p>受保护资源概览</p>
                     * @return ProtectedResourceOverview <p>受保护资源概览</p>
                     * 
                     */
                    ProtectedResourceOverview GetProtectedResourceOverview() const;

                    /**
                     * 判断参数 ProtectedResourceOverview 是否已赋值
                     * @return ProtectedResourceOverview 是否已赋值
                     * 
                     */
                    bool ProtectedResourceOverviewHasBeenSet() const;

                private:

                    /**
                     * <p>整机备份（CVM 备份组）概览数据</p>
                     */
                    InstanceBackupOverview m_instanceBackupOverview;
                    bool m_instanceBackupOverviewHasBeenSet;

                    /**
                     * <p>文件备份概览数据</p>
                     */
                    FileBackupOverview m_fileBackupOverview;
                    bool m_fileBackupOverviewHasBeenSet;

                    /**
                     * <p>备份策略概览</p>
                     */
                    BackupPolicyOverview m_backupPolicyOverview;
                    bool m_backupPolicyOverviewHasBeenSet;

                    /**
                     * <p>备份库概览</p>
                     */
                    BackupVaultOverview m_backupVaultOverview;
                    bool m_backupVaultOverviewHasBeenSet;

                    /**
                     * <p>受保护资源概览</p>
                     */
                    ProtectedResourceOverview m_protectedResourceOverview;
                    bool m_protectedResourceOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPOVERVIEWGENERALRESPONSE_H_
