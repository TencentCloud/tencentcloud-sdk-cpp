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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_GETPLATFORMEVENTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_GETPLATFORMEVENTTEMPLATEREQUEST_H_

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
                * GetPlatformEventTemplate请求参数结构体
                */
                class GetPlatformEventTemplateRequest : public AbstractModel
                {
                public:
                    GetPlatformEventTemplateRequest();
                    ~GetPlatformEventTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台产品事件类型
                     * @return EventType 平台产品事件类型
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置平台产品事件类型
                     * @param _eventType 平台产品事件类型
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * 平台产品事件类型
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_GETPLATFORMEVENTTEMPLATEREQUEST_H_
