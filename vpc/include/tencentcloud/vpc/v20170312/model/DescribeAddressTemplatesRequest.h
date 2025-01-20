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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_

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
                * DescribeAddressTemplates请求参数结构体
                */
                class DescribeAddressTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAddressTemplatesRequest();
                    ~DescribeAddressTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     * @return Filters 过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
                     * @param _filters 过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
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
                     * 获取是否获取IP地址模板成员标识。
                     * @return NeedMemberInfo 是否获取IP地址模板成员标识。
                     * 
                     */
                    bool GetNeedMemberInfo() const;

                    /**
                     * 设置是否获取IP地址模板成员标识。
                     * @param _needMemberInfo 是否获取IP地址模板成员标识。
                     * 
                     */
                    void SetNeedMemberInfo(const bool& _needMemberInfo);

                    /**
                     * 判断参数 NeedMemberInfo 是否已赋值
                     * @return NeedMemberInfo 是否已赋值
                     * 
                     */
                    bool NeedMemberInfoHasBeenSet() const;

                    /**
                     * 获取排序字段。支持：`AddressTemplateId` `CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * @return OrderField 排序字段。支持：`AddressTemplateId` `CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。支持：`AddressTemplateId` `CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     * @param _orderField 排序字段。支持：`AddressTemplateId` `CreatedTime` `UpdateTime`。注意：该字段没有默认值。
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
                     * 获取排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * @return OrderDirection 排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * @param _orderDirection 排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取IP成员排序字段。支持：`Address` `UpdateTime`。注意：该字段没有默认值。
                     * @return MemberOrderField IP成员排序字段。支持：`Address` `UpdateTime`。注意：该字段没有默认值。
                     * 
                     */
                    std::string GetMemberOrderField() const;

                    /**
                     * 设置IP成员排序字段。支持：`Address` `UpdateTime`。注意：该字段没有默认值。
                     * @param _memberOrderField IP成员排序字段。支持：`Address` `UpdateTime`。注意：该字段没有默认值。
                     * 
                     */
                    void SetMemberOrderField(const std::string& _memberOrderField);

                    /**
                     * 判断参数 MemberOrderField 是否已赋值
                     * @return MemberOrderField 是否已赋值
                     * 
                     */
                    bool MemberOrderFieldHasBeenSet() const;

                    /**
                     * 获取IP成员排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * @return MemberOrderDirection IP成员排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * 
                     */
                    std::string GetMemberOrderDirection() const;

                    /**
                     * 设置IP成员排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * @param _memberOrderDirection IP成员排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     * 
                     */
                    void SetMemberOrderDirection(const std::string& _memberOrderDirection);

                    /**
                     * 判断参数 MemberOrderDirection 是否已赋值
                     * @return MemberOrderDirection 是否已赋值
                     * 
                     */
                    bool MemberOrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>address-template-name - IP地址模板名称。</li>
<li>address-template-id - IP地址模板实例ID，例如：ipm-mdunqeb6。</li>
<li>address-ip - IP地址。</li>
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
                     * 是否获取IP地址模板成员标识。
                     */
                    bool m_needMemberInfo;
                    bool m_needMemberInfoHasBeenSet;

                    /**
                     * 排序字段。支持：`AddressTemplateId` `CreatedTime` `UpdateTime`。注意：该字段没有默认值。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * IP成员排序字段。支持：`Address` `UpdateTime`。注意：该字段没有默认值。
                     */
                    std::string m_memberOrderField;
                    bool m_memberOrderFieldHasBeenSet;

                    /**
                     * IP成员排序方法。升序：`ASC`，倒序：`DESC`。注意：该字段没有默认值。
                     */
                    std::string m_memberOrderDirection;
                    bool m_memberOrderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSTEMPLATESREQUEST_H_
