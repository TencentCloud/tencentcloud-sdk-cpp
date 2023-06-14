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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHCOMMANDREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SearchCommand请求参数结构体
                */
                class SearchCommandRequest : public AbstractModel
                {
                public:
                    SearchCommandRequest();
                    ~SearchCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索区间的开始时间
                     * @return StartTime 搜索区间的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置搜索区间的开始时间
                     * @param _startTime 搜索区间的开始时间
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
                     * 获取搜索区间的结束时间，不填默认为开始时间到现在为止
                     * @return EndTime 搜索区间的结束时间，不填默认为开始时间到现在为止
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置搜索区间的结束时间，不填默认为开始时间到现在为止
                     * @param _endTime 搜索区间的结束时间，不填默认为开始时间到现在为止
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
                     * 获取资产实例ID
                     * @return InstanceId 资产实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资产实例ID
                     * @param _instanceId 资产实例ID
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
                     * 获取资产名称
                     * @return DeviceName 资产名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置资产名称
                     * @param _deviceName 资产名称
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
                     * 获取资产的公网IP
                     * @return PublicIp 资产的公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置资产的公网IP
                     * @param _publicIp 资产的公网IP
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
                     * 获取资产的内网IP
                     * @return PrivateIp 资产的内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置资产的内网IP
                     * @param _privateIp 资产的内网IP
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
                     * 获取执行的命令
                     * @return Cmd 执行的命令
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置执行的命令
                     * @param _cmd 执行的命令
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * @return Encoding Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * @param _encoding Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * 
                     */
                    void SetEncoding(const uint64_t& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取根据拦截状态进行过滤：1 - 已执行，2 - 被阻断
                     * @return AuditAction 根据拦截状态进行过滤：1 - 已执行，2 - 被阻断
                     * 
                     */
                    std::vector<uint64_t> GetAuditAction() const;

                    /**
                     * 设置根据拦截状态进行过滤：1 - 已执行，2 - 被阻断
                     * @param _auditAction 根据拦截状态进行过滤：1 - 已执行，2 - 被阻断
                     * 
                     */
                    void SetAuditAction(const std::vector<uint64_t>& _auditAction);

                    /**
                     * 判断参数 AuditAction 是否已赋值
                     * @return AuditAction 是否已赋值
                     * 
                     */
                    bool AuditActionHasBeenSet() const;

                    /**
                     * 获取每页容量，默认20，最大200
                     * @return Limit 每页容量，默认20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页容量，默认20，最大200
                     * @param _limit 每页容量，默认20，最大200
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 搜索区间的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 搜索区间的结束时间，不填默认为开始时间到现在为止
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

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
                     * 资产实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 资产的公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 资产的内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 执行的命令
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * Cmd字段是前端传值是否进行base64.
0:否，1：是
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 根据拦截状态进行过滤：1 - 已执行，2 - 被阻断
                     */
                    std::vector<uint64_t> m_auditAction;
                    bool m_auditActionHasBeenSet;

                    /**
                     * 每页容量，默认20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHCOMMANDREQUEST_H_
