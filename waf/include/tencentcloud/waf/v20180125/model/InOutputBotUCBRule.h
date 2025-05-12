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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_INOUTPUTBOTUCBRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_INOUTPUTBOTUCBRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/InOutputUCBRuleEntry.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>
#include <tencentcloud/waf/v20180125/model/UCBActionProportion.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 修改/新增自定义规则的入参，查询自定义规则列表时的出参
                */
                class InOutputBotUCBRule : public AbstractModel
                {
                public:
                    InOutputBotUCBRule();
                    ~InOutputBotUCBRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取UCB的具体规则项
                     * @return Rule UCB的具体规则项
                     * 
                     */
                    std::vector<InOutputUCBRuleEntry> GetRule() const;

                    /**
                     * 设置UCB的具体规则项
                     * @param _rule UCB的具体规则项
                     * 
                     */
                    void SetRule(const std::vector<InOutputUCBRuleEntry>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取处置动作
                     * @return Action 处置动作
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置动作
                     * @param _action 处置动作
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则开关
                     * @return OnOff 规则开关
                     * 
                     */
                    std::string GetOnOff() const;

                    /**
                     * 设置规则开关
                     * @param _onOff 规则开关
                     * 
                     */
                    void SetOnOff(const std::string& _onOff);

                    /**
                     * 判断参数 OnOff 是否已赋值
                     * @return OnOff 是否已赋值
                     * 
                     */
                    bool OnOffHasBeenSet() const;

                    /**
                     * 获取规则类型
                     * @return RuleType 规则类型
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型
                     * @param _ruleType 规则类型
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则优先级
                     * @return Prior 规则优先级
                     * 
                     */
                    int64_t GetPrior() const;

                    /**
                     * 设置规则优先级
                     * @param _prior 规则优先级
                     * 
                     */
                    void SetPrior(const int64_t& _prior);

                    /**
                     * 判断参数 Prior 是否已赋值
                     * @return Prior 是否已赋值
                     * 
                     */
                    bool PriorHasBeenSet() const;

                    /**
                     * 获取修改时间戳
                     * @return Timestamp 修改时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置修改时间戳
                     * @param _timestamp 修改时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Label 标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
                     * @param _label 标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取入参ID
                     * @return Id 入参ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置入参ID
                     * @param _id 入参ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取生效时间
                     * @return ValidTime 生效时间
                     * 
                     */
                    int64_t GetValidTime() const;

                    /**
                     * 设置生效时间
                     * @param _validTime 生效时间
                     * 
                     */
                    void SetValidTime(const int64_t& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取传入的appid
                     * @return Appid 传入的appid
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置传入的appid
                     * @param _appid 传入的appid
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取额外参数
                     * @return AdditionArg 额外参数
                     * 
                     */
                    std::string GetAdditionArg() const;

                    /**
                     * 设置额外参数
                     * @param _additionArg 额外参数
                     * 
                     */
                    void SetAdditionArg(const std::string& _additionArg);

                    /**
                     * 判断参数 AdditionArg 是否已赋值
                     * @return AdditionArg 是否已赋值
                     * 
                     */
                    bool AdditionArgHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Desc 规则描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置规则描述
                     * @param _desc 规则描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取true-系统预设规则 false-自定义规则
                     * @return PreDefine true-系统预设规则 false-自定义规则
                     * 
                     */
                    bool GetPreDefine() const;

                    /**
                     * 设置true-系统预设规则 false-自定义规则
                     * @param _preDefine true-系统预设规则 false-自定义规则
                     * 
                     */
                    void SetPreDefine(const bool& _preDefine);

                    /**
                     * 判断参数 PreDefine 是否已赋值
                     * @return PreDefine 是否已赋值
                     * 
                     */
                    bool PreDefineHasBeenSet() const;

                    /**
                     * 获取定时任务类型
                     * @return JobType 定时任务类型
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置定时任务类型
                     * @param _jobType 定时任务类型
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取定时任务配置
                     * @return JobDateTime 定时任务配置
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时任务配置
                     * @param _jobDateTime 定时任务配置
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取生效截止时间
                     * @return ExpireTime 生效截止时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置生效截止时间
                     * @param _expireTime 生效截止时间
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取生效-1,失效-0
                     * @return ValidStatus 生效-1,失效-0
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置生效-1,失效-0
                     * @param _validStatus 生效-1,失效-0
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取自定义拦截页面ID
                     * @return BlockPageId 自定义拦截页面ID
                     * 
                     */
                    uint64_t GetBlockPageId() const;

                    /**
                     * 设置自定义拦截页面ID
                     * @param _blockPageId 自定义拦截页面ID
                     * 
                     */
                    void SetBlockPageId(const uint64_t& _blockPageId);

                    /**
                     * 判断参数 BlockPageId 是否已赋值
                     * @return BlockPageId 是否已赋值
                     * 
                     */
                    bool BlockPageIdHasBeenSet() const;

                    /**
                     * 获取当Action=intercept时，此字段必填
                     * @return ActionList 当Action=intercept时，此字段必填
                     * 
                     */
                    std::vector<UCBActionProportion> GetActionList() const;

                    /**
                     * 设置当Action=intercept时，此字段必填
                     * @param _actionList 当Action=intercept时，此字段必填
                     * 
                     */
                    void SetActionList(const std::vector<UCBActionProportion>& _actionList);

                    /**
                     * 判断参数 ActionList 是否已赋值
                     * @return ActionList 是否已赋值
                     * 
                     */
                    bool ActionListHasBeenSet() const;

                    /**
                     * 获取惩罚时间
                     * @return DelayTime 惩罚时间
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置惩罚时间
                     * @param _delayTime 惩罚时间
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * UCB的具体规则项
                     */
                    std::vector<InOutputUCBRuleEntry> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 处置动作
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则开关
                     */
                    std::string m_onOff;
                    bool m_onOffHasBeenSet;

                    /**
                     * 规则类型
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则优先级
                     */
                    int64_t m_prior;
                    bool m_priorHasBeenSet;

                    /**
                     * 修改时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 入参ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 生效时间
                     */
                    int64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 传入的appid
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 额外参数
                     */
                    std::string m_additionArg;
                    bool m_additionArgHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * true-系统预设规则 false-自定义规则
                     */
                    bool m_preDefine;
                    bool m_preDefineHasBeenSet;

                    /**
                     * 定时任务类型
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 定时任务配置
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 生效截止时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 生效-1,失效-0
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * 自定义拦截页面ID
                     */
                    uint64_t m_blockPageId;
                    bool m_blockPageIdHasBeenSet;

                    /**
                     * 当Action=intercept时，此字段必填
                     */
                    std::vector<UCBActionProportion> m_actionList;
                    bool m_actionListHasBeenSet;

                    /**
                     * 惩罚时间
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INOUTPUTBOTUCBRULE_H_
