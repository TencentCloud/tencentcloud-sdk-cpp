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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLEITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 语音字幕识别项
                */
                class SubtitleItem : public AbstractModel
                {
                public:
                    SubtitleItem();
                    ~SubtitleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音识别结果
                     * @return Id 语音识别结果
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置语音识别结果
                     * @param _id 语音识别结果
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取中文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zh 中文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZh() const;

                    /**
                     * 设置中文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zh 中文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZh(const std::string& _zh);

                    /**
                     * 判断参数 Zh 是否已赋值
                     * @return Zh 是否已赋值
                     * 
                     */
                    bool ZhHasBeenSet() const;

                    /**
                     * 获取英文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return En 英文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEn() const;

                    /**
                     * 设置英文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _en 英文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEn(const std::string& _en);

                    /**
                     * 判断参数 En 是否已赋值
                     * @return En 是否已赋值
                     * 
                     */
                    bool EnHasBeenSet() const;

                    /**
                     * 获取语句起始时间戳PTS(ms)
                     * @return StartPts 语句起始时间戳PTS(ms)
                     * 
                     */
                    uint64_t GetStartPts() const;

                    /**
                     * 设置语句起始时间戳PTS(ms)
                     * @param _startPts 语句起始时间戳PTS(ms)
                     * 
                     */
                    void SetStartPts(const uint64_t& _startPts);

                    /**
                     * 判断参数 StartPts 是否已赋值
                     * @return StartPts 是否已赋值
                     * 
                     */
                    bool StartPtsHasBeenSet() const;

                    /**
                     * 获取语句结束时间戳PTS(ms)
                     * @return EndPts 语句结束时间戳PTS(ms)
                     * 
                     */
                    uint64_t GetEndPts() const;

                    /**
                     * 设置语句结束时间戳PTS(ms)
                     * @param _endPts 语句结束时间戳PTS(ms)
                     * 
                     */
                    void SetEndPts(const uint64_t& _endPts);

                    /**
                     * 判断参数 EndPts 是否已赋值
                     * @return EndPts 是否已赋值
                     * 
                     */
                    bool EndPtsHasBeenSet() const;

                    /**
                     * 获取字符串形式的起始结束时间
                     * @return Period 字符串形式的起始结束时间
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置字符串形式的起始结束时间
                     * @param _period 字符串形式的起始结束时间
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取结果的置信度（百分制）
                     * @return Confidence 结果的置信度（百分制）
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置结果的置信度（百分制）
                     * @param _confidence 结果的置信度（百分制）
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取当前语句是否结束
                     * @return EndFlag 当前语句是否结束
                     * 
                     */
                    bool GetEndFlag() const;

                    /**
                     * 设置当前语句是否结束
                     * @param _endFlag 当前语句是否结束
                     * 
                     */
                    void SetEndFlag(const bool& _endFlag);

                    /**
                     * 判断参数 EndFlag 是否已赋值
                     * @return EndFlag 是否已赋值
                     * 
                     */
                    bool EndFlagHasBeenSet() const;

                    /**
                     * 获取语句分割时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PuncEndTs 语句分割时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPuncEndTs() const;

                    /**
                     * 设置语句分割时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _puncEndTs 语句分割时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPuncEndTs(const std::string& _puncEndTs);

                    /**
                     * 判断参数 PuncEndTs 是否已赋值
                     * @return PuncEndTs 是否已赋值
                     * 
                     */
                    bool PuncEndTsHasBeenSet() const;

                private:

                    /**
                     * 语音识别结果
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 中文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zh;
                    bool m_zhHasBeenSet;

                    /**
                     * 英文翻译结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_en;
                    bool m_enHasBeenSet;

                    /**
                     * 语句起始时间戳PTS(ms)
                     */
                    uint64_t m_startPts;
                    bool m_startPtsHasBeenSet;

                    /**
                     * 语句结束时间戳PTS(ms)
                     */
                    uint64_t m_endPts;
                    bool m_endPtsHasBeenSet;

                    /**
                     * 字符串形式的起始结束时间
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 结果的置信度（百分制）
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 当前语句是否结束
                     */
                    bool m_endFlag;
                    bool m_endFlagHasBeenSet;

                    /**
                     * 语句分割时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_puncEndTs;
                    bool m_puncEndTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_SUBTITLEITEM_H_
