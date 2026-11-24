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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
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
                     * 获取<p>搜索区间的开始时间</p>
                     * @return StartTime <p>搜索区间的开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>搜索区间的开始时间</p>
                     * @param _startTime <p>搜索区间的开始时间</p>
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
                     * 获取<p>搜索区间的结束时间，不填默认为开始时间到现在为止</p>
                     * @return EndTime <p>搜索区间的结束时间，不填默认为开始时间到现在为止</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>搜索区间的结束时间，不填默认为开始时间到现在为止</p>
                     * @param _endTime <p>搜索区间的结束时间，不填默认为开始时间到现在为止</p>
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
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
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
                     * 获取<p>姓名</p>
                     * @return RealName <p>姓名</p>
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置<p>姓名</p>
                     * @param _realName <p>姓名</p>
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
                     * 获取<p>资产实例ID</p>
                     * @return InstanceId <p>资产实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>资产实例ID</p>
                     * @param _instanceId <p>资产实例ID</p>
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
                     * 获取<p>资产名称</p>
                     * @return DeviceName <p>资产名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>资产名称</p>
                     * @param _deviceName <p>资产名称</p>
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
                     * 获取<p>资产的公网IP</p>
                     * @return PublicIp <p>资产的公网IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>资产的公网IP</p>
                     * @param _publicIp <p>资产的公网IP</p>
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
                     * 获取<p>资产的内网IP</p>
                     * @return PrivateIp <p>资产的内网IP</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>资产的内网IP</p>
                     * @param _privateIp <p>资产的内网IP</p>
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
                     * 获取<p>执行的命令</p>
                     * @return Cmd <p>执行的命令</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置<p>执行的命令</p>
                     * @param _cmd <p>执行的命令</p>
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
                     * 获取<p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * @return Encoding <p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置<p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * @param _encoding <p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
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
                     * 获取<p>根据拦截状态进行过滤：1 - 已放行，2 - 已阻断</p>
                     * @return AuditAction <p>根据拦截状态进行过滤：1 - 已放行，2 - 已阻断</p>
                     * 
                     */
                    std::vector<uint64_t> GetAuditAction() const;

                    /**
                     * 设置<p>根据拦截状态进行过滤：1 - 已放行，2 - 已阻断</p>
                     * @param _auditAction <p>根据拦截状态进行过滤：1 - 已放行，2 - 已阻断</p>
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
                     * 获取<p>每页容量，默认20，最大200</p>
                     * @return Limit <p>每页容量，默认20，最大200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页容量，默认20，最大200</p>
                     * @param _limit <p>每页容量，默认20，最大200</p>
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
                     * 获取<p>分页偏移位置，默认值为0</p>
                     * @return Offset <p>分页偏移位置，默认值为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移位置，默认值为0</p>
                     * @param _offset <p>分页偏移位置，默认值为0</p>
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
                     * <p>搜索区间的开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>搜索区间的结束时间，不填默认为开始时间到现在为止</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>姓名</p>
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * <p>资产实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>资产名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>资产的公网IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>资产的内网IP</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>执行的命令</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * <p>根据拦截状态进行过滤：1 - 已放行，2 - 已阻断</p>
                     */
                    std::vector<uint64_t> m_auditAction;
                    bool m_auditActionHasBeenSet;

                    /**
                     * <p>每页容量，默认20，最大200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移位置，默认值为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDREQUEST_H_
