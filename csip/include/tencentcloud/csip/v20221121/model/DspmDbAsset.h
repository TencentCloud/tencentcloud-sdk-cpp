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
                     * 获取<p>资产实例Id</p>
                     * @return AssetId <p>资产实例Id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产实例Id</p>
                     * @param _assetId <p>资产实例Id</p>
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
                     * 获取<p>资产名</p>
                     * @return Name <p>资产名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资产名</p>
                     * @param _name <p>资产名</p>
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
                     * 获取<p>账号数</p>
                     * @return AccountCount <p>账号数</p>
                     * 
                     */
                    int64_t GetAccountCount() const;

                    /**
                     * 设置<p>账号数</p>
                     * @param _accountCount <p>账号数</p>
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
                     * 获取<p>公网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     * @return PublicIp <p>公网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     * @param _publicIp <p>公网访问地址，如果有多个，使用&#39;;&#39;分割</p>
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
                     * 获取<p>内网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     * @return PrivateIp <p>内网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     * @param _privateIp <p>内网访问地址，如果有多个，使用&#39;;&#39;分割</p>
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
                     * 获取<p>广域网域名地址，如果有多个，使用&#39;;&#39;分割</p>
                     * @return WanDomain <p>广域网域名地址，如果有多个，使用&#39;;&#39;分割</p>
                     * 
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置<p>广域网域名地址，如果有多个，使用&#39;;&#39;分割</p>
                     * @param _wanDomain <p>广域网域名地址，如果有多个，使用&#39;;&#39;分割</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>资产所在vpc的vpcid</p>
                     * @return VpcId <p>资产所在vpc的vpcid</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>资产所在vpc的vpcid</p>
                     * @param _vpcId <p>资产所在vpc的vpcid</p>
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
                     * 获取<p>资产所在vpc的vpc名</p>
                     * @return VpcName <p>资产所在vpc的vpc名</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>资产所在vpc的vpc名</p>
                     * @param _vpcName <p>资产所在vpc的vpc名</p>
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
                     * 获取<p>资产所在vpc子网的subnetid</p>
                     * @return SubnetId <p>资产所在vpc子网的subnetid</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>资产所在vpc子网的subnetid</p>
                     * @param _subnetId <p>资产所在vpc子网的subnetid</p>
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
                     * 获取<p>资产所在vpc子网名</p>
                     * @return SubnetName <p>资产所在vpc子网名</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>资产所在vpc子网名</p>
                     * @param _subnetName <p>资产所在vpc子网名</p>
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
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _status <p>实例状态</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
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
                     * 获取<p>管理者信息。</p>
                     * @return Manager <p>管理者信息。</p>
                     * 
                     */
                    std::vector<DspmUinUser> GetManager() const;

                    /**
                     * 设置<p>管理者信息。</p>
                     * @param _manager <p>管理者信息。</p>
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
                     * 获取<p>是否绑定身份。0-未绑定 1-已绑定</p>
                     * @return BindIdentify <p>是否绑定身份。0-未绑定 1-已绑定</p>
                     * 
                     */
                    int64_t GetBindIdentify() const;

                    /**
                     * 设置<p>是否绑定身份。0-未绑定 1-已绑定</p>
                     * @param _bindIdentify <p>是否绑定身份。0-未绑定 1-已绑定</p>
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
                     * 获取<p>是否管理员</p>
                     * @return IsManager <p>是否管理员</p>
                     * 
                     */
                    int64_t GetIsManager() const;

                    /**
                     * 设置<p>是否管理员</p>
                     * @param _isManager <p>是否管理员</p>
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
                     * 获取<p>风险统计信息</p>
                     * @return RiskCount <p>风险统计信息</p>
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 设置<p>风险统计信息</p>
                     * @param _riskCount <p>风险统计信息</p>
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
                     * 获取<p>安全建议。<br>Resolve 立即解决<br>Reinforcement 加固<br>None 暂无异常</p>
                     * @return SafetyAdvice <p>安全建议。<br>Resolve 立即解决<br>Reinforcement 加固<br>None 暂无异常</p>
                     * 
                     */
                    std::string GetSafetyAdvice() const;

                    /**
                     * 设置<p>安全建议。<br>Resolve 立即解决<br>Reinforcement 加固<br>None 暂无异常</p>
                     * @param _safetyAdvice <p>安全建议。<br>Resolve 立即解决<br>Reinforcement 加固<br>None 暂无异常</p>
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
                     * 获取<p>日志投递状态。<br>0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中</p>
                     * @return LogDeliveryStatus <p>日志投递状态。<br>0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中</p>
                     * 
                     */
                    int64_t GetLogDeliveryStatus() const;

                    /**
                     * 设置<p>日志投递状态。<br>0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中</p>
                     * @param _logDeliveryStatus <p>日志投递状态。<br>0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中</p>
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
                     * 获取<p>是否支持日志投递。0-不支持 1-支持</p>
                     * @return LogDeliverySupported <p>是否支持日志投递。0-不支持 1-支持</p>
                     * 
                     */
                    int64_t GetLogDeliverySupported() const;

                    /**
                     * 设置<p>是否支持日志投递。0-不支持 1-支持</p>
                     * @param _logDeliverySupported <p>是否支持日志投递。0-不支持 1-支持</p>
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
                     * 获取<p>数据扫描信息</p>
                     * @return DataScanInfo <p>数据扫描信息</p>
                     * 
                     */
                    DspmAssetDataScanDetail GetDataScanInfo() const;

                    /**
                     * 设置<p>数据扫描信息</p>
                     * @param _dataScanInfo <p>数据扫描信息</p>
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
                     * 获取<p>资产所属账号app id</p>
                     * @return AppId <p>资产所属账号app id</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>资产所属账号app id</p>
                     * @param _appId <p>资产所属账号app id</p>
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
                     * 获取<p>账号昵称</p>
                     * @return NickName <p>账号昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>账号昵称</p>
                     * @param _nickName <p>账号昵称</p>
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
                     * 获取<p>资产所属账号uin</p>
                     * @return Uin <p>资产所属账号uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>资产所属账号uin</p>
                     * @param _uin <p>资产所属账号uin</p>
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
                     * 获取<p>安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）</p>
                     * @return SecurityAnalyseStatus <p>安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）</p>
                     * 
                     */
                    int64_t GetSecurityAnalyseStatus() const;

                    /**
                     * 设置<p>安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）</p>
                     * @param _securityAnalyseStatus <p>安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）</p>
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
                     * 获取<p>当前实例的总日志数</p>
                     * @return TotalAuditLogs <p>当前实例的总日志数</p>
                     * 
                     */
                    uint64_t GetTotalAuditLogs() const;

                    /**
                     * 设置<p>当前实例的总日志数</p>
                     * @param _totalAuditLogs <p>当前实例的总日志数</p>
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
                     * 获取<p>日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * @return LogDeliveryDisableReason <p>日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * 
                     */
                    std::string GetLogDeliveryDisableReason() const;

                    /**
                     * 设置<p>日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     * @param _logDeliveryDisableReason <p>日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
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
                     * 获取<p>在线日志的起始时间戳，精确到秒</p>
                     * @return OldestOnlineLogTimestamp <p>在线日志的起始时间戳，精确到秒</p>
                     * 
                     */
                    uint64_t GetOldestOnlineLogTimestamp() const;

                    /**
                     * 设置<p>在线日志的起始时间戳，精确到秒</p>
                     * @param _oldestOnlineLogTimestamp <p>在线日志的起始时间戳，精确到秒</p>
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
                     * 获取<p>在线日志的最新时间戳，精确到秒</p>
                     * @return NewestOnlineLogTimestamp <p>在线日志的最新时间戳，精确到秒</p>
                     * 
                     */
                    uint64_t GetNewestOnlineLogTimestamp() const;

                    /**
                     * 设置<p>在线日志的最新时间戳，精确到秒</p>
                     * @param _newestOnlineLogTimestamp <p>在线日志的最新时间戳，精确到秒</p>
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
                     * 获取<p>操作错误信息</p>
                     * @return OperationErrorMsg <p>操作错误信息</p>
                     * 
                     */
                    std::string GetOperationErrorMsg() const;

                    /**
                     * 设置<p>操作错误信息</p>
                     * @param _operationErrorMsg <p>操作错误信息</p>
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
                     * 获取<p>是否支持账号操作。0 不支持；1 支持</p>
                     * @return AccountOptSupported <p>是否支持账号操作。0 不支持；1 支持</p>
                     * 
                     */
                    int64_t GetAccountOptSupported() const;

                    /**
                     * 设置<p>是否支持账号操作。0 不支持；1 支持</p>
                     * @param _accountOptSupported <p>是否支持账号操作。0 不支持；1 支持</p>
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
                     * 获取<p>实例类型</p>
                     * @return InstanceType <p>实例类型</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _instanceType <p>实例类型</p>
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
                     * 获取<p>集群类型（MongoDB），与云接口 DescribeDBInstances 的 ClusterType 一致：0-副本集 1-分片；非 MongoDB 资产固定 0</p>
                     * @return ClusterType <p>集群类型（MongoDB），与云接口 DescribeDBInstances 的 ClusterType 一致：0-副本集 1-分片；非 MongoDB 资产固定 0</p>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>集群类型（MongoDB），与云接口 DescribeDBInstances 的 ClusterType 一致：0-副本集 1-分片；非 MongoDB 资产固定 0</p>
                     * @param _clusterType <p>集群类型（MongoDB），与云接口 DescribeDBInstances 的 ClusterType 一致：0-副本集 1-分片；非 MongoDB 资产固定 0</p>
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持敏感数据识别。0 不支持；1 支持</p>
                     * @return IdentifyScanSupported <p>是否支持敏感数据识别。0 不支持；1 支持</p>
                     * 
                     */
                    int64_t GetIdentifyScanSupported() const;

                    /**
                     * 设置<p>是否支持敏感数据识别。0 不支持；1 支持</p>
                     * @param _identifyScanSupported <p>是否支持敏感数据识别。0 不支持；1 支持</p>
                     * 
                     */
                    void SetIdentifyScanSupported(const int64_t& _identifyScanSupported);

                    /**
                     * 判断参数 IdentifyScanSupported 是否已赋值
                     * @return IdentifyScanSupported 是否已赋值
                     * 
                     */
                    bool IdentifyScanSupportedHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName <p>集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName <p>集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * <p>资产实例Id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>资产名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>账号数</p>
                     */
                    int64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * <p>公网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网访问地址，如果有多个，使用&#39;;&#39;分割</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>广域网域名地址，如果有多个，使用&#39;;&#39;分割</p>
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>资产所在vpc的vpcid</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>资产所在vpc的vpc名</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>资产所在vpc子网的subnetid</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>资产所在vpc子网名</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>管理者信息。</p>
                     */
                    std::vector<DspmUinUser> m_manager;
                    bool m_managerHasBeenSet;

                    /**
                     * <p>是否绑定身份。0-未绑定 1-已绑定</p>
                     */
                    int64_t m_bindIdentify;
                    bool m_bindIdentifyHasBeenSet;

                    /**
                     * <p>是否管理员</p>
                     */
                    int64_t m_isManager;
                    bool m_isManagerHasBeenSet;

                    /**
                     * <p>风险统计信息</p>
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>安全建议。<br>Resolve 立即解决<br>Reinforcement 加固<br>None 暂无异常</p>
                     */
                    std::string m_safetyAdvice;
                    bool m_safetyAdviceHasBeenSet;

                    /**
                     * <p>日志投递状态。<br>0-投递关闭 1-投递打开 2-投递开通中 3-投递关闭中</p>
                     */
                    int64_t m_logDeliveryStatus;
                    bool m_logDeliveryStatusHasBeenSet;

                    /**
                     * <p>是否支持日志投递。0-不支持 1-支持</p>
                     */
                    int64_t m_logDeliverySupported;
                    bool m_logDeliverySupportedHasBeenSet;

                    /**
                     * <p>数据扫描信息</p>
                     */
                    DspmAssetDataScanDetail m_dataScanInfo;
                    bool m_dataScanInfoHasBeenSet;

                    /**
                     * <p>资产所属账号app id</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>账号昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>资产所属账号uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>安全分析状态（0-关闭 1-打开 2-开通中 3-关闭中）</p>
                     */
                    int64_t m_securityAnalyseStatus;
                    bool m_securityAnalyseStatusHasBeenSet;

                    /**
                     * <p>当前实例的总日志数</p>
                     */
                    uint64_t m_totalAuditLogs;
                    bool m_totalAuditLogsHasBeenSet;

                    /**
                     * <p>日志审计禁止开通的原因，可选值：VersionNotSupportLogSubscription, InstanceIsUpgrading, CdbRuleAuditEnabled, AssetNotExists</p>
                     */
                    std::string m_logDeliveryDisableReason;
                    bool m_logDeliveryDisableReasonHasBeenSet;

                    /**
                     * <p>在线日志的起始时间戳，精确到秒</p>
                     */
                    uint64_t m_oldestOnlineLogTimestamp;
                    bool m_oldestOnlineLogTimestampHasBeenSet;

                    /**
                     * <p>在线日志的最新时间戳，精确到秒</p>
                     */
                    uint64_t m_newestOnlineLogTimestamp;
                    bool m_newestOnlineLogTimestampHasBeenSet;

                    /**
                     * <p>操作错误信息</p>
                     */
                    std::string m_operationErrorMsg;
                    bool m_operationErrorMsgHasBeenSet;

                    /**
                     * <p>是否支持账号操作。0 不支持；1 支持</p>
                     */
                    int64_t m_accountOptSupported;
                    bool m_accountOptSupportedHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>集群类型（MongoDB），与云接口 DescribeDBInstances 的 ClusterType 一致：0-副本集 1-分片；非 MongoDB 资产固定 0</p>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>是否支持敏感数据识别。0 不支持；1 支持</p>
                     */
                    int64_t m_identifyScanSupported;
                    bool m_identifyScanSupportedHasBeenSet;

                    /**
                     * <p>集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSET_H_
