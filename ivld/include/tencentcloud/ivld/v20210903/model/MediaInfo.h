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
| MEDIA_STATUS_DOWNLOAD_FAILED | 4 | 下载失败 |
| MEDIA_STATUS_TRANSCODING | 5 | 转码中 |
| MEDIA_STATUS_TRANSCODED | 6 | 转码完成 | 
| MEDIA_STATUS_TRANCODE_FAILED | 7 | 转码失败 |
| MEDIA_STATUS_SUCCESS | 8 | 媒资文件状态就绪，可发起任务 |
| MEDIA_STATUS_EXPIRED | 9 | 媒资文件已过期 |

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
                     */
                    std::string GetMediaId() const;

                    /**
                     * 设置媒资ID
                     * @param MediaId 媒资ID
                     */
                    void SetMediaId(const std::string& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     */
                    bool MediaIdHasBeenSet() const;

                    /**
                     * 获取媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 媒资名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownLoadURL 媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDownLoadURL() const;

                    /**
                     * 设置媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DownLoadURL 媒资下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDownLoadURL(const std::string& _downLoadURL);

                    /**
                     * 判断参数 DownLoadURL 是否已赋值
                     * @return DownLoadURL 是否已赋值
                     */
                    bool DownLoadURLHasBeenSet() const;

                    /**
                     * 获取媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 媒资状态，取值参看上方表格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReason 若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FailedReason 若状态为失败，表示失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取媒资视频元信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata 媒资视频元信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetadata GetMetadata() const;

                    /**
                     * 设置媒资视频元信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Metadata 媒资视频元信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetadata(const MediaMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetProgress() const;

                    /**
                     * 设置导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Progress 导入视频进度，取值范围为[0,100]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Label 媒资自定义标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackURL 媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CallbackURL 媒资导入完成后的回调地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     */
                    bool CallbackURLHasBeenSet() const;

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
                     * 媒资视频元信息
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAINFO_H_
