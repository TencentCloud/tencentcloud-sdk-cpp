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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroups请求参数结构体
                */
                class DescribeSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupsRequest();
                    ~DescribeSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组实例ID，例如：sg-33ocnj9n。每次请求的实例的上限为100。参数不支持同时指定SecurityGroupIds和Filters。
                     * @return SecurityGroupIds 安全组实例ID，例如：sg-33ocnj9n。每次请求的实例的上限为100。参数不支持同时指定SecurityGroupIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组实例ID，例如：sg-33ocnj9n。每次请求的实例的上限为100。参数不支持同时指定SecurityGroupIds和Filters。
                     * @param _securityGroupIds 安全组实例ID，例如：sg-33ocnj9n。每次请求的实例的上限为100。参数不支持同时指定SecurityGroupIds和Filters。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，参数不支持同时指定SecurityGroupIds和Filters。
<li>security-group-id - String - （过滤条件）安全组ID。</li>
<li>project-id - Integer - （过滤条件）项目ID。</li>
<li>security-group-name - String - （过滤条件）安全组名称。</li>
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 其中 tag-key 请使用具体的标签键进行替换。</li>
                     * @return Filters 过滤条件，参数不支持同时指定SecurityGroupIds和Filters。
<li>security-group-id - String - （过滤条件）安全组ID。</li>
<li>project-id - Integer - （过滤条件）项目ID。</li>
<li>security-group-name - String - （过滤条件）安全组名称。</li>
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 其中 tag-key 请使用具体的标签键进行替换。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定SecurityGroupIds和Filters。
<li>security-group-id - String - （过滤条件）安全组ID。</li>
<li>project-id - Integer - （过滤条件）项目ID。</li>
<li>security-group-name - String - （过滤条件）安全组名称。</li>
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 其中 tag-key 请使用具体的标签键进行替换。</li>
                     * @param _filters 过滤条件，参数不支持同时指定SecurityGroupIds和Filters。
<li>security-group-id - String - （过滤条件）安全组ID。</li>
<li>project-id - Integer - （过滤条件）项目ID。</li>
<li>security-group-name - String - （过滤条件）安全组名称。</li>
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 其中 tag-key 请使用具体的标签键进行替换。</li>
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段。支持：`CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * @return OrderField 排序字段。支持：`CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持：`CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * @param _orderField 排序字段。支持：`CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * @return OrderDirection 排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * @param _orderDirection 排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 安全组实例ID，例如：sg-33ocnj9n。每次请求的实例的上限为100。参数不支持同时指定SecurityGroupIds和Filters。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 过滤条件，参数不支持同时指定SecurityGroupIds和Filters。
<li>security-group-id - String - （过滤条件）安全组ID。</li>
<li>project-id - Integer - （过滤条件）项目ID。</li>
<li>security-group-name - String - （过滤条件）安全组名称。</li>
<li>tag-key - String -是否必填：否- （过滤条件）按照标签键进行过滤。</li>
<li>tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 其中 tag-key 请使用具体的标签键进行替换。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段。支持：`CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法。升序：`ASC`，倒序：`DESC`。默认值：`ASC`
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
