/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/LaneRuleTag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyLaneRule请求参数结构体
                */
                class ModifyLaneRuleRequest : public AbstractModel
                {
                public:
                    ModifyLaneRuleRequest();
                    ~ModifyLaneRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取泳道规则ID
                     * @return RuleId 泳道规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置泳道规则ID
                     * @param _ruleId 泳道规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取泳道规则名称
                     * @return RuleName 泳道规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置泳道规则名称
                     * @param _ruleName 泳道规则名称
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
                     * 获取泳道规则备注
                     * @return Remark 泳道规则备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置泳道规则备注
                     * @param _remark 泳道规则备注
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
                     * 获取泳道规则标签列表
                     * @return RuleTagList 泳道规则标签列表
                     * 
                     */
                    std::vector<LaneRuleTag> GetRuleTagList() const;

                    /**
                     * 设置泳道规则标签列表
                     * @param _ruleTagList 泳道规则标签列表
                     * 
                     */
                    void SetRuleTagList(const std::vector<LaneRuleTag>& _ruleTagList);

                    /**
                     * 判断参数 RuleTagList 是否已赋值
                     * @return RuleTagList 是否已赋值
                     * 
                     */
                    bool RuleTagListHasBeenSet() const;

                    /**
                     * 获取泳道规则标签关系
                     * @return RuleTagRelationship 泳道规则标签关系
                     * 
                     */
                    std::string GetRuleTagRelationship() const;

                    /**
                     * 设置泳道规则标签关系
                     * @param _ruleTagRelationship 泳道规则标签关系
                     * 
                     */
                    void SetRuleTagRelationship(const std::string& _ruleTagRelationship);

                    /**
                     * 判断参数 RuleTagRelationship 是否已赋值
                     * @return RuleTagRelationship 是否已赋值
                     * 
                     */
                    bool RuleTagRelationshipHasBeenSet() const;

                    /**
                     * 获取泳道ID
                     * @return LaneId 泳道ID
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道ID
                     * @param _laneId 泳道ID
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取开启状态
                     * @return Enable 开启状态
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置开启状态
                     * @param _enable 开启状态
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 泳道规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 泳道规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 泳道规则备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 泳道规则标签列表
                     */
                    std::vector<LaneRuleTag> m_ruleTagList;
                    bool m_ruleTagListHasBeenSet;

                    /**
                     * 泳道规则标签关系
                     */
                    std::string m_ruleTagRelationship;
                    bool m_ruleTagRelationshipHasBeenSet;

                    /**
                     * 泳道ID
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 开启状态
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_
