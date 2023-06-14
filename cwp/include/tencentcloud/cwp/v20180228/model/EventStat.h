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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EVENTSTAT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EVENTSTAT_H_

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
                * 未处理的安全事件统计信息
                */
                class EventStat : public AbstractModel
                {
                public:
                    EventStat();
                    ~EventStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件数
                     * @return EventsNum 事件数
                     * 
                     */
                    uint64_t GetEventsNum() const;

                    /**
                     * 设置事件数
                     * @param _eventsNum 事件数
                     * 
                     */
                    void SetEventsNum(const uint64_t& _eventsNum);

                    /**
                     * 判断参数 EventsNum 是否已赋值
                     * @return EventsNum 是否已赋值
                     * 
                     */
                    bool EventsNumHasBeenSet() const;

                    /**
                     * 获取受影响的主机数
                     * @return MachineAffectNum 受影响的主机数
                     * 
                     */
                    uint64_t GetMachineAffectNum() const;

                    /**
                     * 设置受影响的主机数
                     * @param _machineAffectNum 受影响的主机数
                     * 
                     */
                    void SetMachineAffectNum(const uint64_t& _machineAffectNum);

                    /**
                     * 判断参数 MachineAffectNum 是否已赋值
                     * @return MachineAffectNum 是否已赋值
                     * 
                     */
                    bool MachineAffectNumHasBeenSet() const;

                private:

                    /**
                     * 事件数
                     */
                    uint64_t m_eventsNum;
                    bool m_eventsNumHasBeenSet;

                    /**
                     * 受影响的主机数
                     */
                    uint64_t m_machineAffectNum;
                    bool m_machineAffectNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EVENTSTAT_H_
