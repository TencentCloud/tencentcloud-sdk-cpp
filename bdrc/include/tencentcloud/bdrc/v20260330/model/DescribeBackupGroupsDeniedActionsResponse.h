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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPGROUPSDENIEDACTIONSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPGROUPSDENIEDACTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/BackupGroupDeniedAction.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeBackupGroupsDeniedActions返回参数结构体
                */
                class DescribeBackupGroupsDeniedActionsResponse : public AbstractModel
                {
                public:
                    DescribeBackupGroupsDeniedActionsResponse();
                    ~DescribeBackupGroupsDeniedActionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份组不允许操作信息
                     * @return BackupGroupDeniedActionSet 备份组不允许操作信息
                     * 
                     */
                    std::vector<BackupGroupDeniedAction> GetBackupGroupDeniedActionSet() const;

                    /**
                     * 判断参数 BackupGroupDeniedActionSet 是否已赋值
                     * @return BackupGroupDeniedActionSet 是否已赋值
                     * 
                     */
                    bool BackupGroupDeniedActionSetHasBeenSet() const;

                private:

                    /**
                     * 备份组不允许操作信息
                     */
                    std::vector<BackupGroupDeniedAction> m_backupGroupDeniedActionSet;
                    bool m_backupGroupDeniedActionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPGROUPSDENIEDACTIONSRESPONSE_H_
