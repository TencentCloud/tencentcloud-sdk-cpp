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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICECLASSPARTITIONINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICECLASSPARTITIONINFO_H_

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
                * RAID和设备分区结构
                */
                class DeviceClassPartitionInfo : public AbstractModel
                {
                public:
                    DeviceClassPartitionInfo();
                    ~DeviceClassPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RAID类型ID
                     * @return RaidId RAID类型ID
                     * 
                     */
                    uint64_t GetRaidId() const;

                    /**
                     * 设置RAID类型ID
                     * @param _raidId RAID类型ID
                     * 
                     */
                    void SetRaidId(const uint64_t& _raidId);

                    /**
                     * 判断参数 RaidId 是否已赋值
                     * @return RaidId 是否已赋值
                     * 
                     */
                    bool RaidIdHasBeenSet() const;

                    /**
                     * 获取RAID名称
                     * @return Raid RAID名称
                     * 
                     */
                    std::string GetRaid() const;

                    /**
                     * 设置RAID名称
                     * @param _raid RAID名称
                     * 
                     */
                    void SetRaid(const std::string& _raid);

                    /**
                     * 判断参数 Raid 是否已赋值
                     * @return Raid 是否已赋值
                     * 
                     */
                    bool RaidHasBeenSet() const;

                    /**
                     * 获取RAID名称（前台展示用）
                     * @return RaidDisplay RAID名称（前台展示用）
                     * 
                     */
                    std::string GetRaidDisplay() const;

                    /**
                     * 设置RAID名称（前台展示用）
                     * @param _raidDisplay RAID名称（前台展示用）
                     * 
                     */
                    void SetRaidDisplay(const std::string& _raidDisplay);

                    /**
                     * 判断参数 RaidDisplay 是否已赋值
                     * @return RaidDisplay 是否已赋值
                     * 
                     */
                    bool RaidDisplayHasBeenSet() const;

                    /**
                     * 获取系统盘总大小（单位GiB）
                     * @return SystemDiskSize 系统盘总大小（单位GiB）
                     * 
                     */
                    uint64_t GetSystemDiskSize() const;

                    /**
                     * 设置系统盘总大小（单位GiB）
                     * @param _systemDiskSize 系统盘总大小（单位GiB）
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
                     * 获取系统盘/分区默认大小（单位GiB）
                     * @return SysRootSpace 系统盘/分区默认大小（单位GiB）
                     * 
                     */
                    uint64_t GetSysRootSpace() const;

                    /**
                     * 设置系统盘/分区默认大小（单位GiB）
                     * @param _sysRootSpace 系统盘/分区默认大小（单位GiB）
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
                     * 获取系统盘swap分区默认大小（单位GiB）
                     * @return SysSwaporuefiSpace 系统盘swap分区默认大小（单位GiB）
                     * 
                     */
                    uint64_t GetSysSwaporuefiSpace() const;

                    /**
                     * 设置系统盘swap分区默认大小（单位GiB）
                     * @param _sysSwaporuefiSpace 系统盘swap分区默认大小（单位GiB）
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
                     * 获取系统盘/usr/local分区默认大小（单位GiB）
                     * @return SysUsrlocalSpace 系统盘/usr/local分区默认大小（单位GiB）
                     * 
                     */
                    uint64_t GetSysUsrlocalSpace() const;

                    /**
                     * 设置系统盘/usr/local分区默认大小（单位GiB）
                     * @param _sysUsrlocalSpace 系统盘/usr/local分区默认大小（单位GiB）
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
                     * 获取系统盘/data分区默认大小（单位GiB）
                     * @return SysDataSpace 系统盘/data分区默认大小（单位GiB）
                     * 
                     */
                    uint64_t GetSysDataSpace() const;

                    /**
                     * 设置系统盘/data分区默认大小（单位GiB）
                     * @param _sysDataSpace 系统盘/data分区默认大小（单位GiB）
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
                     * 获取设备是否是uefi启动方式。0:legacy启动; 1:uefi启动
                     * @return SysIsUefiType 设备是否是uefi启动方式。0:legacy启动; 1:uefi启动
                     * 
                     */
                    uint64_t GetSysIsUefiType() const;

                    /**
                     * 设置设备是否是uefi启动方式。0:legacy启动; 1:uefi启动
                     * @param _sysIsUefiType 设备是否是uefi启动方式。0:legacy启动; 1:uefi启动
                     * 
                     */
                    void SetSysIsUefiType(const uint64_t& _sysIsUefiType);

                    /**
                     * 判断参数 SysIsUefiType 是否已赋值
                     * @return SysIsUefiType 是否已赋值
                     * 
                     */
                    bool SysIsUefiTypeHasBeenSet() const;

                    /**
                     * 获取数据盘总大小
                     * @return DataDiskSize 数据盘总大小
                     * 
                     */
                    uint64_t GetDataDiskSize() const;

                    /**
                     * 设置数据盘总大小
                     * @param _dataDiskSize 数据盘总大小
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
                     * 获取硬盘列表
                     * @return DeviceDiskSizeInfoSet 硬盘列表
                     * 
                     */
                    std::vector<DeviceDiskSizeInfo> GetDeviceDiskSizeInfoSet() const;

                    /**
                     * 设置硬盘列表
                     * @param _deviceDiskSizeInfoSet 硬盘列表
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
                     * RAID类型ID
                     */
                    uint64_t m_raidId;
                    bool m_raidIdHasBeenSet;

                    /**
                     * RAID名称
                     */
                    std::string m_raid;
                    bool m_raidHasBeenSet;

                    /**
                     * RAID名称（前台展示用）
                     */
                    std::string m_raidDisplay;
                    bool m_raidDisplayHasBeenSet;

                    /**
                     * 系统盘总大小（单位GiB）
                     */
                    uint64_t m_systemDiskSize;
                    bool m_systemDiskSizeHasBeenSet;

                    /**
                     * 系统盘/分区默认大小（单位GiB）
                     */
                    uint64_t m_sysRootSpace;
                    bool m_sysRootSpaceHasBeenSet;

                    /**
                     * 系统盘swap分区默认大小（单位GiB）
                     */
                    uint64_t m_sysSwaporuefiSpace;
                    bool m_sysSwaporuefiSpaceHasBeenSet;

                    /**
                     * 系统盘/usr/local分区默认大小（单位GiB）
                     */
                    uint64_t m_sysUsrlocalSpace;
                    bool m_sysUsrlocalSpaceHasBeenSet;

                    /**
                     * 系统盘/data分区默认大小（单位GiB）
                     */
                    uint64_t m_sysDataSpace;
                    bool m_sysDataSpaceHasBeenSet;

                    /**
                     * 设备是否是uefi启动方式。0:legacy启动; 1:uefi启动
                     */
                    uint64_t m_sysIsUefiType;
                    bool m_sysIsUefiTypeHasBeenSet;

                    /**
                     * 数据盘总大小
                     */
                    uint64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * 硬盘列表
                     */
                    std::vector<DeviceDiskSizeInfo> m_deviceDiskSizeInfoSet;
                    bool m_deviceDiskSizeInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICECLASSPARTITIONINFO_H_
