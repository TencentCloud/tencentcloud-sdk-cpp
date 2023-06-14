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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIATRACK_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIATRACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaTrackItem.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 轨道信息
                */
                class MediaTrack : public AbstractModel
                {
                public:
                    MediaTrack();
                    ~MediaTrack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取轨道类型，取值有：
<ul>
<li>Video ：视频轨道。视频轨道由以下 Item 组成：<ul><li>VideoTrackItem</li><li>EmptyTrackItem</li><li>MediaTransitionItem</li></ul> </li>
<li>Audio ：音频轨道。音频轨道由以下 Item 组成：<ul><li>AudioTrackItem</li><li>EmptyTrackItem</li></ul> </li>
</ul>
                     * @return Type 轨道类型，取值有：
<ul>
<li>Video ：视频轨道。视频轨道由以下 Item 组成：<ul><li>VideoTrackItem</li><li>EmptyTrackItem</li><li>MediaTransitionItem</li></ul> </li>
<li>Audio ：音频轨道。音频轨道由以下 Item 组成：<ul><li>AudioTrackItem</li><li>EmptyTrackItem</li></ul> </li>
</ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置轨道类型，取值有：
<ul>
<li>Video ：视频轨道。视频轨道由以下 Item 组成：<ul><li>VideoTrackItem</li><li>EmptyTrackItem</li><li>MediaTransitionItem</li></ul> </li>
<li>Audio ：音频轨道。音频轨道由以下 Item 组成：<ul><li>AudioTrackItem</li><li>EmptyTrackItem</li></ul> </li>
</ul>
                     * @param _type 轨道类型，取值有：
<ul>
<li>Video ：视频轨道。视频轨道由以下 Item 组成：<ul><li>VideoTrackItem</li><li>EmptyTrackItem</li><li>MediaTransitionItem</li></ul> </li>
<li>Audio ：音频轨道。音频轨道由以下 Item 组成：<ul><li>AudioTrackItem</li><li>EmptyTrackItem</li></ul> </li>
</ul>
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
                     * 获取轨道上的媒体片段列表。
                     * @return TrackItems 轨道上的媒体片段列表。
                     * 
                     */
                    std::vector<MediaTrackItem> GetTrackItems() const;

                    /**
                     * 设置轨道上的媒体片段列表。
                     * @param _trackItems 轨道上的媒体片段列表。
                     * 
                     */
                    void SetTrackItems(const std::vector<MediaTrackItem>& _trackItems);

                    /**
                     * 判断参数 TrackItems 是否已赋值
                     * @return TrackItems 是否已赋值
                     * 
                     */
                    bool TrackItemsHasBeenSet() const;

                private:

                    /**
                     * 轨道类型，取值有：
<ul>
<li>Video ：视频轨道。视频轨道由以下 Item 组成：<ul><li>VideoTrackItem</li><li>EmptyTrackItem</li><li>MediaTransitionItem</li></ul> </li>
<li>Audio ：音频轨道。音频轨道由以下 Item 组成：<ul><li>AudioTrackItem</li><li>EmptyTrackItem</li></ul> </li>
</ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 轨道上的媒体片段列表。
                     */
                    std::vector<MediaTrackItem> m_trackItems;
                    bool m_trackItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIATRACK_H_
