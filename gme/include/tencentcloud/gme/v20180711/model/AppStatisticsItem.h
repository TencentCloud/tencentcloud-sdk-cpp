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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/RealTimeSpeechStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/VoiceMessageStatisticsItem.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterStatisticsItem.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 应用用量统计数据
                */
                class AppStatisticsItem : public AbstractModel
                {
                public:
                    AppStatisticsItem();
                    ~AppStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实时语音统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealtimeSpeechStatisticsItem 实时语音统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RealTimeSpeechStatisticsItem GetRealtimeSpeechStatisticsItem() const;

                    /**
                     * 设置实时语音统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealtimeSpeechStatisticsItem 实时语音统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealtimeSpeechStatisticsItem(const RealTimeSpeechStatisticsItem& _realtimeSpeechStatisticsItem);

                    /**
                     * 判断参数 RealtimeSpeechStatisticsItem 是否已赋值
                     * @return RealtimeSpeechStatisticsItem 是否已赋值
                     */
                    bool RealtimeSpeechStatisticsItemHasBeenSet() const;

                    /**
                     * 获取语音消息统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceMessageStatisticsItem 语音消息统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VoiceMessageStatisticsItem GetVoiceMessageStatisticsItem() const;

                    /**
                     * 设置语音消息统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VoiceMessageStatisticsItem 语音消息统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVoiceMessageStatisticsItem(const VoiceMessageStatisticsItem& _voiceMessageStatisticsItem);

                    /**
                     * 判断参数 VoiceMessageStatisticsItem 是否已赋值
                     * @return VoiceMessageStatisticsItem 是否已赋值
                     */
                    bool VoiceMessageStatisticsItemHasBeenSet() const;

                    /**
                     * 获取语音过滤统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceFilterStatisticsItem 语音过滤统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VoiceFilterStatisticsItem GetVoiceFilterStatisticsItem() const;

                    /**
                     * 设置语音过滤统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VoiceFilterStatisticsItem 语音过滤统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVoiceFilterStatisticsItem(const VoiceFilterStatisticsItem& _voiceFilterStatisticsItem);

                    /**
                     * 判断参数 VoiceFilterStatisticsItem 是否已赋值
                     * @return VoiceFilterStatisticsItem 是否已赋值
                     */
                    bool VoiceFilterStatisticsItemHasBeenSet() const;

                    /**
                     * 获取统计时间
                     * @return Date 统计时间
                     */
                    std::string GetDate() const;

                    /**
                     * 设置统计时间
                     * @param Date 统计时间
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 实时语音统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RealTimeSpeechStatisticsItem m_realtimeSpeechStatisticsItem;
                    bool m_realtimeSpeechStatisticsItemHasBeenSet;

                    /**
                     * 语音消息统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VoiceMessageStatisticsItem m_voiceMessageStatisticsItem;
                    bool m_voiceMessageStatisticsItemHasBeenSet;

                    /**
                     * 语音过滤统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VoiceFilterStatisticsItem m_voiceFilterStatisticsItem;
                    bool m_voiceFilterStatisticsItemHasBeenSet;

                    /**
                     * 统计时间
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPSTATISTICSITEM_H_
