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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/Filter.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyGroupList请求参数结构体
                */
                class DescribeProxyGroupListRequest : public AbstractModel
                {
                public:
                    DescribeProxyGroupListRequest();
                    ~DescribeProxyGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>偏移量，默认值为0。</p>
                     * @return Offset <p>偏移量，默认值为0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认值为0。</p>
                     * @param _offset <p>偏移量，默认值为0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认值为20，最大值为100。</p>
                     * @return Limit <p>返回数量，默认值为20，最大值为100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认值为20，最大值为100。</p>
                     * @param _limit <p>返回数量，默认值为20，最大值为100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>项目ID。取值范围：-1，该用户下所有项目0，默认项目其他值，指定的项目</p>
                     * @return ProjectId <p>项目ID。取值范围：-1，该用户下所有项目0，默认项目其他值，指定的项目</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID。取值范围：-1，该用户下所有项目0，默认项目其他值，指定的项目</p>
                     * @param _projectId <p>项目ID。取值范围：-1，该用户下所有项目0，默认项目其他值，指定的项目</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件。 <br />每次请求的Filter.Values的上限为5。RealServerRegion - String - 是否必填：否 -（过滤条件）按照源站地域过滤，可参考DescribeDestRegions接口返回结果中的RegionId。PackageType - String - 是否必填：否 - （过滤条件）通道组类型，Thunder表示标准通道组，Accelerator表示银牌加速通道组。</p>
                     * @return Filters <p>过滤条件。 <br />每次请求的Filter.Values的上限为5。RealServerRegion - String - 是否必填：否 -（过滤条件）按照源站地域过滤，可参考DescribeDestRegions接口返回结果中的RegionId。PackageType - String - 是否必填：否 - （过滤条件）通道组类型，Thunder表示标准通道组，Accelerator表示银牌加速通道组。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。 <br />每次请求的Filter.Values的上限为5。RealServerRegion - String - 是否必填：否 -（过滤条件）按照源站地域过滤，可参考DescribeDestRegions接口返回结果中的RegionId。PackageType - String - 是否必填：否 - （过滤条件）通道组类型，Thunder表示标准通道组，Accelerator表示银牌加速通道组。</p>
                     * @param _filters <p>过滤条件。 <br />每次请求的Filter.Values的上限为5。RealServerRegion - String - 是否必填：否 -（过滤条件）按照源站地域过滤，可参考DescribeDestRegions接口返回结果中的RegionId。PackageType - String - 是否必填：否 - （过滤条件）通道组类型，Thunder表示标准通道组，Accelerator表示银牌加速通道组。</p>
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
                     * 获取<p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，该通道组会被拉取出来。</p>
                     * @return TagSet <p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，该通道组会被拉取出来。</p>
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置<p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，该通道组会被拉取出来。</p>
                     * @param _tagSet <p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，该通道组会被拉取出来。</p>
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * <p>偏移量，默认值为0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认值为20，最大值为100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>项目ID。取值范围：-1，该用户下所有项目0，默认项目其他值，指定的项目</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>过滤条件。 <br />每次请求的Filter.Values的上限为5。RealServerRegion - String - 是否必填：否 -（过滤条件）按照源站地域过滤，可参考DescribeDestRegions接口返回结果中的RegionId。PackageType - String - 是否必填：否 - （过滤条件）通道组类型，Thunder表示标准通道组，Accelerator表示银牌加速通道组。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>标签列表，当存在该字段时，拉取对应标签下的资源列表。最多支持5个标签，当存在两个或两个以上的标签时，满足其中任意一个标签时，该通道组会被拉取出来。</p>
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTREQUEST_H_
