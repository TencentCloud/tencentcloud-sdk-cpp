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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_APPENDEVENTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_APPENDEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/EventInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * AppendEvent返回参数结构体
                */
                class AppendEventResponse : public AbstractModel
                {
                public:
                    AppendEventResponse();
                    ~AppendEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>事件信息。</p>
                     * @return Event <p>事件信息。</p>
                     * 
                     */
                    EventInfo GetEvent() const;

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                private:

                    /**
                     * <p>事件信息。</p>
                     */
                    EventInfo m_event;
                    bool m_eventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_APPENDEVENTRESPONSE_H_
