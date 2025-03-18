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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKBACKUPSATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKBACKUPSATTRIBUTEREQUEST_H_

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
                * ModifyDiskBackupsAttribute请求参数结构体
                */
                class ModifyDiskBackupsAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDiskBackupsAttributeRequest();
                    ~ModifyDiskBackupsAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘备份点ID，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379) 接口返回值中的 DiskBackupId 获取。列表长度最大值为100。
                     * @return DiskBackupIds 云硬盘备份点ID，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379) 接口返回值中的 DiskBackupId 获取。列表长度最大值为100。
                     * 
                     */
                    std::vector<std::string> GetDiskBackupIds() const;

                    /**
                     * 设置云硬盘备份点ID，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379) 接口返回值中的 DiskBackupId 获取。列表长度最大值为100。
                     * @param _diskBackupIds 云硬盘备份点ID，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379) 接口返回值中的 DiskBackupId 获取。列表长度最大值为100。
                     * 
                     */
                    void SetDiskBackupIds(const std::vector<std::string>& _diskBackupIds);

                    /**
                     * 判断参数 DiskBackupIds 是否已赋值
                     * @return DiskBackupIds 是否已赋值
                     * 
                     */
                    bool DiskBackupIdsHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点名称，最大长度 90 。
                     * @return DiskBackupName 云硬盘备份点名称，最大长度 90 。
                     * 
                     */
                    std::string GetDiskBackupName() const;

                    /**
                     * 设置云硬盘备份点名称，最大长度 90 。
                     * @param _diskBackupName 云硬盘备份点名称，最大长度 90 。
                     * 
                     */
                    void SetDiskBackupName(const std::string& _diskBackupName);

                    /**
                     * 判断参数 DiskBackupName 是否已赋值
                     * @return DiskBackupName 是否已赋值
                     * 
                     */
                    bool DiskBackupNameHasBeenSet() const;

                private:

                    /**
                     * 云硬盘备份点ID，可通过 [DescribeDiskBackups](https://cloud.tencent.com/document/api/1207/84379) 接口返回值中的 DiskBackupId 获取。列表长度最大值为100。
                     */
                    std::vector<std::string> m_diskBackupIds;
                    bool m_diskBackupIdsHasBeenSet;

                    /**
                     * 云硬盘备份点名称，最大长度 90 。
                     */
                    std::string m_diskBackupName;
                    bool m_diskBackupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKBACKUPSATTRIBUTEREQUEST_H_
