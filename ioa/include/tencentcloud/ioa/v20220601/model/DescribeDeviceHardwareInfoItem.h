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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 终端硬件信息列表Item数据
                */
                class DescribeDeviceHardwareInfoItem : public AbstractModel
                {
                public:
                    DescribeDeviceHardwareInfoItem();
                    ~DescribeDeviceHardwareInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return Id 设备ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置设备ID
                     * @param _id 设备ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备唯一标识符
                     * @return Mid 设备唯一标识符
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置设备唯一标识符
                     * @param _mid 设备唯一标识符
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS
                     * @return OsType OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS
                     * @param _osType OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取终端名
                     * @return Name 终端名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置终端名
                     * @param _name 终端名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取终端用户名
                     * @return UserName 终端用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置终端用户名
                     * @param _userName 终端用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取授权状态（ 4未授权 5已授权）
                     * @return Status 授权状态（ 4未授权 5已授权）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置授权状态（ 4未授权 5已授权）
                     * @param _status 授权状态（ 4未授权 5已授权）
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
                     * 获取设备所属分组ID
                     * @return GroupId 设备所属分组ID
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置设备所属分组ID
                     * @param _groupId 设备所属分组ID
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取设备所属分组名
                     * @return GroupName 设备所属分组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置设备所属分组名
                     * @param _groupName 设备所属分组名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取设备所属分组路径
                     * @return GroupNamePath 设备所属分组路径
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置设备所属分组路径
                     * @param _groupNamePath 设备所属分组路径
                     * 
                     */
                    void SetGroupNamePath(const std::string& _groupNamePath);

                    /**
                     * 判断参数 GroupNamePath 是否已赋值
                     * @return GroupNamePath 是否已赋值
                     * 
                     */
                    bool GroupNamePathHasBeenSet() const;

                    /**
                     * 获取最近登录账户的姓名
                     * @return AccountName 最近登录账户的姓名
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置最近登录账户的姓名
                     * @param _accountName 最近登录账户的姓名
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取出口IP
                     * @return Ip 出口IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置出口IP
                     * @param _ip 出口IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取MAC地址
                     * @return MacAddr MAC地址
                     * 
                     */
                    std::string GetMacAddr() const;

                    /**
                     * 设置MAC地址
                     * @param _macAddr MAC地址
                     * 
                     */
                    void SetMacAddr(const std::string& _macAddr);

                    /**
                     * 判断参数 MacAddr 是否已赋值
                     * @return MacAddr 是否已赋值
                     * 
                     */
                    bool MacAddrHasBeenSet() const;

                    /**
                     * 获取CPU品牌型号
                     * @return Cpu CPU品牌型号
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置CPU品牌型号
                     * @param _cpu CPU品牌型号
                     * 
                     */
                    void SetCpu(const std::string& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存信息
                     * @return Memory 内存信息
                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置内存信息
                     * @param _memory 内存信息
                     * 
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取硬盘信息
                     * @return HardDiskSize 硬盘信息
                     * 
                     */
                    std::string GetHardDiskSize() const;

                    /**
                     * 设置硬盘信息
                     * @param _hardDiskSize 硬盘信息
                     * 
                     */
                    void SetHardDiskSize(const std::string& _hardDiskSize);

                    /**
                     * 判断参数 HardDiskSize 是否已赋值
                     * @return HardDiskSize 是否已赋值
                     * 
                     */
                    bool HardDiskSizeHasBeenSet() const;

                    /**
                     * 获取显示器品牌型号
                     * @return Monitor 显示器品牌型号
                     * 
                     */
                    std::string GetMonitor() const;

                    /**
                     * 设置显示器品牌型号
                     * @param _monitor 显示器品牌型号
                     * 
                     */
                    void SetMonitor(const std::string& _monitor);

                    /**
                     * 判断参数 Monitor 是否已赋值
                     * @return Monitor 是否已赋值
                     * 
                     */
                    bool MonitorHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备唯一标识符
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 终端名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 终端用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 授权状态（ 4未授权 5已授权）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备所属分组ID
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 设备所属分组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 设备所属分组路径
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * 最近登录账户的姓名
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 出口IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * MAC地址
                     */
                    std::string m_macAddr;
                    bool m_macAddrHasBeenSet;

                    /**
                     * CPU品牌型号
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存信息
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 硬盘信息
                     */
                    std::string m_hardDiskSize;
                    bool m_hardDiskSizeHasBeenSet;

                    /**
                     * 显示器品牌型号
                     */
                    std::string m_monitor;
                    bool m_monitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOITEM_H_
