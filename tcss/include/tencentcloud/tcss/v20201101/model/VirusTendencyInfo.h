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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 木马趋势详情
                */
                class VirusTendencyInfo : public AbstractModel
                {
                public:
                    VirusTendencyInfo();
                    ~VirusTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取待处理事件总数
                     * @return PendingEventCount 待处理事件总数
                     * 
                     */
                    uint64_t GetPendingEventCount() const;

                    /**
                     * 设置待处理事件总数
                     * @param _pendingEventCount 待处理事件总数
                     * 
                     */
                    void SetPendingEventCount(const uint64_t& _pendingEventCount);

                    /**
                     * 判断参数 PendingEventCount 是否已赋值
                     * @return PendingEventCount 是否已赋值
                     * 
                     */
                    bool PendingEventCountHasBeenSet() const;

                    /**
                     * 获取风险容器总数
                     * @return RiskContainerCount 风险容器总数
                     * 
                     */
                    uint64_t GetRiskContainerCount() const;

                    /**
                     * 设置风险容器总数
                     * @param _riskContainerCount 风险容器总数
                     * 
                     */
                    void SetRiskContainerCount(const uint64_t& _riskContainerCount);

                    /**
                     * 判断参数 RiskContainerCount 是否已赋值
                     * @return RiskContainerCount 是否已赋值
                     * 
                     */
                    bool RiskContainerCountHasBeenSet() const;

                    /**
                     * 获取事件总数
                     * @return EventCount 事件总数
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置事件总数
                     * @param _eventCount 事件总数
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取隔离事件总数
                     * @return IsolateEventCount 隔离事件总数
                     * 
                     */
                    uint64_t GetIsolateEventCount() const;

                    /**
                     * 设置隔离事件总数
                     * @param _isolateEventCount 隔离事件总数
                     * 
                     */
                    void SetIsolateEventCount(const uint64_t& _isolateEventCount);

                    /**
                     * 判断参数 IsolateEventCount 是否已赋值
                     * @return IsolateEventCount 是否已赋值
                     * 
                     */
                    bool IsolateEventCountHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 待处理事件总数
                     */
                    uint64_t m_pendingEventCount;
                    bool m_pendingEventCountHasBeenSet;

                    /**
                     * 风险容器总数
                     */
                    uint64_t m_riskContainerCount;
                    bool m_riskContainerCountHasBeenSet;

                    /**
                     * 事件总数
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 隔离事件总数
                     */
                    uint64_t m_isolateEventCount;
                    bool m_isolateEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTENDENCYINFO_H_
