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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipMediaSegmentInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * LiveRealTimeClip返回参数结构体
                */
                class LiveRealTimeClipResponse : public AbstractModel
                {
                public:
                    LiveRealTimeClipResponse();
                    ~LiveRealTimeClipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>剪辑后的视频播放 URL。</p>
                     * @return Url <p>剪辑后的视频播放 URL。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>剪辑固化后的视频的媒体文件的唯一标识。</p>
                     * @return FileId <p>剪辑固化后的视频的媒体文件的唯一标识。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>剪辑固化后的视频任务流 ID。</p>
                     * @return VodTaskId <p>剪辑固化后的视频任务流 ID。</p>
                     * 
                     */
                    std::string GetVodTaskId() const;

                    /**
                     * 判断参数 VodTaskId 是否已赋值
                     * @return VodTaskId 是否已赋值
                     * 
                     */
                    bool VodTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>剪辑后的视频元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData <p>剪辑后的视频元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取<p><span id="p_segmentset">剪辑后的视频片段信息。</span></p>
                     * @return SegmentSet <p><span id="p_segmentset">剪辑后的视频片段信息。</span></p>
                     * 
                     */
                    std::vector<LiveRealTimeClipMediaSegmentInfo> GetSegmentSet() const;

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * <p>剪辑后的视频播放 URL。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>剪辑固化后的视频的媒体文件的唯一标识。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>剪辑固化后的视频任务流 ID。</p>
                     */
                    std::string m_vodTaskId;
                    bool m_vodTaskIdHasBeenSet;

                    /**
                     * <p>剪辑后的视频元信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p><span id="p_segmentset">剪辑后的视频片段信息。</span></p>
                     */
                    std::vector<LiveRealTimeClipMediaSegmentInfo> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
