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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMWHITELISTSTRATEGY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMWHITELISTSTRATEGY_H_

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
                * Dspm 白名单策略
                */
                class DspmWhitelistStrategy : public AbstractModel
                {
                public:
                    DspmWhitelistStrategy();
                    ~DspmWhitelistStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>白名单策略id</p>
                     * @return WhitelistStrategyId <p>白名单策略id</p>
                     * 
                     */
                    std::string GetWhitelistStrategyId() const;

                    /**
                     * 设置<p>白名单策略id</p>
                     * @param _whitelistStrategyId <p>白名单策略id</p>
                     * 
                     */
                    void SetWhitelistStrategyId(const std::string& _whitelistStrategyId);

                    /**
                     * 判断参数 WhitelistStrategyId 是否已赋值
                     * @return WhitelistStrategyId 是否已赋值
                     * 
                     */
                    bool WhitelistStrategyIdHasBeenSet() const;

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
                     * 获取<p>白名单策略名</p>
                     * @return Name <p>白名单策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>白名单策略名</p>
                     * @param _name <p>白名单策略名</p>
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
                     * 获取<p>策略类型</p>
                     * @return StrategyCategory <p>策略类型</p>
                     * 
                     */
                    std::string GetStrategyCategory() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _strategyCategory <p>策略类型</p>
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
                     * 获取<p>策略规则</p>
                     * @return Rule <p>策略规则</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>策略规则</p>
                     * @param _rule <p>策略规则</p>
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>资产id</p>
                     * @return AssetId <p>资产id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产id</p>
                     * @param _assetId <p>资产id</p>
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
                     * 获取<p>账号</p>
                     * @return Account <p>账号</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _account <p>账号</p>
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
                     * 获取<p>主机</p>
                     * @return Host <p>主机</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机</p>
                     * @param _host <p>主机</p>
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
                     * 获取<p>策略规则内容描述</p>
                     * @return Description <p>策略规则内容描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略规则内容描述</p>
                     * @param _description <p>策略规则内容描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>白名单类型。risk-风险白名单；alarm-告警白名单。</p>
                     * @return RiskType <p>白名单类型。risk-风险白名单；alarm-告警白名单。</p>
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置<p>白名单类型。risk-风险白名单；alarm-告警白名单。</p>
                     * @param _riskType <p>白名单类型。risk-风险白名单；alarm-告警白名单。</p>
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
                     * 获取<p>白名单类型</p>
                     * @return WhitelistType <p>白名单类型</p>
                     * 
                     */
                    std::string GetWhitelistType() const;

                    /**
                     * 设置<p>白名单类型</p>
                     * @param _whitelistType <p>白名单类型</p>
                     * 
                     */
                    void SetWhitelistType(const std::string& _whitelistType);

                    /**
                     * 判断参数 WhitelistType 是否已赋值
                     * @return WhitelistType 是否已赋值
                     * 
                     */
                    bool WhitelistTypeHasBeenSet() const;

                private:

                    /**
                     * <p>白名单策略id</p>
                     */
                    std::string m_whitelistStrategyId;
                    bool m_whitelistStrategyIdHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>白名单策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_strategyCategory;
                    bool m_strategyCategoryHasBeenSet;

                    /**
                     * <p>策略规则</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>资产id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>主机</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>策略规则内容描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>白名单类型。risk-风险白名单；alarm-告警白名单。</p>
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
                     * <p>白名单类型</p>
                     */
                    std::string m_whitelistType;
                    bool m_whitelistTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMWHITELISTSTRATEGY_H_
