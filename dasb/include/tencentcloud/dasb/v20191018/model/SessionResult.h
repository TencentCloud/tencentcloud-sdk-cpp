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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SESSIONRESULT_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SESSIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 搜索字符或图形会话时返回的SessionResul结构体
                */
                class SessionResult : public AbstractModel
                {
                public:
                    SessionResult();
                    ~SessionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取姓名
                     * @return RealName 姓名
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名
                     * @param _realName 姓名
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取主机账号
                     * @return Account 主机账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置主机账号
                     * @param _account 主机账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取会话大小
                     * @return Size 会话大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置会话大小
                     * @param _size 会话大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return InstanceId 设备ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备ID
                     * @param _instanceId 设备ID
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
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取内部Ip
                     * @return PrivateIp 内部Ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内部Ip
                     * @param _privateIp 内部Ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取外部Ip
                     * @return PublicIp 外部Ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外部Ip
                     * @param _publicIp 外部Ip
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取来源Ip
                     * @return FromIp 来源Ip
                     * 
                     */
                    std::string GetFromIp() const;

                    /**
                     * 设置来源Ip
                     * @param _fromIp 来源Ip
                     * 
                     */
                    void SetFromIp(const std::string& _fromIp);

                    /**
                     * 判断参数 FromIp 是否已赋值
                     * @return FromIp 是否已赋值
                     * 
                     */
                    bool FromIpHasBeenSet() const;

                    /**
                     * 获取会话持续时长
                     * @return Duration 会话持续时长
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置会话持续时长
                     * @param _duration 会话持续时长
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取该会话内命令数量 ，搜索图形会话时该字段无意义
                     * @return Count 该会话内命令数量 ，搜索图形会话时该字段无意义
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置该会话内命令数量 ，搜索图形会话时该字段无意义
                     * @param _count 该会话内命令数量 ，搜索图形会话时该字段无意义
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取该会话内高危命令数，搜索图形时该字段无意义
                     * @return DangerCount 该会话内高危命令数，搜索图形时该字段无意义
                     * 
                     */
                    uint64_t GetDangerCount() const;

                    /**
                     * 设置该会话内高危命令数，搜索图形时该字段无意义
                     * @param _dangerCount 该会话内高危命令数，搜索图形时该字段无意义
                     * 
                     */
                    void SetDangerCount(const uint64_t& _dangerCount);

                    /**
                     * 判断参数 DangerCount 是否已赋值
                     * @return DangerCount 是否已赋值
                     * 
                     */
                    bool DangerCountHasBeenSet() const;

                    /**
                     * 获取会话状态，如1会话活跃  2会话结束  3强制离线  4其他错误
                     * @return Status 会话状态，如1会话活跃  2会话结束  3强制离线  4其他错误
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置会话状态，如1会话活跃  2会话结束  3强制离线  4其他错误
                     * @param _status 会话状态，如1会话活跃  2会话结束  3强制离线  4其他错误
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取会话Id
                     * @return Id 会话Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置会话Id
                     * @param _id 会话Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备所属的地域
                     * @return ApCode 设备所属的地域
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置设备所属的地域
                     * @param _apCode 设备所属的地域
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取会话协议
                     * @return Protocol 会话协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置会话协议
                     * @param _protocol 会话协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 主机账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 会话大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 内部Ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 外部Ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 来源Ip
                     */
                    std::string m_fromIp;
                    bool m_fromIpHasBeenSet;

                    /**
                     * 会话持续时长
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 该会话内命令数量 ，搜索图形会话时该字段无意义
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 该会话内高危命令数，搜索图形时该字段无意义
                     */
                    uint64_t m_dangerCount;
                    bool m_dangerCountHasBeenSet;

                    /**
                     * 会话状态，如1会话活跃  2会话结束  3强制离线  4其他错误
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 会话Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备所属的地域
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 会话协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SESSIONRESULT_H_
