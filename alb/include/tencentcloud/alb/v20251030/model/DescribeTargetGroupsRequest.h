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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeTargetGroups请求参数结构体
                */
                class DescribeTargetGroupsRequest : public AbstractModel
                {
                public:
                    DescribeTargetGroupsRequest();
                    ~DescribeTargetGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取 过滤器。通过指定的过滤条件来查询后端服务，支持：
- Name的值为**VpcId**。通过VPC实例来筛选目标组。**Values**的值为VPC唯一ID列表。
- Name的值为**TargetType**。通过后端服务类型来筛选目标组。**Values**的值可以取为**Instance**。
- Name的值为**TargetGroupName**。通过目标组名称来筛选目标组。**Values**的值为目标组名称列表。
- Name的值为**Protocol**。通过目标组后端服务协议来筛选目标组。**Values**的值为目标组后端服务协议列表。
- 通过标签方式筛选。
                     * @return Filters  过滤器。通过指定的过滤条件来查询后端服务，支持：
- Name的值为**VpcId**。通过VPC实例来筛选目标组。**Values**的值为VPC唯一ID列表。
- Name的值为**TargetType**。通过后端服务类型来筛选目标组。**Values**的值可以取为**Instance**。
- Name的值为**TargetGroupName**。通过目标组名称来筛选目标组。**Values**的值为目标组名称列表。
- Name的值为**Protocol**。通过目标组后端服务协议来筛选目标组。**Values**的值为目标组后端服务协议列表。
- 通过标签方式筛选。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置 过滤器。通过指定的过滤条件来查询后端服务，支持：
- Name的值为**VpcId**。通过VPC实例来筛选目标组。**Values**的值为VPC唯一ID列表。
- Name的值为**TargetType**。通过后端服务类型来筛选目标组。**Values**的值可以取为**Instance**。
- Name的值为**TargetGroupName**。通过目标组名称来筛选目标组。**Values**的值为目标组名称列表。
- Name的值为**Protocol**。通过目标组后端服务协议来筛选目标组。**Values**的值为目标组后端服务协议列表。
- 通过标签方式筛选。
                     * @param _filters  过滤器。通过指定的过滤条件来查询后端服务，支持：
- Name的值为**VpcId**。通过VPC实例来筛选目标组。**Values**的值为VPC唯一ID列表。
- Name的值为**TargetType**。通过后端服务类型来筛选目标组。**Values**的值可以取为**Instance**。
- Name的值为**TargetGroupName**。通过目标组名称来筛选目标组。**Values**的值为目标组名称列表。
- Name的值为**Protocol**。通过目标组后端服务协议来筛选目标组。**Values**的值为目标组后端服务协议列表。
- 通过标签方式筛选。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取返回列表的数量，默认为**20**，最大值为**100**。
                     * @return MaxResults 返回列表的数量，默认为**20**，最大值为**100**。
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置返回列表的数量，默认为**20**，最大值为**100**。
                     * @param _maxResults 返回列表的数量，默认为**20**，最大值为**100**。
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @return NextToken 下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * @param _nextToken 下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * @return TargetGroupIds 目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    std::vector<std::string> GetTargetGroupIds() const;

                    /**
                     * 设置目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * @param _targetGroupIds 目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetGroupIds(const std::vector<std::string>& _targetGroupIds);

                    /**
                     * 判断参数 TargetGroupIds 是否已赋值
                     * @return TargetGroupIds 是否已赋值
                     * 
                     */
                    bool TargetGroupIdsHasBeenSet() const;

                private:

                    /**
                     *  过滤器。通过指定的过滤条件来查询后端服务，支持：
- Name的值为**VpcId**。通过VPC实例来筛选目标组。**Values**的值为VPC唯一ID列表。
- Name的值为**TargetType**。通过后端服务类型来筛选目标组。**Values**的值可以取为**Instance**。
- Name的值为**TargetGroupName**。通过目标组名称来筛选目标组。**Values**的值为目标组名称列表。
- Name的值为**Protocol**。通过目标组后端服务协议来筛选目标组。**Values**的值为目标组后端服务协议列表。
- 通过标签方式筛选。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回列表的数量，默认为**20**，最大值为**100**。
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 下一次查询的Token值。第一次查询和没有下一次查询时，无需填写。
如果有下一次查询，取值为上一次 API 调用返回的 NextToken 值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 目标组 ID 列表，ID 格式为 lbtg- 后接 8 位字母数字。
                     */
                    std::vector<std::string> m_targetGroupIds;
                    bool m_targetGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBETARGETGROUPSREQUEST_H_
