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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHERULE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceRuleCondition.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheAction.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTPService 缓存规则条目
                */
                class HTTPServiceCacheRule : public AbstractModel
                {
                public:
                    HTTPServiceCacheRule();
                    ~HTTPServiceCacheRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义描述，最多 128 字节</p>
                     * @return Description <p>自定义描述，最多 128 字节</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>自定义描述，最多 128 字节</p>
                     * @param _description <p>自定义描述，最多 128 字节</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>规则开关：nil/true 启用，false 禁用</p>
                     * @return Enable <p>规则开关：nil/true 启用，false 禁用</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>规则开关：nil/true 启用，false 禁用</p>
                     * @param _enable <p>规则开关：nil/true 启用，false 禁用</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>HTTPService 规则匹配条件（必填）</p>
                     * @return Condition <p>HTTPService 规则匹配条件（必填）</p>
                     * 
                     */
                    HTTPServiceRuleCondition GetCondition() const;

                    /**
                     * 设置<p>HTTPService 规则匹配条件（必填）</p>
                     * @param _condition <p>HTTPService 规则匹配条件（必填）</p>
                     * 
                     */
                    void SetCondition(const HTTPServiceRuleCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>HTTPService 缓存动作列表，同一规则内相同 Type 至多一个</p>
                     * @return Actions <p>HTTPService 缓存动作列表，同一规则内相同 Type 至多一个</p>
                     * 
                     */
                    std::vector<HTTPServiceCacheAction> GetActions() const;

                    /**
                     * 设置<p>HTTPService 缓存动作列表，同一规则内相同 Type 至多一个</p>
                     * @param _actions <p>HTTPService 缓存动作列表，同一规则内相同 Type 至多一个</p>
                     * 
                     */
                    void SetActions(const std::vector<HTTPServiceCacheAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                private:

                    /**
                     * <p>自定义描述，最多 128 字节</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>规则开关：nil/true 启用，false 禁用</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>HTTPService 规则匹配条件（必填）</p>
                     */
                    HTTPServiceRuleCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>HTTPService 缓存动作列表，同一规则内相同 Type 至多一个</p>
                     */
                    std::vector<HTTPServiceCacheAction> m_actions;
                    bool m_actionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHERULE_H_
