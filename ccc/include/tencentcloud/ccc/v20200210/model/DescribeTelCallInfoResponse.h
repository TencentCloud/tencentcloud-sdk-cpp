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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFORESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelCallInfo返回参数结构体
                */
                class DescribeTelCallInfoResponse : public AbstractModel
                {
                public:
                    DescribeTelCallInfoResponse();
                    ~DescribeTelCallInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取呼出套餐包消耗分钟数
                     * @return TelCallOutCount 呼出套餐包消耗分钟数
                     * 
                     */
                    int64_t GetTelCallOutCount() const;

                    /**
                     * 判断参数 TelCallOutCount 是否已赋值
                     * @return TelCallOutCount 是否已赋值
                     * 
                     */
                    bool TelCallOutCountHasBeenSet() const;

                    /**
                     * 获取呼入套餐包消耗分钟数
                     * @return TelCallInCount 呼入套餐包消耗分钟数
                     * 
                     */
                    int64_t GetTelCallInCount() const;

                    /**
                     * 判断参数 TelCallInCount 是否已赋值
                     * @return TelCallInCount 是否已赋值
                     * 
                     */
                    bool TelCallInCountHasBeenSet() const;

                    /**
                     * 获取坐席使用统计个数
                     * @return SeatUsedCount 坐席使用统计个数
                     * 
                     */
                    int64_t GetSeatUsedCount() const;

                    /**
                     * 判断参数 SeatUsedCount 是否已赋值
                     * @return SeatUsedCount 是否已赋值
                     * 
                     */
                    bool SeatUsedCountHasBeenSet() const;

                    /**
                     * 获取音频套餐包消耗分钟数
                     * @return VoipCallInCount 音频套餐包消耗分钟数
                     * @deprecated
                     */
                    int64_t GetVoipCallInCount() const;

                    /**
                     * 判断参数 VoipCallInCount 是否已赋值
                     * @return VoipCallInCount 是否已赋值
                     * @deprecated
                     */
                    bool VoipCallInCountHasBeenSet() const;

                    /**
                     * 获取音频套餐包消耗分钟数
                     * @return VOIPCallInCount 音频套餐包消耗分钟数
                     * 
                     */
                    int64_t GetVOIPCallInCount() const;

                    /**
                     * 判断参数 VOIPCallInCount 是否已赋值
                     * @return VOIPCallInCount 是否已赋值
                     * 
                     */
                    bool VOIPCallInCountHasBeenSet() const;

                    /**
                     * 获取离线语音转文字套餐包消耗分钟数
                     * @return AsrOfflineCount 离线语音转文字套餐包消耗分钟数
                     * 
                     */
                    int64_t GetAsrOfflineCount() const;

                    /**
                     * 判断参数 AsrOfflineCount 是否已赋值
                     * @return AsrOfflineCount 是否已赋值
                     * 
                     */
                    bool AsrOfflineCountHasBeenSet() const;

                    /**
                     * 获取实时语音转文字套餐包消耗分钟数
                     * @return AsrRealtimeCount 实时语音转文字套餐包消耗分钟数
                     * 
                     */
                    int64_t GetAsrRealtimeCount() const;

                    /**
                     * 判断参数 AsrRealtimeCount 是否已赋值
                     * @return AsrRealtimeCount 是否已赋值
                     * 
                     */
                    bool AsrRealtimeCountHasBeenSet() const;

                private:

                    /**
                     * 呼出套餐包消耗分钟数
                     */
                    int64_t m_telCallOutCount;
                    bool m_telCallOutCountHasBeenSet;

                    /**
                     * 呼入套餐包消耗分钟数
                     */
                    int64_t m_telCallInCount;
                    bool m_telCallInCountHasBeenSet;

                    /**
                     * 坐席使用统计个数
                     */
                    int64_t m_seatUsedCount;
                    bool m_seatUsedCountHasBeenSet;

                    /**
                     * 音频套餐包消耗分钟数
                     */
                    int64_t m_voipCallInCount;
                    bool m_voipCallInCountHasBeenSet;

                    /**
                     * 音频套餐包消耗分钟数
                     */
                    int64_t m_vOIPCallInCount;
                    bool m_vOIPCallInCountHasBeenSet;

                    /**
                     * 离线语音转文字套餐包消耗分钟数
                     */
                    int64_t m_asrOfflineCount;
                    bool m_asrOfflineCountHasBeenSet;

                    /**
                     * 实时语音转文字套餐包消耗分钟数
                     */
                    int64_t m_asrRealtimeCount;
                    bool m_asrRealtimeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCALLINFORESPONSE_H_
