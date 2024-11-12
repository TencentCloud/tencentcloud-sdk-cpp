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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPROCESSBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPROCESSBASEINFO_H_

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
                * 资源管理进程基本信息
                */
                class AssetProcessBaseInfo : public AbstractModel
                {
                public:
                    AssetProcessBaseInfo();
                    ~AssetProcessBaseInfo() = default;
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
                     * 获取进程名称
                     * @return Name 进程名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置进程名称
                     * @param _name 进程名称
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
                     * 获取进程说明
                     * @return Desc 进程说明
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置进程说明
                     * @param _desc 进程说明
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return Path 进程路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置进程路径
                     * @param _path 进程路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取进程ID
                     * @return Pid 进程ID
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置进程ID
                     * @param _pid 进程ID
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

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
                     * 获取启动时间
                     * @return StartTime 启动时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启动时间
                     * @param _startTime 启动时间
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
                     * 获取进程TTY
                     * @return Tty 进程TTY
                     * 
                     */
                    std::string GetTty() const;

                    /**
                     * 设置进程TTY
                     * @param _tty 进程TTY
                     * 
                     */
                    void SetTty(const std::string& _tty);

                    /**
                     * 判断参数 Tty 是否已赋值
                     * @return Tty 是否已赋值
                     * 
                     */
                    bool TtyHasBeenSet() const;

                    /**
                     * 获取进程版本
                     * @return Version 进程版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置进程版本
                     * @param _version 进程版本
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
                     * 获取进程用户组
                     * @return GroupName 进程用户组
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置进程用户组
                     * @param _groupName 进程用户组
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取进程MD5
                     * @return Md5 进程MD5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置进程MD5
                     * @param _md5 进程MD5
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取父进程ID
                     * @return Ppid 父进程ID
                     * 
                     */
                    std::string GetPpid() const;

                    /**
                     * 设置父进程ID
                     * @param _ppid 父进程ID
                     * 
                     */
                    void SetPpid(const std::string& _ppid);

                    /**
                     * 判断参数 Ppid 是否已赋值
                     * @return Ppid 是否已赋值
                     * 
                     */
                    bool PpidHasBeenSet() const;

                    /**
                     * 获取父进程名称
                     * @return ParentProcessName 父进程名称
                     * 
                     */
                    std::string GetParentProcessName() const;

                    /**
                     * 设置父进程名称
                     * @param _parentProcessName 父进程名称
                     * 
                     */
                    void SetParentProcessName(const std::string& _parentProcessName);

                    /**
                     * 判断参数 ParentProcessName 是否已赋值
                     * @return ParentProcessName 是否已赋值
                     * 
                     */
                    bool ParentProcessNameHasBeenSet() const;

                    /**
                     * 获取进程状态
                     * @return Status 进程状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置进程状态
                     * @param _status 进程状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数字签名:0无，1有， 999 空，仅Windows
                     * @return HasSign 数字签名:0无，1有， 999 空，仅Windows
                     * 
                     */
                    uint64_t GetHasSign() const;

                    /**
                     * 设置数字签名:0无，1有， 999 空，仅Windows
                     * @param _hasSign 数字签名:0无，1有， 999 空，仅Windows
                     * 
                     */
                    void SetHasSign(const uint64_t& _hasSign);

                    /**
                     * 判断参数 HasSign 是否已赋值
                     * @return HasSign 是否已赋值
                     * 
                     */
                    bool HasSignHasBeenSet() const;

                    /**
                     * 获取是否通过安装包安装：:0否，1是， 999 空，仅linux
                     * @return InstallByPackage 是否通过安装包安装：:0否，1是， 999 空，仅linux
                     * 
                     */
                    uint64_t GetInstallByPackage() const;

                    /**
                     * 设置是否通过安装包安装：:0否，1是， 999 空，仅linux
                     * @param _installByPackage 是否通过安装包安装：:0否，1是， 999 空，仅linux
                     * 
                     */
                    void SetInstallByPackage(const uint64_t& _installByPackage);

                    /**
                     * 判断参数 InstallByPackage 是否已赋值
                     * @return InstallByPackage 是否已赋值
                     * 
                     */
                    bool InstallByPackageHasBeenSet() const;

                    /**
                     * 获取软件包名
                     * @return PackageName 软件包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置软件包名
                     * @param _packageName 软件包名
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

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
                     * 获取
 附加信息

                     * @return MachineExtraInfo 
 附加信息

                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置
 附加信息

                     * @param _machineExtraInfo 
 附加信息

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
                     * 进程名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 进程说明
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 进程ID
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 启动时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 启动参数
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * 进程TTY
                     */
                    std::string m_tty;
                    bool m_ttyHasBeenSet;

                    /**
                     * 进程版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 进程用户组
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 进程MD5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 父进程ID
                     */
                    std::string m_ppid;
                    bool m_ppidHasBeenSet;

                    /**
                     * 父进程名称
                     */
                    std::string m_parentProcessName;
                    bool m_parentProcessNameHasBeenSet;

                    /**
                     * 进程状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数字签名:0无，1有， 999 空，仅Windows
                     */
                    uint64_t m_hasSign;
                    bool m_hasSignHasBeenSet;

                    /**
                     * 是否通过安装包安装：:0否，1是， 999 空，仅linux
                     */
                    uint64_t m_installByPackage;
                    bool m_installByPackageHasBeenSet;

                    /**
                     * 软件包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

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
                     * 
 附加信息

                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETPROCESSBASEINFO_H_
