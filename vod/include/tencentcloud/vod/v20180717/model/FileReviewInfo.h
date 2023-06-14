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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ReviewInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 文件审核信息。
                */
                class FileReviewInfo : public AbstractModel
                {
                public:
                    FileReviewInfo();
                    ~FileReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaReviewInfo 媒体审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReviewInfo GetMediaReviewInfo() const;

                    /**
                     * 设置媒体审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaReviewInfo 媒体审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaReviewInfo(const ReviewInfo& _mediaReviewInfo);

                    /**
                     * 判断参数 MediaReviewInfo 是否已赋值
                     * @return MediaReviewInfo 是否已赋值
                     * 
                     */
                    bool MediaReviewInfoHasBeenSet() const;

                    /**
                     * 获取媒体封面审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverReviewInfo 媒体封面审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReviewInfo GetCoverReviewInfo() const;

                    /**
                     * 设置媒体封面审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverReviewInfo 媒体封面审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverReviewInfo(const ReviewInfo& _coverReviewInfo);

                    /**
                     * 判断参数 CoverReviewInfo 是否已赋值
                     * @return CoverReviewInfo 是否已赋值
                     * 
                     */
                    bool CoverReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 媒体审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReviewInfo m_mediaReviewInfo;
                    bool m_mediaReviewInfoHasBeenSet;

                    /**
                     * 媒体封面审核信息\*。

\* 只展示通过 [音视频审核(ReviewAudioVideo)](https://cloud.tencent.com/document/api/266/80283) 或 [图片审核(ReviewImage)](https://cloud.tencent.com/document/api/266/73217) 发起的审核结果信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReviewInfo m_coverReviewInfo;
                    bool m_coverReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEREVIEWINFO_H_
