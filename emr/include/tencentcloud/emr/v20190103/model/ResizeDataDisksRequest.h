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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESIZEDATADISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESIZEDATADISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ResizeDataDisks请求参数结构体
                */
                class ResizeDataDisksRequest : public AbstractModel
                {
                public:
                    ResizeDataDisksRequest();
                    ~ResizeDataDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR集群实例ID
                     * @return InstanceId EMR集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR集群实例ID
                     * @param _instanceId EMR集群实例ID
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
                     * 获取需要扩充的容量值，容量值需要大于原容量，并且为10的整数倍
                     * @return DiskSize 需要扩充的容量值，容量值需要大于原容量，并且为10的整数倍
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置需要扩充的容量值，容量值需要大于原容量，并且为10的整数倍
                     * @param _diskSize 需要扩充的容量值，容量值需要大于原容量，并且为10的整数倍
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
                     * 获取需要扩容的节点ID列表
                     * @return CvmInstanceIds 需要扩容的节点ID列表
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置需要扩容的节点ID列表
                     * @param _cvmInstanceIds 需要扩容的节点ID列表
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取需要扩容的云盘ID
                     * @return DiskIds 需要扩容的云盘ID
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置需要扩容的云盘ID
                     * @param _diskIds 需要扩容的云盘ID
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
                     * 获取是否扩容全部云硬盘
                     * @return ResizeAll 是否扩容全部云硬盘
                     * 
                     */
                    bool GetResizeAll() const;

                    /**
                     * 设置是否扩容全部云硬盘
                     * @param _resizeAll 是否扩容全部云硬盘
                     * 
                     */
                    void SetResizeAll(const bool& _resizeAll);

                    /**
                     * 判断参数 ResizeAll 是否已赋值
                     * @return ResizeAll 是否已赋值
                     * 
                     */
                    bool ResizeAllHasBeenSet() const;

                private:

                    /**
                     * EMR集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要扩充的容量值，容量值需要大于原容量，并且为10的整数倍
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 需要扩容的节点ID列表
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * 需要扩容的云盘ID
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 是否扩容全部云硬盘
                     */
                    bool m_resizeAll;
                    bool m_resizeAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESIZEDATADISKSREQUEST_H_
