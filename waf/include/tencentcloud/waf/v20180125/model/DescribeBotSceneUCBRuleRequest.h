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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENEUCBRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENEUCBRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBotSceneUCBRule请求参数结构体
                */
                class DescribeBotSceneUCBRuleRequest : public AbstractModel
                {
                public:
                    DescribeBotSceneUCBRuleRequest();
                    ~DescribeBotSceneUCBRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取翻页组件的起始页
                     * @return Skip 翻页组件的起始页
                     * 
                     */
                    uint64_t GetSkip() const;

                    /**
                     * 设置翻页组件的起始页
                     * @param _skip 翻页组件的起始页
                     * 
                     */
                    void SetSkip(const uint64_t& _skip);

                    /**
                     * 判断参数 Skip 是否已赋值
                     * @return Skip 是否已赋值
                     * 
                     */
                    bool SkipHasBeenSet() const;

                    /**
                     * 获取翻页组件的页数据条数
                     * @return Limit 翻页组件的页数据条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页组件的页数据条数
                     * @param _limit 翻页组件的页数据条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return Sort 排序参数
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序参数
                     * @param _sort 排序参数
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取1.BOT全局白名单处调用时，传"global";2.BOT场景配置处调用时，传具体的场景ID
                     * @return SceneId 1.BOT全局白名单处调用时，传"global";2.BOT场景配置处调用时，传具体的场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置1.BOT全局白名单处调用时，传"global";2.BOT场景配置处调用时，传具体的场景ID
                     * @param _sceneId 1.BOT全局白名单处调用时，传"global";2.BOT场景配置处调用时，传具体的场景ID
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
                     * 获取需要过滤的动作
                     * @return Operate 需要过滤的动作
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置需要过滤的动作
                     * @param _operate 需要过滤的动作
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取需要过滤的规则名称
                     * @return Name 需要过滤的规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置需要过滤的规则名称
                     * @param _name 需要过滤的规则名称
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
                     * 获取兼容老数据和新旧版前端
                     * @return VersionFlag 兼容老数据和新旧版前端
                     * 
                     */
                    std::string GetVersionFlag() const;

                    /**
                     * 设置兼容老数据和新旧版前端
                     * @param _versionFlag 兼容老数据和新旧版前端
                     * 
                     */
                    void SetVersionFlag(const std::string& _versionFlag);

                    /**
                     * 判断参数 VersionFlag 是否已赋值
                     * @return VersionFlag 是否已赋值
                     * 
                     */
                    bool VersionFlagHasBeenSet() const;

                    /**
                     * 获取生效方式：0-全部 1-永久生效 2-定时生效 3-周粒度生效 4-月粒度生效
                     * @return TimerType 生效方式：0-全部 1-永久生效 2-定时生效 3-周粒度生效 4-月粒度生效
                     * 
                     */
                    uint64_t GetTimerType() const;

                    /**
                     * 设置生效方式：0-全部 1-永久生效 2-定时生效 3-周粒度生效 4-月粒度生效
                     * @param _timerType 生效方式：0-全部 1-永久生效 2-定时生效 3-周粒度生效 4-月粒度生效
                     * 
                     */
                    void SetTimerType(const uint64_t& _timerType);

                    /**
                     * 判断参数 TimerType 是否已赋值
                     * @return TimerType 是否已赋值
                     * 
                     */
                    bool TimerTypeHasBeenSet() const;

                    /**
                     * 获取0-全部 1-生效中 2-已过期
                     * @return ValidStatus 0-全部 1-生效中 2-已过期
                     * 
                     */
                    uint64_t GetValidStatus() const;

                    /**
                     * 设置0-全部 1-生效中 2-已过期
                     * @param _validStatus 0-全部 1-生效中 2-已过期
                     * 
                     */
                    void SetValidStatus(const uint64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 翻页组件的起始页
                     */
                    uint64_t m_skip;
                    bool m_skipHasBeenSet;

                    /**
                     * 翻页组件的页数据条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 1.BOT全局白名单处调用时，传"global";2.BOT场景配置处调用时，传具体的场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 需要过滤的动作
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 需要过滤的规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 兼容老数据和新旧版前端
                     */
                    std::string m_versionFlag;
                    bool m_versionFlagHasBeenSet;

                    /**
                     * 生效方式：0-全部 1-永久生效 2-定时生效 3-周粒度生效 4-月粒度生效
                     */
                    uint64_t m_timerType;
                    bool m_timerTypeHasBeenSet;

                    /**
                     * 0-全部 1-生效中 2-已过期
                     */
                    uint64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * 规则id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTSCENEUCBRULEREQUEST_H_
