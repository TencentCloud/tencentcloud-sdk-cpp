/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频深度估计输出存储配置。
                */
                class VideoDepthEstimationOutputConfig : public AbstractModel
                {
                public:
                    VideoDepthEstimationOutputConfig();
                    ~VideoDepthEstimationOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储模式。可选值：Temporary（默认，产物临时存储 7 天，不返回 FileId）、Permanent（产物写入当前应用媒资库并返回 FileId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageMode <p>存储模式。可选值：Temporary（默认，产物临时存储 7 天，不返回 FileId）、Permanent（产物写入当前应用媒资库并返回 FileId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式。可选值：Temporary（默认，产物临时存储 7 天，不返回 FileId）、Permanent（产物写入当前应用媒资库并返回 FileId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageMode <p>存储模式。可选值：Temporary（默认，产物临时存储 7 天，不返回 FileId）、Permanent（产物写入当前应用媒资库并返回 FileId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取<p>输出媒资名称，仅 StorageMode 为 Permanent 时生效，不传默认为 depthVideoGenFile。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaName <p>输出媒资名称，仅 StorageMode 为 Permanent 时生效，不传默认为 depthVideoGenFile。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>输出媒资名称，仅 StorageMode 为 Permanent 时生效，不传默认为 depthVideoGenFile。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mediaName <p>输出媒资名称，仅 StorageMode 为 Permanent 时生效，不传默认为 depthVideoGenFile。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取<p>输出媒资过期时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>，仅 StorageMode 为 Permanent 时生效。不传表示永不过期。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>输出媒资过期时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>，仅 StorageMode 为 Permanent 时生效。不传表示永不过期。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>输出媒资过期时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>，仅 StorageMode 为 Permanent 时生效。不传表示永不过期。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>输出媒资过期时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>，仅 StorageMode 为 Permanent 时生效。不传表示永不过期。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>存储模式。可选值：Temporary（默认，产物临时存储 7 天，不返回 FileId）、Permanent（产物写入当前应用媒资库并返回 FileId）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>输出媒资名称，仅 StorageMode 为 Permanent 时生效，不传默认为 depthVideoGenFile。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>输出媒资过期时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>，仅 StorageMode 为 Permanent 时生效。不传表示永不过期。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONOUTPUTCONFIG_H_
