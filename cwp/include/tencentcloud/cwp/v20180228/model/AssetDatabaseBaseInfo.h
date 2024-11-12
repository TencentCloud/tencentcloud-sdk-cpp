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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>
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
                * 资源管理数据库列表信息
                */
                class AssetDatabaseBaseInfo : public AbstractModel
                {
                public:
                    AssetDatabaseBaseInfo();
                    ~AssetDatabaseBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机内网IP
                     * @return MachineIp 主机内网IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP
                     * @param _machineIp 主机内网IP
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
                     * 获取主机外网IP
                     * @return MachineWanIp 主机外网IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP
                     * @param _machineWanIp 主机外网IP
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
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
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
                     * 获取操作系统信息
                     * @return OsInfo 操作系统信息
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统信息
                     * @param _osInfo 操作系统信息
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
                     * 获取主机业务组ID
                     * @return ProjectId 主机业务组ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置主机业务组ID
                     * @param _projectId 主机业务组ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取主机标签
                     * @return Tag 主机标签
                     * 
                     */
                    std::vector<MachineTag> GetTag() const;

                    /**
                     * 设置主机标签
                     * @param _tag 主机标签
                     * 
                     */
                    void SetTag(const std::vector<MachineTag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return Name 数据库名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据库名
                     * @param _name 数据库名
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
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取监听端口
                     * @return Port 监听端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置监听端口
                     * @param _port 监听端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Proto 协议
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置协议
                     * @param _proto 协议
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取运行用户
                     * @return User 运行用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置运行用户
                     * @param _user 运行用户
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
                     * 获取绑定IP
                     * @return Ip 绑定IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置绑定IP
                     * @param _ip 绑定IP
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
                     * 获取日志文件路径
                     * @return LogPath 日志文件路径
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置日志文件路径
                     * @param _logPath 日志文件路径
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取数据路径
                     * @return DataPath 数据路径
                     * 
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置数据路径
                     * @param _dataPath 数据路径
                     * 
                     */
                    void SetDataPath(const std::string& _dataPath);

                    /**
                     * 判断参数 DataPath 是否已赋值
                     * @return DataPath 是否已赋值
                     * 
                     */
                    bool DataPathHasBeenSet() const;

                    /**
                     * 获取运行权限
                     * @return Permission 运行权限
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置运行权限
                     * @param _permission 运行权限
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取错误日志路径
                     * @return ErrorLogPath 错误日志路径
                     * 
                     */
                    std::string GetErrorLogPath() const;

                    /**
                     * 设置错误日志路径
                     * @param _errorLogPath 错误日志路径
                     * 
                     */
                    void SetErrorLogPath(const std::string& _errorLogPath);

                    /**
                     * 判断参数 ErrorLogPath 是否已赋值
                     * @return ErrorLogPath 是否已赋值
                     * 
                     */
                    bool ErrorLogPathHasBeenSet() const;

                    /**
                     * 获取插件路径
                     * @return PlugInPath 插件路径
                     * 
                     */
                    std::string GetPlugInPath() const;

                    /**
                     * 设置插件路径
                     * @param _plugInPath 插件路径
                     * 
                     */
                    void SetPlugInPath(const std::string& _plugInPath);

                    /**
                     * 判断参数 PlugInPath 是否已赋值
                     * @return PlugInPath 是否已赋值
                     * 
                     */
                    bool PlugInPathHasBeenSet() const;

                    /**
                     * 获取二进制路径
                     * @return BinPath 二进制路径
                     * 
                     */
                    std::string GetBinPath() const;

                    /**
                     * 设置二进制路径
                     * @param _binPath 二进制路径
                     * 
                     */
                    void SetBinPath(const std::string& _binPath);

                    /**
                     * 判断参数 BinPath 是否已赋值
                     * @return BinPath 是否已赋值
                     * 
                     */
                    bool BinPathHasBeenSet() const;

                    /**
                     * 获取启动参数
                     * @return Param 启动参数
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置启动参数
                     * @param _param 启动参数
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取数据库ID
                     * @return Id 数据库ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置数据库ID
                     * @param _id 数据库ID
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
                     * 获取主机名称
                     * @return MachineName 主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param _machineName 主机名称
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
                     * 主机内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 操作系统信息
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * 主机业务组ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 主机标签
                     */
                    std::vector<MachineTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 监听端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 绑定IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 配置文件路径
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                    /**
                     * 日志文件路径
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * 数据路径
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * 运行权限
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 错误日志路径
                     */
                    std::string m_errorLogPath;
                    bool m_errorLogPathHasBeenSet;

                    /**
                     * 插件路径
                     */
                    std::string m_plugInPath;
                    bool m_plugInPathHasBeenSet;

                    /**
                     * 二进制路径
                     */
                    std::string m_binPath;
                    bool m_binPathHasBeenSet;

                    /**
                     * 启动参数
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 数据库ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

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
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEBASEINFO_H_
