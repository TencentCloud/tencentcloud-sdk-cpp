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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 暴露资产
                */
                class ExposesItem : public AbstractModel
                {
                public:
                    ExposesItem();
                    ~ExposesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云厂商
                     * @return Provider 云厂商
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置云厂商
                     * @param _provider 云厂商
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取云账号名称
                     * @return CloudAccountName 云账号名称
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置云账号名称
                     * @param _cloudAccountName 云账号名称
                     * 
                     */
                    void SetCloudAccountName(const std::string& _cloudAccountName);

                    /**
                     * 判断参数 CloudAccountName 是否已赋值
                     * @return CloudAccountName 是否已赋值
                     * 
                     */
                    bool CloudAccountNameHasBeenSet() const;

                    /**
                     * 获取云账号
                     * @return CloudAccountId 云账号
                     * 
                     */
                    std::string GetCloudAccountId() const;

                    /**
                     * 设置云账号
                     * @param _cloudAccountId 云账号
                     * 
                     */
                    void SetCloudAccountId(const std::string& _cloudAccountId);

                    /**
                     * 判断参数 CloudAccountId 是否已赋值
                     * @return CloudAccountId 是否已赋值
                     * 
                     */
                    bool CloudAccountIdHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return Ip IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP
                     * @param _ip IP
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
                     * 获取端口或者端口范围
                     * @return Port 端口或者端口范围
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口或者端口范围
                     * @param _port 端口或者端口范围
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
                     * 获取开放
                     * @return Status 开放
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置开放
                     * @param _status 开放
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
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取acl类型
                     * @return AclType acl类型
                     * 
                     */
                    std::string GetAclType() const;

                    /**
                     * 设置acl类型
                     * @param _aclType acl类型
                     * 
                     */
                    void SetAclType(const std::string& _aclType);

                    /**
                     * 判断参数 AclType 是否已赋值
                     * @return AclType 是否已赋值
                     * 
                     */
                    bool AclTypeHasBeenSet() const;

                    /**
                     * 获取acl列表
                     * @return AclList acl列表
                     * 
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置acl列表
                     * @param _aclList acl列表
                     * 
                     */
                    void SetAclList(const std::string& _aclList);

                    /**
                     * 判断参数 AclList 是否已赋值
                     * @return AclList 是否已赋值
                     * 
                     */
                    bool AclListHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return AssetId 资产ID
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产ID
                     * @param _assetId 资产ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取端口服务数量
                     * @return PortServiceCount 端口服务数量
                     * 
                     */
                    uint64_t GetPortServiceCount() const;

                    /**
                     * 设置端口服务数量
                     * @param _portServiceCount 端口服务数量
                     * 
                     */
                    void SetPortServiceCount(const uint64_t& _portServiceCount);

                    /**
                     * 判断参数 PortServiceCount 是否已赋值
                     * @return PortServiceCount 是否已赋值
                     * 
                     */
                    bool PortServiceCountHasBeenSet() const;

                    /**
                     * 获取高危端口数量
                     * @return HighRiskPortServiceCount 高危端口数量
                     * 
                     */
                    uint64_t GetHighRiskPortServiceCount() const;

                    /**
                     * 设置高危端口数量
                     * @param _highRiskPortServiceCount 高危端口数量
                     * 
                     */
                    void SetHighRiskPortServiceCount(const uint64_t& _highRiskPortServiceCount);

                    /**
                     * 判断参数 HighRiskPortServiceCount 是否已赋值
                     * @return HighRiskPortServiceCount 是否已赋值
                     * 
                     */
                    bool HighRiskPortServiceCountHasBeenSet() const;

                    /**
                     * 获取web应用数量
                     * @return WebAppCount web应用数量
                     * 
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 设置web应用数量
                     * @param _webAppCount web应用数量
                     * 
                     */
                    void SetWebAppCount(const uint64_t& _webAppCount);

                    /**
                     * 判断参数 WebAppCount 是否已赋值
                     * @return WebAppCount 是否已赋值
                     * 
                     */
                    bool WebAppCountHasBeenSet() const;

                    /**
                     * 获取有风险web应用数量
                     * @return RiskWebAppCount 有风险web应用数量
                     * 
                     */
                    uint64_t GetRiskWebAppCount() const;

                    /**
                     * 设置有风险web应用数量
                     * @param _riskWebAppCount 有风险web应用数量
                     * 
                     */
                    void SetRiskWebAppCount(const uint64_t& _riskWebAppCount);

                    /**
                     * 判断参数 RiskWebAppCount 是否已赋值
                     * @return RiskWebAppCount 是否已赋值
                     * 
                     */
                    bool RiskWebAppCountHasBeenSet() const;

                    /**
                     * 获取弱口令数量
                     * @return WeakPasswordCount 弱口令数量
                     * 
                     */
                    uint64_t GetWeakPasswordCount() const;

                    /**
                     * 设置弱口令数量
                     * @param _weakPasswordCount 弱口令数量
                     * 
                     */
                    void SetWeakPasswordCount(const uint64_t& _weakPasswordCount);

                    /**
                     * 判断参数 WeakPasswordCount 是否已赋值
                     * @return WeakPasswordCount 是否已赋值
                     * 
                     */
                    bool WeakPasswordCountHasBeenSet() const;

                    /**
                     * 获取漏洞数量
                     * @return VulCount 漏洞数量
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置漏洞数量
                     * @param _vulCount 漏洞数量
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取首次发现时间
                     * @return CreateTime 首次发现时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
                     * @param _createTime 首次发现时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近更新时间
                     * @return UpdateTime 最近更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近更新时间
                     * @param _updateTime 最近更新时间
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
                     * 获取实例类型名称
                     * @return AssetTypeName 实例类型名称
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置实例类型名称
                     * @param _assetTypeName 实例类型名称
                     * 
                     */
                    void SetAssetTypeName(const std::string& _assetTypeName);

                    /**
                     * 判断参数 AssetTypeName 是否已赋值
                     * @return AssetTypeName 是否已赋值
                     * 
                     */
                    bool AssetTypeNameHasBeenSet() const;

                    /**
                     * 获取开放状态
                     * @return DisplayStatus 开放状态
                     * 
                     */
                    std::string GetDisplayStatus() const;

                    /**
                     * 设置开放状态
                     * @param _displayStatus 开放状态
                     * 
                     */
                    void SetDisplayStatus(const std::string& _displayStatus);

                    /**
                     * 判断参数 DisplayStatus 是否已赋值
                     * @return DisplayStatus 是否已赋值
                     * 
                     */
                    bool DisplayStatusHasBeenSet() const;

                    /**
                     * 获取端口状态
                     * @return DisplayRiskType 端口状态
                     * 
                     */
                    std::string GetDisplayRiskType() const;

                    /**
                     * 设置端口状态
                     * @param _displayRiskType 端口状态
                     * 
                     */
                    void SetDisplayRiskType(const std::string& _displayRiskType);

                    /**
                     * 判断参数 DisplayRiskType 是否已赋值
                     * @return DisplayRiskType 是否已赋值
                     * 
                     */
                    bool DisplayRiskTypeHasBeenSet() const;

                    /**
                     * 获取扫描任务状态
                     * @return ScanTaskStatus 扫描任务状态
                     * 
                     */
                    std::string GetScanTaskStatus() const;

                    /**
                     * 设置扫描任务状态
                     * @param _scanTaskStatus 扫描任务状态
                     * 
                     */
                    void SetScanTaskStatus(const std::string& _scanTaskStatus);

                    /**
                     * 判断参数 ScanTaskStatus 是否已赋值
                     * @return ScanTaskStatus 是否已赋值
                     * 
                     */
                    bool ScanTaskStatusHasBeenSet() const;

                    /**
                     * 获取uuid
                     * @return Uuid uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置uuid
                     * @param _uuid uuid
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
                     * 获取是否进行过安全体检
                     * @return HasScan 是否进行过安全体检
                     * 
                     */
                    std::string GetHasScan() const;

                    /**
                     * 设置是否进行过安全体检
                     * @param _hasScan 是否进行过安全体检
                     * 
                     */
                    void SetHasScan(const std::string& _hasScan);

                    /**
                     * 判断参数 HasScan 是否已赋值
                     * @return HasScan 是否已赋值
                     * 
                     */
                    bool HasScanHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return AppId 租户ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置租户ID
                     * @param _appId 租户ID
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
                     * 获取租户ID字符串
                     * @return AppIdStr 租户ID字符串
                     * 
                     */
                    std::string GetAppIdStr() const;

                    /**
                     * 设置租户ID字符串
                     * @param _appIdStr 租户ID字符串
                     * 
                     */
                    void SetAppIdStr(const std::string& _appIdStr);

                    /**
                     * 判断参数 AppIdStr 是否已赋值
                     * @return AppIdStr 是否已赋值
                     * 
                     */
                    bool AppIdStrHasBeenSet() const;

                private:

                    /**
                     * 云厂商
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 云账号名称
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * 云账号
                     */
                    std::string m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 端口或者端口范围
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 开放
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * acl类型
                     */
                    std::string m_aclType;
                    bool m_aclTypeHasBeenSet;

                    /**
                     * acl列表
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * 资产ID
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 端口服务数量
                     */
                    uint64_t m_portServiceCount;
                    bool m_portServiceCountHasBeenSet;

                    /**
                     * 高危端口数量
                     */
                    uint64_t m_highRiskPortServiceCount;
                    bool m_highRiskPortServiceCountHasBeenSet;

                    /**
                     * web应用数量
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * 有风险web应用数量
                     */
                    uint64_t m_riskWebAppCount;
                    bool m_riskWebAppCountHasBeenSet;

                    /**
                     * 弱口令数量
                     */
                    uint64_t m_weakPasswordCount;
                    bool m_weakPasswordCountHasBeenSet;

                    /**
                     * 漏洞数量
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例类型名称
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * 开放状态
                     */
                    std::string m_displayStatus;
                    bool m_displayStatusHasBeenSet;

                    /**
                     * 端口状态
                     */
                    std::string m_displayRiskType;
                    bool m_displayRiskTypeHasBeenSet;

                    /**
                     * 扫描任务状态
                     */
                    std::string m_scanTaskStatus;
                    bool m_scanTaskStatusHasBeenSet;

                    /**
                     * uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 是否进行过安全体检
                     */
                    std::string m_hasScan;
                    bool m_hasScanHasBeenSet;

                    /**
                     * 租户ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 租户ID字符串
                     */
                    std::string m_appIdStr;
                    bool m_appIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_
