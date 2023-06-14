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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETERULEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteRule请求参数结构体
                */
                class DeleteRuleRequest : public AbstractModel
                {
                public:
                    DeleteRuleRequest();
                    ~DeleteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取7层监听器ID
                     * @return ListenerId 7层监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置7层监听器ID
                     * @param _listenerId 7层监听器ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取转发规则ID
                     * @return RuleId 转发规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则ID
                     * @param _ruleId 转发规则ID
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
                     * 获取是否可以强制删除已绑定源站的转发规则，0非强制，1强制
                     * @return Force 是否可以强制删除已绑定源站的转发规则，0非强制，1强制
                     * 
                     */
                    uint64_t GetForce() const;

                    /**
                     * 设置是否可以强制删除已绑定源站的转发规则，0非强制，1强制
                     * @param _force 是否可以强制删除已绑定源站的转发规则，0非强制，1强制
                     * 
                     */
                    void SetForce(const uint64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 7层监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 是否可以强制删除已绑定源站的转发规则，0非强制，1强制
                     */
                    uint64_t m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETERULEREQUEST_H_
