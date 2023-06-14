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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_NOTIFICATION_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_NOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 测试启动前后的消息通知
                */
                class Notification : public AbstractModel
                {
                public:
                    Notification();
                    ~Notification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发生事件
                     * @return Events 发生事件
                     * 
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置发生事件
                     * @param _events 发生事件
                     * 
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取webhook的网址
                     * @return URL webhook的网址
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置webhook的网址
                     * @param _uRL webhook的网址
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                private:

                    /**
                     * 发生事件
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * webhook的网址
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_NOTIFICATION_H_
