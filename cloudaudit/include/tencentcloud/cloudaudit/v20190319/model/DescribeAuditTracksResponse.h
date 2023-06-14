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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKSRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Tracks.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeAuditTracks返回参数结构体
                */
                class DescribeAuditTracksResponse : public AbstractModel
                {
                public:
                    DescribeAuditTracksResponse();
                    ~DescribeAuditTracksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集列表
                     * @return Tracks 跟踪集列表
                     * 
                     */
                    std::vector<Tracks> GetTracks() const;

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取总数目
                     * @return TotalCount 总数目
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 跟踪集列表
                     */
                    std::vector<Tracks> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * 总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKSRESPONSE_H_
