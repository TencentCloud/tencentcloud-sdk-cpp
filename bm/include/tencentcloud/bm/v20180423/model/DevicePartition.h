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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPARTITION_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/DeviceDiskSizeInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 物理机分区格式
                */
                class DevicePartition : public AbstractModel
                {
                public:
                    DevicePartition();
                    ~DevicePartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统盘大小
                     * @return SystemDiskSize 系统盘大小
                     * 
                     */
                    uint64_t GetSystemDiskSize() const;

                    /**
                     * 设置系统盘大小
                     * @param _systemDiskSize 系统盘大小
                     * 
                     */
                    void SetSystemDiskSize(const uint64_t& _systemDiskSize);

                    /**
                     * 判断参数 SystemDiskSize 是否已赋值
                     * @return SystemDiskSize 是否已赋值
                     * 
                     */
                    bool SystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取数据盘大小
                     * @return DataDiskSize 数据盘大小
                     * 
                     */
                    uint64_t GetDataDiskSize() const;

                    /**
                     * 设置数据盘大小
                     * @param _dataDiskSize 数据盘大小
                     * 
                     */
                    void SetDataDiskSize(const uint64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取是否兼容Uefi
                     * @return SysIsUefiType 是否兼容Uefi
                     * 
                     */
                    bool GetSysIsUefiType() const;

                    /**
                     * 设置是否兼容Uefi
                     * @param _sysIsUefiType 是否兼容Uefi
                     * 
                     */
                    void SetSysIsUefiType(const bool& _sysIsUefiType);

                    /**
                     * 判断参数 SysIsUefiType 是否已赋值
                     * @return SysIsUefiType 是否已赋值
                     * 
                     */
                    bool SysIsUefiTypeHasBeenSet() const;

                    /**
                     * 获取root分区大小
                     * @return SysRootSpace root分区大小
                     * 
                     */
                    uint64_t GetSysRootSpace() const;

                    /**
                     * 设置root分区大小
                     * @param _sysRootSpace root分区大小
                     * 
                     */
                    void SetSysRootSpace(const uint64_t& _sysRootSpace);

                    /**
                     * 判断参数 SysRootSpace 是否已赋值
                     * @return SysRootSpace 是否已赋值
                     * 
                     */
                    bool SysRootSpaceHasBeenSet() const;

                    /**
                     * 获取Swaporuefi分区大小
                     * @return SysSwaporuefiSpace Swaporuefi分区大小
                     * 
                     */
                    uint64_t GetSysSwaporuefiSpace() const;

                    /**
                     * 设置Swaporuefi分区大小
                     * @param _sysSwaporuefiSpace Swaporuefi分区大小
                     * 
                     */
                    void SetSysSwaporuefiSpace(const uint64_t& _sysSwaporuefiSpace);

                    /**
                     * 判断参数 SysSwaporuefiSpace 是否已赋值
                     * @return SysSwaporuefiSpace 是否已赋值
                     * 
                     */
                    bool SysSwaporuefiSpaceHasBeenSet() const;

                    /**
                     * 获取Usrlocal分区大小
                     * @return SysUsrlocalSpace Usrlocal分区大小
                     * 
                     */
                    uint64_t GetSysUsrlocalSpace() const;

                    /**
                     * 设置Usrlocal分区大小
                     * @param _sysUsrlocalSpace Usrlocal分区大小
                     * 
                     */
                    void SetSysUsrlocalSpace(const uint64_t& _sysUsrlocalSpace);

                    /**
                     * 判断参数 SysUsrlocalSpace 是否已赋值
                     * @return SysUsrlocalSpace 是否已赋值
                     * 
                     */
                    bool SysUsrlocalSpaceHasBeenSet() const;

                    /**
                     * 获取data分区大小
                     * @return SysDataSpace data分区大小
                     * 
                     */
                    uint64_t GetSysDataSpace() const;

                    /**
                     * 设置data分区大小
                     * @param _sysDataSpace data分区大小
                     * 
                     */
                    void SetSysDataSpace(const uint64_t& _sysDataSpace);

                    /**
                     * 判断参数 SysDataSpace 是否已赋值
                     * @return SysDataSpace 是否已赋值
                     * 
                     */
                    bool SysDataSpaceHasBeenSet() const;

                    /**
                     * 获取硬盘大小详情
                     * @return DeviceDiskSizeInfoSet 硬盘大小详情
                     * 
                     */
                    std::vector<DeviceDiskSizeInfo> GetDeviceDiskSizeInfoSet() const;

                    /**
                     * 设置硬盘大小详情
                     * @param _deviceDiskSizeInfoSet 硬盘大小详情
                     * 
                     */
                    void SetDeviceDiskSizeInfoSet(const std::vector<DeviceDiskSizeInfo>& _deviceDiskSizeInfoSet);

                    /**
                     * 判断参数 DeviceDiskSizeInfoSet 是否已赋值
                     * @return DeviceDiskSizeInfoSet 是否已赋值
                     * 
                     */
                    bool DeviceDiskSizeInfoSetHasBeenSet() const;

                private:

                    /**
                     * 系统盘大小
                     */
                    uint64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * 数据盘大小
                     */
                    uint64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * 是否兼容Uefi
                     */
                    bool m_sysIsUefiType;
                    bool m_sysIsUefiTypeHasBeenSet;

                    /**
                     * root分区大小
                     */
                    uint64_t m_sysRootSpace;
                    bool m_sysRootSpaceHasBeenSet;

                    /**
                     * Swaporuefi分区大小
                     */
                    uint64_t m_sysSwaporuefiSpace;
                    bool m_sysSwaporuefiSpaceHasBeenSet;

                    /**
                     * Usrlocal分区大小
                     */
                    uint64_t m_sysUsrlocalSpace;
                    bool m_sysUsrlocalSpaceHasBeenSet;

                    /**
                     * data分区大小
                     */
                    uint64_t m_sysDataSpace;
                    bool m_sysDataSpaceHasBeenSet;

                    /**
                     * 硬盘大小详情
                     */
                    std::vector<DeviceDiskSizeInfo> m_deviceDiskSizeInfoSet;
                    bool m_deviceDiskSizeInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPARTITION_H_
