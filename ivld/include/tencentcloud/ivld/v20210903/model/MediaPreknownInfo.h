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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAPREKNOWNINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAPREKNOWNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 描述输入媒资的先验知识，例如文件类型(视频)，媒体类型(新闻/综艺等)

MediaPreknownInfo.MediaType:

| MediaType 名称|  MediaType取值 | MediaType描述 |
|---|---|---|
| MEDIA_TYPE_INVALID | 0 | 非法的媒资文件类型 | 
| MEDIA_TYPE_IMAGE | 1 | 图片 |
| MEDIA_TYPE_VIDEO | 2 | 视频 |
| MEDIA_TYPE_AUDIO | 3 | 音频 |
| MEDIA_TYPE_VIDEO_STREAM | 4 | 视频流，暂不支持 |
| MEDIA_TYPE_TEXT | 5 | 文本 |

MediaPreknownInfo.MediaLabel:

| MediaLabel名称 | MediaLabel取值 | MediaLabel描述 |
|---|---|---|
| MEDIA_LABEL_INVALID | 0 | 非法的一级媒资素材类型 |
| MEDIA_LABEL_NEWS | 1 | 新闻 |
| MEDIA_LABEL_ENTERTAINMENT | 2 | 综艺|
| MEDIA_LABEL_INTERNET_INFO | 3 | 互联网资讯 | 
| MEDIA_LABEL_MOVIE | 4 | 电影 |
| MEDIA_LABEL_SERIES | 5 | 电视连续剧 |
| MEDIA_LABEL_SPECIAL | 6 | 专题 |
| MEDIA_LABEL_SPORT | 7 | 体育 |

MediaPreknownInfo.MediaSecondLabel
请注意：**当且仅当MediaLabel=2(综艺)时MediaSecondLabel才有意义**

| MediaSecondLabel名称 | MediaSecondLabel取值 | MediaSecondLabel 描述|
|---|---|---|
| MEDIA_SECOND_LABEL_INVALID |  0  | 非法的MediaSecondLabel |
| MEDIA_SECOND_LABEL_EVENING | 1 | 综艺晚会 |
| MEDIA_SECOND_LABEL_OTHERS | 2 | 其他 |

MediaMeta.MediaLang

| MediaLang名称 | MediaLang取值 | MediaLang描述 |
|---|---|---|
| MEDIA_LANG_INVALID | 0 | 非法的MediaLang |
| MEDIA_LANG_MANDARIN | 1 | 普通话 |
| MEDIA_LANG_CANTONESE | 2 | 粤语 | 
                */
                class MediaPreknownInfo : public AbstractModel
                {
                public:
                    MediaPreknownInfo();
                    ~MediaPreknownInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资文件类型，参见MediaPreknownInfo结构体定义
                     * @return MediaType 媒资文件类型，参见MediaPreknownInfo结构体定义
                     * 
                     */
                    int64_t GetMediaType() const;

                    /**
                     * 设置媒资文件类型，参见MediaPreknownInfo结构体定义
                     * @param _mediaType 媒资文件类型，参见MediaPreknownInfo结构体定义
                     * 
                     */
                    void SetMediaType(const int64_t& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取媒资素材一级类型，参见MediaPreknownInfo结构体定义
                     * @return MediaLabel 媒资素材一级类型，参见MediaPreknownInfo结构体定义
                     * 
                     */
                    int64_t GetMediaLabel() const;

                    /**
                     * 设置媒资素材一级类型，参见MediaPreknownInfo结构体定义
                     * @param _mediaLabel 媒资素材一级类型，参见MediaPreknownInfo结构体定义
                     * 
                     */
                    void SetMediaLabel(const int64_t& _mediaLabel);

                    /**
                     * 判断参数 MediaLabel 是否已赋值
                     * @return MediaLabel 是否已赋值
                     * 
                     */
                    bool MediaLabelHasBeenSet() const;

                    /**
                     * 获取媒资素材二级类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaSecondLabel 媒资素材二级类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMediaSecondLabel() const;

                    /**
                     * 设置媒资素材二级类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaSecondLabel 媒资素材二级类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaSecondLabel(const int64_t& _mediaSecondLabel);

                    /**
                     * 判断参数 MediaSecondLabel 是否已赋值
                     * @return MediaSecondLabel 是否已赋值
                     * 
                     */
                    bool MediaSecondLabelHasBeenSet() const;

                    /**
                     * 获取媒资音频类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaLang 媒资音频类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMediaLang() const;

                    /**
                     * 设置媒资音频类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaLang 媒资音频类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaLang(const int64_t& _mediaLang);

                    /**
                     * 判断参数 MediaLang 是否已赋值
                     * @return MediaLang 是否已赋值
                     * 
                     */
                    bool MediaLangHasBeenSet() const;

                private:

                    /**
                     * 媒资文件类型，参见MediaPreknownInfo结构体定义
                     */
                    int64_t m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * 媒资素材一级类型，参见MediaPreknownInfo结构体定义
                     */
                    int64_t m_mediaLabel;
                    bool m_mediaLabelHasBeenSet;

                    /**
                     * 媒资素材二级类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mediaSecondLabel;
                    bool m_mediaSecondLabelHasBeenSet;

                    /**
                     * 媒资音频类型，参见MediaPreknownInfo结构体定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mediaLang;
                    bool m_mediaLangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAPREKNOWNINFO_H_
