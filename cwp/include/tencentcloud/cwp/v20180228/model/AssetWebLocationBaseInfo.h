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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONBASEINFO_H_

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
                * 资产管理Web站点列表信息
                */
                class AssetWebLocationBaseInfo : public AbstractModel
                {
                public:
                    AssetWebLocationBaseInfo();
                    ~AssetWebLocationBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取内网IP
                     * @return MachineIp 内网IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置内网IP
                     * @param _machineIp 内网IP
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
                     * 获取外网IP
                     * @return MachineWanIp 外网IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置外网IP
                     * @param _machineWanIp 外网IP
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
                     * 获取域名
                     * @return Name 域名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置域名
                     * @param _name 域名
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
                     * 获取站点端口
                     * @return Port 站点端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置站点端口
                     * @param _port 站点端口
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
                     * 获取站点协议
                     * @return Proto 站点协议
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置站点协议
                     * @param _proto 站点协议
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
                     * 获取服务类型
                     * @return ServiceType 服务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型
                     * @param _serviceType 服务类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取站点路经数
                     * @return PathCount 站点路经数
                     * 
                     */
                    uint64_t GetPathCount() const;

                    /**
                     * 设置站点路经数
                     * @param _pathCount 站点路经数
                     * 
                     */
                    void SetPathCount(const uint64_t& _pathCount);

                    /**
                     * 判断参数 PathCount 是否已赋值
                     * @return PathCount 是否已赋值
                     * 
                     */
                    bool PathCountHasBeenSet() const;

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
                     * 获取主目录
                     * @return MainPath 主目录
                     * 
                     */
                    std::string GetMainPath() const;

                    /**
                     * 设置主目录
                     * @param _mainPath 主目录
                     * 
                     */
                    void SetMainPath(const std::string& _mainPath);

                    /**
                     * 判断参数 MainPath 是否已赋值
                     * @return MainPath 是否已赋值
                     * 
                     */
                    bool MainPathHasBeenSet() const;

                    /**
                     * 获取主目录所有者
                     * @return MainPathOwner 主目录所有者
                     * 
                     */
                    std::string GetMainPathOwner() const;

                    /**
                     * 设置主目录所有者
                     * @param _mainPathOwner 主目录所有者
                     * 
                     */
                    void SetMainPathOwner(const std::string& _mainPathOwner);

                    /**
                     * 判断参数 MainPathOwner 是否已赋值
                     * @return MainPathOwner 是否已赋值
                     * 
                     */
                    bool MainPathOwnerHasBeenSet() const;

                    /**
                     * 获取拥有者权限
                     * @return Permission 拥有者权限
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置拥有者权限
                     * @param _permission 拥有者权限
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
                     * 获取Web站点Id
                     * @return Id Web站点Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Web站点Id
                     * @param _id Web站点Id
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
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 站点协议
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 服务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 站点路经数
                     */
                    uint64_t m_pathCount;
                    bool m_pathCountHasBeenSet;

                    /**
                     * 运行用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 主目录
                     */
                    std::string m_mainPath;
                    bool m_mainPathHasBeenSet;

                    /**
                     * 主目录所有者
                     */
                    std::string m_mainPathOwner;
                    bool m_mainPathOwnerHasBeenSet;

                    /**
                     * 拥有者权限
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

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
                     * Web站点Id
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
                     *  附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONBASEINFO_H_
