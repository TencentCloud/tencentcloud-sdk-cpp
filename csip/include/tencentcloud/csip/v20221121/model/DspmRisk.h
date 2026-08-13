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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmUinUser.h>
#include <tencentcloud/csip/v20221121/model/DspmPersonUser.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm风险
                */
                class DspmRisk : public AbstractModel
                {
                public:
                    DspmRisk();
                    ~DspmRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险id</p>
                     * @return RiskId <p>风险id</p>
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置<p>风险id</p>
                     * @param _riskId <p>风险id</p>
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取<p>风险名称</p>
                     * @return RiskName <p>风险名称</p>
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置<p>风险名称</p>
                     * @param _riskName <p>风险名称</p>
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取<p>风险英文名称</p>
                     * @return RiskNameEn <p>风险英文名称</p>
                     * 
                     */
                    std::string GetRiskNameEn() const;

                    /**
                     * 设置<p>风险英文名称</p>
                     * @param _riskNameEn <p>风险英文名称</p>
                     * 
                     */
                    void SetRiskNameEn(const std::string& _riskNameEn);

                    /**
                     * 判断参数 RiskNameEn 是否已赋值
                     * @return RiskNameEn 是否已赋值
                     * 
                     */
                    bool RiskNameEnHasBeenSet() const;

                    /**
                     * 获取<p>策略类型</p>
                     * @return StrategyType <p>策略类型</p>
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _strategyType <p>策略类型</p>
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略类别</p>
                     * @return StrategyCategory <p>策略类别</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>策略类别</p>
                     * @param _strategyCategory <p>策略类别</p>
                     * 
                     */
                    void SetStrategyCategory(const std::string& _strategyCategory);

                    /**
                     * 判断参数 StrategyCategory 是否已赋值
                     * @return StrategyCategory 是否已赋值
                     * 
                     */
                    bool StrategyCategoryHasBeenSet() const;

                    /**
                     * 获取<p>风险等级</p>
                     * @return RiskLevel <p>风险等级</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级</p>
                     * @param _riskLevel <p>风险等级</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

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
                     * @return AssetName <p>资产名</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>资产名</p>
                     * @param _assetName <p>资产名</p>
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
                     * 获取<p>地域</p>
                     * @return AssetRegion <p>地域</p>
                     * 
                     */
                    std::string GetAssetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _assetRegion <p>地域</p>
                     * 
                     */
                    void SetAssetRegion(const std::string& _assetRegion);

                    /**
                     * 判断参数 AssetRegion 是否已赋值
                     * @return AssetRegion 是否已赋值
                     * 
                     */
                    bool AssetRegionHasBeenSet() const;

                    /**
                     * 获取<p>资产账号</p>
                     * @return Account <p>资产账号</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>资产账号</p>
                     * @param _account <p>资产账号</p>
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>主机地址</p>
                     * @return Host <p>主机地址</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机地址</p>
                     * @param _host <p>主机地址</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>账号类型</p>
                     * @return AccountType <p>账号类型</p>
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置<p>账号类型</p>
                     * @param _accountType <p>账号类型</p>
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>风险检出时间</p>
                     * @return DetectTime <p>风险检出时间</p>
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置<p>风险检出时间</p>
                     * @param _detectTime <p>风险检出时间</p>
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>处理状态 0-未处理 1-已处置 2-已忽略</p>
                     * @return Status <p>处理状态 0-未处理 1-已处置 2-已忽略</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>处理状态 0-未处理 1-已处置 2-已忽略</p>
                     * @param _status <p>处理状态 0-未处理 1-已处置 2-已忽略</p>
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
                     * 获取<p>身份id</p>
                     * @return IdentifyId <p>身份id</p>
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置<p>身份id</p>
                     * @param _identifyId <p>身份id</p>
                     * 
                     */
                    void SetIdentifyId(const std::string& _identifyId);

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取<p>所属云账号uin用户</p>
                     * @return OwnerUin <p>所属云账号uin用户</p>
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置<p>所属云账号uin用户</p>
                     * @param _ownerUin <p>所属云账号uin用户</p>
                     * 
                     */
                    void SetOwnerUin(const DspmUinUser& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>所属个人用户信息</p>
                     * @return Person <p>所属个人用户信息</p>
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置<p>所属个人用户信息</p>
                     * @param _person <p>所属个人用户信息</p>
                     * 
                     */
                    void SetPerson(const DspmPersonUser& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取<p>风险数据。</p>
                     * @return RiskData <p>风险数据。</p>
                     * 
                     */
                    std::string GetRiskData() const;

                    /**
                     * 设置<p>风险数据。</p>
                     * @param _riskData <p>风险数据。</p>
                     * 
                     */
                    void SetRiskData(const std::string& _riskData);

                    /**
                     * 判断参数 RiskData 是否已赋值
                     * @return RiskData 是否已赋值
                     * 
                     */
                    bool RiskDataHasBeenSet() const;

                    /**
                     * 获取<p>是否资产管理员</p>
                     * @return IsAssetManager <p>是否资产管理员</p>
                     * 
                     */
                    int64_t GetIsAssetManager() const;

                    /**
                     * 设置<p>是否资产管理员</p>
                     * @param _isAssetManager <p>是否资产管理员</p>
                     * 
                     */
                    void SetIsAssetManager(const int64_t& _isAssetManager);

                    /**
                     * 判断参数 IsAssetManager 是否已赋值
                     * @return IsAssetManager 是否已赋值
                     * 
                     */
                    bool IsAssetManagerHasBeenSet() const;

                    /**
                     * 获取<p>数据起始时间</p>
                     * @return DataBeginTime <p>数据起始时间</p>
                     * 
                     */
                    std::string GetDataBeginTime() const;

                    /**
                     * 设置<p>数据起始时间</p>
                     * @param _dataBeginTime <p>数据起始时间</p>
                     * 
                     */
                    void SetDataBeginTime(const std::string& _dataBeginTime);

                    /**
                     * 判断参数 DataBeginTime 是否已赋值
                     * @return DataBeginTime 是否已赋值
                     * 
                     */
                    bool DataBeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据结束时间</p>
                     * @return DataEndTime <p>数据结束时间</p>
                     * 
                     */
                    std::string GetDataEndTime() const;

                    /**
                     * 设置<p>数据结束时间</p>
                     * @param _dataEndTime <p>数据结束时间</p>
                     * 
                     */
                    void SetDataEndTime(const std::string& _dataEndTime);

                    /**
                     * 判断参数 DataEndTime 是否已赋值
                     * @return DataEndTime 是否已赋值
                     * 
                     */
                    bool DataEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>风险类型。risk-风险；alarm-告警。</p>
                     * @return RiskType <p>风险类型。risk-风险；alarm-告警。</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>风险类型。risk-风险；alarm-告警。</p>
                     * @param _riskType <p>风险类型。risk-风险；alarm-告警。</p>
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
                     * 获取<p>MongoDb的集群类型，非 MongoDB 资产固定 0</p><p>枚举值：</p><ul><li>0： 副本集</li><li>1： 分片</li></ul><p>默认值：0</p>
                     * @return ClusterType <p>MongoDb的集群类型，非 MongoDB 资产固定 0</p><p>枚举值：</p><ul><li>0： 副本集</li><li>1： 分片</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置<p>MongoDb的集群类型，非 MongoDB 资产固定 0</p><p>枚举值：</p><ul><li>0： 副本集</li><li>1： 分片</li></ul><p>默认值：0</p>
                     * @param _clusterType <p>MongoDb的集群类型，非 MongoDB 资产固定 0</p><p>枚举值：</p><ul><li>0： 副本集</li><li>1： 分片</li></ul><p>默认值：0</p>
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
                     * <p>风险id</p>
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * <p>风险名称</p>
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * <p>风险英文名称</p>
                     */
                    std::string m_riskNameEn;
                    bool m_riskNameEnHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>策略类别</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * <p>风险等级</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

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
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_assetRegion;
                    bool m_assetRegionHasBeenSet;

                    /**
                     * <p>资产账号</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>主机地址</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>账号类型</p>
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>风险检出时间</p>
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * <p>处理状态 0-未处理 1-已处置 2-已忽略</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>身份id</p>
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * <p>所属云账号uin用户</p>
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>所属个人用户信息</p>
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * <p>风险数据。</p>
                     */
                    std::string m_riskData;
                    bool m_riskDataHasBeenSet;

                    /**
                     * <p>是否资产管理员</p>
                     */
                    int64_t m_isAssetManager;
                    bool m_isAssetManagerHasBeenSet;

                    /**
                     * <p>数据起始时间</p>
                     */
                    std::string m_dataBeginTime;
                    bool m_dataBeginTimeHasBeenSet;

                    /**
                     * <p>数据结束时间</p>
                     */
                    std::string m_dataEndTime;
                    bool m_dataEndTimeHasBeenSet;

                    /**
                     * <p>风险类型。risk-风险；alarm-告警。</p>
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

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
                     * <p>MongoDb的集群类型，非 MongoDB 资产固定 0</p><p>枚举值：</p><ul><li>0： 副本集</li><li>1： 分片</li></ul><p>默认值：0</p>
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_
