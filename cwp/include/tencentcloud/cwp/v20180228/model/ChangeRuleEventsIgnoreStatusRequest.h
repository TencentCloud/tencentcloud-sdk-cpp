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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHANGERULEEVENTSIGNORESTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHANGERULEEVENTSIGNORESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ChangeRuleEventsIgnoreStatus请求参数结构体
                */
                class ChangeRuleEventsIgnoreStatusRequest : public AbstractModel
                {
                public:
                    ChangeRuleEventsIgnoreStatusRequest();
                    ~ChangeRuleEventsIgnoreStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取忽略状态 0:取消忽略 ； 1:忽略
                     * @return IgnoreStatus 忽略状态 0:取消忽略 ； 1:忽略
                     * 
                     */
                    uint64_t GetIgnoreStatus() const;

                    /**
                     * 设置忽略状态 0:取消忽略 ； 1:忽略
                     * @param _ignoreStatus 忽略状态 0:取消忽略 ； 1:忽略
                     * 
                     */
                    void SetIgnoreStatus(const uint64_t& _ignoreStatus);

                    /**
                     * 判断参数 IgnoreStatus 是否已赋值
                     * @return IgnoreStatus 是否已赋值
                     * 
                     */
                    bool IgnoreStatusHasBeenSet() const;

                    /**
                     * 获取检测项id数组
                     * @return RuleIdList 检测项id数组
                     * 
                     */
                    std::vector<uint64_t> GetRuleIdList() const;

                    /**
                     * 设置检测项id数组
                     * @param _ruleIdList 检测项id数组
                     * 
                     */
                    void SetRuleIdList(const std::vector<uint64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取事件id数组
                     * @return EventIdList 事件id数组
                     * 
                     */
                    std::vector<uint64_t> GetEventIdList() const;

                    /**
                     * 设置事件id数组
                     * @param _eventIdList 事件id数组
                     * 
                     */
                    void SetEventIdList(const std::vector<uint64_t>& _eventIdList);

                    /**
                     * 判断参数 EventIdList 是否已赋值
                     * @return EventIdList 是否已赋值
                     * 
                     */
                    bool EventIdListHasBeenSet() const;

                private:

                    /**
                     * 忽略状态 0:取消忽略 ； 1:忽略
                     */
                    uint64_t m_ignoreStatus;
                    bool m_ignoreStatusHasBeenSet;

                    /**
                     * 检测项id数组
                     */
                    std::vector<uint64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * 事件id数组
                     */
                    std::vector<uint64_t> m_eventIdList;
                    bool m_eventIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHANGERULEEVENTSIGNORESTATUSREQUEST_H_
