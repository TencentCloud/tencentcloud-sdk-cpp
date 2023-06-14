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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SearchMedia返回参数结构体
                */
                class SearchMediaResponse : public AbstractModel
                {
                public:
                    SearchMediaResponse();
                    ~SearchMediaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合搜索条件的记录总数。
<li>最大值：5000。当命中记录数超过5000时，该字段将返回 5000，而非实际命中总数。</li>
                     * @return TotalCount 符合搜索条件的记录总数。
<li>最大值：5000。当命中记录数超过5000时，该字段将返回 5000，而非实际命中总数。</li>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取媒体文件信息列表。
                     * @return MediaInfoSet 媒体文件信息列表。
                     * 
                     */
                    std::vector<MediaInfo> GetMediaInfoSet() const;

                    /**
                     * 判断参数 MediaInfoSet 是否已赋值
                     * @return MediaInfoSet 是否已赋值
                     * 
                     */
                    bool MediaInfoSetHasBeenSet() const;

                private:

                    /**
                     * 符合搜索条件的记录总数。
<li>最大值：5000。当命中记录数超过5000时，该字段将返回 5000，而非实际命中总数。</li>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 媒体文件信息列表。
                     */
                    std::vector<MediaInfo> m_mediaInfoSet;
                    bool m_mediaInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIARESPONSE_H_
