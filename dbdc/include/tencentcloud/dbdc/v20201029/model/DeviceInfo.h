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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * 设备信息
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    int64_t GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
                     * 
                     */
                    void SetDeviceId(const int64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取设备No
                     * @return DeviceNo 设备No
                     * 
                     */
                    std::string GetDeviceNo() const;

                    /**
                     * 设置设备No
                     * @param _deviceNo 设备No
                     * 
                     */
                    void SetDeviceNo(const std::string& _deviceNo);

                    /**
                     * 判断参数 DeviceNo 是否已赋值
                     * @return DeviceNo 是否已赋值
                     * 
                     */
                    bool DeviceNoHasBeenSet() const;

                    /**
                     * 获取设备类型
                     * @return DevClass 设备类型
                     * 
                     */
                    std::string GetDevClass() const;

                    /**
                     * 设置设备类型
                     * @param _devClass 设备类型
                     * 
                     */
                    void SetDevClass(const std::string& _devClass);

                    /**
                     * 判断参数 DevClass 是否已赋值
                     * @return DevClass 是否已赋值
                     * 
                     */
                    bool DevClassHasBeenSet() const;

                    /**
                     * 获取设备总内存，单位GB
                     * @return MaxMemory 设备总内存，单位GB
                     * 
                     */
                    double GetMaxMemory() const;

                    /**
                     * 设置设备总内存，单位GB
                     * @param _maxMemory 设备总内存，单位GB
                     * 
                     */
                    void SetMaxMemory(const double& _maxMemory);

                    /**
                     * 判断参数 MaxMemory 是否已赋值
                     * @return MaxMemory 是否已赋值
                     * 
                     */
                    bool MaxMemoryHasBeenSet() const;

                    /**
                     * 获取设备总磁盘，单位GB
                     * @return MaxDisk 设备总磁盘，单位GB
                     * 
                     */
                    double GetMaxDisk() const;

                    /**
                     * 设置设备总磁盘，单位GB
                     * @param _maxDisk 设备总磁盘，单位GB
                     * 
                     */
                    void SetMaxDisk(const double& _maxDisk);

                    /**
                     * 判断参数 MaxDisk 是否已赋值
                     * @return MaxDisk 是否已赋值
                     * 
                     */
                    bool MaxDiskHasBeenSet() const;

                    /**
                     * 获取设备剩余内存，单位GB
                     * @return RestMemory 设备剩余内存，单位GB
                     * 
                     */
                    double GetRestMemory() const;

                    /**
                     * 设置设备剩余内存，单位GB
                     * @param _restMemory 设备剩余内存，单位GB
                     * 
                     */
                    void SetRestMemory(const double& _restMemory);

                    /**
                     * 判断参数 RestMemory 是否已赋值
                     * @return RestMemory 是否已赋值
                     * 
                     */
                    bool RestMemoryHasBeenSet() const;

                    /**
                     * 获取设备剩余磁盘，单位GB
                     * @return RestDisk 设备剩余磁盘，单位GB
                     * 
                     */
                    double GetRestDisk() const;

                    /**
                     * 设置设备剩余磁盘，单位GB
                     * @param _restDisk 设备剩余磁盘，单位GB
                     * 
                     */
                    void SetRestDisk(const double& _restDisk);

                    /**
                     * 判断参数 RestDisk 是否已赋值
                     * @return RestDisk 是否已赋值
                     * 
                     */
                    bool RestDiskHasBeenSet() const;

                    /**
                     * 获取设备机器个数
                     * @return RawDeviceNum 设备机器个数
                     * 
                     */
                    uint64_t GetRawDeviceNum() const;

                    /**
                     * 设置设备机器个数
                     * @param _rawDeviceNum 设备机器个数
                     * 
                     */
                    void SetRawDeviceNum(const uint64_t& _rawDeviceNum);

                    /**
                     * 判断参数 RawDeviceNum 是否已赋值
                     * @return RawDeviceNum 是否已赋值
                     * 
                     */
                    bool RawDeviceNumHasBeenSet() const;

                    /**
                     * 获取数据库实例个数
                     * @return InstanceNum 数据库实例个数
                     * 
                     */
                    uint64_t GetInstanceNum() const;

                    /**
                     * 设置数据库实例个数
                     * @param _instanceNum 数据库实例个数
                     * 
                     */
                    void SetInstanceNum(const uint64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    int64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备No
                     */
                    std::string m_deviceNo;
                    bool m_deviceNoHasBeenSet;

                    /**
                     * 设备类型
                     */
                    std::string m_devClass;
                    bool m_devClassHasBeenSet;

                    /**
                     * 设备总内存，单位GB
                     */
                    double m_maxMemory;
                    bool m_maxMemoryHasBeenSet;

                    /**
                     * 设备总磁盘，单位GB
                     */
                    double m_maxDisk;
                    bool m_maxDiskHasBeenSet;

                    /**
                     * 设备剩余内存，单位GB
                     */
                    double m_restMemory;
                    bool m_restMemoryHasBeenSet;

                    /**
                     * 设备剩余磁盘，单位GB
                     */
                    double m_restDisk;
                    bool m_restDiskHasBeenSet;

                    /**
                     * 设备机器个数
                     */
                    uint64_t m_rawDeviceNum;
                    bool m_rawDeviceNumHasBeenSet;

                    /**
                     * 数据库实例个数
                     */
                    uint64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DEVICEINFO_H_
