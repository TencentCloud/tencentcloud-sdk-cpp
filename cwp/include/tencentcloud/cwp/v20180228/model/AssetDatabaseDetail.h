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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class AssetDatabaseDetail : public AbstractModel
                {
                public:
                    AssetDatabaseDetail();
                    ~AssetDatabaseDetail() = default;
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
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETDATABASEDETAIL_H_
