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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPLANTASK_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPLANTASK_H_

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
                * 资产管理计划任务列表
                */
                class AssetPlanTask : public AbstractModel
                {
                public:
                    AssetPlanTask();
                    ~AssetPlanTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认启用状态：1启用，2未启用
                     * @return Status 默认启用状态：1启用，2未启用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置默认启用状态：1启用，2未启用
                     * @param _status 默认启用状态：1启用，2未启用
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
                     * 获取执行周期
                     * @return Cycle 执行周期
                     * 
                     */
                    std::string GetCycle() const;

                    /**
                     * 设置执行周期
                     * @param _cycle 执行周期
                     * 
                     */
                    void SetCycle(const std::string& _cycle);

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取执行命令或脚本
                     * @return Command 执行命令或脚本
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置执行命令或脚本
                     * @param _command 执行命令或脚本
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取启动用户
                     * @return User 启动用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置启动用户
                     * @param _user 启动用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取配置文件路径
                     * @return ConfigPath 配置文件路径
                     * 
                     */
                    std::string GetConfigPath() const;

                    /**
                     * 设置配置文件路径
                     * @param _configPath 配置文件路径
                     * 
                     */
                    void SetConfigPath(const std::string& _configPath);

                    /**
                     * 判断参数 ConfigPath 是否已赋值
                     * @return ConfigPath 是否已赋值
                     * 
                     */
                    bool ConfigPathHasBeenSet() const;

                    /**
                     * 获取服务器IP
                     * @return MachineIp 服务器IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置服务器IP
                     * @param _machineIp 服务器IP
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取服务器名称
                     * @return MachineName 服务器名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置服务器名称
                     * @param _machineName 服务器名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return OsInfo 操作系统
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统
                     * @param _osInfo 操作系统
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param _quuid 主机Quuid
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
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param _uuid 主机uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取数据更新时间
                     * @return UpdateTime 数据更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _updateTime 数据更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取首次采集时间
                     * @return FirstTime 首次采集时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次采集时间
                     * @param _firstTime 首次采集时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取是否新增[0:否|1:是]
                     * @return IsNew 是否新增[0:否|1:是]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置是否新增[0:否|1:是]
                     * @param _isNew 是否新增[0:否|1:是]
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取服务器外网IP
                     * @return MachineWanIp 服务器外网IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置服务器外网IP
                     * @param _machineWanIp 服务器外网IP
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取 附加信息
                     * @return MachineExtraInfo  附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置 附加信息
                     * @param _machineExtraInfo  附加信息
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
                     * 默认启用状态：1启用，2未启用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行周期
                     */
                    std::string m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * 执行命令或脚本
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 启动用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 配置文件路径
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                    /**
                     * 服务器IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 首次采集时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 是否新增[0:否|1:是]
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 服务器外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     *  附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPLANTASK_H_
