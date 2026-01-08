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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHCASTERTOEMERGENCYRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHCASTERTOEMERGENCYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * SwitchCasterToEmergency返回参数结构体
                */
                class SwitchCasterToEmergencyResponse : public AbstractModel
                {
                public:
                    SwitchCasterToEmergencyResponse();
                    ~SwitchCasterToEmergencyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备播状态，范围[0,1,2]
0. 正常直播状态
1. 备播状态
2. 备播切换正常直播中，在配置了延播时长时出现
                     * @return EmergencyStatus 备播状态，范围[0,1,2]
0. 正常直播状态
1. 备播状态
2. 备播切换正常直播中，在配置了延播时长时出现
                     * 
                     */
                    int64_t GetEmergencyStatus() const;

                    /**
                     * 判断参数 EmergencyStatus 是否已赋值
                     * @return EmergencyStatus 是否已赋值
                     * 
                     */
                    bool EmergencyStatusHasBeenSet() const;

                private:

                    /**
                     * 备播状态，范围[0,1,2]
0. 正常直播状态
1. 备播状态
2. 备播切换正常直播中，在配置了延播时长时出现
                     */
                    int64_t m_emergencyStatus;
                    bool m_emergencyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHCASTERTOEMERGENCYRESPONSE_H_
