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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERISKSYSCALLEVENTSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERISKSYSCALLEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteRiskSyscallEvents请求参数结构体
                */
                class DeleteRiskSyscallEventsRequest : public AbstractModel
                {
                public:
                    DeleteRiskSyscallEventsRequest();
                    ~DeleteRiskSyscallEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件ids
                     * @return EventIdSet 事件ids
                     * 
                     */
                    std::vector<std::string> GetEventIdSet() const;

                    /**
                     * 设置事件ids
                     * @param _eventIdSet 事件ids
                     * 
                     */
                    void SetEventIdSet(const std::vector<std::string>& _eventIdSet);

                    /**
                     * 判断参数 EventIdSet 是否已赋值
                     * @return EventIdSet 是否已赋值
                     * 
                     */
                    bool EventIdSetHasBeenSet() const;

                private:

                    /**
                     * 事件ids
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETERISKSYSCALLEVENTSREQUEST_H_
