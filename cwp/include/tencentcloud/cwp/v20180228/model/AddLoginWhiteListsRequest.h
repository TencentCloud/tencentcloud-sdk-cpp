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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HostLoginWhiteObj.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * AddLoginWhiteLists请求参数结构体
                */
                class AddLoginWhiteListsRequest : public AbstractModel
                {
                public:
                    AddLoginWhiteListsRequest();
                    ~AddLoginWhiteListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>异地登录白名单实体</p>
                     * @return HostLoginWhiteObj <p>异地登录白名单实体</p>
                     * 
                     */
                    HostLoginWhiteObj GetHostLoginWhiteObj() const;

                    /**
                     * 设置<p>异地登录白名单实体</p>
                     * @param _hostLoginWhiteObj <p>异地登录白名单实体</p>
                     * 
                     */
                    void SetHostLoginWhiteObj(const HostLoginWhiteObj& _hostLoginWhiteObj);

                    /**
                     * 判断参数 HostLoginWhiteObj 是否已赋值
                     * @return HostLoginWhiteObj 是否已赋值
                     * 
                     */
                    bool HostLoginWhiteObjHasBeenSet() const;

                    /**
                     * 获取<p>事件同步处理方式：<br>  &quot;&quot; -- 不操作<br>  &quot;All&quot; -- 将符合此配置的所有事件记录加白<br>  &quot;Id&quot; -- 将EventId对应的事件记录加白</p>
                     * @return ProcessType <p>事件同步处理方式：<br>  &quot;&quot; -- 不操作<br>  &quot;All&quot; -- 将符合此配置的所有事件记录加白<br>  &quot;Id&quot; -- 将EventId对应的事件记录加白</p>
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置<p>事件同步处理方式：<br>  &quot;&quot; -- 不操作<br>  &quot;All&quot; -- 将符合此配置的所有事件记录加白<br>  &quot;Id&quot; -- 将EventId对应的事件记录加白</p>
                     * @param _processType <p>事件同步处理方式：<br>  &quot;&quot; -- 不操作<br>  &quot;All&quot; -- 将符合此配置的所有事件记录加白<br>  &quot;Id&quot; -- 将EventId对应的事件记录加白</p>
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取<p>异地登录事件ID，当ProcessType为Id时此项必填</p>
                     * @return EventId <p>异地登录事件ID，当ProcessType为Id时此项必填</p>
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置<p>异地登录事件ID，当ProcessType为Id时此项必填</p>
                     * @param _eventId <p>异地登录事件ID，当ProcessType为Id时此项必填</p>
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
                     * <p>异地登录白名单实体</p>
                     */
                    HostLoginWhiteObj m_hostLoginWhiteObj;
                    bool m_hostLoginWhiteObjHasBeenSet;

                    /**
                     * <p>事件同步处理方式：<br>  &quot;&quot; -- 不操作<br>  &quot;All&quot; -- 将符合此配置的所有事件记录加白<br>  &quot;Id&quot; -- 将EventId对应的事件记录加白</p>
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>异地登录事件ID，当ProcessType为Id时此项必填</p>
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_
