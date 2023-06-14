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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_AUDITLOGRESULT_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_AUDITLOGRESULT_H_

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
                * 审计日志
                */
                class AuditLogResult : public AbstractModel
                {
                public:
                    AuditLogResult();
                    ~AuditLogResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取被审计会话的Sid
                     * @return Sid 被审计会话的Sid
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置被审计会话的Sid
                     * @param _sid 被审计会话的Sid
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取审计者的编号
                     * @return Uin 审计者的编号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置审计者的编号
                     * @param _uin 审计者的编号
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取审计动作发生的时间
                     * @return Time 审计动作发生的时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置审计动作发生的时间
                     * @param _time 审计动作发生的时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取审计者的Ip
                     * @return ClientIp 审计者的Ip
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置审计者的Ip
                     * @param _clientIp 审计者的Ip
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取审计动作类型，1--回放、2--中断、3--监控
                     * @return Operation 审计动作类型，1--回放、2--中断、3--监控
                     * 
                     */
                    int64_t GetOperation() const;

                    /**
                     * 设置审计动作类型，1--回放、2--中断、3--监控
                     * @param _operation 审计动作类型，1--回放、2--中断、3--监控
                     * 
                     */
                    void SetOperation(const int64_t& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取被审计主机的Id
                     * @return InstanceId 被审计主机的Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置被审计主机的Id
                     * @param _instanceId 被审计主机的Id
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
                     * 获取被审计主机的主机名
                     * @return DeviceName 被审计主机的主机名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置被审计主机的主机名
                     * @param _deviceName 被审计主机的主机名
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
                     * 获取被审计会话所属的类型，如字符会话
                     * @return Protocol 被审计会话所属的类型，如字符会话
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置被审计会话所属的类型，如字符会话
                     * @param _protocol 被审计会话所属的类型，如字符会话
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取被审计主机的内部Ip
                     * @return PrivateIp 被审计主机的内部Ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置被审计主机的内部Ip
                     * @param _privateIp 被审计主机的内部Ip
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
                     * 获取被审计主机的外部Ip
                     * @return PublicIp 被审计主机的外部Ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置被审计主机的外部Ip
                     * @param _publicIp 被审计主机的外部Ip
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
                     * 获取审计者的子账号
                     * @return SubAccountUin 审计者的子账号
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置审计者的子账号
                     * @param _subAccountUin 审计者的子账号
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 被审计会话的Sid
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 审计者的编号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 审计动作发生的时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 审计者的Ip
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 审计动作类型，1--回放、2--中断、3--监控
                     */
                    int64_t m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 被审计主机的Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 被审计主机的主机名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 被审计会话所属的类型，如字符会话
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 被审计主机的内部Ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 被审计主机的外部Ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 审计者的子账号
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_AUDITLOGRESULT_H_
