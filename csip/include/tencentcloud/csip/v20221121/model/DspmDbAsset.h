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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetDataScanDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 数据库资产
                */
                class DspmDbAsset : public AbstractModel
                {
                public:
                    DspmDbAsset();
                    ~DspmDbAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产实例Id
                     * @return AssetId 资产实例Id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产实例Id
                     * @param _assetId 资产实例Id
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
                     * 获取 资产名
                     * @return Name  资产名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置 资产名
                     * @param _name  资产名
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
                     * 获取账号数
                     * @return AccountCount 账号数
                     * 
                     */
                    int64_t GetAccountCount() const;

                    /**
                     * 设置账号数
                     * @param _accountCount 账号数
                     * 
                     */
                    void SetAccountCount(const int64_t& _accountCount);

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取公网访问地址，如果有多个，使用';'分割
                     * @return PublicIp 公网访问地址，如果有多个，使用';'分割
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网访问地址，如果有多个，使用';'分割
                     * @param _publicIp 公网访问地址，如果有多个，使用';'分割
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
                     * 获取内网访问地址，如果有多个，使用';'分割
                     * @return PrivateIp 内网访问地址，如果有多个，使用';'分割
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网访问地址，如果有多个，使用';'分割
                     * @param _privateIp 内网访问地址，如果有多个，使用';'分割
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
                     * 获取广域网域名地址，如果有多个，使用';'分割
                     * @return WanDomain 广域网域名地址，如果有多个，使用';'分割
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置广域网域名地址，如果有多个，使用';'分割
                     * @param _wanDomain 广域网域名地址，如果有多个，使用';'分割
                     * 
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     * 
                     */
                    bool WanDomainHasBeenSet() const;

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
                     * 获取资产所在vpc的vpcid
                     * @return VpcId 资产所在vpc的vpcid
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置资产所在vpc的vpcid
                     * @param _vpcId 资产所在vpc的vpcid
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
                     * 获取资产所在vpc的vpc名
                     * @return VpcName 资产所在vpc的vpc名
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置资产所在vpc的vpc名
                     * @param _vpcName 资产所在vpc的vpc名
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
                     * 获取资产所在vpc子网的subnetid
                     * @return SubnetId 资产所在vpc子网的subnetid
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置资产所在vpc子网的subnetid
                     * @param _subnetId 资产所在vpc子网的subnetid
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
                     * 获取资产所在vpc子网名
                     * @return SubnetName 资产所在vpc子网名
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置资产所在vpc子网名
                     * @param _subnetName 资产所在vpc子网名
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
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
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
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取管理者信息。
                     * @return Manager 管理者信息。
                     * 
                     */
                    std::vector<DspmUinUser> GetManager() const;

                    /**
                     * 设置管理者信息。
                     * @param _manager 管理者信息。
                     * 
                     */
                    void SetManager(const std::vector<DspmUinUser>& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                    /**
                     * 获取是否绑定身份。0-未绑定 1-已绑定
                     * @return BindIdentify 是否绑定身份。0-未绑定 1-已绑定
                     * 
                     */
                    int64_t GetBindIdentify() const;

                    /**
                     * 设置是否绑定身份。0-未绑定 1-已绑定
                     * @param _bindIdentify 是否绑定身份。0-未绑定 1-已绑定
                     * 
                     */
                    void SetBindIdentify(const int64_t& _bindIdentify);

                    /**
                     * 判断参数 BindIdentify 是否已赋值
                     * @return BindIdentify 是否已赋值
                     * 
                     */
                    bool BindIdentifyHasBeenSet() const;

                    /**
                     * 获取是否管理员
                     * @return IsManager 是否管理员
                     * 
                     */
                    int64_t GetIsManager() const;

                    /**
                     * 设置是否管理员
                     * @param _isManager 是否管理员
                     * 
                     */
                    void SetIsManager(const int64_t& _isManager);

                    /**
                     * 判断参数 IsManager 是否已赋值
                     * @return IsManager 是否已赋值
                     * 
                     */
                    bool IsManagerHasBeenSet() const;

                    /**
                     * 获取风险统计信息
                     * @return RiskCount 风险统计信息
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置风险统计信息
                     * @param _riskCount 风险统计信息
                     * 
                     */
                    void SetRiskCount(const DspmRiskCount& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取安全建议。
Resolve 立即解决
Reinforcement 加固
None 暂无异常

                     * @return SafetyAdvice 安全建议。
Resolve 立即解决
Reinforcement 加固
None 暂无异常

                     * 
                     */
                    std::string GetSafetyAdvice() const;

                    /**
                     * 设置安全建议。
Resolve 立即解决
Reinforcement 加固
None 暂无异常

                     * @param _safetyAdvice 安全建议。
Resolve 立即解决
Reinforcement 加固
None 暂无异常

                     * 
                     */
                    void SetSafetyAdvice(const std::string& _safetyAdvice);

                    /**
                     * 判断参数 SafetyAdvice 是否已赋值
                     * @return SafetyAdvice 是否已赋值
                     * 
                     */
                    bool SafetyAdviceHasBeenSet() const;

                    /**
                     * 获取日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * @return LogDeliveryStatus 日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * 
                     */
                    int64_t GetLogDeliveryStatus() const;

                    /**
                     * 设置日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * @param _logDeliveryStatus 日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     * 
                     */
                    void SetLogDeliveryStatus(const int64_t& _logDeliveryStatus);

                    /**
                     * 判断参数 LogDeliveryStatus 是否已赋值
                     * @return LogDeliveryStatus 是否已赋值
                     * 
                     */
                    bool LogDeliveryStatusHasBeenSet() const;

                    /**
                     * 获取是否支持日志投递。0-不支持 1-支持
                     * @return LogDeliverySupported 是否支持日志投递。0-不支持 1-支持
                     * 
                     */
                    int64_t GetLogDeliverySupported() const;

                    /**
                     * 设置是否支持日志投递。0-不支持 1-支持
                     * @param _logDeliverySupported 是否支持日志投递。0-不支持 1-支持
                     * 
                     */
                    void SetLogDeliverySupported(const int64_t& _logDeliverySupported);

                    /**
                     * 判断参数 LogDeliverySupported 是否已赋值
                     * @return LogDeliverySupported 是否已赋值
                     * 
                     */
                    bool LogDeliverySupportedHasBeenSet() const;

                    /**
                     * 获取数据扫描信息
                     * @return DataScanInfo 数据扫描信息
                     * 
                     */
                    DspmAssetDataScanDetail GetDataScanInfo() const;

                    /**
                     * 设置数据扫描信息
                     * @param _dataScanInfo 数据扫描信息
                     * 
                     */
                    void SetDataScanInfo(const DspmAssetDataScanDetail& _dataScanInfo);

                    /**
                     * 判断参数 DataScanInfo 是否已赋值
                     * @return DataScanInfo 是否已赋值
                     * 
                     */
                    bool DataScanInfoHasBeenSet() const;

                    /**
                     * 获取资产所属账号app id
                     * @return AppId 资产所属账号app id
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置资产所属账号app id
                     * @param _appId 资产所属账号app id
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
                     * 获取账号昵称
                     * @return NickName 账号昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号昵称
                     * @param _nickName 账号昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取资产所属账号uin
                     * @return Uin 资产所属账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置资产所属账号uin
                     * @param _uin 资产所属账号uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * @return SecurityAnalyseStatus 安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * 
                     */
                    int64_t GetSecurityAnalyseStatus() const;

                    /**
                     * 设置安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * @param _securityAnalyseStatus 安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     * 
                     */
                    void SetSecurityAnalyseStatus(const int64_t& _securityAnalyseStatus);

                    /**
                     * 判断参数 SecurityAnalyseStatus 是否已赋值
                     * @return SecurityAnalyseStatus 是否已赋值
                     * 
                     */
                    bool SecurityAnalyseStatusHasBeenSet() const;

                    /**
                     * 获取当前实例的总日志数
                     * @return TotalAuditLogs 当前实例的总日志数
                     * 
                     */
                    uint64_t GetTotalAuditLogs() const;

                    /**
                     * 设置当前实例的总日志数
                     * @param _totalAuditLogs 当前实例的总日志数
                     * 
                     */
                    void SetTotalAuditLogs(const uint64_t& _totalAuditLogs);

                    /**
                     * 判断参数 TotalAuditLogs 是否已赋值
                     * @return TotalAuditLogs 是否已赋值
                     * 
                     */
                    bool TotalAuditLogsHasBeenSet() const;

                    /**
                     * 获取日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists
                     * @return LogDeliveryDisableReason 日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists
                     * 
                     */
                    std::string GetLogDeliveryDisableReason() const;

                    /**
                     * 设置日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists
                     * @param _logDeliveryDisableReason 日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists
                     * 
                     */
                    void SetLogDeliveryDisableReason(const std::string& _logDeliveryDisableReason);

                    /**
                     * 判断参数 LogDeliveryDisableReason 是否已赋值
                     * @return LogDeliveryDisableReason 是否已赋值
                     * 
                     */
                    bool LogDeliveryDisableReasonHasBeenSet() const;

                    /**
                     * 获取在线日志的起始时间戳，精确到秒
                     * @return OldestOnlineLogTimestamp 在线日志的起始时间戳，精确到秒
                     * 
                     */
                    uint64_t GetOldestOnlineLogTimestamp() const;

                    /**
                     * 设置在线日志的起始时间戳，精确到秒
                     * @param _oldestOnlineLogTimestamp 在线日志的起始时间戳，精确到秒
                     * 
                     */
                    void SetOldestOnlineLogTimestamp(const uint64_t& _oldestOnlineLogTimestamp);

                    /**
                     * 判断参数 OldestOnlineLogTimestamp 是否已赋值
                     * @return OldestOnlineLogTimestamp 是否已赋值
                     * 
                     */
                    bool OldestOnlineLogTimestampHasBeenSet() const;

                    /**
                     * 获取在线日志的最新时间戳，精确到秒
                     * @return NewestOnlineLogTimestamp 在线日志的最新时间戳，精确到秒
                     * 
                     */
                    uint64_t GetNewestOnlineLogTimestamp() const;

                    /**
                     * 设置在线日志的最新时间戳，精确到秒
                     * @param _newestOnlineLogTimestamp 在线日志的最新时间戳，精确到秒
                     * 
                     */
                    void SetNewestOnlineLogTimestamp(const uint64_t& _newestOnlineLogTimestamp);

                    /**
                     * 判断参数 NewestOnlineLogTimestamp 是否已赋值
                     * @return NewestOnlineLogTimestamp 是否已赋值
                     * 
                     */
                    bool NewestOnlineLogTimestampHasBeenSet() const;

                    /**
                     * 获取操作错误信息
                     * @return OperationErrorMsg 操作错误信息
                     * 
                     */
                    std::string GetOperationErrorMsg() const;

                    /**
                     * 设置操作错误信息
                     * @param _operationErrorMsg 操作错误信息
                     * 
                     */
                    void SetOperationErrorMsg(const std::string& _operationErrorMsg);

                    /**
                     * 判断参数 OperationErrorMsg 是否已赋值
                     * @return OperationErrorMsg 是否已赋值
                     * 
                     */
                    bool OperationErrorMsgHasBeenSet() const;

                    /**
                     * 获取是否支持账号操作。0 不支持；1 支持
                     * @return AccountOptSupported 是否支持账号操作。0 不支持；1 支持
                     * 
                     */
                    int64_t GetAccountOptSupported() const;

                    /**
                     * 设置是否支持账号操作。0 不支持；1 支持
                     * @param _accountOptSupported 是否支持账号操作。0 不支持；1 支持
                     * 
                     */
                    void SetAccountOptSupported(const int64_t& _accountOptSupported);

                    /**
                     * 判断参数 AccountOptSupported 是否已赋值
                     * @return AccountOptSupported 是否已赋值
                     * 
                     */
                    bool AccountOptSupportedHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取是否支持敏感数据识别。0 不支持；1 支持
                     * @return IdentifyScanSupported 是否支持敏感数据识别。0 不支持；1 支持
                     * 
                     */
                    int64_t GetIdentifyScanSupported() const;

                    /**
                     * 设置是否支持敏感数据识别。0 不支持；1 支持
                     * @param _identifyScanSupported 是否支持敏感数据识别。0 不支持；1 支持
                     * 
                     */
                    void SetIdentifyScanSupported(const int64_t& _identifyScanSupported);

                    /**
                     * 判断参数 IdentifyScanSupported 是否已赋值
                     * @return IdentifyScanSupported 是否已赋值
                     * 
                     */
                    bool IdentifyScanSupportedHasBeenSet() const;

                private:

                    /**
                     * 资产实例Id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     *  资产名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账号数
                     */
                    int64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * 公网访问地址，如果有多个，使用';'分割
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网访问地址，如果有多个，使用';'分割
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 广域网域名地址，如果有多个，使用';'分割
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 资产所在vpc的vpcid
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资产所在vpc的vpc名
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 资产所在vpc子网的subnetid
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 资产所在vpc子网名
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 实例状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 管理者信息。
                     */
                    std::vector<DspmUinUser> m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * 是否绑定身份。0-未绑定 1-已绑定
                     */
                    int64_t m_bindIdentify;
                    bool m_bindIdentifyHasBeenSet;

                    /**
                     * 是否管理员
                     */
                    int64_t m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * 风险统计信息
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 安全建议。
Resolve 立即解决
Reinforcement 加固
None 暂无异常

                     */
                    std::string m_safetyAdvice;
                    bool m_safetyAdviceHasBeenSet;

                    /**
                     * 日志投递状态。
0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中
                     */
                    int64_t m_logDeliveryStatus;
                    bool m_logDeliveryStatusHasBeenSet;

                    /**
                     * 是否支持日志投递。0-不支持 1-支持
                     */
                    int64_t m_logDeliverySupported;
                    bool m_logDeliverySupportedHasBeenSet;

                    /**
                     * 数据扫描信息
                     */
                    DspmAssetDataScanDetail m_dataScanInfo;
                    bool m_dataScanInfoHasBeenSet;

                    /**
                     * 资产所属账号app id
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 资产所属账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）

                     */
                    int64_t m_securityAnalyseStatus;
                    bool m_securityAnalyseStatusHasBeenSet;

                    /**
                     * 当前实例的总日志数
                     */
                    uint64_t m_totalAuditLogs;
                    bool m_totalAuditLogsHasBeenSet;

                    /**
                     * 日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists
                     */
                    std::string m_logDeliveryDisableReason;
                    bool m_logDeliveryDisableReasonHasBeenSet;

                    /**
                     * 在线日志的起始时间戳，精确到秒
                     */
                    uint64_t m_oldestOnlineLogTimestamp;
                    bool m_oldestOnlineLogTimestampHasBeenSet;

                    /**
                     * 在线日志的最新时间戳，精确到秒
                     */
                    uint64_t m_newestOnlineLogTimestamp;
                    bool m_newestOnlineLogTimestampHasBeenSet;

                    /**
                     * 操作错误信息
                     */
                    std::string m_operationErrorMsg;
                    bool m_operationErrorMsgHasBeenSet;

                    /**
                     * 是否支持账号操作。0 不支持；1 支持
                     */
                    int64_t m_accountOptSupported;
                    bool m_accountOptSupportedHasBeenSet;

                    /**
                     * 实例类型
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 是否支持敏感数据识别。0 不支持；1 支持
                     */
                    int64_t m_identifyScanSupported;
                    bool m_identifyScanSupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_
