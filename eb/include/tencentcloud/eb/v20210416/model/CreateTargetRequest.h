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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TargetDescription.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateTarget请求参数结构体
                */
                class CreateTargetRequest : public AbstractModel
                {
                public:
                    CreateTargetRequest();
                    ~CreateTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param EventBusId 事件集ID
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取目标类型
                     * @return Type 目标类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置目标类型
                     * @param Type 目标类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取目标描述
                     * @return TargetDescription 目标描述
                     */
                    TargetDescription GetTargetDescription() const;

                    /**
                     * 设置目标描述
                     * @param TargetDescription 目标描述
                     */
                    void SetTargetDescription(const TargetDescription& _targetDescription);

                    /**
                     * 判断参数 TargetDescription 是否已赋值
                     * @return TargetDescription 是否已赋值
                     */
                    bool TargetDescriptionHasBeenSet() const;

                    /**
                     * 获取事件规则ID
                     * @return RuleId 事件规则ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置事件规则ID
                     * @param RuleId 事件规则ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 目标类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 目标描述
                     */
                    TargetDescription m_targetDescription;
                    bool m_targetDescriptionHasBeenSet;

                    /**
                     * 事件规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATETARGETREQUEST_H_
