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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 镜像拦截规则
                */
                class ImageDenyRule : public AbstractModel
                {
                public:
                    ImageDenyRule();
                    ~ImageDenyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则RuleID
                     * @return RuleID 规则RuleID
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置规则RuleID
                     * @param _ruleID 规则RuleID
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     * @return RuleType 规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     * @param _ruleType 规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取生效的镜像数量
                     * @return EffectImageCount 生效的镜像数量
                     * 
                     */
                    int64_t GetEffectImageCount() const;

                    /**
                     * 设置生效的镜像数量
                     * @param _effectImageCount 生效的镜像数量
                     * 
                     */
                    void SetEffectImageCount(const int64_t& _effectImageCount);

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     * @return IsEffectAllImage 是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     * 
                     */
                    int64_t GetIsEffectAllImage() const;

                    /**
                     * 设置是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     * @param _isEffectAllImage 是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     * 
                     */
                    void SetIsEffectAllImage(const int64_t& _isEffectAllImage);

                    /**
                     * 判断参数 IsEffectAllImage 是否已赋值
                     * @return IsEffectAllImage 是否已赋值
                     * 
                     */
                    bool IsEffectAllImageHasBeenSet() const;

                    /**
                     * 获取规则开始生效时间
                     * @return EffectTime 规则开始生效时间
                     * 
                     */
                    std::string GetEffectTime() const;

                    /**
                     * 设置规则开始生效时间
                     * @param _effectTime 规则开始生效时间
                     * 
                     */
                    void SetEffectTime(const std::string& _effectTime);

                    /**
                     * 判断参数 EffectTime 是否已赋值
                     * @return EffectTime 是否已赋值
                     * 
                     */
                    bool EffectTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取操作用户
                     * @return OperationUin 操作用户
                     * 
                     */
                    std::string GetOperationUin() const;

                    /**
                     * 设置操作用户
                     * @param _operationUin 操作用户
                     * 
                     */
                    void SetOperationUin(const std::string& _operationUin);

                    /**
                     * 判断参数 OperationUin 是否已赋值
                     * @return OperationUin 是否已赋值
                     * 
                     */
                    bool OperationUinHasBeenSet() const;

                    /**
                     * 获取启用状态
                     * @return Status 启用状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置启用状态
                     * @param _status 启用状态
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
                     * 获取生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * @return EffectStatus 生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * 
                     */
                    std::string GetEffectStatus() const;

                    /**
                     * 设置生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * @param _effectStatus 生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     * 
                     */
                    void SetEffectStatus(const std::string& _effectStatus);

                    /**
                     * 判断参数 EffectStatus 是否已赋值
                     * @return EffectStatus 是否已赋值
                     * 
                     */
                    bool EffectStatusHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return ID 规则ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置规则ID
                     * @param _iD 规则ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 规则RuleID
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则类型 RULE_RISK：风险， RULE_PRIVILEGE：特权
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 生效的镜像数量
                     */
                    int64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * 是否对全部扫描镜像生效。0:全选镜像，1:自选镜像
                     */
                    int64_t m_isEffectAllImage;
                    bool m_isEffectAllImageHasBeenSet;

                    /**
                     * 规则开始生效时间
                     */
                    std::string m_effectTime;
                    bool m_effectTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 操作用户
                     */
                    std::string m_operationUin;
                    bool m_operationUinHasBeenSet;

                    /**
                     * 启用状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 生效状态 IN_THE_TEST ：观察中，IN_EFFECT：生效中
                     */
                    std::string m_effectStatus;
                    bool m_effectStatusHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEDENYRULE_H_
