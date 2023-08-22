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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CHECKRULEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CHECKRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CheckRule请求参数结构体
                */
                class CheckRuleRequest : public AbstractModel
                {
                public:
                    CheckRuleRequest();
                    ~CheckRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event信息
                     * @return Event Event信息
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置Event信息
                     * @param _event Event信息
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取EventPattern信息
                     * @return EventPattern EventPattern信息
                     * 
                     */
                    std::string GetEventPattern() const;

                    /**
                     * 设置EventPattern信息
                     * @param _eventPattern EventPattern信息
                     * 
                     */
                    void SetEventPattern(const std::string& _eventPattern);

                    /**
                     * 判断参数 EventPattern 是否已赋值
                     * @return EventPattern 是否已赋值
                     * 
                     */
                    bool EventPatternHasBeenSet() const;

                private:

                    /**
                     * Event信息
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * EventPattern信息
                     */
                    std::string m_eventPattern;
                    bool m_eventPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CHECKRULEREQUEST_H_
