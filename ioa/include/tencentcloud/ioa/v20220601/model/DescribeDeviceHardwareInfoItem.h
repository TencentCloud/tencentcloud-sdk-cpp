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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DeviceNetworkCardBrief.h>
#include <tencentcloud/ioa/v20220601/model/DeviceVideoCardBrief.h>


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
                     * 获取<p>设备ID</p>
                     * @return Id <p>设备ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _id <p>设备ID</p>
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
                     * 获取<p>设备唯一标识符</p>
                     * @return Mid <p>设备唯一标识符</p>
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置<p>设备唯一标识符</p>
                     * @param _mid <p>设备唯一标识符</p>
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
                     * 获取<p>OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS</p>
                     * @return OsType <p>OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS</p>
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置<p>OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS</p>
                     * @param _osType <p>OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS</p>
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
                     * 获取<p>终端名</p>
                     * @return Name <p>终端名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>终端名</p>
                     * @param _name <p>终端名</p>
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
                     * 获取<p>终端用户名</p>
                     * @return UserName <p>终端用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>终端用户名</p>
                     * @param _userName <p>终端用户名</p>
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
                     * 获取<p>授权状态（ 4未授权 5已授权）</p>
                     * @return Status <p>授权状态（ 4未授权 5已授权）</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>授权状态（ 4未授权 5已授权）</p>
                     * @param _status <p>授权状态（ 4未授权 5已授权）</p>
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
                     * 获取<p>设备所属分组ID</p>
                     * @return GroupId <p>设备所属分组ID</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>设备所属分组ID</p>
                     * @param _groupId <p>设备所属分组ID</p>
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
                     * 获取<p>设备所属分组名</p>
                     * @return GroupName <p>设备所属分组名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>设备所属分组名</p>
                     * @param _groupName <p>设备所属分组名</p>
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
                     * 获取<p>设备所属分组路径</p>
                     * @return GroupNamePath <p>设备所属分组路径</p>
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置<p>设备所属分组路径</p>
                     * @param _groupNamePath <p>设备所属分组路径</p>
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
                     * 获取<p>最近登录账户的姓名</p>
                     * @return AccountName <p>最近登录账户的姓名</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>最近登录账户的姓名</p>
                     * @param _accountName <p>最近登录账户的姓名</p>
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
                     * 获取<p>出口IP</p>
                     * @return Ip <p>出口IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>出口IP</p>
                     * @param _ip <p>出口IP</p>
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
                     * 获取<p>MAC地址</p>
                     * @return MacAddr <p>MAC地址</p>
                     * 
                     */
                    std::string GetMacAddr() const;

                    /**
                     * 设置<p>MAC地址</p>
                     * @param _macAddr <p>MAC地址</p>
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
                     * 获取<p>CPU品牌型号</p>
                     * @return Cpu <p>CPU品牌型号</p>
                     * 
                     */
                    std::string GetCpu() const;

                    /**
                     * 设置<p>CPU品牌型号</p>
                     * @param _cpu <p>CPU品牌型号</p>
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
                     * 获取<p>内存信息</p>
                     * @return Memory <p>内存信息</p>
                     * 
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置<p>内存信息</p>
                     * @param _memory <p>内存信息</p>
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
                     * 获取<p>硬盘信息</p>
                     * @return HardDiskSize <p>硬盘信息</p>
                     * 
                     */
                    std::string GetHardDiskSize() const;

                    /**
                     * 设置<p>硬盘信息</p>
                     * @param _hardDiskSize <p>硬盘信息</p>
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
                     * 获取<p>显示器品牌型号</p>
                     * @return Monitor <p>显示器品牌型号</p>
                     * 
                     */
                    std::string GetMonitor() const;

                    /**
                     * 设置<p>显示器品牌型号</p>
                     * @param _monitor <p>显示器品牌型号</p>
                     * 
                     */
                    void SetMonitor(const std::string& _monitor);

                    /**
                     * 判断参数 Monitor 是否已赋值
                     * @return Monitor 是否已赋值
                     * 
                     */
                    bool MonitorHasBeenSet() const;

                    /**
                     * 获取<p>终端备注名</p>
                     * @return RemarkName <p>终端备注名</p>
                     * 
                     */
                    std::string GetRemarkName() const;

                    /**
                     * 设置<p>终端备注名</p>
                     * @param _remarkName <p>终端备注名</p>
                     * 
                     */
                    void SetRemarkName(const std::string& _remarkName);

                    /**
                     * 判断参数 RemarkName 是否已赋值
                     * @return RemarkName 是否已赋值
                     * 
                     */
                    bool RemarkNameHasBeenSet() const;

                    /**
                     * 获取<p>BiosUUID（启动盘标识符）</p>
                     * @return BiosUuid <p>BiosUUID（启动盘标识符）</p>
                     * 
                     */
                    std::string GetBiosUuid() const;

                    /**
                     * 设置<p>BiosUUID（启动盘标识符）</p>
                     * @param _biosUuid <p>BiosUUID（启动盘标识符）</p>
                     * 
                     */
                    void SetBiosUuid(const std::string& _biosUuid);

                    /**
                     * 判断参数 BiosUuid 是否已赋值
                     * @return BiosUuid 是否已赋值
                     * 
                     */
                    bool BiosUuidHasBeenSet() const;

                    /**
                     * 获取<p>多网卡数据</p>
                     * @return NetworkCards <p>多网卡数据</p>
                     * 
                     */
                    std::vector<DeviceNetworkCardBrief> GetNetworkCards() const;

                    /**
                     * 设置<p>多网卡数据</p>
                     * @param _networkCards <p>多网卡数据</p>
                     * 
                     */
                    void SetNetworkCards(const std::vector<DeviceNetworkCardBrief>& _networkCards);

                    /**
                     * 判断参数 NetworkCards 是否已赋值
                     * @return NetworkCards 是否已赋值
                     * 
                     */
                    bool NetworkCardsHasBeenSet() const;

                    /**
                     * 获取<p>多显卡数据</p>
                     * @return VideoCards <p>多显卡数据</p>
                     * 
                     */
                    std::vector<DeviceVideoCardBrief> GetVideoCards() const;

                    /**
                     * 设置<p>多显卡数据</p>
                     * @param _videoCards <p>多显卡数据</p>
                     * 
                     */
                    void SetVideoCards(const std::vector<DeviceVideoCardBrief>& _videoCards);

                    /**
                     * 判断参数 VideoCards 是否已赋值
                     * @return VideoCards 是否已赋值
                     * 
                     */
                    bool VideoCardsHasBeenSet() const;

                    /**
                     * 获取<p>主板型号</p>
                     * @return MainBoard <p>主板型号</p>
                     * 
                     */
                    std::string GetMainBoard() const;

                    /**
                     * 设置<p>主板型号</p>
                     * @param _mainBoard <p>主板型号</p>
                     * 
                     */
                    void SetMainBoard(const std::string& _mainBoard);

                    /**
                     * 判断参数 MainBoard 是否已赋值
                     * @return MainBoard 是否已赋值
                     * 
                     */
                    bool MainBoardHasBeenSet() const;

                    /**
                     * 获取<p>主板序列号</p>
                     * @return BaseBoardSn <p>主板序列号</p>
                     * 
                     */
                    std::string GetBaseBoardSn() const;

                    /**
                     * 设置<p>主板序列号</p>
                     * @param _baseBoardSn <p>主板序列号</p>
                     * 
                     */
                    void SetBaseBoardSn(const std::string& _baseBoardSn);

                    /**
                     * 判断参数 BaseBoardSn 是否已赋值
                     * @return BaseBoardSn 是否已赋值
                     * 
                     */
                    bool BaseBoardSnHasBeenSet() const;

                    /**
                     * 获取<p>主板制造商</p>
                     * @return BaseBoardManufacturer <p>主板制造商</p>
                     * 
                     */
                    std::string GetBaseBoardManufacturer() const;

                    /**
                     * 设置<p>主板制造商</p>
                     * @param _baseBoardManufacturer <p>主板制造商</p>
                     * 
                     */
                    void SetBaseBoardManufacturer(const std::string& _baseBoardManufacturer);

                    /**
                     * 判断参数 BaseBoardManufacturer 是否已赋值
                     * @return BaseBoardManufacturer 是否已赋值
                     * 
                     */
                    bool BaseBoardManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>声卡</p>
                     * @return AudioCard <p>声卡</p>
                     * 
                     */
                    std::string GetAudioCard() const;

                    /**
                     * 设置<p>声卡</p>
                     * @param _audioCard <p>声卡</p>
                     * 
                     */
                    void SetAudioCard(const std::string& _audioCard);

                    /**
                     * 判断参数 AudioCard 是否已赋值
                     * @return AudioCard 是否已赋值
                     * 
                     */
                    bool AudioCardHasBeenSet() const;

                private:

                    /**
                     * <p>设备ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>设备唯一标识符</p>
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * <p>OS平台 0 Windows 1 Linux 2 macOS 4 Android 5 iOS</p>
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>终端名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>终端用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>授权状态（ 4未授权 5已授权）</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>设备所属分组ID</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>设备所属分组名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>设备所属分组路径</p>
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * <p>最近登录账户的姓名</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>出口IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>MAC地址</p>
                     */
                    std::string m_macAddr;
                    bool m_macAddrHasBeenSet;

                    /**
                     * <p>CPU品牌型号</p>
                     */
                    std::string m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存信息</p>
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>硬盘信息</p>
                     */
                    std::string m_hardDiskSize;
                    bool m_hardDiskSizeHasBeenSet;

                    /**
                     * <p>显示器品牌型号</p>
                     */
                    std::string m_monitor;
                    bool m_monitorHasBeenSet;

                    /**
                     * <p>终端备注名</p>
                     */
                    std::string m_remarkName;
                    bool m_remarkNameHasBeenSet;

                    /**
                     * <p>BiosUUID（启动盘标识符）</p>
                     */
                    std::string m_biosUuid;
                    bool m_biosUuidHasBeenSet;

                    /**
                     * <p>多网卡数据</p>
                     */
                    std::vector<DeviceNetworkCardBrief> m_networkCards;
                    bool m_networkCardsHasBeenSet;

                    /**
                     * <p>多显卡数据</p>
                     */
                    std::vector<DeviceVideoCardBrief> m_videoCards;
                    bool m_videoCardsHasBeenSet;

                    /**
                     * <p>主板型号</p>
                     */
                    std::string m_mainBoard;
                    bool m_mainBoardHasBeenSet;

                    /**
                     * <p>主板序列号</p>
                     */
                    std::string m_baseBoardSn;
                    bool m_baseBoardSnHasBeenSet;

                    /**
                     * <p>主板制造商</p>
                     */
                    std::string m_baseBoardManufacturer;
                    bool m_baseBoardManufacturerHasBeenSet;

                    /**
                     * <p>声卡</p>
                     */
                    std::string m_audioCard;
                    bool m_audioCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOITEM_H_
