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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKVIEWRISKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKVIEWRISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/StandardTerm.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 检查项视角风险
                */
                class CheckViewRiskItem : public AbstractModel
                {
                public:
                    CheckViewRiskItem();
                    ~CheckViewRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检查项规则ID</p>
                     * @return RiskRuleId <p>检查项规则ID</p>
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置<p>检查项规则ID</p>
                     * @param _riskRuleId <p>检查项规则ID</p>
                     * 
                     */
                    void SetRiskRuleId(const std::string& _riskRuleId);

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>风险名称</p>
                     * @return RiskTitle <p>风险名称</p>
                     * 
                     */
                    std::string GetRiskTitle() const;

                    /**
                     * 设置<p>风险名称</p>
                     * @param _riskTitle <p>风险名称</p>
                     * 
                     */
                    void SetRiskTitle(const std::string& _riskTitle);

                    /**
                     * 判断参数 RiskTitle 是否已赋值
                     * @return RiskTitle 是否已赋值
                     * 
                     */
                    bool RiskTitleHasBeenSet() const;

                    /**
                     * 获取<p>检查类型</p>
                     * @return CheckType <p>检查类型</p>
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置<p>检查类型</p>
                     * @param _checkType <p>检查类型</p>
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>风险等级</p>
                     * @return Severity <p>风险等级</p>
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置<p>风险等级</p>
                     * @param _severity <p>风险等级</p>
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>存在1个风险项</p>
                     * @return RiskDesc <p>存在1个风险项</p>
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置<p>存在1个风险项</p>
                     * @param _riskDesc <p>存在1个风险项</p>
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

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
                     * 获取<p>风险更新时间</p>
                     * @return UpdateTime <p>风险更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>风险更新时间</p>
                     * @param _updateTime <p>风险更新时间</p>
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
                     * 获取<p>风险状态</p>
                     * @return RiskStatus <p>风险状态</p>
                     * 
                     */
                    uint64_t GetRiskStatus() const;

                    /**
                     * 设置<p>风险状态</p>
                     * @param _riskStatus <p>风险状态</p>
                     * 
                     */
                    void SetRiskStatus(const uint64_t& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取<p>受影响资产数量</p>
                     * @return AssetCount <p>受影响资产数量</p>
                     * 
                     */
                    uint64_t GetAssetCount() const;

                    /**
                     * 设置<p>受影响资产数量</p>
                     * @param _assetCount <p>受影响资产数量</p>
                     * 
                     */
                    void SetAssetCount(const uint64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取<p>风险数量</p>
                     * @return RiskCount <p>风险数量</p>
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置<p>风险数量</p>
                     * @param _riskCount <p>风险数量</p>
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

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
                     * 获取<p>事件类型</p>
                     * @return EventType <p>事件类型</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型</p>
                     * @param _eventType <p>事件类型</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>处置分类</p>
                     * @return Classify <p>处置分类</p>
                     * 
                     */
                    std::string GetClassify() const;

                    /**
                     * 设置<p>处置分类</p>
                     * @param _classify <p>处置分类</p>
                     * 
                     */
                    void SetClassify(const std::string& _classify);

                    /**
                     * 判断参数 Classify 是否已赋值
                     * @return Classify 是否已赋值
                     * 
                     */
                    bool ClassifyHasBeenSet() const;

                    /**
                     * 获取<p>cspm规范条款</p>
                     * @return StandardTerms <p>cspm规范条款</p>
                     * 
                     */
                    std::vector<StandardTerm> GetStandardTerms() const;

                    /**
                     * 设置<p>cspm规范条款</p>
                     * @param _standardTerms <p>cspm规范条款</p>
                     * 
                     */
                    void SetStandardTerms(const std::vector<StandardTerm>& _standardTerms);

                    /**
                     * 判断参数 StandardTerms 是否已赋值
                     * @return StandardTerms 是否已赋值
                     * 
                     */
                    bool StandardTermsHasBeenSet() const;

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

                private:

                    /**
                     * <p>检查项规则ID</p>
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * <p>风险名称</p>
                     */
                    std::string m_riskTitle;
                    bool m_riskTitleHasBeenSet;

                    /**
                     * <p>检查类型</p>
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>风险等级</p>
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>存在1个风险项</p>
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * <p>首次发现时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>风险更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>云厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>风险状态</p>
                     */
                    uint64_t m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>受影响资产数量</p>
                     */
                    uint64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * <p>风险数量</p>
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>事件类型</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>处置分类</p>
                     */
                    std::string m_classify;
                    bool m_classifyHasBeenSet;

                    /**
                     * <p>cspm规范条款</p>
                     */
                    std::vector<StandardTerm> m_standardTerms;
                    bool m_standardTermsHasBeenSet;

                    /**
                     * <p>资产类型图标</p>
                     */
                    std::string m_assetTypeIconURL;
                    bool m_assetTypeIconURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKVIEWRISKITEM_H_
