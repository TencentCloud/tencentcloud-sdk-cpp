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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRRELATEDSERVER_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRRELATEDSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防护目录关联服务器列表信息
                */
                class ProtectDirRelatedServer : public AbstractModel
                {
                public:
                    ProtectDirRelatedServer();
                    ~ProtectDirRelatedServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一ID
                     * @return Id 唯一ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置唯一ID
                     * @param _id 唯一ID
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
                     * 获取服务器名称
                     * @return HostName 服务器名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置服务器名称
                     * @param _hostName 服务器名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取服务器IP
                     * @return HostIp 服务器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器IP
                     * @param _hostIp 服务器IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取服务器系统
                     * @return MachineOs 服务器系统
                     * 
                     */
                    std::string GetMachineOs() const;

                    /**
                     * 设置服务器系统
                     * @param _machineOs 服务器系统
                     * 
                     */
                    void SetMachineOs(const std::string& _machineOs);

                    /**
                     * 判断参数 MachineOs 是否已赋值
                     * @return MachineOs 是否已赋值
                     * 
                     */
                    bool MachineOsHasBeenSet() const;

                    /**
                     * 获取关联目录数
                     * @return RelateDirNum 关联目录数
                     * 
                     */
                    uint64_t GetRelateDirNum() const;

                    /**
                     * 设置关联目录数
                     * @param _relateDirNum 关联目录数
                     * 
                     */
                    void SetRelateDirNum(const uint64_t& _relateDirNum);

                    /**
                     * 判断参数 RelateDirNum 是否已赋值
                     * @return RelateDirNum 是否已赋值
                     * 
                     */
                    bool RelateDirNumHasBeenSet() const;

                    /**
                     * 获取防护状态
                     * @return ProtectStatus 防护状态
                     * 
                     */
                    uint64_t GetProtectStatus() const;

                    /**
                     * 设置防护状态
                     * @param _protectStatus 防护状态
                     * 
                     */
                    void SetProtectStatus(const uint64_t& _protectStatus);

                    /**
                     * 判断参数 ProtectStatus 是否已赋值
                     * @return ProtectStatus 是否已赋值
                     * 
                     */
                    bool ProtectStatusHasBeenSet() const;

                    /**
                     * 获取防护开关
                     * @return ProtectSwitch 防护开关
                     * 
                     */
                    uint64_t GetProtectSwitch() const;

                    /**
                     * 设置防护开关
                     * @param _protectSwitch 防护开关
                     * 
                     */
                    void SetProtectSwitch(const uint64_t& _protectSwitch);

                    /**
                     * 判断参数 ProtectSwitch 是否已赋值
                     * @return ProtectSwitch 是否已赋值
                     * 
                     */
                    bool ProtectSwitchHasBeenSet() const;

                    /**
                     * 获取自动恢复开关
                     * @return AutoRestoreSwitchStatus 自动恢复开关
                     * 
                     */
                    uint64_t GetAutoRestoreSwitchStatus() const;

                    /**
                     * 设置自动恢复开关
                     * @param _autoRestoreSwitchStatus 自动恢复开关
                     * 
                     */
                    void SetAutoRestoreSwitchStatus(const uint64_t& _autoRestoreSwitchStatus);

                    /**
                     * 判断参数 AutoRestoreSwitchStatus 是否已赋值
                     * @return AutoRestoreSwitchStatus 是否已赋值
                     * 
                     */
                    bool AutoRestoreSwitchStatusHasBeenSet() const;

                    /**
                     * 获取服务器唯一ID
                     * @return Quuid 服务器唯一ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置服务器唯一ID
                     * @param _quuid 服务器唯一ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取是否已经授权
                     * @return Authorization 是否已经授权
                     * 
                     */
                    bool GetAuthorization() const;

                    /**
                     * 设置是否已经授权
                     * @param _authorization 是否已经授权
                     * 
                     */
                    void SetAuthorization(const bool& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取异常状态
                     * @return Exception 异常状态
                     * 
                     */
                    uint64_t GetException() const;

                    /**
                     * 设置异常状态
                     * @param _exception 异常状态
                     * 
                     */
                    void SetException(const uint64_t& _exception);

                    /**
                     * 判断参数 Exception 是否已赋值
                     * @return Exception 是否已赋值
                     * 
                     */
                    bool ExceptionHasBeenSet() const;

                    /**
                     * 获取过渡进度
                     * @return Progress 过渡进度
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置过渡进度
                     * @param _progress 过渡进度
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取异常信息
                     * @return ExceptionMessage 异常信息
                     * 
                     */
                    std::string GetExceptionMessage() const;

                    /**
                     * 设置异常信息
                     * @param _exceptionMessage 异常信息
                     * 
                     */
                    void SetExceptionMessage(const std::string& _exceptionMessage);

                    /**
                     * 判断参数 ExceptionMessage 是否已赋值
                     * @return ExceptionMessage 是否已赋值
                     * 
                     */
                    bool ExceptionMessageHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 唯一ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 服务器系统
                     */
                    std::string m_machineOs;
                    bool m_machineOsHasBeenSet;

                    /**
                     * 关联目录数
                     */
                    uint64_t m_relateDirNum;
                    bool m_relateDirNumHasBeenSet;

                    /**
                     * 防护状态
                     */
                    uint64_t m_protectStatus;
                    bool m_protectStatusHasBeenSet;

                    /**
                     * 防护开关
                     */
                    uint64_t m_protectSwitch;
                    bool m_protectSwitchHasBeenSet;

                    /**
                     * 自动恢复开关
                     */
                    uint64_t m_autoRestoreSwitchStatus;
                    bool m_autoRestoreSwitchStatusHasBeenSet;

                    /**
                     * 服务器唯一ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 是否已经授权
                     */
                    bool m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * 异常状态
                     */
                    uint64_t m_exception;
                    bool m_exceptionHasBeenSet;

                    /**
                     * 过渡进度
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 异常信息
                     */
                    std::string m_exceptionMessage;
                    bool m_exceptionMessageHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTDIRRELATEDSERVER_H_
