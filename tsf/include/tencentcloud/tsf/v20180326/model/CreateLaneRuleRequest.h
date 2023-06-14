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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATELANERULEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATELANERULEREQUEST_H_

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
                * CreateLaneRule请求参数结构体
                */
                class CreateLaneRuleRequest : public AbstractModel
                {
                public:
                    CreateLaneRuleRequest();
                    ~CreateLaneRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取泳道Id
                     * @return LaneId 泳道Id
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道Id
                     * @param _laneId 泳道Id
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
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

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
                     * 泳道Id
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATELANERULEREQUEST_H_
