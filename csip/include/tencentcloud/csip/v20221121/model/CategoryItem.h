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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/SeverityItem.h>
#include <tencentcloud/csip/v20221121/model/ProtectionDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 子项扣分及待办信息
                */
                class CategoryItem : public AbstractModel
                {
                public:
                    CategoryItem();
                    ~CategoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子项ID<br>枚举值：<br>vulnerability：漏洞治理<br>cloud_config：云产品配置治理<br>system_baseline：系统基线风险<br>intrusion_alert：入侵威胁告警<br>cloud_api_alert：云API告警<br>ai_agent_alert：AI Agent安全告警<br>object_storage_alert：对象存储异常告警<br>database_alert：数据库安全告警<br>protection_config：推荐防护配置未开启<br>edition_coverage：专业版/旗舰版覆盖率不足<br>product_expiry：产品7天内到期</p>
                     * @return CategoryId <p>子项ID<br>枚举值：<br>vulnerability：漏洞治理<br>cloud_config：云产品配置治理<br>system_baseline：系统基线风险<br>intrusion_alert：入侵威胁告警<br>cloud_api_alert：云API告警<br>ai_agent_alert：AI Agent安全告警<br>object_storage_alert：对象存储异常告警<br>database_alert：数据库安全告警<br>protection_config：推荐防护配置未开启<br>edition_coverage：专业版/旗舰版覆盖率不足<br>product_expiry：产品7天内到期</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>子项ID<br>枚举值：<br>vulnerability：漏洞治理<br>cloud_config：云产品配置治理<br>system_baseline：系统基线风险<br>intrusion_alert：入侵威胁告警<br>cloud_api_alert：云API告警<br>ai_agent_alert：AI Agent安全告警<br>object_storage_alert：对象存储异常告警<br>database_alert：数据库安全告警<br>protection_config：推荐防护配置未开启<br>edition_coverage：专业版/旗舰版覆盖率不足<br>product_expiry：产品7天内到期</p>
                     * @param _categoryId <p>子项ID<br>枚举值：<br>vulnerability：漏洞治理<br>cloud_config：云产品配置治理<br>system_baseline：系统基线风险<br>intrusion_alert：入侵威胁告警<br>cloud_api_alert：云API告警<br>ai_agent_alert：AI Agent安全告警<br>object_storage_alert：对象存储异常告警<br>database_alert：数据库安全告警<br>protection_config：推荐防护配置未开启<br>edition_coverage：专业版/旗舰版覆盖率不足<br>product_expiry：产品7天内到期</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>子项名称</p>
                     * @return CategoryName <p>子项名称</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>子项名称</p>
                     * @param _categoryName <p>子项名称</p>
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取<p>子类说明</p>
                     * @return CategoryDesc <p>子类说明</p>
                     * 
                     */
                    std::string GetCategoryDesc() const;

                    /**
                     * 设置<p>子类说明</p>
                     * @param _categoryDesc <p>子类说明</p>
                     * 
                     */
                    void SetCategoryDesc(const std::string& _categoryDesc);

                    /**
                     * 判断参数 CategoryDesc 是否已赋值
                     * @return CategoryDesc 是否已赋值
                     * 
                     */
                    bool CategoryDescHasBeenSet() const;

                    /**
                     * 获取<p>子项扣分上限</p>
                     * @return MaxDeductScore <p>子项扣分上限</p>
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置<p>子项扣分上限</p>
                     * @param _maxDeductScore <p>子项扣分上限</p>
                     * 
                     */
                    void SetMaxDeductScore(const int64_t& _maxDeductScore);

                    /**
                     * 判断参数 MaxDeductScore 是否已赋值
                     * @return MaxDeductScore 是否已赋值
                     * 
                     */
                    bool MaxDeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>子项实际扣分</p>
                     * @return DeductScore <p>子项实际扣分</p>
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 设置<p>子项实际扣分</p>
                     * @param _deductScore <p>子项实际扣分</p>
                     * 
                     */
                    void SetDeductScore(const int64_t& _deductScore);

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>风险总数</p>
                     * @return RiskCount <p>风险总数</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>风险总数</p>
                     * @param _riskCount <p>风险总数</p>
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取<p>等级明细，风险/威胁类子项有值</p>
                     * @return SeverityItems <p>等级明细，风险/威胁类子项有值</p>
                     * 
                     */
                    std::vector<SeverityItem> GetSeverityItems() const;

                    /**
                     * 设置<p>等级明细，风险/威胁类子项有值</p>
                     * @param _severityItems <p>等级明细，风险/威胁类子项有值</p>
                     * 
                     */
                    void SetSeverityItems(const std::vector<SeverityItem>& _severityItems);

                    /**
                     * 判断参数 SeverityItems 是否已赋值
                     * @return SeverityItems 是否已赋值
                     * 
                     */
                    bool SeverityItemsHasBeenSet() const;

                    /**
                     * 获取<p>扣分原因描述</p>
                     * @return DeductReason <p>扣分原因描述</p>
                     * 
                     */
                    std::string GetDeductReason() const;

                    /**
                     * 设置<p>扣分原因描述</p>
                     * @param _deductReason <p>扣分原因描述</p>
                     * 
                     */
                    void SetDeductReason(const std::string& _deductReason);

                    /**
                     * 判断参数 DeductReason 是否已赋值
                     * @return DeductReason 是否已赋值
                     * 
                     */
                    bool DeductReasonHasBeenSet() const;

                    /**
                     * 获取<p>处理建议文案</p>
                     * @return ActionText <p>处理建议文案</p>
                     * 
                     */
                    std::string GetActionText() const;

                    /**
                     * 设置<p>处理建议文案</p>
                     * @param _actionText <p>处理建议文案</p>
                     * 
                     */
                    void SetActionText(const std::string& _actionText);

                    /**
                     * 判断参数 ActionText 是否已赋值
                     * @return ActionText 是否已赋值
                     * 
                     */
                    bool ActionTextHasBeenSet() const;

                    /**
                     * 获取<p>防护配置详情，仅防护配置维度子项返回</p>
                     * @return ProtectionDetail <p>防护配置详情，仅防护配置维度子项返回</p>
                     * 
                     */
                    ProtectionDetail GetProtectionDetail() const;

                    /**
                     * 设置<p>防护配置详情，仅防护配置维度子项返回</p>
                     * @param _protectionDetail <p>防护配置详情，仅防护配置维度子项返回</p>
                     * 
                     */
                    void SetProtectionDetail(const ProtectionDetail& _protectionDetail);

                    /**
                     * 判断参数 ProtectionDetail 是否已赋值
                     * @return ProtectionDetail 是否已赋值
                     * 
                     */
                    bool ProtectionDetailHasBeenSet() const;

                private:

                    /**
                     * <p>子项ID<br>枚举值：<br>vulnerability：漏洞治理<br>cloud_config：云产品配置治理<br>system_baseline：系统基线风险<br>intrusion_alert：入侵威胁告警<br>cloud_api_alert：云API告警<br>ai_agent_alert：AI Agent安全告警<br>object_storage_alert：对象存储异常告警<br>database_alert：数据库安全告警<br>protection_config：推荐防护配置未开启<br>edition_coverage：专业版/旗舰版覆盖率不足<br>product_expiry：产品7天内到期</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>子项名称</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>子类说明</p>
                     */
                    std::string m_categoryDesc;
                    bool m_categoryDescHasBeenSet;

                    /**
                     * <p>子项扣分上限</p>
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * <p>子项实际扣分</p>
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                    /**
                     * <p>风险总数</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>等级明细，风险/威胁类子项有值</p>
                     */
                    std::vector<SeverityItem> m_severityItems;
                    bool m_severityItemsHasBeenSet;

                    /**
                     * <p>扣分原因描述</p>
                     */
                    std::string m_deductReason;
                    bool m_deductReasonHasBeenSet;

                    /**
                     * <p>处理建议文案</p>
                     */
                    std::string m_actionText;
                    bool m_actionTextHasBeenSet;

                    /**
                     * <p>防护配置详情，仅防护配置维度子项返回</p>
                     */
                    ProtectionDetail m_protectionDetail;
                    bool m_protectionDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CATEGORYITEM_H_
