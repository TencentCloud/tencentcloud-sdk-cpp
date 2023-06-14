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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_USERCMDTASKINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_USERCMDTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 自定义脚本任务详细信息
                */
                class UserCmdTaskInfo : public AbstractModel
                {
                public:
                    UserCmdTaskInfo();
                    ~UserCmdTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动编号，可忽略
                     * @return AutoId 自动编号，可忽略
                     * 
                     */
                    uint64_t GetAutoId() const;

                    /**
                     * 设置自动编号，可忽略
                     * @param _autoId 自动编号，可忽略
                     * 
                     */
                    void SetAutoId(const uint64_t& _autoId);

                    /**
                     * 判断参数 AutoId 是否已赋值
                     * @return AutoId 是否已赋值
                     * 
                     */
                    bool AutoIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务开始时间
                     * @return RunBeginTime 任务开始时间
                     * 
                     */
                    std::string GetRunBeginTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _runBeginTime 任务开始时间
                     * 
                     */
                    void SetRunBeginTime(const std::string& _runBeginTime);

                    /**
                     * 判断参数 RunBeginTime 是否已赋值
                     * @return RunBeginTime 是否已赋值
                     * 
                     */
                    bool RunBeginTimeHasBeenSet() const;

                    /**
                     * 获取任务结束时间
                     * @return RunEndTime 任务结束时间
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _runEndTime 任务结束时间
                     * 
                     */
                    void SetRunEndTime(const std::string& _runEndTime);

                    /**
                     * 判断参数 RunEndTime 是否已赋值
                     * @return RunEndTime 是否已赋值
                     * 
                     */
                    bool RunEndTimeHasBeenSet() const;

                    /**
                     * 获取任务状态ID，取值为 -1：进行中；0：成功；>0：失败错误码
                     * @return Status 任务状态ID，取值为 -1：进行中；0：成功；>0：失败错误码
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态ID，取值为 -1：进行中；0：成功；>0：失败错误码
                     * @param _status 任务状态ID，取值为 -1：进行中；0：成功；>0：失败错误码
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
                     * 获取设备别名
                     * @return InstanceName 设备别名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置设备别名
                     * @param _instanceName 设备别名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

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
                     * 获取私有网络名
                     * @return VpcName 私有网络名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名
                     * @param _vpcName 私有网络名
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取私有网络整型ID
                     * @return VpcId 私有网络整型ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络整型ID
                     * @param _vpcId 私有网络整型ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络Cidr
                     * @return VpcCidrBlock 私有网络Cidr
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置私有网络Cidr
                     * @param _vpcCidrBlock 私有网络Cidr
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取子网名
                     * @return SubnetName 子网名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名
                     * @param _subnetName 子网名
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取子网Cidr
                     * @return SubnetCidrBlock 子网Cidr
                     * 
                     */
                    std::string GetSubnetCidrBlock() const;

                    /**
                     * 设置子网Cidr
                     * @param _subnetCidrBlock 子网Cidr
                     * 
                     */
                    void SetSubnetCidrBlock(const std::string& _subnetCidrBlock);

                    /**
                     * 判断参数 SubnetCidrBlock 是否已赋值
                     * @return SubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool SubnetCidrBlockHasBeenSet() const;

                    /**
                     * 获取内网IP
                     * @return LanIp 内网IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置内网IP
                     * @param _lanIp 内网IP
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取脚本内容，base64编码后的值
                     * @return CmdContent 脚本内容，base64编码后的值
                     * 
                     */
                    std::string GetCmdContent() const;

                    /**
                     * 设置脚本内容，base64编码后的值
                     * @param _cmdContent 脚本内容，base64编码后的值
                     * 
                     */
                    void SetCmdContent(const std::string& _cmdContent);

                    /**
                     * 判断参数 CmdContent 是否已赋值
                     * @return CmdContent 是否已赋值
                     * 
                     */
                    bool CmdContentHasBeenSet() const;

                    /**
                     * 获取脚本参数，base64编码后的值
                     * @return CmdParam 脚本参数，base64编码后的值
                     * 
                     */
                    std::string GetCmdParam() const;

                    /**
                     * 设置脚本参数，base64编码后的值
                     * @param _cmdParam 脚本参数，base64编码后的值
                     * 
                     */
                    void SetCmdParam(const std::string& _cmdParam);

                    /**
                     * 判断参数 CmdParam 是否已赋值
                     * @return CmdParam 是否已赋值
                     * 
                     */
                    bool CmdParamHasBeenSet() const;

                    /**
                     * 获取脚本执行结果，base64编码后的值
                     * @return CmdResult 脚本执行结果，base64编码后的值
                     * 
                     */
                    std::string GetCmdResult() const;

                    /**
                     * 设置脚本执行结果，base64编码后的值
                     * @param _cmdResult 脚本执行结果，base64编码后的值
                     * 
                     */
                    void SetCmdResult(const std::string& _cmdResult);

                    /**
                     * 判断参数 CmdResult 是否已赋值
                     * @return CmdResult 是否已赋值
                     * 
                     */
                    bool CmdResultHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户执行脚本结束退出的返回值，没有返回值为-1
                     * @return LastShellExit 用户执行脚本结束退出的返回值，没有返回值为-1
                     * 
                     */
                    int64_t GetLastShellExit() const;

                    /**
                     * 设置用户执行脚本结束退出的返回值，没有返回值为-1
                     * @param _lastShellExit 用户执行脚本结束退出的返回值，没有返回值为-1
                     * 
                     */
                    void SetLastShellExit(const int64_t& _lastShellExit);

                    /**
                     * 判断参数 LastShellExit 是否已赋值
                     * @return LastShellExit 是否已赋值
                     * 
                     */
                    bool LastShellExitHasBeenSet() const;

                private:

                    /**
                     * 自动编号，可忽略
                     */
                    uint64_t m_autoId;
                    bool m_autoIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务开始时间
                     */
                    std::string m_runBeginTime;
                    bool m_runBeginTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * 任务状态ID，取值为 -1：进行中；0：成功；>0：失败错误码
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设备别名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 私有网络名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 私有网络整型ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络Cidr
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 子网名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 子网Cidr
                     */
                    std::string m_subnetCidrBlock;
                    bool m_subnetCidrBlockHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 脚本内容，base64编码后的值
                     */
                    std::string m_cmdContent;
                    bool m_cmdContentHasBeenSet;

                    /**
                     * 脚本参数，base64编码后的值
                     */
                    std::string m_cmdParam;
                    bool m_cmdParamHasBeenSet;

                    /**
                     * 脚本执行结果，base64编码后的值
                     */
                    std::string m_cmdResult;
                    bool m_cmdResultHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户执行脚本结束退出的返回值，没有返回值为-1
                     */
                    int64_t m_lastShellExit;
                    bool m_lastShellExitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_USERCMDTASKINFO_H_
