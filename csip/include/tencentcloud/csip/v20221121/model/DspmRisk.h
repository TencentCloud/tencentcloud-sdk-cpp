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
                     * 获取风险id
                     * @return RiskId 风险id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险id
                     * @param _riskId 风险id
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
                     * 获取风险名称
                     * @return RiskName 风险名称
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置风险名称
                     * @param _riskName 风险名称
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
                     * 获取风险英文名称
                     * @return RiskNameEn 风险英文名称
                     * 
                     */
                    std::string GetRiskNameEn() const;

                    /**
                     * 设置风险英文名称
                     * @param _riskNameEn 风险英文名称
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
                     * 获取策略类型
                     * @return StrategyType 策略类型
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置策略类型
                     * @param _strategyType 策略类型
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
                     * 获取策略类别
                     * @return StrategyCategory 策略类别
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置策略类别
                     * @param _strategyCategory 策略类别
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
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
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
                     * 获取地域
                     * @return AssetRegion 地域
                     * 
                     */
                    std::string GetAssetRegion() const;

                    /**
                     * 设置地域
                     * @param _assetRegion 地域
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
                     * 获取资产账号
                     * @return Account 资产账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置资产账号
                     * @param _account 资产账号
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
                     * 获取主机地址
                     * @return Host 主机地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置主机地址
                     * @param _host 主机地址
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
                     * 获取账号类型
                     * @return AccountType 账号类型
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账号类型
                     * @param _accountType 账号类型
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
                     * 获取风险检出时间
                     * @return DetectTime 风险检出时间
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置风险检出时间
                     * @param _detectTime 风险检出时间
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
                     * 获取处理状态 0-未处理 1-已处置 2-已忽略
                     * @return Status 处理状态 0-未处理 1-已处置 2-已忽略
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置处理状态 0-未处理 1-已处置 2-已忽略
                     * @param _status 处理状态 0-未处理 1-已处置 2-已忽略
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
                     * 获取身份id
                     * @return IdentifyId 身份id
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 设置身份id
                     * @param _identifyId 身份id
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
                     * 获取所属云账号uin用户
                     * @return OwnerUin 所属云账号uin用户
                     * 
                     */
                    DspmUinUser GetOwnerUin() const;

                    /**
                     * 设置所属云账号uin用户
                     * @param _ownerUin 所属云账号uin用户
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
                     * 获取所属个人用户信息
                     * @return Person 所属个人用户信息
                     * 
                     */
                    DspmPersonUser GetPerson() const;

                    /**
                     * 设置所属个人用户信息
                     * @param _person 所属个人用户信息
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
                     * 获取风险数据。
                     * @return RiskData 风险数据。
                     * 
                     */
                    std::string GetRiskData() const;

                    /**
                     * 设置风险数据。
                     * @param _riskData 风险数据。
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
                     * 获取是否资产管理员
                     * @return IsAssetManager 是否资产管理员
                     * 
                     */
                    int64_t GetIsAssetManager() const;

                    /**
                     * 设置是否资产管理员
                     * @param _isAssetManager 是否资产管理员
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
                     * 获取数据起始时间
                     * @return DataBeginTime 数据起始时间
                     * 
                     */
                    std::string GetDataBeginTime() const;

                    /**
                     * 设置数据起始时间
                     * @param _dataBeginTime 数据起始时间
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
                     * 获取数据结束时间
                     * @return DataEndTime 数据结束时间
                     * 
                     */
                    std::string GetDataEndTime() const;

                    /**
                     * 设置数据结束时间
                     * @param _dataEndTime 数据结束时间
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
                     * 获取风险类型。risk-风险；alarm-告警。
                     * @return RiskType 风险类型。risk-风险；alarm-告警。
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型。risk-风险；alarm-告警。
                     * @param _riskType 风险类型。risk-风险；alarm-告警。
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

                private:

                    /**
                     * 风险id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 风险英文名称
                     */
                    std::string m_riskNameEn;
                    bool m_riskNameEnHasBeenSet;

                    /**
                     * 策略类型
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 策略类别
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

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
                     * 资产名
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_assetRegion;
                    bool m_assetRegionHasBeenSet;

                    /**
                     * 资产账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 主机地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号类型
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 风险检出时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 处理状态 0-未处理 1-已处置 2-已忽略
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 身份id
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * 所属云账号uin用户
                     */
                    DspmUinUser m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 所属个人用户信息
                     */
                    DspmPersonUser m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 风险数据。
                     */
                    std::string m_riskData;
                    bool m_riskDataHasBeenSet;

                    /**
                     * 是否资产管理员
                     */
                    int64_t m_isAssetManager;
                    bool m_isAssetManagerHasBeenSet;

                    /**
                     * 数据起始时间
                     */
                    std::string m_dataBeginTime;
                    bool m_dataBeginTimeHasBeenSet;

                    /**
                     * 数据结束时间
                     */
                    std::string m_dataEndTime;
                    bool m_dataEndTimeHasBeenSet;

                    /**
                     * 风险类型。risk-风险；alarm-告警。
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISK_H_
