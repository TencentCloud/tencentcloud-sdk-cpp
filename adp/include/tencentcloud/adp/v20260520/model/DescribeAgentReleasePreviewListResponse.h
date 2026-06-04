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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTRELEASEPREVIEWLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTRELEASEPREVIEWLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentReleasePreview.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAgentReleasePreviewList返回参数结构体
                */
                class DescribeAgentReleasePreviewListResponse : public AbstractModel
                {
                public:
                    DescribeAgentReleasePreviewListResponse();
                    ~DescribeAgentReleasePreviewListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>发布预览列表</p>
                     * @return ReleaseList <p>发布预览列表</p>
                     * 
                     */
                    std::vector<AgentReleasePreview> GetReleaseList() const;

                    /**
                     * 判断参数 ReleaseList 是否已赋值
                     * @return ReleaseList 是否已赋值
                     * 
                     */
                    bool ReleaseListHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * <p>发布预览列表</p>
                     */
                    std::vector<AgentReleasePreview> m_releaseList;
                    bool m_releaseListHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTRELEASEPREVIEWLISTRESPONSE_H_
