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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITABNORMALPROCESSRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITABNORMALPROCESSRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AbnormalProcessRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddEditAbnormalProcessRule请求参数结构体
                */
                class AddEditAbnormalProcessRuleRequest : public AbstractModel
                {
                public:
                    AddEditAbnormalProcessRuleRequest();
                    ~AddEditAbnormalProcessRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取增加策略信息，策略id为空，编辑策略是id不能为空
                     * @return RuleInfo 增加策略信息，策略id为空，编辑策略是id不能为空
                     * 
                     */
                    AbnormalProcessRuleInfo GetRuleInfo() const;

                    /**
                     * 设置增加策略信息，策略id为空，编辑策略是id不能为空
                     * @param _ruleInfo 增加策略信息，策略id为空，编辑策略是id不能为空
                     * 
                     */
                    void SetRuleInfo(const AbnormalProcessRuleInfo& _ruleInfo);

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                    /**
                     * 获取仅在加白的时候带上
                     * @return EventId 仅在加白的时候带上
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置仅在加白的时候带上
                     * @param _eventId 仅在加白的时候带上
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 增加策略信息，策略id为空，编辑策略是id不能为空
                     */
                    AbnormalProcessRuleInfo m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                    /**
                     * 仅在加白的时候带上
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITABNORMALPROCESSRULEREQUEST_H_
