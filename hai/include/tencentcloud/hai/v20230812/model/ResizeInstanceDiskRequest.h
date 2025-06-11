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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_RESIZEINSTANCEDISKREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_RESIZEINSTANCEDISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * ResizeInstanceDisk请求参数结构体
                */
                class ResizeInstanceDiskRequest : public AbstractModel
                {
                public:
                    ResizeInstanceDiskRequest();
                    ~ResizeInstanceDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要扩容云盘的HAI实例ID
                     * @return InstanceId 需要扩容云盘的HAI实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要扩容云盘的HAI实例ID
                     * @param _instanceId 需要扩容云盘的HAI实例ID
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
                     * 获取扩容云硬盘大小，单位为GB，必须大于当前云硬盘大小。
                     * @return DiskSize 扩容云硬盘大小，单位为GB，必须大于当前云硬盘大小。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置扩容云硬盘大小，单位为GB，必须大于当前云硬盘大小。
                     * @param _diskSize 扩容云硬盘大小，单位为GB，必须大于当前云硬盘大小。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 需要扩容云盘的HAI实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 扩容云硬盘大小，单位为GB，必须大于当前云硬盘大小。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_RESIZEINSTANCEDISKREQUEST_H_
