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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机资产详情
                */
                class AssetBaseInfoResponse : public AbstractModel
                {
                public:
                    AssetBaseInfoResponse();
                    ~AssetBaseInfoResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc-id
                     * @return VpcId vpc-id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc-id
                     * @param _vpcId vpc-id
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
                     * 获取vpc-name
                     * @return VpcName vpc-name
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置vpc-name
                     * @param _vpcName vpc-name
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
                     * 获取资产名
                     * @return AssetName 资产名
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名
                     * @param _assetName 资产名
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取操作系统
                     * @return Os 操作系统
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置操作系统
                     * @param _os 操作系统
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取公网ip
                     * @return PublicIp 公网ip
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网ip
                     * @param _publicIp 公网ip
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
                     * 获取内网ip
                     * @return PrivateIp 内网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
                     * @param _privateIp 内网ip
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取账号数量
                     * @return AccountNum 账号数量
                     * 
                     */
                    uint64_t GetAccountNum() const;

                    /**
                     * 设置账号数量
                     * @param _accountNum 账号数量
                     * 
                     */
                    void SetAccountNum(const uint64_t& _accountNum);

                    /**
                     * 判断参数 AccountNum 是否已赋值
                     * @return AccountNum 是否已赋值
                     * 
                     */
                    bool AccountNumHasBeenSet() const;

                    /**
                     * 获取端口数量
                     * @return PortNum 端口数量
                     * 
                     */
                    uint64_t GetPortNum() const;

                    /**
                     * 设置端口数量
                     * @param _portNum 端口数量
                     * 
                     */
                    void SetPortNum(const uint64_t& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     * 
                     */
                    bool PortNumHasBeenSet() const;

                    /**
                     * 获取进程数量
                     * @return ProcessNum 进程数量
                     * 
                     */
                    uint64_t GetProcessNum() const;

                    /**
                     * 设置进程数量
                     * @param _processNum 进程数量
                     * 
                     */
                    void SetProcessNum(const uint64_t& _processNum);

                    /**
                     * 判断参数 ProcessNum 是否已赋值
                     * @return ProcessNum 是否已赋值
                     * 
                     */
                    bool ProcessNumHasBeenSet() const;

                    /**
                     * 获取软件应用数量
                     * @return SoftApplicationNum 软件应用数量
                     * 
                     */
                    uint64_t GetSoftApplicationNum() const;

                    /**
                     * 设置软件应用数量
                     * @param _softApplicationNum 软件应用数量
                     * 
                     */
                    void SetSoftApplicationNum(const uint64_t& _softApplicationNum);

                    /**
                     * 判断参数 SoftApplicationNum 是否已赋值
                     * @return SoftApplicationNum 是否已赋值
                     * 
                     */
                    bool SoftApplicationNumHasBeenSet() const;

                    /**
                     * 获取数据库数量
                     * @return DatabaseNum 数据库数量
                     * 
                     */
                    uint64_t GetDatabaseNum() const;

                    /**
                     * 设置数据库数量
                     * @param _databaseNum 数据库数量
                     * 
                     */
                    void SetDatabaseNum(const uint64_t& _databaseNum);

                    /**
                     * 判断参数 DatabaseNum 是否已赋值
                     * @return DatabaseNum 是否已赋值
                     * 
                     */
                    bool DatabaseNumHasBeenSet() const;

                    /**
                     * 获取Web应用数量
                     * @return WebApplicationNum Web应用数量
                     * 
                     */
                    uint64_t GetWebApplicationNum() const;

                    /**
                     * 设置Web应用数量
                     * @param _webApplicationNum Web应用数量
                     * 
                     */
                    void SetWebApplicationNum(const uint64_t& _webApplicationNum);

                    /**
                     * 判断参数 WebApplicationNum 是否已赋值
                     * @return WebApplicationNum 是否已赋值
                     * 
                     */
                    bool WebApplicationNumHasBeenSet() const;

                    /**
                     * 获取服务数量
                     * @return ServiceNum 服务数量
                     * 
                     */
                    uint64_t GetServiceNum() const;

                    /**
                     * 设置服务数量
                     * @param _serviceNum 服务数量
                     * 
                     */
                    void SetServiceNum(const uint64_t& _serviceNum);

                    /**
                     * 判断参数 ServiceNum 是否已赋值
                     * @return ServiceNum 是否已赋值
                     * 
                     */
                    bool ServiceNumHasBeenSet() const;

                    /**
                     * 获取web框架数量
                     * @return WebFrameworkNum web框架数量
                     * 
                     */
                    uint64_t GetWebFrameworkNum() const;

                    /**
                     * 设置web框架数量
                     * @param _webFrameworkNum web框架数量
                     * 
                     */
                    void SetWebFrameworkNum(const uint64_t& _webFrameworkNum);

                    /**
                     * 判断参数 WebFrameworkNum 是否已赋值
                     * @return WebFrameworkNum 是否已赋值
                     * 
                     */
                    bool WebFrameworkNumHasBeenSet() const;

                    /**
                     * 获取Web站点数量
                     * @return WebSiteNum Web站点数量
                     * 
                     */
                    uint64_t GetWebSiteNum() const;

                    /**
                     * 设置Web站点数量
                     * @param _webSiteNum Web站点数量
                     * 
                     */
                    void SetWebSiteNum(const uint64_t& _webSiteNum);

                    /**
                     * 判断参数 WebSiteNum 是否已赋值
                     * @return WebSiteNum 是否已赋值
                     * 
                     */
                    bool WebSiteNumHasBeenSet() const;

                    /**
                     * 获取Jar包数量
                     * @return JarPackageNum Jar包数量
                     * 
                     */
                    uint64_t GetJarPackageNum() const;

                    /**
                     * 设置Jar包数量
                     * @param _jarPackageNum Jar包数量
                     * 
                     */
                    void SetJarPackageNum(const uint64_t& _jarPackageNum);

                    /**
                     * 判断参数 JarPackageNum 是否已赋值
                     * @return JarPackageNum 是否已赋值
                     * 
                     */
                    bool JarPackageNumHasBeenSet() const;

                    /**
                     * 获取启动服务数量
                     * @return StartServiceNum 启动服务数量
                     * 
                     */
                    uint64_t GetStartServiceNum() const;

                    /**
                     * 设置启动服务数量
                     * @param _startServiceNum 启动服务数量
                     * 
                     */
                    void SetStartServiceNum(const uint64_t& _startServiceNum);

                    /**
                     * 判断参数 StartServiceNum 是否已赋值
                     * @return StartServiceNum 是否已赋值
                     * 
                     */
                    bool StartServiceNumHasBeenSet() const;

                    /**
                     * 获取计划任务数量
                     * @return ScheduledTaskNum 计划任务数量
                     * 
                     */
                    uint64_t GetScheduledTaskNum() const;

                    /**
                     * 设置计划任务数量
                     * @param _scheduledTaskNum 计划任务数量
                     * 
                     */
                    void SetScheduledTaskNum(const uint64_t& _scheduledTaskNum);

                    /**
                     * 判断参数 ScheduledTaskNum 是否已赋值
                     * @return ScheduledTaskNum 是否已赋值
                     * 
                     */
                    bool ScheduledTaskNumHasBeenSet() const;

                    /**
                     * 获取环境变量数量
                     * @return EnvironmentVariableNum 环境变量数量
                     * 
                     */
                    uint64_t GetEnvironmentVariableNum() const;

                    /**
                     * 设置环境变量数量
                     * @param _environmentVariableNum 环境变量数量
                     * 
                     */
                    void SetEnvironmentVariableNum(const uint64_t& _environmentVariableNum);

                    /**
                     * 判断参数 EnvironmentVariableNum 是否已赋值
                     * @return EnvironmentVariableNum 是否已赋值
                     * 
                     */
                    bool EnvironmentVariableNumHasBeenSet() const;

                    /**
                     * 获取内核模块数量
                     * @return KernelModuleNum 内核模块数量
                     * 
                     */
                    uint64_t GetKernelModuleNum() const;

                    /**
                     * 设置内核模块数量
                     * @param _kernelModuleNum 内核模块数量
                     * 
                     */
                    void SetKernelModuleNum(const uint64_t& _kernelModuleNum);

                    /**
                     * 判断参数 KernelModuleNum 是否已赋值
                     * @return KernelModuleNum 是否已赋值
                     * 
                     */
                    bool KernelModuleNumHasBeenSet() const;

                    /**
                     * 获取系统安装包数量
                     * @return SystemInstallationPackageNum 系统安装包数量
                     * 
                     */
                    uint64_t GetSystemInstallationPackageNum() const;

                    /**
                     * 设置系统安装包数量
                     * @param _systemInstallationPackageNum 系统安装包数量
                     * 
                     */
                    void SetSystemInstallationPackageNum(const uint64_t& _systemInstallationPackageNum);

                    /**
                     * 判断参数 SystemInstallationPackageNum 是否已赋值
                     * @return SystemInstallationPackageNum 是否已赋值
                     * 
                     */
                    bool SystemInstallationPackageNumHasBeenSet() const;

                    /**
                     * 获取剩余防护时长
                     * @return SurplusProtectDay 剩余防护时长
                     * 
                     */
                    uint64_t GetSurplusProtectDay() const;

                    /**
                     * 设置剩余防护时长
                     * @param _surplusProtectDay 剩余防护时长
                     * 
                     */
                    void SetSurplusProtectDay(const uint64_t& _surplusProtectDay);

                    /**
                     * 判断参数 SurplusProtectDay 是否已赋值
                     * @return SurplusProtectDay 是否已赋值
                     * 
                     */
                    bool SurplusProtectDayHasBeenSet() const;

                    /**
                     * 获取客户端是否安装  1 已安装 0 未安装
                     * @return CWPStatus 客户端是否安装  1 已安装 0 未安装
                     * 
                     */
                    uint64_t GetCWPStatus() const;

                    /**
                     * 设置客户端是否安装  1 已安装 0 未安装
                     * @param _cWPStatus 客户端是否安装  1 已安装 0 未安装
                     * 
                     */
                    void SetCWPStatus(const uint64_t& _cWPStatus);

                    /**
                     * 判断参数 CWPStatus 是否已赋值
                     * @return CWPStatus 是否已赋值
                     * 
                     */
                    bool CWPStatusHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取防护等级
                     * @return ProtectLevel 防护等级
                     * 
                     */
                    std::string GetProtectLevel() const;

                    /**
                     * 设置防护等级
                     * @param _protectLevel 防护等级
                     * 
                     */
                    void SetProtectLevel(const std::string& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取防护时长
                     * @return ProtectedDay 防护时长
                     * 
                     */
                    uint64_t GetProtectedDay() const;

                    /**
                     * 设置防护时长
                     * @param _protectedDay 防护时长
                     * 
                     */
                    void SetProtectedDay(const uint64_t& _protectedDay);

                    /**
                     * 判断参数 ProtectedDay 是否已赋值
                     * @return ProtectedDay 是否已赋值
                     * 
                     */
                    bool ProtectedDayHasBeenSet() const;

                private:

                    /**
                     * vpc-id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc-name
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 账号数量
                     */
                    uint64_t m_accountNum;
                    bool m_accountNumHasBeenSet;

                    /**
                     * 端口数量
                     */
                    uint64_t m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * 进程数量
                     */
                    uint64_t m_processNum;
                    bool m_processNumHasBeenSet;

                    /**
                     * 软件应用数量
                     */
                    uint64_t m_softApplicationNum;
                    bool m_softApplicationNumHasBeenSet;

                    /**
                     * 数据库数量
                     */
                    uint64_t m_databaseNum;
                    bool m_databaseNumHasBeenSet;

                    /**
                     * Web应用数量
                     */
                    uint64_t m_webApplicationNum;
                    bool m_webApplicationNumHasBeenSet;

                    /**
                     * 服务数量
                     */
                    uint64_t m_serviceNum;
                    bool m_serviceNumHasBeenSet;

                    /**
                     * web框架数量
                     */
                    uint64_t m_webFrameworkNum;
                    bool m_webFrameworkNumHasBeenSet;

                    /**
                     * Web站点数量
                     */
                    uint64_t m_webSiteNum;
                    bool m_webSiteNumHasBeenSet;

                    /**
                     * Jar包数量
                     */
                    uint64_t m_jarPackageNum;
                    bool m_jarPackageNumHasBeenSet;

                    /**
                     * 启动服务数量
                     */
                    uint64_t m_startServiceNum;
                    bool m_startServiceNumHasBeenSet;

                    /**
                     * 计划任务数量
                     */
                    uint64_t m_scheduledTaskNum;
                    bool m_scheduledTaskNumHasBeenSet;

                    /**
                     * 环境变量数量
                     */
                    uint64_t m_environmentVariableNum;
                    bool m_environmentVariableNumHasBeenSet;

                    /**
                     * 内核模块数量
                     */
                    uint64_t m_kernelModuleNum;
                    bool m_kernelModuleNumHasBeenSet;

                    /**
                     * 系统安装包数量
                     */
                    uint64_t m_systemInstallationPackageNum;
                    bool m_systemInstallationPackageNumHasBeenSet;

                    /**
                     * 剩余防护时长
                     */
                    uint64_t m_surplusProtectDay;
                    bool m_surplusProtectDayHasBeenSet;

                    /**
                     * 客户端是否安装  1 已安装 0 未安装
                     */
                    uint64_t m_cWPStatus;
                    bool m_cWPStatusHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 防护等级
                     */
                    std::string m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * 防护时长
                     */
                    uint64_t m_protectedDay;
                    bool m_protectedDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETBASEINFORESPONSE_H_
