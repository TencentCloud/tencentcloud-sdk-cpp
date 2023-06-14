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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MediaMetadata.h>
#include <tencentcloud/ivld/v20210903/model/AudioMetadata.h>
#include <tencentcloud/ivld/v20210903/model/ImageMetadata.h>
#include <tencentcloud/ivld/v20210903/model/TextMetadata.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 媒资信息结构体

媒资状态定义如下：

| 状态名 | 状态值 | 状态描述 | 
|---|---|---|
| MEDIA_STATUS_INVALID | 0 | 非法状态|
| MEDIA_STATUS_WAITING| 1 | 等待中 |
| MEDIA_STATUS_DOWNLOADING | 2 | 下载中 |
| MEDIA_STATUS_DOWNLOADED | 3 | 下载完成 |
| MEDIA_STATUS_DOWNLOAD_FAILED | 4 | 下载失败(已废弃) |
| MEDIA_STATUS_TRANSCODING | 5 | 转码中 |
| MEDIA_STATUS_TRANSCODED | 6 | 转码完成 | 
| MEDIA_STATUS_TRANCODE_FAILED | 7 | 转码失败(已废弃) |
| MEDIA_STATUS_SUCCESS | 8 | 媒资文件状态就绪，可发起任务 |
| MEDIA_STATUS_EXPIRED | 9 | 媒资文件已过期 |
| MEDIA_STATUS_FAILED | 10 | 媒资导入失败 |
                */
                class MediaInfo : public AbstractModel
                {
                public:
                    MediaInfo();
                    ~MediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资ID
                     * @return MediaId 媒资ID
                     * 
                     */
                    std::string GetMediaId() const;

                    /**
                     * 设置媒资ID
                     * @param _mediaId 媒资ID
                     * 
                     */
                    void SetMediaId(const std::string& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownLoadURL 媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownLoadURL() const;

                    /**
                     * 设置媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downLoadURL 媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownLoadURL(const std::string& _downLoadURL);

                    /**
                     * 判断参数 DownLoadURL 是否已赋值
                     * @return DownLoadURL 是否已赋值
                     * 
                     */
                    bool DownLoadURLHasBeenSet() const;

                    /**
                     * 获取媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReason 若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedReason 若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取媒资视频元信息，仅在MediaType=VIDEO时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata 媒资视频元信息，仅在MediaType=VIDEO时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetadata GetMetadata() const;

                    /**
                     * 设置媒资视频元信息，仅在MediaType=VIDEO时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata 媒资视频元信息，仅在MediaType=VIDEO时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const MediaMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _progress 导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackURL 媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackURL 媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取媒资文件类型，具体参看[MediaPreknownInfo](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaType 媒资文件类型，具体参看[MediaPreknownInfo](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMediaType() const;

                    /**
                     * 设置媒资文件类型，具体参看[MediaPreknownInfo](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaType 媒资文件类型，具体参看[MediaPreknownInfo](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取媒资音频元信息，仅在MediaType=Audio时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioMetadata 媒资音频元信息，仅在MediaType=Audio时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioMetadata GetAudioMetadata() const;

                    /**
                     * 设置媒资音频元信息，仅在MediaType=Audio时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioMetadata 媒资音频元信息，仅在MediaType=Audio时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioMetadata(const AudioMetadata& _audioMetadata);

                    /**
                     * 判断参数 AudioMetadata 是否已赋值
                     * @return AudioMetadata 是否已赋值
                     * 
                     */
                    bool AudioMetadataHasBeenSet() const;

                    /**
                     * 获取媒资图片文件元信息，仅在MediaType=Image时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageMetadata 媒资图片文件元信息，仅在MediaType=Image时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageMetadata GetImageMetadata() const;

                    /**
                     * 设置媒资图片文件元信息，仅在MediaType=Image时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageMetadata 媒资图片文件元信息，仅在MediaType=Image时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageMetadata(const ImageMetadata& _imageMetadata);

                    /**
                     * 判断参数 ImageMetadata 是否已赋值
                     * @return ImageMetadata 是否已赋值
                     * 
                     */
                    bool ImageMetadataHasBeenSet() const;

                    /**
                     * 获取媒资文本文件元信息，仅在MediaType=Text时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextMetadata 媒资文本文件元信息，仅在MediaType=Text时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextMetadata GetTextMetadata() const;

                    /**
                     * 设置媒资文本文件元信息，仅在MediaType=Text时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textMetadata 媒资文本文件元信息，仅在MediaType=Text时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextMetadata(const TextMetadata& _textMetadata);

                    /**
                     * 判断参数 TextMetadata 是否已赋值
                     * @return TextMetadata 是否已赋值
                     * 
                     */
                    bool TextMetadataHasBeenSet() const;

                private:

                    /**
                     * 媒资ID
                     */
                    std::string m_mediaId;
                    bool m_mediaIdHasBeenSet;

                    /**
                     * 媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downLoadURL;
                    bool m_downLoadURLHasBeenSet;

                    /**
                     * 媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 媒资视频元信息，仅在MediaType=VIDEO时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * 媒资文件类型，具体参看[MediaPreknownInfo](https://cloud.tencent.com/document/product/1509/65063#MediaPreknownInfo)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * 媒资音频元信息，仅在MediaType=Audio时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioMetadata m_audioMetadata;
                    bool m_audioMetadataHasBeenSet;

                    /**
                     * 媒资图片文件元信息，仅在MediaType=Image时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageMetadata m_imageMetadata;
                    bool m_imageMetadataHasBeenSet;

                    /**
                     * 媒资文本文件元信息，仅在MediaType=Text时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextMetadata m_textMetadata;
                    bool m_textMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAINFO_H_
