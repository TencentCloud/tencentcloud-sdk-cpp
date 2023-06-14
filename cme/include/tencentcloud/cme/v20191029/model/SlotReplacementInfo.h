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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SLOTREPLACEMENTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SLOTREPLACEMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaReplacementInfo.h>
#include <tencentcloud/cme/v20191029/model/TextReplacementInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 卡槽替换信息。
                */
                class SlotReplacementInfo : public AbstractModel
                {
                public:
                    SlotReplacementInfo();
                    ~SlotReplacementInfo() = default;
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
                     * 获取替换类型，可取值有：
<li> AUDIO ：音频；</li>
<li> VIDEO ：视频；</li>
<li> IMAGE ：图片；</li>
<li> TEXT ：文本。</li>
注意：这里必须保证替换的素材类型与模板轨道数据的素材类型一致。如果替换的类型为Text,，则必须保证模板轨道数据中相应卡槽的位置标记的是文本。
                     * @return ReplacementType 替换类型，可取值有：
<li> AUDIO ：音频；</li>
<li> VIDEO ：视频；</li>
<li> IMAGE ：图片；</li>
<li> TEXT ：文本。</li>
注意：这里必须保证替换的素材类型与模板轨道数据的素材类型一致。如果替换的类型为Text,，则必须保证模板轨道数据中相应卡槽的位置标记的是文本。
                     * 
                     */
                    std::string GetReplacementType() const;

                    /**
                     * 设置替换类型，可取值有：
<li> AUDIO ：音频；</li>
<li> VIDEO ：视频；</li>
<li> IMAGE ：图片；</li>
<li> TEXT ：文本。</li>
注意：这里必须保证替换的素材类型与模板轨道数据的素材类型一致。如果替换的类型为Text,，则必须保证模板轨道数据中相应卡槽的位置标记的是文本。
                     * @param _replacementType 替换类型，可取值有：
<li> AUDIO ：音频；</li>
<li> VIDEO ：视频；</li>
<li> IMAGE ：图片；</li>
<li> TEXT ：文本。</li>
注意：这里必须保证替换的素材类型与模板轨道数据的素材类型一致。如果替换的类型为Text,，则必须保证模板轨道数据中相应卡槽的位置标记的是文本。
                     * 
                     */
                    void SetReplacementType(const std::string& _replacementType);

                    /**
                     * 判断参数 ReplacementType 是否已赋值
                     * @return ReplacementType 是否已赋值
                     * 
                     */
                    bool ReplacementTypeHasBeenSet() const;

                    /**
                     * 获取媒体替换信息，仅当要替换的媒体类型为音频、视频、图片时有效。
                     * @return MediaReplacementInfo 媒体替换信息，仅当要替换的媒体类型为音频、视频、图片时有效。
                     * 
                     */
                    MediaReplacementInfo GetMediaReplacementInfo() const;

                    /**
                     * 设置媒体替换信息，仅当要替换的媒体类型为音频、视频、图片时有效。
                     * @param _mediaReplacementInfo 媒体替换信息，仅当要替换的媒体类型为音频、视频、图片时有效。
                     * 
                     */
                    void SetMediaReplacementInfo(const MediaReplacementInfo& _mediaReplacementInfo);

                    /**
                     * 判断参数 MediaReplacementInfo 是否已赋值
                     * @return MediaReplacementInfo 是否已赋值
                     * 
                     */
                    bool MediaReplacementInfoHasBeenSet() const;

                    /**
                     * 获取文本替换信息，仅当要替换的卡槽类型为文本时有效。
                     * @return TextReplacementInfo 文本替换信息，仅当要替换的卡槽类型为文本时有效。
                     * 
                     */
                    TextReplacementInfo GetTextReplacementInfo() const;

                    /**
                     * 设置文本替换信息，仅当要替换的卡槽类型为文本时有效。
                     * @param _textReplacementInfo 文本替换信息，仅当要替换的卡槽类型为文本时有效。
                     * 
                     */
                    void SetTextReplacementInfo(const TextReplacementInfo& _textReplacementInfo);

                    /**
                     * 判断参数 TextReplacementInfo 是否已赋值
                     * @return TextReplacementInfo 是否已赋值
                     * 
                     */
                    bool TextReplacementInfoHasBeenSet() const;

                private:

                    /**
                     * 卡槽 Id。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 替换类型，可取值有：
<li> AUDIO ：音频；</li>
<li> VIDEO ：视频；</li>
<li> IMAGE ：图片；</li>
<li> TEXT ：文本。</li>
注意：这里必须保证替换的素材类型与模板轨道数据的素材类型一致。如果替换的类型为Text,，则必须保证模板轨道数据中相应卡槽的位置标记的是文本。
                     */
                    std::string m_replacementType;
                    bool m_replacementTypeHasBeenSet;

                    /**
                     * 媒体替换信息，仅当要替换的媒体类型为音频、视频、图片时有效。
                     */
                    MediaReplacementInfo m_mediaReplacementInfo;
                    bool m_mediaReplacementInfoHasBeenSet;

                    /**
                     * 文本替换信息，仅当要替换的卡槽类型为文本时有效。
                     */
                    TextReplacementInfo m_textReplacementInfo;
                    bool m_textReplacementInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SLOTREPLACEMENTINFO_H_
