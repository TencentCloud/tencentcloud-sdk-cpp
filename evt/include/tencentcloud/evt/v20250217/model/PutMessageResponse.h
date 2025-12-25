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

#ifndef TENCENTCLOUD_EVT_V20250217_MODEL_PUTMESSAGERESPONSE_H_
#define TENCENTCLOUD_EVT_V20250217_MODEL_PUTMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Evt
    {
        namespace V20250217
        {
            namespace Model
            {
                /**
                * PutMessage返回参数结构体
                */
                class PutMessageResponse : public AbstractModel
                {
                public:
                    PutMessageResponse();
                    ~PutMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>满足条件时生成的事件单id，不满足条件时为空</p>
                     * @return TicketId <p>满足条件时生成的事件单id，不满足条件时为空</p>
                     * 
                     */
                    std::string GetTicketId() const;

                    /**
                     * 判断参数 TicketId 是否已赋值
                     * @return TicketId 是否已赋值
                     * 
                     */
                    bool TicketIdHasBeenSet() const;

                private:

                    /**
                     * <p>满足条件时生成的事件单id，不满足条件时为空</p>
                     */
                    std::string m_ticketId;
                    bool m_ticketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EVT_V20250217_MODEL_PUTMESSAGERESPONSE_H_
