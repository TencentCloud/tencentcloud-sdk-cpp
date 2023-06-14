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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/InstanceDeviceInfo.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 集群容量信息。
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群状态，0：运行中，1：不在运行
                     * @return Status 集群状态，0：运行中，1：不在运行
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0：运行中，1：不在运行
                     * @param _status 集群状态，0：运行中，1：不在运行
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取读写集群剩余内存容量，单位GB
                     * @return ReadWriteTotalLeaveMemory 读写集群剩余内存容量，单位GB
                     * 
                     */
                    double GetReadWriteTotalLeaveMemory() const;

                    /**
                     * 设置读写集群剩余内存容量，单位GB
                     * @param _readWriteTotalLeaveMemory 读写集群剩余内存容量，单位GB
                     * 
                     */
                    void SetReadWriteTotalLeaveMemory(const double& _readWriteTotalLeaveMemory);

                    /**
                     * 判断参数 ReadWriteTotalLeaveMemory 是否已赋值
                     * @return ReadWriteTotalLeaveMemory 是否已赋值
                     * 
                     */
                    bool ReadWriteTotalLeaveMemoryHasBeenSet() const;

                    /**
                     * 获取读写集群剩余磁盘容量，单位GB
                     * @return ReadWriteTotalLeaveDisk 读写集群剩余磁盘容量，单位GB
                     * 
                     */
                    double GetReadWriteTotalLeaveDisk() const;

                    /**
                     * 设置读写集群剩余磁盘容量，单位GB
                     * @param _readWriteTotalLeaveDisk 读写集群剩余磁盘容量，单位GB
                     * 
                     */
                    void SetReadWriteTotalLeaveDisk(const double& _readWriteTotalLeaveDisk);

                    /**
                     * 判断参数 ReadWriteTotalLeaveDisk 是否已赋值
                     * @return ReadWriteTotalLeaveDisk 是否已赋值
                     * 
                     */
                    bool ReadWriteTotalLeaveDiskHasBeenSet() const;

                    /**
                     * 获取读写集群总内存容量，单位GB
                     * @return ReadWriteTotalMemory 读写集群总内存容量，单位GB
                     * 
                     */
                    double GetReadWriteTotalMemory() const;

                    /**
                     * 设置读写集群总内存容量，单位GB
                     * @param _readWriteTotalMemory 读写集群总内存容量，单位GB
                     * 
                     */
                    void SetReadWriteTotalMemory(const double& _readWriteTotalMemory);

                    /**
                     * 判断参数 ReadWriteTotalMemory 是否已赋值
                     * @return ReadWriteTotalMemory 是否已赋值
                     * 
                     */
                    bool ReadWriteTotalMemoryHasBeenSet() const;

                    /**
                     * 获取读写集群总磁盘容量，单位GB
                     * @return ReadWriteTotalDisk 读写集群总磁盘容量，单位GB
                     * 
                     */
                    double GetReadWriteTotalDisk() const;

                    /**
                     * 设置读写集群总磁盘容量，单位GB
                     * @param _readWriteTotalDisk 读写集群总磁盘容量，单位GB
                     * 
                     */
                    void SetReadWriteTotalDisk(const double& _readWriteTotalDisk);

                    /**
                     * 判断参数 ReadWriteTotalDisk 是否已赋值
                     * @return ReadWriteTotalDisk 是否已赋值
                     * 
                     */
                    bool ReadWriteTotalDiskHasBeenSet() const;

                    /**
                     * 获取只读集群剩余内存容量，单位GB
                     * @return ReadOnlyTotalLeaveMemory 只读集群剩余内存容量，单位GB
                     * 
                     */
                    double GetReadOnlyTotalLeaveMemory() const;

                    /**
                     * 设置只读集群剩余内存容量，单位GB
                     * @param _readOnlyTotalLeaveMemory 只读集群剩余内存容量，单位GB
                     * 
                     */
                    void SetReadOnlyTotalLeaveMemory(const double& _readOnlyTotalLeaveMemory);

                    /**
                     * 判断参数 ReadOnlyTotalLeaveMemory 是否已赋值
                     * @return ReadOnlyTotalLeaveMemory 是否已赋值
                     * 
                     */
                    bool ReadOnlyTotalLeaveMemoryHasBeenSet() const;

                    /**
                     * 获取只读集群剩余磁盘容量，单位GB
                     * @return ReadOnlyTotalLeaveDisk 只读集群剩余磁盘容量，单位GB
                     * 
                     */
                    double GetReadOnlyTotalLeaveDisk() const;

                    /**
                     * 设置只读集群剩余磁盘容量，单位GB
                     * @param _readOnlyTotalLeaveDisk 只读集群剩余磁盘容量，单位GB
                     * 
                     */
                    void SetReadOnlyTotalLeaveDisk(const double& _readOnlyTotalLeaveDisk);

                    /**
                     * 判断参数 ReadOnlyTotalLeaveDisk 是否已赋值
                     * @return ReadOnlyTotalLeaveDisk 是否已赋值
                     * 
                     */
                    bool ReadOnlyTotalLeaveDiskHasBeenSet() const;

                    /**
                     * 获取只读集群总内存容量，单位GB
                     * @return ReadOnlyTotalMemory 只读集群总内存容量，单位GB
                     * 
                     */
                    double GetReadOnlyTotalMemory() const;

                    /**
                     * 设置只读集群总内存容量，单位GB
                     * @param _readOnlyTotalMemory 只读集群总内存容量，单位GB
                     * 
                     */
                    void SetReadOnlyTotalMemory(const double& _readOnlyTotalMemory);

                    /**
                     * 判断参数 ReadOnlyTotalMemory 是否已赋值
                     * @return ReadOnlyTotalMemory 是否已赋值
                     * 
                     */
                    bool ReadOnlyTotalMemoryHasBeenSet() const;

                    /**
                     * 获取只读集群总磁盘容量，单位GB
                     * @return ReadOnlyTotalDisk 只读集群总磁盘容量，单位GB
                     * 
                     */
                    double GetReadOnlyTotalDisk() const;

                    /**
                     * 设置只读集群总磁盘容量，单位GB
                     * @param _readOnlyTotalDisk 只读集群总磁盘容量，单位GB
                     * 
                     */
                    void SetReadOnlyTotalDisk(const double& _readOnlyTotalDisk);

                    /**
                     * 判断参数 ReadOnlyTotalDisk 是否已赋值
                     * @return ReadOnlyTotalDisk 是否已赋值
                     * 
                     */
                    bool ReadOnlyTotalDiskHasBeenSet() const;

                    /**
                     * 获取集群设备详情
                     * @return InstanceDeviceInfos 集群设备详情
                     * 
                     */
                    std::vector<InstanceDeviceInfo> GetInstanceDeviceInfos() const;

                    /**
                     * 设置集群设备详情
                     * @param _instanceDeviceInfos 集群设备详情
                     * 
                     */
                    void SetInstanceDeviceInfos(const std::vector<InstanceDeviceInfo>& _instanceDeviceInfos);

                    /**
                     * 判断参数 InstanceDeviceInfos 是否已赋值
                     * @return InstanceDeviceInfos 是否已赋值
                     * 
                     */
                    bool InstanceDeviceInfosHasBeenSet() const;

                private:

                    /**
                     * 集群状态，0：运行中，1：不在运行
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 读写集群剩余内存容量，单位GB
                     */
                    double m_readWriteTotalLeaveMemory;
                    bool m_readWriteTotalLeaveMemoryHasBeenSet;

                    /**
                     * 读写集群剩余磁盘容量，单位GB
                     */
                    double m_readWriteTotalLeaveDisk;
                    bool m_readWriteTotalLeaveDiskHasBeenSet;

                    /**
                     * 读写集群总内存容量，单位GB
                     */
                    double m_readWriteTotalMemory;
                    bool m_readWriteTotalMemoryHasBeenSet;

                    /**
                     * 读写集群总磁盘容量，单位GB
                     */
                    double m_readWriteTotalDisk;
                    bool m_readWriteTotalDiskHasBeenSet;

                    /**
                     * 只读集群剩余内存容量，单位GB
                     */
                    double m_readOnlyTotalLeaveMemory;
                    bool m_readOnlyTotalLeaveMemoryHasBeenSet;

                    /**
                     * 只读集群剩余磁盘容量，单位GB
                     */
                    double m_readOnlyTotalLeaveDisk;
                    bool m_readOnlyTotalLeaveDiskHasBeenSet;

                    /**
                     * 只读集群总内存容量，单位GB
                     */
                    double m_readOnlyTotalMemory;
                    bool m_readOnlyTotalMemoryHasBeenSet;

                    /**
                     * 只读集群总磁盘容量，单位GB
                     */
                    double m_readOnlyTotalDisk;
                    bool m_readOnlyTotalDiskHasBeenSet;

                    /**
                     * 集群设备详情
                     */
                    std::vector<InstanceDeviceInfo> m_instanceDeviceInfos;
                    bool m_instanceDeviceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_INSTANCEDETAIL_H_
