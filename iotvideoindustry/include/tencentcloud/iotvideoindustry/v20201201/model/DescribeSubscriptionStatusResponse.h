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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESUBSCRIPTIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESUBSCRIPTIONSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeSubscriptionStatus返回参数结构体
                */
                class DescribeSubscriptionStatusResponse : public AbstractModel
                {
                public:
                    DescribeSubscriptionStatusResponse();
                    ~DescribeSubscriptionStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备GB28181报警订阅状态 1：未开启订阅；2：已开启订阅
                     * @return AlarmStatus 设备GB28181报警订阅状态 1：未开启订阅；2：已开启订阅
                     * 
                     */
                    int64_t GetAlarmStatus() const;

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                private:

                    /**
                     * 设备GB28181报警订阅状态 1：未开启订阅；2：已开启订阅
                     */
                    int64_t m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESUBSCRIPTIONSTATUSRESPONSE_H_
