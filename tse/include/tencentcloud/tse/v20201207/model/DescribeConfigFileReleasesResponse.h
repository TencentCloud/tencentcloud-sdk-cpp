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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERELEASESRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERELEASESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFileRelease.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeConfigFileReleases返回参数结构体
                */
                class DescribeConfigFileReleasesResponse : public AbstractModel
                {
                public:
                    DescribeConfigFileReleasesResponse();
                    ~DescribeConfigFileReleasesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
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
                     * 获取发布列表
                     * @return Releases 发布列表
                     * 
                     */
                    std::vector<ConfigFileRelease> GetReleases() const;

                    /**
                     * 判断参数 Releases 是否已赋值
                     * @return Releases 是否已赋值
                     * 
                     */
                    bool ReleasesHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 发布列表
                     */
                    std::vector<ConfigFileRelease> m_releases;
                    bool m_releasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERELEASESRESPONSE_H_
