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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKBACKUPSDENIEDACTIONSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKBACKUPSDENIEDACTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiskBackupDeniedActions.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDiskBackupsDeniedActions返回参数结构体
                */
                class DescribeDiskBackupsDeniedActionsResponse : public AbstractModel
                {
                public:
                    DescribeDiskBackupsDeniedActionsResponse();
                    ~DescribeDiskBackupsDeniedActionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘备份点操作限制列表详细信息。
                     * @return DiskBackupDeniedActionSet 云硬盘备份点操作限制列表详细信息。
                     * 
                     */
                    std::vector<DiskBackupDeniedActions> GetDiskBackupDeniedActionSet() const;

                    /**
                     * 判断参数 DiskBackupDeniedActionSet 是否已赋值
                     * @return DiskBackupDeniedActionSet 是否已赋值
                     * 
                     */
                    bool DiskBackupDeniedActionSetHasBeenSet() const;

                private:

                    /**
                     * 云硬盘备份点操作限制列表详细信息。
                     */
                    std::vector<DiskBackupDeniedActions> m_diskBackupDeniedActionSet;
                    bool m_diskBackupDeniedActionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKBACKUPSDENIEDACTIONSRESPONSE_H_
