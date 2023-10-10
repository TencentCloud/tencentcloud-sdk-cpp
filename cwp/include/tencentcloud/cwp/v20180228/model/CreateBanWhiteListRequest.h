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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BanWhiteList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateBanWhiteList请求参数结构体
                */
                class CreateBanWhiteListRequest : public AbstractModel
                {
                public:
                    CreateBanWhiteListRequest();
                    ~CreateBanWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取阻断规则
                     * @return Rules 阻断规则
                     * 
                     */
                    BanWhiteList GetRules() const;

                    /**
                     * 设置阻断规则
                     * @param _rules 阻断规则
                     * 
                     */
                    void SetRules(const BanWhiteList& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取事件ID，事件列表加白名单时传递，白名单添加成功后，会将事件变成已加白状态
                     * @return EventId 事件ID，事件列表加白名单时传递，白名单添加成功后，会将事件变成已加白状态
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件ID，事件列表加白名单时传递，白名单添加成功后，会将事件变成已加白状态
                     * @param _eventId 事件ID，事件列表加白名单时传递，白名单添加成功后，会将事件变成已加白状态
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * 阻断规则
                     */
                    BanWhiteList m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 事件ID，事件列表加白名单时传递，白名单添加成功后，会将事件变成已加白状态
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTREQUEST_H_
