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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_PHONEINFO_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_PHONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 单音节评价结果
                */
                class PhoneInfo : public AbstractModel
                {
                public:
                    PhoneInfo();
                    ~PhoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前音节语音起始时间点，单位为ms
                     * @return MemBeginTime 当前音节语音起始时间点，单位为ms
                     * 
                     */
                    int64_t GetMemBeginTime() const;

                    /**
                     * 设置当前音节语音起始时间点，单位为ms
                     * @param _memBeginTime 当前音节语音起始时间点，单位为ms
                     * 
                     */
                    void SetMemBeginTime(const int64_t& _memBeginTime);

                    /**
                     * 判断参数 MemBeginTime 是否已赋值
                     * @return MemBeginTime 是否已赋值
                     * 
                     */
                    bool MemBeginTimeHasBeenSet() const;

                    /**
                     * 获取当前音节语音终止时间点，单位为ms
                     * @return MemEndTime 当前音节语音终止时间点，单位为ms
                     * 
                     */
                    int64_t GetMemEndTime() const;

                    /**
                     * 设置当前音节语音终止时间点，单位为ms
                     * @param _memEndTime 当前音节语音终止时间点，单位为ms
                     * 
                     */
                    void SetMemEndTime(const int64_t& _memEndTime);

                    /**
                     * 判断参数 MemEndTime 是否已赋值
                     * @return MemEndTime 是否已赋值
                     * 
                     */
                    bool MemEndTimeHasBeenSet() const;

                    /**
                     * 获取音节发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     * @return PronAccuracy 音节发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     * 
                     */
                    double GetPronAccuracy() const;

                    /**
                     * 设置音节发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     * @param _pronAccuracy 音节发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     * 
                     */
                    void SetPronAccuracy(const double& _pronAccuracy);

                    /**
                     * 判断参数 PronAccuracy 是否已赋值
                     * @return PronAccuracy 是否已赋值
                     * 
                     */
                    bool PronAccuracyHasBeenSet() const;

                    /**
                     * 获取当前音节是否检测为重音
                     * @return DetectedStress 当前音节是否检测为重音
                     * 
                     */
                    bool GetDetectedStress() const;

                    /**
                     * 设置当前音节是否检测为重音
                     * @param _detectedStress 当前音节是否检测为重音
                     * 
                     */
                    void SetDetectedStress(const bool& _detectedStress);

                    /**
                     * 判断参数 DetectedStress 是否已赋值
                     * @return DetectedStress 是否已赋值
                     * 
                     */
                    bool DetectedStressHasBeenSet() const;

                    /**
                     * 获取当前音节，当前评测识别的音素
                     * @return Phone 当前音节，当前评测识别的音素
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置当前音节，当前评测识别的音素
                     * @param _phone 当前音节，当前评测识别的音素
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取当前音节是否应为重音
                     * @return Stress 当前音节是否应为重音
                     * 
                     */
                    bool GetStress() const;

                    /**
                     * 设置当前音节是否应为重音
                     * @param _stress 当前音节是否应为重音
                     * 
                     */
                    void SetStress(const bool& _stress);

                    /**
                     * 判断参数 Stress 是否已赋值
                     * @return Stress 是否已赋值
                     * 
                     */
                    bool StressHasBeenSet() const;

                    /**
                     * 获取参考音素，在单词诊断模式下，代表标准音素
                     * @return ReferencePhone 参考音素，在单词诊断模式下，代表标准音素
                     * 
                     */
                    std::string GetReferencePhone() const;

                    /**
                     * 设置参考音素，在单词诊断模式下，代表标准音素
                     * @param _referencePhone 参考音素，在单词诊断模式下，代表标准音素
                     * 
                     */
                    void SetReferencePhone(const std::string& _referencePhone);

                    /**
                     * 判断参数 ReferencePhone 是否已赋值
                     * @return ReferencePhone 是否已赋值
                     * 
                     */
                    bool ReferencePhoneHasBeenSet() const;

                    /**
                     * 获取当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     * @return MatchTag 当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     * 
                     */
                    int64_t GetMatchTag() const;

                    /**
                     * 设置当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     * @param _matchTag 当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     * 
                     */
                    void SetMatchTag(const int64_t& _matchTag);

                    /**
                     * 判断参数 MatchTag 是否已赋值
                     * @return MatchTag 是否已赋值
                     * 
                     */
                    bool MatchTagHasBeenSet() const;

                    /**
                     * 获取参考字符，在单词诊断模式下，代表音素对应的原始文本
                     * @return ReferenceLetter 参考字符，在单词诊断模式下，代表音素对应的原始文本
                     * 
                     */
                    std::string GetReferenceLetter() const;

                    /**
                     * 设置参考字符，在单词诊断模式下，代表音素对应的原始文本
                     * @param _referenceLetter 参考字符，在单词诊断模式下，代表音素对应的原始文本
                     * 
                     */
                    void SetReferenceLetter(const std::string& _referenceLetter);

                    /**
                     * 判断参数 ReferenceLetter 是否已赋值
                     * @return ReferenceLetter 是否已赋值
                     * 
                     */
                    bool ReferenceLetterHasBeenSet() const;

                private:

                    /**
                     * 当前音节语音起始时间点，单位为ms
                     */
                    int64_t m_memBeginTime;
                    bool m_memBeginTimeHasBeenSet;

                    /**
                     * 当前音节语音终止时间点，单位为ms
                     */
                    int64_t m_memEndTime;
                    bool m_memEndTimeHasBeenSet;

                    /**
                     * 音节发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     */
                    double m_pronAccuracy;
                    bool m_pronAccuracyHasBeenSet;

                    /**
                     * 当前音节是否检测为重音
                     */
                    bool m_detectedStress;
                    bool m_detectedStressHasBeenSet;

                    /**
                     * 当前音节，当前评测识别的音素
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 当前音节是否应为重音
                     */
                    bool m_stress;
                    bool m_stressHasBeenSet;

                    /**
                     * 参考音素，在单词诊断模式下，代表标准音素
                     */
                    std::string m_referencePhone;
                    bool m_referencePhoneHasBeenSet;

                    /**
                     * 当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     */
                    int64_t m_matchTag;
                    bool m_matchTagHasBeenSet;

                    /**
                     * 参考字符，在单词诊断模式下，代表音素对应的原始文本
                     */
                    std::string m_referenceLetter;
                    bool m_referenceLetterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_PHONEINFO_H_
