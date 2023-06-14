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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateBasicDDoSAlarmThreshold返回参数结构体
                */
                class CreateBasicDDoSAlarmThresholdResponse : public AbstractModel
                {
                public:
                    CreateBasicDDoSAlarmThresholdResponse();
                    ~CreateBasicDDoSAlarmThresholdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当存在告警阈值配置时，返回告警阈值大于0，当不存在告警配置时，返回告警阈值为0；
                     * @return AlarmThreshold 当存在告警阈值配置时，返回告警阈值大于0，当不存在告警配置时，返回告警阈值为0；
                     * 
                     */
                    uint64_t GetAlarmThreshold() const;

                    /**
                     * 判断参数 AlarmThreshold 是否已赋值
                     * @return AlarmThreshold 是否已赋值
                     * 
                     */
                    bool AlarmThresholdHasBeenSet() const;

                    /**
                     * 获取告警阈值类型，1-入流量，2-清洗流量；当AlarmThreshold大于0时有效；
                     * @return AlarmType 告警阈值类型，1-入流量，2-清洗流量；当AlarmThreshold大于0时有效；
                     * 
                     */
                    uint64_t GetAlarmType() const;

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                private:

                    /**
                     * 当存在告警阈值配置时，返回告警阈值大于0，当不存在告警配置时，返回告警阈值为0；
                     */
                    uint64_t m_alarmThreshold;
                    bool m_alarmThresholdHasBeenSet;

                    /**
                     * 告警阈值类型，1-入流量，2-清洗流量；当AlarmThreshold大于0时有效；
                     */
                    uint64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEBASICDDOSALARMTHRESHOLDRESPONSE_H_
