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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DURATIONDETAILS_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DURATIONDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 会话时长明细
                */
                class DurationDetails : public AbstractModel
                {
                public:
                    DurationDetails();
                    ~DurationDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话时间
                     * @return SessionTime 会话时间
                     * 
                     */
                    std::string GetSessionTime() const;

                    /**
                     * 设置会话时间
                     * @param _sessionTime 会话时间
                     * 
                     */
                    void SetSessionTime(const std::string& _sessionTime);

                    /**
                     * 判断参数 SessionTime 是否已赋值
                     * @return SessionTime 是否已赋值
                     * 
                     */
                    bool SessionTimeHasBeenSet() const;

                    /**
                     * 获取语音:min
                     * @return Voice 语音:min
                     * 
                     */
                    int64_t GetVoice() const;

                    /**
                     * 设置语音:min
                     * @param _voice 语音:min
                     * 
                     */
                    void SetVoice(const int64_t& _voice);

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
                     * 设置标清:min
                     * @param _sD 标清:min
                     * 
                     */
                    void SetSD(const int64_t& _sD);

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
                     * 设置高清:min
                     * @param _hD 高清:min
                     * 
                     */
                    void SetHD(const int64_t& _hD);

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
                     * 设置超高清:min
                     * @param _fHD 超高清:min
                     * 
                     */
                    void SetFHD(const int64_t& _fHD);

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
                     * 设置2k:min
                     * @param _twoK 2k:min
                     * 
                     */
                    void SetTwoK(const int64_t& _twoK);

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
                     * 设置4k:min
                     * @param _fourK 4k:min
                     * 
                     */
                    void SetFourK(const int64_t& _fourK);

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
                     * 设置在线时长:min
                     * @param _online 在线时长:min
                     * 
                     */
                    void SetOnline(const int64_t& _online);

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
                     * 设置多网标清:min
                     * @param _multiSD 多网标清:min
                     * 
                     */
                    void SetMultiSD(const int64_t& _multiSD);

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
                     * 设置多网高清:min
                     * @param _multiHD 多网高清:min
                     * 
                     */
                    void SetMultiHD(const int64_t& _multiHD);

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
                     * 设置多网超高清:min
                     * @param _multiFHD 多网超高清:min
                     * 
                     */
                    void SetMultiFHD(const int64_t& _multiFHD);

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
                     * 设置多网2k:min
                     * @param _multiTwoK 多网2k:min
                     * 
                     */
                    void SetMultiTwoK(const int64_t& _multiTwoK);

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
                     * 设置多网4k:min
                     * @param _multiFourK 多网4k:min
                     * 
                     */
                    void SetMultiFourK(const int64_t& _multiFourK);

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
                     * 设置多网在线时长:min
                     * @param _multiOnline 多网在线时长:min
                     * 
                     */
                    void SetMultiOnline(const int64_t& _multiOnline);

                    /**
                     * 判断参数 MultiOnline 是否已赋值
                     * @return MultiOnline 是否已赋值
                     * 
                     */
                    bool MultiOnlineHasBeenSet() const;

                    /**
                     * 获取抵扣时长:min
                     * @return DeductDuration 抵扣时长:min
                     * 
                     */
                    int64_t GetDeductDuration() const;

                    /**
                     * 设置抵扣时长:min
                     * @param _deductDuration 抵扣时长:min
                     * 
                     */
                    void SetDeductDuration(const int64_t& _deductDuration);

                    /**
                     * 判断参数 DeductDuration 是否已赋值
                     * @return DeductDuration 是否已赋值
                     * 
                     */
                    bool DeductDurationHasBeenSet() const;

                private:

                    /**
                     * 会话时间
                     */
                    std::string m_sessionTime;
                    bool m_sessionTimeHasBeenSet;

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
                     * 抵扣时长:min
                     */
                    int64_t m_deductDuration;
                    bool m_deductDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DURATIONDETAILS_H_
