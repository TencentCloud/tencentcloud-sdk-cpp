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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATENETATTACKWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATENETATTACKWHITELISTREQUEST_H_

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
                * CreateNetAttackWhiteList请求参数结构体
                */
                class CreateNetAttackWhiteListRequest : public AbstractModel
                {
                public:
                    CreateNetAttackWhiteListRequest();
                    ~CreateNetAttackWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否全部主机； 0否，1是。
                     * @return Scope 是否全部主机； 0否，1是。
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置是否全部主机； 0否，1是。
                     * @param _scope 是否全部主机； 0否，1是。
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 
                     * @return SrcIp 来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 
                     * 
                     */
                    std::vector<std::string> GetSrcIp() const;

                    /**
                     * 设置来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 
                     * @param _srcIp 来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 
                     * 
                     */
                    void SetSrcIp(const std::vector<std::string>& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取quuid 列表
                     * @return QuuidList quuid 列表
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置quuid 列表
                     * @param _quuidList quuid 列表
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return EventId 事件id
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件id
                     * @param _eventId 事件id
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取是否加白所有符合该规则的告警 ，1:处理,0:不处理
                     * @return DealOldEvents 是否加白所有符合该规则的告警 ，1:处理,0:不处理
                     * 
                     */
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置是否加白所有符合该规则的告警 ，1:处理,0:不处理
                     * @param _dealOldEvents 是否加白所有符合该规则的告警 ，1:处理,0:不处理
                     * 
                     */
                    void SetDealOldEvents(const uint64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 是否全部主机； 0否，1是。
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 
                     */
                    std::vector<std::string> m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * quuid 列表
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * 事件id
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 是否加白所有符合该规则的告警 ，1:处理,0:不处理
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATENETATTACKWHITELISTREQUEST_H_
