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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANDETAIL_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音检测详情
                */
                class ScanDetail : public AbstractModel
                {
                public:
                    ScanDetail();
                    ~ScanDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取违规场景，参照<a href="https://cloud.tencent.com/document/product/607/37622#Label_Value">Label</a>定义
                     * @return Label 违规场景，参照<a href="https://cloud.tencent.com/document/product/607/37622#Label_Value">Label</a>定义
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置违规场景，参照<a href="https://cloud.tencent.com/document/product/607/37622#Label_Value">Label</a>定义
                     * @param _label 违规场景，参照<a href="https://cloud.tencent.com/document/product/607/37622#Label_Value">Label</a>定义
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取该场景下概率[0.00,100.00],分值越大违规概率越高
                     * @return Rate 该场景下概率[0.00,100.00],分值越大违规概率越高
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置该场景下概率[0.00,100.00],分值越大违规概率越高
                     * @param _rate 该场景下概率[0.00,100.00],分值越大违规概率越高
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取违规关键字
                     * @return KeyWord 违规关键字
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置违规关键字
                     * @param _keyWord 违规关键字
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                    /**
                     * 获取关键字在音频的开始时间，从0开始的偏移量，单位为毫秒，Label=moan时有效
                     * @return StartTime 关键字在音频的开始时间，从0开始的偏移量，单位为毫秒，Label=moan时有效
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置关键字在音频的开始时间，从0开始的偏移量，单位为毫秒，Label=moan时有效
                     * @param _startTime 关键字在音频的开始时间，从0开始的偏移量，单位为毫秒，Label=moan时有效
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
                     * 获取关键字在音频的结束时间，从0开始的偏移量,，单位为毫秒，Label=moan时有效
                     * @return EndTime 关键字在音频的结束时间，从0开始的偏移量,，单位为毫秒，Label=moan时有效
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置关键字在音频的结束时间，从0开始的偏移量,，单位为毫秒，Label=moan时有效
                     * @param _endTime 关键字在音频的结束时间，从0开始的偏移量,，单位为毫秒，Label=moan时有效
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 违规场景，参照<a href="https://cloud.tencent.com/document/product/607/37622#Label_Value">Label</a>定义
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该场景下概率[0.00,100.00],分值越大违规概率越高
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 违规关键字
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                    /**
                     * 关键字在音频的开始时间，从0开始的偏移量，单位为毫秒，Label=moan时有效
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 关键字在音频的结束时间，从0开始的偏移量,，单位为毫秒，Label=moan时有效
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANDETAIL_H_
