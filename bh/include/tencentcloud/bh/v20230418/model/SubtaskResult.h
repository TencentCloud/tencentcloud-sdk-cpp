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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SUBTASKRESULT_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SUBTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 运维子任务执行结果
                */
                class SubtaskResult : public AbstractModel
                {
                public:
                    SubtaskResult();
                    ~SubtaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行日志ID
                     * @return Id 执行日志ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置执行日志ID
                     * @param _id 执行日志ID
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
                     * 获取执行主机实例ID
                     * @return InstanceId 执行主机实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置执行主机实例ID
                     * @param _instanceId 执行主机实例ID
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
                     * 获取执行主机名称
                     * @return Name 执行主机名称
                     * @deprecated
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行主机名称
                     * @param _name 执行主机名称
                     * @deprecated
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * @deprecated
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取执行主机地域
                     * @return ApCode 执行主机地域
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置执行主机地域
                     * @param _apCode 执行主机地域
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
                     * 获取执行主机外网IP
                     * @return PublicIp 执行主机外网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置执行主机外网IP
                     * @param _publicIp 执行主机外网IP
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
                     * 获取执行主机内网IP
                     * @return PrivateIp 执行主机内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置执行主机内网IP
                     * @param _privateIp 执行主机内网IP
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
                     * 获取运维任务状态 1 - 执行中，2 - 成功， 3 - 失败，4 - 超时
                     * @return Status 运维任务状态 1 - 执行中，2 - 成功， 3 - 失败，4 - 超时
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置运维任务状态 1 - 执行中，2 - 成功， 3 - 失败，4 - 超时
                     * @param _status 运维任务状态 1 - 执行中，2 - 成功， 3 - 失败，4 - 超时
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
                     * 获取运维任务失败原因
                     * @return Reason 运维任务失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置运维任务失败原因
                     * @param _reason 运维任务失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取运维任务命令退出码
                     * @return ExitCode 运维任务命令退出码
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置运维任务命令退出码
                     * @param _exitCode 运维任务命令退出码
                     * 
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     * 
                     */
                    bool ExitCodeHasBeenSet() const;

                    /**
                     * 获取运维任务开始时间
                     * @return StartTime 运维任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置运维任务开始时间
                     * @param _startTime 运维任务开始时间
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
                     * 获取运维任务结束时间
                     * @return EndTime 运维任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置运维任务结束时间
                     * @param _endTime 运维任务结束时间
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
                     * 获取运维任务执行结果输出。默认超出16384字节的内容会被自动截断
                     * @return StdOut 运维任务执行结果输出。默认超出16384字节的内容会被自动截断
                     * 
                     */
                    std::string GetStdOut() const;

                    /**
                     * 设置运维任务执行结果输出。默认超出16384字节的内容会被自动截断
                     * @param _stdOut 运维任务执行结果输出。默认超出16384字节的内容会被自动截断
                     * 
                     */
                    void SetStdOut(const std::string& _stdOut);

                    /**
                     * 判断参数 StdOut 是否已赋值
                     * @return StdOut 是否已赋值
                     * 
                     */
                    bool StdOutHasBeenSet() const;

                    /**
                     * 获取运维任务执行结果错误
                     * @return StdErr 运维任务执行结果错误
                     * 
                     */
                    std::string GetStdErr() const;

                    /**
                     * 设置运维任务执行结果错误
                     * @param _stdErr 运维任务执行结果错误
                     * 
                     */
                    void SetStdErr(const std::string& _stdErr);

                    /**
                     * 判断参数 StdErr 是否已赋值
                     * @return StdErr 是否已赋值
                     * 
                     */
                    bool StdErrHasBeenSet() const;

                    /**
                     * 获取资产名
                     * @return DeviceName 资产名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置资产名
                     * @param _deviceName 资产名
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
                     * 获取资产账号
                     * @return Account 资产账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置资产账号
                     * @param _account 资产账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                private:

                    /**
                     * 执行日志ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 执行主机实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 执行主机名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 执行主机地域
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 执行主机外网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 执行主机内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 运维任务状态 1 - 执行中，2 - 成功， 3 - 失败，4 - 超时
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运维任务失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 运维任务命令退出码
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * 运维任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运维任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 运维任务执行结果输出。默认超出16384字节的内容会被自动截断
                     */
                    std::string m_stdOut;
                    bool m_stdOutHasBeenSet;

                    /**
                     * 运维任务执行结果错误
                     */
                    std::string m_stdErr;
                    bool m_stdErrHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 资产账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SUBTASKRESULT_H_
