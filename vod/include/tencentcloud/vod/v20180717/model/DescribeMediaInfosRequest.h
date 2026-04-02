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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeMediaInfos请求参数结构体
                */
                class DescribeMediaInfosRequest : public AbstractModel
                {
                public:
                    DescribeMediaInfosRequest();
                    ~DescribeMediaInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>媒体文件 ID 列表，N 从 0 开始取值，最大 19。</p>
                     * @return FileIds <p>媒体文件 ID 列表，N 从 0 开始取值，最大 19。</p>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置<p>媒体文件 ID 列表，N 从 0 开始取值，最大 19。</p>
                     * @param _fileIds <p>媒体文件 ID 列表，N 从 0 开始取值，最大 19。</p>
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：</p><li>basicInfo（视频基础信息）。</li><li>metaData（视频元信息）。</li><li>transcodeInfo（视频转码结果信息）。</li><li>animatedGraphicsInfo（视频转动图结果信息）。</li><li>imageSpriteInfo（视频雪碧图信息）。</li><li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li><li>sampleSnapshotInfo（采样截图信息）。</li><li>keyFrameDescInfo（打点信息）。</li><li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li><li>miniProgramReviewInfo（小程序审核信息）。</li><li>subtitleInfo（字幕信息）。</li><li>reviewInfo（审核信息）。</li><li>mpsAiMediaInfo（mps智能媒资信息）。</li>
                     * @return Filters <p>指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：</p><li>basicInfo（视频基础信息）。</li><li>metaData（视频元信息）。</li><li>transcodeInfo（视频转码结果信息）。</li><li>animatedGraphicsInfo（视频转动图结果信息）。</li><li>imageSpriteInfo（视频雪碧图信息）。</li><li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li><li>sampleSnapshotInfo（采样截图信息）。</li><li>keyFrameDescInfo（打点信息）。</li><li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li><li>miniProgramReviewInfo（小程序审核信息）。</li><li>subtitleInfo（字幕信息）。</li><li>reviewInfo（审核信息）。</li><li>mpsAiMediaInfo（mps智能媒资信息）。</li>
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置<p>指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：</p><li>basicInfo（视频基础信息）。</li><li>metaData（视频元信息）。</li><li>transcodeInfo（视频转码结果信息）。</li><li>animatedGraphicsInfo（视频转动图结果信息）。</li><li>imageSpriteInfo（视频雪碧图信息）。</li><li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li><li>sampleSnapshotInfo（采样截图信息）。</li><li>keyFrameDescInfo（打点信息）。</li><li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li><li>miniProgramReviewInfo（小程序审核信息）。</li><li>subtitleInfo（字幕信息）。</li><li>reviewInfo（审核信息）。</li><li>mpsAiMediaInfo（mps智能媒资信息）。</li>
                     * @param _filters <p>指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：</p><li>basicInfo（视频基础信息）。</li><li>metaData（视频元信息）。</li><li>transcodeInfo（视频转码结果信息）。</li><li>animatedGraphicsInfo（视频转动图结果信息）。</li><li>imageSpriteInfo（视频雪碧图信息）。</li><li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li><li>sampleSnapshotInfo（采样截图信息）。</li><li>keyFrameDescInfo（打点信息）。</li><li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li><li>miniProgramReviewInfo（小程序审核信息）。</li><li>subtitleInfo（字幕信息）。</li><li>reviewInfo（审核信息）。</li><li>mpsAiMediaInfo（mps智能媒资信息）。</li>
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>媒体文件 ID 列表，N 从 0 开始取值，最大 19。</p>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：</p><li>basicInfo（视频基础信息）。</li><li>metaData（视频元信息）。</li><li>transcodeInfo（视频转码结果信息）。</li><li>animatedGraphicsInfo（视频转动图结果信息）。</li><li>imageSpriteInfo（视频雪碧图信息）。</li><li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li><li>sampleSnapshotInfo（采样截图信息）。</li><li>keyFrameDescInfo（打点信息）。</li><li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li><li>miniProgramReviewInfo（小程序审核信息）。</li><li>subtitleInfo（字幕信息）。</li><li>reviewInfo（审核信息）。</li><li>mpsAiMediaInfo（mps智能媒资信息）。</li>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSREQUEST_H_
