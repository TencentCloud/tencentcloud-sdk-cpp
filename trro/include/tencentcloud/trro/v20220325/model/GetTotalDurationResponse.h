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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_GETTOTALDURATIONRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_GETTOTALDURATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * GetTotalDuration返回参数结构体
                */
                class GetTotalDurationResponse : public AbstractModel
                {
                public:
                    GetTotalDurationResponse();
                    ~GetTotalDurationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取语音:min
                     * @return Voice 语音:min
                     * 
                     */
                    int64_t GetVoice() const;

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取标清:min
                     * @return SD 标清:min
                     * 
                     */
                    int64_t GetSD() const;

                    /**
                     * 判断参数 SD 是否已赋值
                     * @return SD 是否已赋值
                     * 
                     */
                    bool SDHasBeenSet() const;

                    /**
                     * 获取高清:min
                     * @return HD 高清:min
                     * 
                     */
                    int64_t GetHD() const;

                    /**
                     * 判断参数 HD 是否已赋值
                     * @return HD 是否已赋值
                     * 
                     */
                    bool HDHasBeenSet() const;

                    /**
                     * 获取超高清:min
                     * @return FHD 超高清:min
                     * 
                     */
                    int64_t GetFHD() const;

                    /**
                     * 判断参数 FHD 是否已赋值
                     * @return FHD 是否已赋值
                     * 
                     */
                    bool FHDHasBeenSet() const;

                    /**
                     * 获取2k:min
                     * @return TwoK 2k:min
                     * 
                     */
                    int64_t GetTwoK() const;

                    /**
                     * 判断参数 TwoK 是否已赋值
                     * @return TwoK 是否已赋值
                     * 
                     */
                    bool TwoKHasBeenSet() const;

                    /**
                     * 获取4k:min
                     * @return FourK 4k:min
                     * 
                     */
                    int64_t GetFourK() const;

                    /**
                     * 判断参数 FourK 是否已赋值
                     * @return FourK 是否已赋值
                     * 
                     */
                    bool FourKHasBeenSet() const;

                    /**
                     * 获取在线时长:min 
                     * @return Online 在线时长:min 
                     * 
                     */
                    int64_t GetOnline() const;

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取多网标清:min
                     * @return MultiSD 多网标清:min
                     * 
                     */
                    int64_t GetMultiSD() const;

                    /**
                     * 判断参数 MultiSD 是否已赋值
                     * @return MultiSD 是否已赋值
                     * 
                     */
                    bool MultiSDHasBeenSet() const;

                    /**
                     * 获取多网高清:min
                     * @return MultiHD 多网高清:min
                     * 
                     */
                    int64_t GetMultiHD() const;

                    /**
                     * 判断参数 MultiHD 是否已赋值
                     * @return MultiHD 是否已赋值
                     * 
                     */
                    bool MultiHDHasBeenSet() const;

                    /**
                     * 获取多网超高清:min
                     * @return MultiFHD 多网超高清:min
                     * 
                     */
                    int64_t GetMultiFHD() const;

                    /**
                     * 判断参数 MultiFHD 是否已赋值
                     * @return MultiFHD 是否已赋值
                     * 
                     */
                    bool MultiFHDHasBeenSet() const;

                    /**
                     * 获取多网2k:min
                     * @return MultiTwoK 多网2k:min
                     * 
                     */
                    int64_t GetMultiTwoK() const;

                    /**
                     * 判断参数 MultiTwoK 是否已赋值
                     * @return MultiTwoK 是否已赋值
                     * 
                     */
                    bool MultiTwoKHasBeenSet() const;

                    /**
                     * 获取多网4k:min
                     * @return MultiFourK 多网4k:min
                     * 
                     */
                    int64_t GetMultiFourK() const;

                    /**
                     * 判断参数 MultiFourK 是否已赋值
                     * @return MultiFourK 是否已赋值
                     * 
                     */
                    bool MultiFourKHasBeenSet() const;

                    /**
                     * 获取多网在线时长:min 
                     * @return MultiOnline 多网在线时长:min 
                     * 
                     */
                    int64_t GetMultiOnline() const;

                    /**
                     * 判断参数 MultiOnline 是否已赋值
                     * @return MultiOnline 是否已赋值
                     * 
                     */
                    bool MultiOnlineHasBeenSet() const;

                    /**
                     * 获取总抵扣时长:min 
                     * @return DeductDuration 总抵扣时长:min 
                     * 
                     */
                    int64_t GetDeductDuration() const;

                    /**
                     * 判断参数 DeductDuration 是否已赋值
                     * @return DeductDuration 是否已赋值
                     * 
                     */
                    bool DeductDurationHasBeenSet() const;

                private:

                    /**
                     * 语音:min
                     */
                    int64_t m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * 标清:min
                     */
                    int64_t m_sD;
                    bool m_sDHasBeenSet;

                    /**
                     * 高清:min
                     */
                    int64_t m_hD;
                    bool m_hDHasBeenSet;

                    /**
                     * 超高清:min
                     */
                    int64_t m_fHD;
                    bool m_fHDHasBeenSet;

                    /**
                     * 2k:min
                     */
                    int64_t m_twoK;
                    bool m_twoKHasBeenSet;

                    /**
                     * 4k:min
                     */
                    int64_t m_fourK;
                    bool m_fourKHasBeenSet;

                    /**
                     * 在线时长:min 
                     */
                    int64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 多网标清:min
                     */
                    int64_t m_multiSD;
                    bool m_multiSDHasBeenSet;

                    /**
                     * 多网高清:min
                     */
                    int64_t m_multiHD;
                    bool m_multiHDHasBeenSet;

                    /**
                     * 多网超高清:min
                     */
                    int64_t m_multiFHD;
                    bool m_multiFHDHasBeenSet;

                    /**
                     * 多网2k:min
                     */
                    int64_t m_multiTwoK;
                    bool m_multiTwoKHasBeenSet;

                    /**
                     * 多网4k:min
                     */
                    int64_t m_multiFourK;
                    bool m_multiFourKHasBeenSet;

                    /**
                     * 多网在线时长:min 
                     */
                    int64_t m_multiOnline;
                    bool m_multiOnlineHasBeenSet;

                    /**
                     * 总抵扣时长:min 
                     */
                    int64_t m_deductDuration;
                    bool m_deductDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_GETTOTALDURATIONRESPONSE_H_
