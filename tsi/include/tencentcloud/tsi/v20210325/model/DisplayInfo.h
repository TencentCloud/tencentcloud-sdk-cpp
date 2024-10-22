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

#ifndef TENCENTCLOUD_TSI_V20210325_MODEL_DISPLAYINFO_H_
#define TENCENTCLOUD_TSI_V20210325_MODEL_DISPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsi
    {
        namespace V20210325
        {
            namespace Model
            {
                /**
                * 同传结果数据
                */
                class DisplayInfo : public AbstractModel
                {
                public:
                    DisplayInfo();
                    ~DisplayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取句子 ID
                     * @return SeId 句子 ID
                     * 
                     */
                    std::string GetSeId() const;

                    /**
                     * 设置句子 ID
                     * @param _seId 句子 ID
                     * 
                     */
                    void SetSeId(const std::string& _seId);

                    /**
                     * 判断参数 SeId 是否已赋值
                     * @return SeId 是否已赋值
                     * 
                     */
                    bool SeIdHasBeenSet() const;

                    /**
                     * 获取句子版本号
                     * @return SeVer 句子版本号
                     * 
                     */
                    uint64_t GetSeVer() const;

                    /**
                     * 设置句子版本号
                     * @param _seVer 句子版本号
                     * 
                     */
                    void SetSeVer(const uint64_t& _seVer);

                    /**
                     * 判断参数 SeVer 是否已赋值
                     * @return SeVer 是否已赋值
                     * 
                     */
                    bool SeVerHasBeenSet() const;

                    /**
                     * 获取识别结果
                     * @return SourceText 识别结果
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置识别结果
                     * @param _sourceText 识别结果
                     * 
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取 翻译结果
                     * @return TargetText  翻译结果
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 设置 翻译结果
                     * @param _targetText  翻译结果
                     * 
                     */
                    void SetTargetText(const std::string& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取句子开始时间
                     * @return StartTime 句子开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置句子开始时间
                     * @param _startTime 句子开始时间
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取句子结束时间
                     * @return EndTime 句子结束时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置句子结束时间
                     * @param _endTime 句子结束时间
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取 当前句子是否已结束
                     * @return IsEnd  当前句子是否已结束
                     * 
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置 当前句子是否已结束
                     * @param _isEnd  当前句子是否已结束
                     * 
                     */
                    void SetIsEnd(const bool& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * 
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取base64编码的wav/mp3音频数据
                     * @return Audio base64编码的wav/mp3音频数据
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 设置base64编码的wav/mp3音频数据
                     * @param _audio base64编码的wav/mp3音频数据
                     * 
                     */
                    void SetAudio(const std::string& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                private:

                    /**
                     * 句子 ID
                     */
                    std::string m_seId;
                    bool m_seIdHasBeenSet;

                    /**
                     * 句子版本号
                     */
                    uint64_t m_seVer;
                    bool m_seVerHasBeenSet;

                    /**
                     * 识别结果
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     *  翻译结果
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * 句子开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 句子结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     *  当前句子是否已结束
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * base64编码的wav/mp3音频数据
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSI_V20210325_MODEL_DISPLAYINFO_H_
