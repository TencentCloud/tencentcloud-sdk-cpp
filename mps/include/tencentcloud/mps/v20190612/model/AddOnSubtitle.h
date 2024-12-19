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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 外挂字幕。
                */
                class AddOnSubtitle : public AbstractModel
                {
                public:
                    AddOnSubtitle();
                    ~AddOnSubtitle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插入形式，可选值：
<li>subtitle-stream：插入字幕轨道</li>
<li>close-caption-708：CEA-708字幕编码到SEI帧</li>
<li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 插入形式，可选值：
<li>subtitle-stream：插入字幕轨道</li>
<li>close-caption-708：CEA-708字幕编码到SEI帧</li>
<li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置插入形式，可选值：
<li>subtitle-stream：插入字幕轨道</li>
<li>close-caption-708：CEA-708字幕编码到SEI帧</li>
<li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 插入形式，可选值：
<li>subtitle-stream：插入字幕轨道</li>
<li>close-caption-708：CEA-708字幕编码到SEI帧</li>
<li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subtitle 字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInputInfo GetSubtitle() const;

                    /**
                     * 设置字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitle 字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitle(const MediaInputInfo& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取字幕名称	。
注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubtitleName 字幕名称	。
注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置字幕名称	。
注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subtitleName 字幕名称	。
注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                private:

                    /**
                     * 插入形式，可选值：
<li>subtitle-stream：插入字幕轨道</li>
<li>close-caption-708：CEA-708字幕编码到SEI帧</li>
<li>close-caption-608：CEA-608字幕编码到SEI帧</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字幕文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInputInfo m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * 字幕名称	。
注意：仅支持中文、英文、数字、空格、下划线(_)、短横线(-)、句点(.)和中英文括号，长度不能超过64个字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ADDONSUBTITLE_H_
