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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewInfoItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 小程序音视频审核信息
                */
                class MediaMiniProgramReviewInfo : public AbstractModel
                {
                public:
                    MediaMiniProgramReviewInfo();
                    ~MediaMiniProgramReviewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音视频审核信息列表。
                     * @return MiniProgramReviewList 音视频审核信息列表。
                     * 
                     */
                    std::vector<MediaMiniProgramReviewInfoItem> GetMiniProgramReviewList() const;

                    /**
                     * 设置音视频审核信息列表。
                     * @param _miniProgramReviewList 音视频审核信息列表。
                     * 
                     */
                    void SetMiniProgramReviewList(const std::vector<MediaMiniProgramReviewInfoItem>& _miniProgramReviewList);

                    /**
                     * 判断参数 MiniProgramReviewList 是否已赋值
                     * @return MiniProgramReviewList 是否已赋值
                     * 
                     */
                    bool MiniProgramReviewListHasBeenSet() const;

                private:

                    /**
                     * 音视频审核信息列表。
                     */
                    std::vector<MediaMiniProgramReviewInfoItem> m_miniProgramReviewList;
                    bool m_miniProgramReviewListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFO_H_
