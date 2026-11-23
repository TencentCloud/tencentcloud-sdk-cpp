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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/SessionArtifactDetail.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeSessionArtifactList返回参数结构体
                */
                class DescribeSessionArtifactListResponse : public AbstractModel
                {
                public:
                    DescribeSessionArtifactListResponse();
                    ~DescribeSessionArtifactListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>符合条件的物料总数（按 ID 批量时为实际命中数）</p>
                     * @return TotalCount <p>符合条件的物料总数（按 ID 批量时为实际命中数）</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>返回的物料集合</p>
                     * @return ArtifactSet <p>返回的物料集合</p>
                     * 
                     */
                    std::vector<SessionArtifactDetail> GetArtifactSet() const;

                    /**
                     * 判断参数 ArtifactSet 是否已赋值
                     * @return ArtifactSet 是否已赋值
                     * 
                     */
                    bool ArtifactSetHasBeenSet() const;

                private:

                    /**
                     * <p>符合条件的物料总数（按 ID 批量时为实际命中数）</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>返回的物料集合</p>
                     */
                    std::vector<SessionArtifactDetail> m_artifactSet;
                    bool m_artifactSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTLISTRESPONSE_H_
