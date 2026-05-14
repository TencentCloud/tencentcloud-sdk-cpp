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
                     * 获取<p>云厂商</p>
                     * @return Provider <p>云厂商</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>云厂商</p>
                     * @param _provider <p>云厂商</p>
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
                     * 获取<p>云账号名称</p>
                     * @return CloudAccountName <p>云账号名称</p>
                     * 
                     */
                    std::string GetCloudAccountName() const;

                    /**
                     * 设置<p>云账号名称</p>
                     * @param _cloudAccountName <p>云账号名称</p>
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
                     * 获取<p>云账号</p>
                     * @return CloudAccountId <p>云账号</p>
                     * 
                     */
                    std::string GetCloudAccountId() const;

                    /**
                     * 设置<p>云账号</p>
                     * @param _cloudAccountId <p>云账号</p>
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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
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
                     * 获取<p>IP</p>
                     * @return Ip <p>IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP</p>
                     * @param _ip <p>IP</p>
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
                     * 获取<p>端口或者端口范围</p>
                     * @return Port <p>端口或者端口范围</p>
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置<p>端口或者端口范围</p>
                     * @param _port <p>端口或者端口范围</p>
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
                     * 获取<p>开放</p>
                     * @return Status <p>开放</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>开放</p>
                     * @param _status <p>开放</p>
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
                     * 获取<p>风险类型</p>
                     * @return RiskType <p>风险类型</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>风险类型</p>
                     * @param _riskType <p>风险类型</p>
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
                     * 获取<p>acl类型</p>
                     * @return AclType <p>acl类型</p>
                     * 
                     */
                    std::string GetAclType() const;

                    /**
                     * 设置<p>acl类型</p>
                     * @param _aclType <p>acl类型</p>
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
                     * 获取<p>acl列表</p>
                     * @return AclList <p>acl列表</p>
                     * 
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置<p>acl列表</p>
                     * @param _aclList <p>acl列表</p>
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
                     * 获取<p>资产ID</p>
                     * @return AssetId <p>资产ID</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产ID</p>
                     * @param _assetId <p>资产ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>资产类型</p>
                     * @return AssetType <p>资产类型</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p>
                     * @param _assetType <p>资产类型</p>
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
                     * 获取<p>端口服务数量</p>
                     * @return PortServiceCount <p>端口服务数量</p>
                     * 
                     */
                    uint64_t GetPortServiceCount() const;

                    /**
                     * 设置<p>端口服务数量</p>
                     * @param _portServiceCount <p>端口服务数量</p>
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
                     * 获取<p>高危端口数量</p>
                     * @return HighRiskPortServiceCount <p>高危端口数量</p>
                     * 
                     */
                    uint64_t GetHighRiskPortServiceCount() const;

                    /**
                     * 设置<p>高危端口数量</p>
                     * @param _highRiskPortServiceCount <p>高危端口数量</p>
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
                     * 获取<p>web应用数量</p>
                     * @return WebAppCount <p>web应用数量</p>
                     * 
                     */
                    uint64_t GetWebAppCount() const;

                    /**
                     * 设置<p>web应用数量</p>
                     * @param _webAppCount <p>web应用数量</p>
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
                     * 获取<p>有风险web应用数量</p>
                     * @return RiskWebAppCount <p>有风险web应用数量</p>
                     * 
                     */
                    uint64_t GetRiskWebAppCount() const;

                    /**
                     * 设置<p>有风险web应用数量</p>
                     * @param _riskWebAppCount <p>有风险web应用数量</p>
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
                     * 获取<p>弱口令数量</p>
                     * @return WeakPasswordCount <p>弱口令数量</p>
                     * 
                     */
                    uint64_t GetWeakPasswordCount() const;

                    /**
                     * 设置<p>弱口令数量</p>
                     * @param _weakPasswordCount <p>弱口令数量</p>
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
                     * 获取<p>漏洞数量</p>
                     * @return VulCount <p>漏洞数量</p>
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置<p>漏洞数量</p>
                     * @param _vulCount <p>漏洞数量</p>
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
                     * 获取<p>首次发现时间</p>
                     * @return CreateTime <p>首次发现时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>首次发现时间</p>
                     * @param _createTime <p>首次发现时间</p>
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
                     * 获取<p>最近更新时间</p>
                     * @return UpdateTime <p>最近更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近更新时间</p>
                     * @param _updateTime <p>最近更新时间</p>
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
                     * 获取<p>实例类型名称</p>
                     * @return AssetTypeName <p>实例类型名称</p>
                     * 
                     */
                    std::string GetAssetTypeName() const;

                    /**
                     * 设置<p>实例类型名称</p>
                     * @param _assetTypeName <p>实例类型名称</p>
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
                     * 获取<p>开放状态</p>
                     * @return DisplayStatus <p>开放状态</p>
                     * 
                     */
                    std::string GetDisplayStatus() const;

                    /**
                     * 设置<p>开放状态</p>
                     * @param _displayStatus <p>开放状态</p>
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
                     * 获取<p>端口状态</p>
                     * @return DisplayRiskType <p>端口状态</p>
                     * 
                     */
                    std::string GetDisplayRiskType() const;

                    /**
                     * 设置<p>端口状态</p>
                     * @param _displayRiskType <p>端口状态</p>
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
                     * 获取<p>扫描任务状态</p>
                     * @return ScanTaskStatus <p>扫描任务状态</p>
                     * 
                     */
                    std::string GetScanTaskStatus() const;

                    /**
                     * 设置<p>扫描任务状态</p>
                     * @param _scanTaskStatus <p>扫描任务状态</p>
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
                     * 获取<p>uuid</p>
                     * @return Uuid <p>uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>uuid</p>
                     * @param _uuid <p>uuid</p>
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
                     * 获取<p>是否进行过安全体检</p>
                     * @return HasScan <p>是否进行过安全体检</p>
                     * 
                     */
                    std::string GetHasScan() const;

                    /**
                     * 设置<p>是否进行过安全体检</p>
                     * @param _hasScan <p>是否进行过安全体检</p>
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
                     * 获取<p>租户ID</p>
                     * @return AppId <p>租户ID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>租户ID</p>
                     * @param _appId <p>租户ID</p>
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
                     * 获取<p>租户ID字符串</p>
                     * @return AppIdStr <p>租户ID字符串</p>
                     * 
                     */
                    std::string GetAppIdStr() const;

                    /**
                     * 设置<p>租户ID字符串</p>
                     * @param _appIdStr <p>租户ID字符串</p>
                     * 
                     */
                    void SetAppIdStr(const std::string& _appIdStr);

                    /**
                     * 判断参数 AppIdStr 是否已赋值
                     * @return AppIdStr 是否已赋值
                     * 
                     */
                    bool AppIdStrHasBeenSet() const;

                    /**
                     * 获取<p>记录ID</p>
                     * @return ExposureID <p>记录ID</p>
                     * 
                     */
                    uint64_t GetExposureID() const;

                    /**
                     * 设置<p>记录ID</p>
                     * @param _exposureID <p>记录ID</p>
                     * 
                     */
                    void SetExposureID(const uint64_t& _exposureID);

                    /**
                     * 判断参数 ExposureID 是否已赋值
                     * @return ExposureID 是否已赋值
                     * 
                     */
                    bool ExposureIDHasBeenSet() const;

                    /**
                     * 获取<p>端口开放数量</p>
                     * @return PortDetectCount <p>端口开放数量</p>
                     * 
                     */
                    uint64_t GetPortDetectCount() const;

                    /**
                     * 设置<p>端口开放数量</p>
                     * @param _portDetectCount <p>端口开放数量</p>
                     * 
                     */
                    void SetPortDetectCount(const uint64_t& _portDetectCount);

                    /**
                     * 判断参数 PortDetectCount 是否已赋值
                     * @return PortDetectCount 是否已赋值
                     * 
                     */
                    bool PortDetectCountHasBeenSet() const;

                    /**
                     * 获取<p>端口开放结果</p>
                     * @return PortDetectResult <p>端口开放结果</p>
                     * 
                     */
                    std::string GetPortDetectResult() const;

                    /**
                     * 设置<p>端口开放结果</p>
                     * @param _portDetectResult <p>端口开放结果</p>
                     * 
                     */
                    void SetPortDetectResult(const std::string& _portDetectResult);

                    /**
                     * 判断参数 PortDetectResult 是否已赋值
                     * @return PortDetectResult 是否已赋值
                     * 
                     */
                    bool PortDetectResultHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tag <p>标签</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tag <p>标签</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Comment <p>备注</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _comment <p>备注</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>待治理风险数量</p>
                     * @return ToGovernedRiskCount <p>待治理风险数量</p>
                     * 
                     */
                    uint64_t GetToGovernedRiskCount() const;

                    /**
                     * 设置<p>待治理风险数量</p>
                     * @param _toGovernedRiskCount <p>待治理风险数量</p>
                     * 
                     */
                    void SetToGovernedRiskCount(const uint64_t& _toGovernedRiskCount);

                    /**
                     * 判断参数 ToGovernedRiskCount 是否已赋值
                     * @return ToGovernedRiskCount 是否已赋值
                     * 
                     */
                    bool ToGovernedRiskCountHasBeenSet() const;

                    /**
                     * 获取<p>待治理风险内容</p>
                     * @return ToGovernedRiskContent <p>待治理风险内容</p>
                     * 
                     */
                    std::string GetToGovernedRiskContent() const;

                    /**
                     * 设置<p>待治理风险内容</p>
                     * @param _toGovernedRiskContent <p>待治理风险内容</p>
                     * 
                     */
                    void SetToGovernedRiskContent(const std::string& _toGovernedRiskContent);

                    /**
                     * 判断参数 ToGovernedRiskContent 是否已赋值
                     * @return ToGovernedRiskContent 是否已赋值
                     * 
                     */
                    bool ToGovernedRiskContentHasBeenSet() const;

                    /**
                     * 获取<p>资产类型图标</p>
                     * @return AssetTypeIconURL <p>资产类型图标</p>
                     * 
                     */
                    std::string GetAssetTypeIconURL() const;

                    /**
                     * 设置<p>资产类型图标</p>
                     * @param _assetTypeIconURL <p>资产类型图标</p>
                     * 
                     */
                    void SetAssetTypeIconURL(const std::string& _assetTypeIconURL);

                    /**
                     * 判断参数 AssetTypeIconURL 是否已赋值
                     * @return AssetTypeIconURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconURLHasBeenSet() const;

                    /**
                     * 获取<p>资产类型3D图标</p>
                     * @return AssetTypeIconSolidURL <p>资产类型3D图标</p>
                     * 
                     */
                    std::string GetAssetTypeIconSolidURL() const;

                    /**
                     * 设置<p>资产类型3D图标</p>
                     * @param _assetTypeIconSolidURL <p>资产类型3D图标</p>
                     * 
                     */
                    void SetAssetTypeIconSolidURL(const std::string& _assetTypeIconSolidURL);

                    /**
                     * 判断参数 AssetTypeIconSolidURL 是否已赋值
                     * @return AssetTypeIconSolidURL 是否已赋值
                     * 
                     */
                    bool AssetTypeIconSolidURLHasBeenSet() const;

                private:

                    /**
                     * <p>云厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>云账号名称</p>
                     */
                    std::string m_cloudAccountName;
                    bool m_cloudAccountNameHasBeenSet;

                    /**
                     * <p>云账号</p>
                     */
                    std::string m_cloudAccountId;
                    bool m_cloudAccountIdHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>端口或者端口范围</p>
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>开放</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>风险类型</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>acl类型</p>
                     */
                    std::string m_aclType;
                    bool m_aclTypeHasBeenSet;

                    /**
                     * <p>acl列表</p>
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * <p>资产ID</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>端口服务数量</p>
                     */
                    uint64_t m_portServiceCount;
                    bool m_portServiceCountHasBeenSet;

                    /**
                     * <p>高危端口数量</p>
                     */
                    uint64_t m_highRiskPortServiceCount;
                    bool m_highRiskPortServiceCountHasBeenSet;

                    /**
                     * <p>web应用数量</p>
                     */
                    uint64_t m_webAppCount;
                    bool m_webAppCountHasBeenSet;

                    /**
                     * <p>有风险web应用数量</p>
                     */
                    uint64_t m_riskWebAppCount;
                    bool m_riskWebAppCountHasBeenSet;

                    /**
                     * <p>弱口令数量</p>
                     */
                    uint64_t m_weakPasswordCount;
                    bool m_weakPasswordCountHasBeenSet;

                    /**
                     * <p>漏洞数量</p>
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * <p>首次发现时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>实例类型名称</p>
                     */
                    std::string m_assetTypeName;
                    bool m_assetTypeNameHasBeenSet;

                    /**
                     * <p>开放状态</p>
                     */
                    std::string m_displayStatus;
                    bool m_displayStatusHasBeenSet;

                    /**
                     * <p>端口状态</p>
                     */
                    std::string m_displayRiskType;
                    bool m_displayRiskTypeHasBeenSet;

                    /**
                     * <p>扫描任务状态</p>
                     */
                    std::string m_scanTaskStatus;
                    bool m_scanTaskStatusHasBeenSet;

                    /**
                     * <p>uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>是否进行过安全体检</p>
                     */
                    std::string m_hasScan;
                    bool m_hasScanHasBeenSet;

                    /**
                     * <p>租户ID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>租户ID字符串</p>
                     */
                    std::string m_appIdStr;
                    bool m_appIdStrHasBeenSet;

                    /**
                     * <p>记录ID</p>
                     */
                    uint64_t m_exposureID;
                    bool m_exposureIDHasBeenSet;

                    /**
                     * <p>端口开放数量</p>
                     */
                    uint64_t m_portDetectCount;
                    bool m_portDetectCountHasBeenSet;

                    /**
                     * <p>端口开放结果</p>
                     */
                    std::string m_portDetectResult;
                    bool m_portDetectResultHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>待治理风险数量</p>
                     */
                    uint64_t m_toGovernedRiskCount;
                    bool m_toGovernedRiskCountHasBeenSet;

                    /**
                     * <p>待治理风险内容</p>
                     */
                    std::string m_toGovernedRiskContent;
                    bool m_toGovernedRiskContentHasBeenSet;

                    /**
                     * <p>资产类型图标</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                    /**
                     * <p>资产类型3D图标</p>
                     */
                    std::string m_assetTypeIconSolidURL;
                    bool m_assetTypeIconSolidURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPOSESITEM_H_
