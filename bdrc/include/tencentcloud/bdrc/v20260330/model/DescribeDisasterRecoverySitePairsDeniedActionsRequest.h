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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSDENIEDACTIONSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSDENIEDACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoverySitePairsDeniedActions请求参数结构体
                */
                class DescribeDisasterRecoverySitePairsDeniedActionsRequest : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverySitePairsDeniedActionsRequest();
                    ~DescribeDisasterRecoverySitePairsDeniedActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的容灾策略ID列表，单个ID格式为 sitepair-xxxxxxxx
                     * @return SitePairIds 要查询的容灾策略ID列表，单个ID格式为 sitepair-xxxxxxxx
                     * 
                     */
                    std::vector<std::string> GetSitePairIds() const;

                    /**
                     * 设置要查询的容灾策略ID列表，单个ID格式为 sitepair-xxxxxxxx
                     * @param _sitePairIds 要查询的容灾策略ID列表，单个ID格式为 sitepair-xxxxxxxx
                     * 
                     */
                    void SetSitePairIds(const std::vector<std::string>& _sitePairIds);

                    /**
                     * 判断参数 SitePairIds 是否已赋值
                     * @return SitePairIds 是否已赋值
                     * 
                     */
                    bool SitePairIdsHasBeenSet() const;

                private:

                    /**
                     * 要查询的容灾策略ID列表，单个ID格式为 sitepair-xxxxxxxx
                     */
                    std::vector<std::string> m_sitePairIds;
                    bool m_sitePairIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISASTERRECOVERYSITEPAIRSDENIEDACTIONSREQUEST_H_
