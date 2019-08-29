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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_WORDRSP_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_WORDRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/soe/v20180724/model/PhoneInfo.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 单词评分细则
                */
                class WordRsp : public AbstractModel
                {
                public:
                    WordRsp();
                    ~WordRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前单词语音起始时间点，单位为ms，该字段段落模式下无意义。
                     * @return MemBeginTime 当前单词语音起始时间点，单位为ms，该字段段落模式下无意义。
                     */
                    int64_t GetMemBeginTime() const;

                    /**
                     * 设置当前单词语音起始时间点，单位为ms，该字段段落模式下无意义。
                     * @param MemBeginTime 当前单词语音起始时间点，单位为ms，该字段段落模式下无意义。
                     */
                    void SetMemBeginTime(const int64_t& _memBeginTime);

                    /**
                     * 判断参数 MemBeginTime 是否已赋值
                     * @return MemBeginTime 是否已赋值
                     */
                    bool MemBeginTimeHasBeenSet() const;

                    /**
                     * 获取当前单词语音终止时间点，单位为ms，该字段段落模式下无意义。
                     * @return MemEndTime 当前单词语音终止时间点，单位为ms，该字段段落模式下无意义。
                     */
                    int64_t GetMemEndTime() const;

                    /**
                     * 设置当前单词语音终止时间点，单位为ms，该字段段落模式下无意义。
                     * @param MemEndTime 当前单词语音终止时间点，单位为ms，该字段段落模式下无意义。
                     */
                    void SetMemEndTime(const int64_t& _memEndTime);

                    /**
                     * 判断参数 MemEndTime 是否已赋值
                     * @return MemEndTime 是否已赋值
                     */
                    bool MemEndTimeHasBeenSet() const;

                    /**
                     * 获取单词发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     * @return PronAccuracy 单词发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     */
                    double GetPronAccuracy() const;

                    /**
                     * 设置单词发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     * @param PronAccuracy 单词发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     */
                    void SetPronAccuracy(const double& _pronAccuracy);

                    /**
                     * 判断参数 PronAccuracy 是否已赋值
                     * @return PronAccuracy 是否已赋值
                     */
                    bool PronAccuracyHasBeenSet() const;

                    /**
                     * 获取单词发音流利度，取值范围[0, 1]
                     * @return PronFluency 单词发音流利度，取值范围[0, 1]
                     */
                    double GetPronFluency() const;

                    /**
                     * 设置单词发音流利度，取值范围[0, 1]
                     * @param PronFluency 单词发音流利度，取值范围[0, 1]
                     */
                    void SetPronFluency(const double& _pronFluency);

                    /**
                     * 判断参数 PronFluency 是否已赋值
                     * @return PronFluency 是否已赋值
                     */
                    bool PronFluencyHasBeenSet() const;

                    /**
                     * 获取当前词
                     * @return Word 当前词
                     */
                    std::string GetWord() const;

                    /**
                     * 设置当前词
                     * @param Word 当前词
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     * @return MatchTag 当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     */
                    int64_t GetMatchTag() const;

                    /**
                     * 设置当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     * @param MatchTag 当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     */
                    void SetMatchTag(const int64_t& _matchTag);

                    /**
                     * 判断参数 MatchTag 是否已赋值
                     * @return MatchTag 是否已赋值
                     */
                    bool MatchTagHasBeenSet() const;

                    /**
                     * 获取音节评估详情
                     * @return PhoneInfos 音节评估详情
                     */
                    std::vector<PhoneInfo> GetPhoneInfos() const;

                    /**
                     * 设置音节评估详情
                     * @param PhoneInfos 音节评估详情
                     */
                    void SetPhoneInfos(const std::vector<PhoneInfo>& _phoneInfos);

                    /**
                     * 判断参数 PhoneInfos 是否已赋值
                     * @return PhoneInfos 是否已赋值
                     */
                    bool PhoneInfosHasBeenSet() const;

                    /**
                     * 获取参考词，目前为保留字段。
                     * @return ReferenceWord 参考词，目前为保留字段。
                     */
                    std::string GetReferenceWord() const;

                    /**
                     * 设置参考词，目前为保留字段。
                     * @param ReferenceWord 参考词，目前为保留字段。
                     */
                    void SetReferenceWord(const std::string& _referenceWord);

                    /**
                     * 判断参数 ReferenceWord 是否已赋值
                     * @return ReferenceWord 是否已赋值
                     */
                    bool ReferenceWordHasBeenSet() const;

                private:

                    /**
                     * 当前单词语音起始时间点，单位为ms，该字段段落模式下无意义。
                     */
                    int64_t m_memBeginTime;
                    bool m_memBeginTimeHasBeenSet;

                    /**
                     * 当前单词语音终止时间点，单位为ms，该字段段落模式下无意义。
                     */
                    int64_t m_memEndTime;
                    bool m_memEndTimeHasBeenSet;

                    /**
                     * 单词发音准确度，取值范围[-1, 100]，当取-1时指完全不匹配
                     */
                    double m_pronAccuracy;
                    bool m_pronAccuracyHasBeenSet;

                    /**
                     * 单词发音流利度，取值范围[0, 1]
                     */
                    double m_pronFluency;
                    bool m_pronFluencyHasBeenSet;

                    /**
                     * 当前词
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 当前词与输入语句的匹配情况，0：匹配单词、1：新增单词、2：缺少单词、3：错读的词、4：未录入单词。
                     */
                    int64_t m_matchTag;
                    bool m_matchTagHasBeenSet;

                    /**
                     * 音节评估详情
                     */
                    std::vector<PhoneInfo> m_phoneInfos;
                    bool m_phoneInfosHasBeenSet;

                    /**
                     * 参考词，目前为保留字段。
                     */
                    std::string m_referenceWord;
                    bool m_referenceWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_WORDRSP_H_
