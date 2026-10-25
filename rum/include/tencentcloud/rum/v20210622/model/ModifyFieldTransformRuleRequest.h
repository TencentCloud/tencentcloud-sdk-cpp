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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYFIELDTRANSFORMRULEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYFIELDTRANSFORMRULEREQUEST_H_

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
                * ModifyFieldTransformRule请求参数结构体
                */
                class ModifyFieldTransformRuleRequest : public AbstractModel
                {
                public:
                    ModifyFieldTransformRuleRequest();
                    ~ModifyFieldTransformRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则id</p>
                     * @return Id <p>规则id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>规则id</p>
                     * @param _id <p>规则id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>规则名</p>
                     * @return Name <p>规则名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名</p>
                     * @param _name <p>规则名</p>
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
                     * 获取<p>目标字段</p>
                     * @return TargetField <p>目标字段</p>
                     * 
                     */
                    std::string GetTargetField() const;

                    /**
                     * 设置<p>目标字段</p>
                     * @param _targetField <p>目标字段</p>
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
                     * 获取<p>匹配方式</p>
                     * @return MatchType <p>匹配方式</p>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>匹配方式</p>
                     * @param _matchType <p>匹配方式</p>
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
                     * 获取<p>匹配规则</p>
                     * @return MatchPattern <p>匹配规则</p>
                     * 
                     */
                    std::string GetMatchPattern() const;

                    /**
                     * 设置<p>匹配规则</p>
                     * @param _matchPattern <p>匹配规则</p>
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
                     * 获取<p>转换方式</p>
                     * @return TransformAction <p>转换方式</p>
                     * 
                     */
                    std::string GetTransformAction() const;

                    /**
                     * 设置<p>转换方式</p>
                     * @param _transformAction <p>转换方式</p>
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
                     * 获取<p>替换值</p>
                     * @return ReplaceValue <p>替换值</p>
                     * 
                     */
                    std::string GetReplaceValue() const;

                    /**
                     * 设置<p>替换值</p>
                     * @param _replaceValue <p>替换值</p>
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
                     * 获取<p>规则优先级</p>
                     * @return Priority <p>规则优先级</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>规则优先级</p>
                     * @param _priority <p>规则优先级</p>
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
                     * 获取<p>是否开启</p>
                     * @return Enabled <p>是否开启</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启</p>
                     * @param _enabled <p>是否开启</p>
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
                     * <p>规则id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>规则名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>目标字段</p>
                     */
                    std::string m_targetField;
                    bool m_targetFieldHasBeenSet;

                    /**
                     * <p>匹配方式</p>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * <p>匹配规则</p>
                     */
                    std::string m_matchPattern;
                    bool m_matchPatternHasBeenSet;

                    /**
                     * <p>转换方式</p>
                     */
                    std::string m_transformAction;
                    bool m_transformActionHasBeenSet;

                    /**
                     * <p>替换值</p>
                     */
                    std::string m_replaceValue;
                    bool m_replaceValueHasBeenSet;

                    /**
                     * <p>规则优先级</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>是否开启</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYFIELDTRANSFORMRULEREQUEST_H_
