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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEDISKBACKUPSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEDISKBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DeleteDiskBackups请求参数结构体
                */
                class DeleteDiskBackupsRequest : public AbstractModel
                {
                public:
                    DeleteDiskBackupsRequest();
                    ~DeleteDiskBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘备份点ID列表，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379)接口查询。列表长度最大值为100。
                     * @return DiskBackupIds 云硬盘备份点ID列表，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379)接口查询。列表长度最大值为100。
                     * 
                     */
                    std::vector<std::string> GetDiskBackupIds() const;

                    /**
                     * 设置云硬盘备份点ID列表，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379)接口查询。列表长度最大值为100。
                     * @param _diskBackupIds 云硬盘备份点ID列表，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379)接口查询。列表长度最大值为100。
                     * 
                     */
                    void SetDiskBackupIds(const std::vector<std::string>& _diskBackupIds);

                    /**
                     * 判断参数 DiskBackupIds 是否已赋值
                     * @return DiskBackupIds 是否已赋值
                     * 
                     */
                    bool DiskBackupIdsHasBeenSet() const;

                private:

                    /**
                     * 云硬盘备份点ID列表，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379)接口查询。列表长度最大值为100。
                     */
                    std::vector<std::string> m_diskBackupIds;
                    bool m_diskBackupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEDISKBACKUPSREQUEST_H_
