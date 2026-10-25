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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMFIELDTRANSFORMRULEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMFIELDTRANSFORMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateTDEMFieldTransformRule请求参数结构体
                */
                class CreateTDEMFieldTransformRuleRequest : public AbstractModel
                {
                public:
                    CreateTDEMFieldTransformRuleRequest();
                    ~CreateTDEMFieldTransformRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID（必填）</p>
                     * @return AppId <p>应用 ID（必填）</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID（必填）</p>
                     * @param _appId <p>应用 ID（必填）</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>目标字段（必填）：page_url / normalized_page_url / page_title / referrer / resource_url / user_id / target_element / target_text</p>
                     * @return TargetField <p>目标字段（必填）：page_url / normalized_page_url / page_title / referrer / resource_url / user_id / target_element / target_text</p>
                     * 
                     */
                    std::string GetTargetField() const;

                    /**
                     * 设置<p>目标字段（必填）：page_url / normalized_page_url / page_title / referrer / resource_url / user_id / target_element / target_text</p>
                     * @param _targetField <p>目标字段（必填）：page_url / normalized_page_url / page_title / referrer / resource_url / user_id / target_element / target_text</p>
                     * 
                     */
                    void SetTargetField(const std::string& _targetField);

                    /**
                     * 判断参数 TargetField 是否已赋值
                     * @return TargetField 是否已赋值
                     * 
                     */
                    bool TargetFieldHasBeenSet() const;

                    /**
                     * 获取<p>匹配方式（必填）：exact / prefix / contains / regex</p>
                     * @return MatchType <p>匹配方式（必填）：exact / prefix / contains / regex</p>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>匹配方式（必填）：exact / prefix / contains / regex</p>
                     * @param _matchType <p>匹配方式（必填）：exact / prefix / contains / regex</p>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>匹配模式（必填）</p>
                     * @return MatchPattern <p>匹配模式（必填）</p>
                     * 
                     */
                    std::string GetMatchPattern() const;

                    /**
                     * 设置<p>匹配模式（必填）</p>
                     * @param _matchPattern <p>匹配模式（必填）</p>
                     * 
                     */
                    void SetMatchPattern(const std::string& _matchPattern);

                    /**
                     * 判断参数 MatchPattern 是否已赋值
                     * @return MatchPattern 是否已赋值
                     * 
                     */
                    bool MatchPatternHasBeenSet() const;

                    /**
                     * 获取<p>替换动作（必填）：replace / regex_replace / mask</p>
                     * @return TransformAction <p>替换动作（必填）：replace / regex_replace / mask</p>
                     * 
                     */
                    std::string GetTransformAction() const;

                    /**
                     * 设置<p>替换动作（必填）：replace / regex_replace / mask</p>
                     * @param _transformAction <p>替换动作（必填）：replace / regex_replace / mask</p>
                     * 
                     */
                    void SetTransformAction(const std::string& _transformAction);

                    /**
                     * 判断参数 TransformAction 是否已赋值
                     * @return TransformAction 是否已赋值
                     * 
                     */
                    bool TransformActionHasBeenSet() const;

                    /**
                     * 获取<p>规则名称（可选）</p>
                     * @return Name <p>规则名称（可选）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名称（可选）</p>
                     * @param _name <p>规则名称（可选）</p>
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
                     * 获取<p>替换值（replace / regex_replace 使用）</p>
                     * @return ReplaceValue <p>替换值（replace / regex_replace 使用）</p>
                     * 
                     */
                    std::string GetReplaceValue() const;

                    /**
                     * 设置<p>替换值（replace / regex_replace 使用）</p>
                     * @param _replaceValue <p>替换值（replace / regex_replace 使用）</p>
                     * 
                     */
                    void SetReplaceValue(const std::string& _replaceValue);

                    /**
                     * 判断参数 ReplaceValue 是否已赋值
                     * @return ReplaceValue 是否已赋值
                     * 
                     */
                    bool ReplaceValueHasBeenSet() const;

                    /**
                     * 获取<p>优先级（可选）</p>
                     * @return Priority <p>优先级（可选）</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级（可选）</p>
                     * @param _priority <p>优先级（可选）</p>
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>是否启用，默认 true</p>
                     * @return Enabled <p>是否启用，默认 true</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用，默认 true</p>
                     * @param _enabled <p>是否启用，默认 true</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID（必填）</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>目标字段（必填）：page_url / normalized_page_url / page_title / referrer / resource_url / user_id / target_element / target_text</p>
                     */
                    std::string m_targetField;
                    bool m_targetFieldHasBeenSet;

                    /**
                     * <p>匹配方式（必填）：exact / prefix / contains / regex</p>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * <p>匹配模式（必填）</p>
                     */
                    std::string m_matchPattern;
                    bool m_matchPatternHasBeenSet;

                    /**
                     * <p>替换动作（必填）：replace / regex_replace / mask</p>
                     */
                    std::string m_transformAction;
                    bool m_transformActionHasBeenSet;

                    /**
                     * <p>规则名称（可选）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>替换值（replace / regex_replace 使用）</p>
                     */
                    std::string m_replaceValue;
                    bool m_replaceValueHasBeenSet;

                    /**
                     * <p>优先级（可选）</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>是否启用，默认 true</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMFIELDTRANSFORMRULEREQUEST_H_
