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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SLOTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SLOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/TextSlotInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 卡槽信息。
                */
                class SlotInfo : public AbstractModel
                {
                public:
                    SlotInfo();
                    ~SlotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡槽 Id。
                     * @return Id 卡槽 Id。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置卡槽 Id。
                     * @param _id 卡槽 Id。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取卡槽类型，可取值有：
<li> AUDIO：音频卡槽，可替换素材类型为 AUDIO 的音频素材;</li>
<li> VIDEO：视频卡槽，可替换素材类型为 VIDEO 的视频素材;</li>
<li> IMAGE：图片卡槽，可替换素材类型为 IMAGE 的图片素材;</li>
<li> TEXT：文本卡槽，可替换文本内容。</li>
                     * @return Type 卡槽类型，可取值有：
<li> AUDIO：音频卡槽，可替换素材类型为 AUDIO 的音频素材;</li>
<li> VIDEO：视频卡槽，可替换素材类型为 VIDEO 的视频素材;</li>
<li> IMAGE：图片卡槽，可替换素材类型为 IMAGE 的图片素材;</li>
<li> TEXT：文本卡槽，可替换文本内容。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置卡槽类型，可取值有：
<li> AUDIO：音频卡槽，可替换素材类型为 AUDIO 的音频素材;</li>
<li> VIDEO：视频卡槽，可替换素材类型为 VIDEO 的视频素材;</li>
<li> IMAGE：图片卡槽，可替换素材类型为 IMAGE 的图片素材;</li>
<li> TEXT：文本卡槽，可替换文本内容。</li>
                     * @param _type 卡槽类型，可取值有：
<li> AUDIO：音频卡槽，可替换素材类型为 AUDIO 的音频素材;</li>
<li> VIDEO：视频卡槽，可替换素材类型为 VIDEO 的视频素材;</li>
<li> IMAGE：图片卡槽，可替换素材类型为 IMAGE 的图片素材;</li>
<li> TEXT：文本卡槽，可替换文本内容。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取默认素材ID。当卡槽类型为 AUDIO，VIDEO，或 IMAGE 中的一种时有效。
                     * @return DefaultMaterialId 默认素材ID。当卡槽类型为 AUDIO，VIDEO，或 IMAGE 中的一种时有效。
                     * 
                     */
                    std::string GetDefaultMaterialId() const;

                    /**
                     * 设置默认素材ID。当卡槽类型为 AUDIO，VIDEO，或 IMAGE 中的一种时有效。
                     * @param _defaultMaterialId 默认素材ID。当卡槽类型为 AUDIO，VIDEO，或 IMAGE 中的一种时有效。
                     * 
                     */
                    void SetDefaultMaterialId(const std::string& _defaultMaterialId);

                    /**
                     * 判断参数 DefaultMaterialId 是否已赋值
                     * @return DefaultMaterialId 是否已赋值
                     * 
                     */
                    bool DefaultMaterialIdHasBeenSet() const;

                    /**
                     * 获取默认文本卡槽信息。当卡槽类型为 TEXT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultTextSlotInfo 默认文本卡槽信息。当卡槽类型为 TEXT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextSlotInfo GetDefaultTextSlotInfo() const;

                    /**
                     * 设置默认文本卡槽信息。当卡槽类型为 TEXT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultTextSlotInfo 默认文本卡槽信息。当卡槽类型为 TEXT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultTextSlotInfo(const TextSlotInfo& _defaultTextSlotInfo);

                    /**
                     * 判断参数 DefaultTextSlotInfo 是否已赋值
                     * @return DefaultTextSlotInfo 是否已赋值
                     * 
                     */
                    bool DefaultTextSlotInfoHasBeenSet() const;

                    /**
                     * 获取素材时长，单位秒。
                     * @return Duration 素材时长，单位秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置素材时长，单位秒。
                     * @param _duration 素材时长，单位秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取卡槽起始时间，单位秒。
                     * @return StartTime 卡槽起始时间，单位秒。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置卡槽起始时间，单位秒。
                     * @param _startTime 卡槽起始时间，单位秒。
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 卡槽 Id。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 卡槽类型，可取值有：
<li> AUDIO：音频卡槽，可替换素材类型为 AUDIO 的音频素材;</li>
<li> VIDEO：视频卡槽，可替换素材类型为 VIDEO 的视频素材;</li>
<li> IMAGE：图片卡槽，可替换素材类型为 IMAGE 的图片素材;</li>
<li> TEXT：文本卡槽，可替换文本内容。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 默认素材ID。当卡槽类型为 AUDIO，VIDEO，或 IMAGE 中的一种时有效。
                     */
                    std::string m_defaultMaterialId;
                    bool m_defaultMaterialIdHasBeenSet;

                    /**
                     * 默认文本卡槽信息。当卡槽类型为 TEXT 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextSlotInfo m_defaultTextSlotInfo;
                    bool m_defaultTextSlotInfoHasBeenSet;

                    /**
                     * 素材时长，单位秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 卡槽起始时间，单位秒。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SLOTINFO_H_
