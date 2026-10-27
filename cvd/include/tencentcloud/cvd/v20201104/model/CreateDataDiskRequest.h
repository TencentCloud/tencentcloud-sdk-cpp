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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_CREATEDATADISKREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_CREATEDATADISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * CreateDataDisk请求参数结构体
                */
                class CreateDataDiskRequest : public AbstractModel
                {
                public:
                    CreateDataDiskRequest();
                    ~CreateDataDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取数据盘类型，有效值CLOUD_SSD/CLOUD_PREMIUM
                     * @return DiskType 数据盘类型，有效值CLOUD_SSD/CLOUD_PREMIUM
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置数据盘类型，有效值CLOUD_SSD/CLOUD_PREMIUM
                     * @param _diskType 数据盘类型，有效值CLOUD_SSD/CLOUD_PREMIUM
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取数据盘大小
                     * @return DiskSize 数据盘大小
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置数据盘大小
                     * @param _diskSize 数据盘大小
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘快照id
                     * @return SnapShotId 硬盘快照id
                     * 
                     */
                    std::string GetSnapShotId() const;

                    /**
                     * 设置硬盘快照id
                     * @param _snapShotId 硬盘快照id
                     * 
                     */
                    void SetSnapShotId(const std::string& _snapShotId);

                    /**
                     * 判断参数 SnapShotId 是否已赋值
                     * @return SnapShotId 是否已赋值
                     * 
                     */
                    bool SnapShotIdHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据盘类型，有效值CLOUD_SSD/CLOUD_PREMIUM
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 数据盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘快照id
                     */
                    std::string m_snapShotId;
                    bool m_snapShotIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_CREATEDATADISKREQUEST_H_
