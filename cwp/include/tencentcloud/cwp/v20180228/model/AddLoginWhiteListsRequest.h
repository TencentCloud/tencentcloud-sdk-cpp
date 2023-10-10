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
                     * 获取异地登录白名单实体
                     * @return HostLoginWhiteObj 异地登录白名单实体
                     * 
                     */
                    HostLoginWhiteObj GetHostLoginWhiteObj() const;

                    /**
                     * 设置异地登录白名单实体
                     * @param _hostLoginWhiteObj 异地登录白名单实体
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
                     * 获取事件同步处理方式：
  "" -- 不操作
  "All" -- 将符合此配置的所有事件记录加白
  "Id" -- 将EventId对应的事件记录加白
                     * @return ProcessType 事件同步处理方式：
  "" -- 不操作
  "All" -- 将符合此配置的所有事件记录加白
  "Id" -- 将EventId对应的事件记录加白
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置事件同步处理方式：
  "" -- 不操作
  "All" -- 将符合此配置的所有事件记录加白
  "Id" -- 将EventId对应的事件记录加白
                     * @param _processType 事件同步处理方式：
  "" -- 不操作
  "All" -- 将符合此配置的所有事件记录加白
  "Id" -- 将EventId对应的事件记录加白
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
                     * 获取异地登录事件ID，当ProcessType为Id时此项必填
                     * @return EventId 异地登录事件ID，当ProcessType为Id时此项必填
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置异地登录事件ID，当ProcessType为Id时此项必填
                     * @param _eventId 异地登录事件ID，当ProcessType为Id时此项必填
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
                     * 异地登录白名单实体
                     */
                    HostLoginWhiteObj m_hostLoginWhiteObj;
                    bool m_hostLoginWhiteObjHasBeenSet;

                    /**
                     * 事件同步处理方式：
  "" -- 不操作
  "All" -- 将符合此配置的所有事件记录加白
  "Id" -- 将EventId对应的事件记录加白
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 异地登录事件ID，当ProcessType为Id时此项必填
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_
