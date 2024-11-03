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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEVENTLEVELINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEVENTLEVELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 服务器风险Top的主机信息
                */
                class BaselineEventLevelInfo : public AbstractModel
                {
                public:
                    BaselineEventLevelInfo();
                    ~BaselineEventLevelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重
                     * @return EventLevel 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    uint64_t GetEventLevel() const;

                    /**
                     * 设置危害等级：1-低危；2-中危；3-高危；4-严重
                     * @param _eventLevel 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    void SetEventLevel(const uint64_t& _eventLevel);

                    /**
                     * 判断参数 EventLevel 是否已赋值
                     * @return EventLevel 是否已赋值
                     * 
                     */
                    bool EventLevelHasBeenSet() const;

                    /**
                     * 获取漏洞数量
                     * @return EventCount 漏洞数量
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置漏洞数量
                     * @param _eventCount 漏洞数量
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                private:

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重
                     */
                    uint64_t m_eventLevel;
                    bool m_eventLevelHasBeenSet;

                    /**
                     * 漏洞数量
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEVENTLEVELINFO_H_
