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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMSDKACCESSITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMSDKACCESSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * sdk接入配置
                */
                class LLMSdkAccessItem : public AbstractModel
                {
                public:
                    LLMSdkAccessItem();
                    ~LLMSdkAccessItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务id</p>
                     * @return Domain <p>服务id</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>服务id</p>
                     * @param _domain <p>服务id</p>
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
                     * 获取<p>服务名称</p>
                     * @return Name <p>服务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _name <p>服务名称</p>
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
                     * 获取<p>SDK接入来源，可不填</p>
                     * @return SdkSource <p>SDK接入来源，可不填</p>
                     * 
                     */
                    std::string GetSdkSource() const;

                    /**
                     * 设置<p>SDK接入来源，可不填</p>
                     * @param _sdkSource <p>SDK接入来源，可不填</p>
                     * 
                     */
                    void SetSdkSource(const std::string& _sdkSource);

                    /**
                     * 判断参数 SdkSource 是否已赋值
                     * @return SdkSource 是否已赋值
                     * 
                     */
                    bool SdkSourceHasBeenSet() const;

                    /**
                     * 获取<p>总开关</p>
                     * @return MainStatus <p>总开关</p>
                     * 
                     */
                    bool GetMainStatus() const;

                    /**
                     * 设置<p>总开关</p>
                     * @param _mainStatus <p>总开关</p>
                     * 
                     */
                    void SetMainStatus(const bool& _mainStatus);

                    /**
                     * 判断参数 MainStatus 是否已赋值
                     * @return MainStatus 是否已赋值
                     * 
                     */
                    bool MainStatusHasBeenSet() const;

                    /**
                     * 获取<p>限速开关</p>
                     * @return LimitRuleStatus <p>限速开关</p>
                     * 
                     */
                    bool GetLimitRuleStatus() const;

                    /**
                     * 设置<p>限速开关</p>
                     * @param _limitRuleStatus <p>限速开关</p>
                     * 
                     */
                    void SetLimitRuleStatus(const bool& _limitRuleStatus);

                    /**
                     * 判断参数 LimitRuleStatus 是否已赋值
                     * @return LimitRuleStatus 是否已赋值
                     * 
                     */
                    bool LimitRuleStatusHasBeenSet() const;

                    /**
                     * 获取<p>内容安全开关</p>
                     * @return ContentRuleStatus <p>内容安全开关</p>
                     * 
                     */
                    bool GetContentRuleStatus() const;

                    /**
                     * 设置<p>内容安全开关</p>
                     * @param _contentRuleStatus <p>内容安全开关</p>
                     * 
                     */
                    void SetContentRuleStatus(const bool& _contentRuleStatus);

                    /**
                     * 判断参数 ContentRuleStatus 是否已赋值
                     * @return ContentRuleStatus 是否已赋值
                     * 
                     */
                    bool ContentRuleStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return UpdateTime <p>修改时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _updateTime <p>修改时间</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>限流规则数量</p>
                     * @return LimitRuleCount <p>限流规则数量</p>
                     * 
                     */
                    uint64_t GetLimitRuleCount() const;

                    /**
                     * 设置<p>限流规则数量</p>
                     * @param _limitRuleCount <p>限流规则数量</p>
                     * 
                     */
                    void SetLimitRuleCount(const uint64_t& _limitRuleCount);

                    /**
                     * 判断参数 LimitRuleCount 是否已赋值
                     * @return LimitRuleCount 是否已赋值
                     * 
                     */
                    bool LimitRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>内容安全规则数量</p>
                     * @return ContentRuleCount <p>内容安全规则数量</p>
                     * 
                     */
                    uint64_t GetContentRuleCount() const;

                    /**
                     * 设置<p>内容安全规则数量</p>
                     * @param _contentRuleCount <p>内容安全规则数量</p>
                     * 
                     */
                    void SetContentRuleCount(const uint64_t& _contentRuleCount);

                    /**
                     * 判断参数 ContentRuleCount 是否已赋值
                     * @return ContentRuleCount 是否已赋值
                     * 
                     */
                    bool ContentRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>toolcall防护开关</p>
                     * @return ToolCallStatus <p>toolcall防护开关</p>
                     * 
                     */
                    bool GetToolCallStatus() const;

                    /**
                     * 设置<p>toolcall防护开关</p>
                     * @param _toolCallStatus <p>toolcall防护开关</p>
                     * 
                     */
                    void SetToolCallStatus(const bool& _toolCallStatus);

                    /**
                     * 判断参数 ToolCallStatus 是否已赋值
                     * @return ToolCallStatus 是否已赋值
                     * 
                     */
                    bool ToolCallStatusHasBeenSet() const;

                    /**
                     * 获取<p>llm推理防护开关</p>
                     * @return LLMProtectStatus <p>llm推理防护开关</p>
                     * 
                     */
                    bool GetLLMProtectStatus() const;

                    /**
                     * 设置<p>llm推理防护开关</p>
                     * @param _lLMProtectStatus <p>llm推理防护开关</p>
                     * 
                     */
                    void SetLLMProtectStatus(const bool& _lLMProtectStatus);

                    /**
                     * 判断参数 LLMProtectStatus 是否已赋值
                     * @return LLMProtectStatus 是否已赋值
                     * 
                     */
                    bool LLMProtectStatusHasBeenSet() const;

                    /**
                     * 获取<p>内容合规检测开关</p>
                     * @return ContentComplianceStatus <p>内容合规检测开关</p>
                     * 
                     */
                    bool GetContentComplianceStatus() const;

                    /**
                     * 设置<p>内容合规检测开关</p>
                     * @param _contentComplianceStatus <p>内容合规检测开关</p>
                     * 
                     */
                    void SetContentComplianceStatus(const bool& _contentComplianceStatus);

                    /**
                     * 判断参数 ContentComplianceStatus 是否已赋值
                     * @return ContentComplianceStatus 是否已赋值
                     * 
                     */
                    bool ContentComplianceStatusHasBeenSet() const;

                    /**
                     * 获取<p>dlp防护开关</p>
                     * @return DLPStatus <p>dlp防护开关</p>
                     * 
                     */
                    bool GetDLPStatus() const;

                    /**
                     * 设置<p>dlp防护开关</p>
                     * @param _dLPStatus <p>dlp防护开关</p>
                     * 
                     */
                    void SetDLPStatus(const bool& _dLPStatus);

                    /**
                     * 判断参数 DLPStatus 是否已赋值
                     * @return DLPStatus 是否已赋值
                     * 
                     */
                    bool DLPStatusHasBeenSet() const;

                    /**
                     * 获取<p>skills防护开关</p>
                     * @return SkillsStatus <p>skills防护开关</p>
                     * 
                     */
                    bool GetSkillsStatus() const;

                    /**
                     * 设置<p>skills防护开关</p>
                     * @param _skillsStatus <p>skills防护开关</p>
                     * 
                     */
                    void SetSkillsStatus(const bool& _skillsStatus);

                    /**
                     * 判断参数 SkillsStatus 是否已赋值
                     * @return SkillsStatus 是否已赋值
                     * 
                     */
                    bool SkillsStatusHasBeenSet() const;

                    /**
                     * 获取<p>意图识别检测开关</p>
                     * @return IntentStatus <p>意图识别检测开关</p>
                     * 
                     */
                    bool GetIntentStatus() const;

                    /**
                     * 设置<p>意图识别检测开关</p>
                     * @param _intentStatus <p>意图识别检测开关</p>
                     * 
                     */
                    void SetIntentStatus(const bool& _intentStatus);

                    /**
                     * 判断参数 IntentStatus 是否已赋值
                     * @return IntentStatus 是否已赋值
                     * 
                     */
                    bool IntentStatusHasBeenSet() const;

                    /**
                     * 获取<p>恶意URL检测开关</p>
                     * @return UrlDetectStatus <p>恶意URL检测开关</p>
                     * 
                     */
                    bool GetUrlDetectStatus() const;

                    /**
                     * 设置<p>恶意URL检测开关</p>
                     * @param _urlDetectStatus <p>恶意URL检测开关</p>
                     * 
                     */
                    void SetUrlDetectStatus(const bool& _urlDetectStatus);

                    /**
                     * 判断参数 UrlDetectStatus 是否已赋值
                     * @return UrlDetectStatus 是否已赋值
                     * 
                     */
                    bool UrlDetectStatusHasBeenSet() const;

                    /**
                     * 获取<p>生效规则数量</p>
                     * @return EffectiveRules <p>生效规则数量</p>
                     * 
                     */
                    int64_t GetEffectiveRules() const;

                    /**
                     * 设置<p>生效规则数量</p>
                     * @param _effectiveRules <p>生效规则数量</p>
                     * 
                     */
                    void SetEffectiveRules(const int64_t& _effectiveRules);

                    /**
                     * 判断参数 EffectiveRules 是否已赋值
                     * @return EffectiveRules 是否已赋值
                     * 
                     */
                    bool EffectiveRulesHasBeenSet() const;

                private:

                    /**
                     * <p>服务id</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>SDK接入来源，可不填</p>
                     */
                    std::string m_sdkSource;
                    bool m_sdkSourceHasBeenSet;

                    /**
                     * <p>总开关</p>
                     */
                    bool m_mainStatus;
                    bool m_mainStatusHasBeenSet;

                    /**
                     * <p>限速开关</p>
                     */
                    bool m_limitRuleStatus;
                    bool m_limitRuleStatusHasBeenSet;

                    /**
                     * <p>内容安全开关</p>
                     */
                    bool m_contentRuleStatus;
                    bool m_contentRuleStatusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>限流规则数量</p>
                     */
                    uint64_t m_limitRuleCount;
                    bool m_limitRuleCountHasBeenSet;

                    /**
                     * <p>内容安全规则数量</p>
                     */
                    uint64_t m_contentRuleCount;
                    bool m_contentRuleCountHasBeenSet;

                    /**
                     * <p>toolcall防护开关</p>
                     */
                    bool m_toolCallStatus;
                    bool m_toolCallStatusHasBeenSet;

                    /**
                     * <p>llm推理防护开关</p>
                     */
                    bool m_lLMProtectStatus;
                    bool m_lLMProtectStatusHasBeenSet;

                    /**
                     * <p>内容合规检测开关</p>
                     */
                    bool m_contentComplianceStatus;
                    bool m_contentComplianceStatusHasBeenSet;

                    /**
                     * <p>dlp防护开关</p>
                     */
                    bool m_dLPStatus;
                    bool m_dLPStatusHasBeenSet;

                    /**
                     * <p>skills防护开关</p>
                     */
                    bool m_skillsStatus;
                    bool m_skillsStatusHasBeenSet;

                    /**
                     * <p>意图识别检测开关</p>
                     */
                    bool m_intentStatus;
                    bool m_intentStatusHasBeenSet;

                    /**
                     * <p>恶意URL检测开关</p>
                     */
                    bool m_urlDetectStatus;
                    bool m_urlDetectStatusHasBeenSet;

                    /**
                     * <p>生效规则数量</p>
                     */
                    int64_t m_effectiveRules;
                    bool m_effectiveRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMSDKACCESSITEM_H_
