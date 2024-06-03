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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKBACKUPREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKBACKUPREQUEST_H_

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
                * CreateDiskBackup请求参数结构体
                */
                class CreateDiskBackupRequest : public AbstractModel
                {
                public:
                    CreateDiskBackupRequest();
                    ~CreateDiskBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘ID，可通过 [DescribeDisks](https://cloud.tencent.com/document/api/1207/66093) 接口返回值中的 DiskId 获取。 
                     * @return DiskId 云硬盘ID，可通过 [DescribeDisks](https://cloud.tencent.com/document/api/1207/66093) 接口返回值中的 DiskId 获取。 
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID，可通过 [DescribeDisks](https://cloud.tencent.com/document/api/1207/66093) 接口返回值中的 DiskId 获取。 
                     * @param _diskId 云硬盘ID，可通过 [DescribeDisks](https://cloud.tencent.com/document/api/1207/66093) 接口返回值中的 DiskId 获取。 
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点名称，最大长度为 90 。
                     * @return DiskBackupName 云硬盘备份点名称，最大长度为 90 。
                     * 
                     */
                    std::string GetDiskBackupName() const;

                    /**
                     * 设置云硬盘备份点名称，最大长度为 90 。
                     * @param _diskBackupName 云硬盘备份点名称，最大长度为 90 。
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
                     * 云硬盘ID，可通过 [DescribeDisks](https://cloud.tencent.com/document/api/1207/66093) 接口返回值中的 DiskId 获取。 
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 云硬盘备份点名称，最大长度为 90 。
                     */
                    std::string m_diskBackupName;
                    bool m_diskBackupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEDISKBACKUPREQUEST_H_
