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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEK8SAPIABNORMALRULEINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEK8SAPIABNORMALRULEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateK8sApiAbnormalRuleInfo请求参数结构体
                */
                class CreateK8sApiAbnormalRuleInfoRequest : public AbstractModel
                {
                public:
                    CreateK8sApiAbnormalRuleInfoRequest();
                    ~CreateK8sApiAbnormalRuleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则详情
                     * @return RuleInfo 规则详情
                     * 
                     */
                    K8sApiAbnormalRuleInfo GetRuleInfo() const;

                    /**
                     * 设置规则详情
                     * @param _ruleInfo 规则详情
                     * 
                     */
                    void SetRuleInfo(const K8sApiAbnormalRuleInfo& _ruleInfo);

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                    /**
                     * 获取拷贝规则ID(适用于复制规则场景)
                     * @return CopySrcRuleID 拷贝规则ID(适用于复制规则场景)
                     * 
                     */
                    std::string GetCopySrcRuleID() const;

                    /**
                     * 设置拷贝规则ID(适用于复制规则场景)
                     * @param _copySrcRuleID 拷贝规则ID(适用于复制规则场景)
                     * 
                     */
                    void SetCopySrcRuleID(const std::string& _copySrcRuleID);

                    /**
                     * 判断参数 CopySrcRuleID 是否已赋值
                     * @return CopySrcRuleID 是否已赋值
                     * 
                     */
                    bool CopySrcRuleIDHasBeenSet() const;

                    /**
                     * 获取事件ID(适用于事件加白场景)
                     * @return EventID 事件ID(适用于事件加白场景)
                     * 
                     */
                    uint64_t GetEventID() const;

                    /**
                     * 设置事件ID(适用于事件加白场景)
                     * @param _eventID 事件ID(适用于事件加白场景)
                     * 
                     */
                    void SetEventID(const uint64_t& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                private:

                    /**
                     * 规则详情
                     */
                    K8sApiAbnormalRuleInfo m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                    /**
                     * 拷贝规则ID(适用于复制规则场景)
                     */
                    std::string m_copySrcRuleID;
                    bool m_copySrcRuleIDHasBeenSet;

                    /**
                     * 事件ID(适用于事件加白场景)
                     */
                    uint64_t m_eventID;
                    bool m_eventIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEK8SAPIABNORMALRULEINFOREQUEST_H_
