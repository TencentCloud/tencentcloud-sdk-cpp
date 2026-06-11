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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECEVENTDETAILRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECEVENTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiEvent.h>
#include <tencentcloud/waf/v20180125/model/ApiSecAttackSource.h>
#include <tencentcloud/waf/v20180125/model/ApiSecEventChange.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiSecEventDetail返回参数结构体
                */
                class DescribeApiSecEventDetailResponse : public AbstractModel
                {
                public:
                    DescribeApiSecEventDetailResponse();
                    ~DescribeApiSecEventDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件描述信息</p>
                     * @return Description <p>事件描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>事件基本信息</p>
                     * @return EventInfo <p>事件基本信息</p>
                     * 
                     */
                    ApiEvent GetEventInfo() const;

                    /**
                     * 判断参数 EventInfo 是否已赋值
                     * @return EventInfo 是否已赋值
                     * 
                     */
                    bool EventInfoHasBeenSet() const;

                    /**
                     * 获取<p>攻击源详情</p>
                     * @return AttackSource <p>攻击源详情</p>
                     * 
                     */
                    std::vector<ApiSecAttackSource> GetAttackSource() const;

                    /**
                     * 判断参数 AttackSource 是否已赋值
                     * @return AttackSource 是否已赋值
                     * 
                     */
                    bool AttackSourceHasBeenSet() const;

                    /**
                     * 获取<p>变更历史</p>
                     * @return ChangeHistory <p>变更历史</p>
                     * 
                     */
                    std::vector<ApiSecEventChange> GetChangeHistory() const;

                    /**
                     * 判断参数 ChangeHistory 是否已赋值
                     * @return ChangeHistory 是否已赋值
                     * 
                     */
                    bool ChangeHistoryHasBeenSet() const;

                private:

                    /**
                     * <p>事件描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>事件基本信息</p>
                     */
                    ApiEvent m_eventInfo;
                    bool m_eventInfoHasBeenSet;

                    /**
                     * <p>攻击源详情</p>
                     */
                    std::vector<ApiSecAttackSource> m_attackSource;
                    bool m_attackSourceHasBeenSet;

                    /**
                     * <p>变更历史</p>
                     */
                    std::vector<ApiSecEventChange> m_changeHistory;
                    bool m_changeHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPISECEVENTDETAILRESPONSE_H_
