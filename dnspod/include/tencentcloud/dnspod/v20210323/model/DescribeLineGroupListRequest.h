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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBELINEGROUPLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBELINEGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeLineGroupList请求参数结构体
                */
                class DescribeLineGroupListRequest : public AbstractModel
                {
                public:
                    DescribeLineGroupListRequest();
                    ~DescribeLineGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param _offset 偏移量，默认值为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数量，传0或不传会返回所有。
                     * @return Length 限制数量，传0或不传会返回所有。
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置限制数量，传0或不传会返回所有。
                     * @param _length 限制数量，传0或不传会返回所有。
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取按自定义线路分组名称排序的方向。升序传asc，降序传desc。
                     * @return SortType 按自定义线路分组名称排序的方向。升序传asc，降序传desc。
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置按自定义线路分组名称排序的方向。升序传asc，降序传desc。
                     * @param _sortType 按自定义线路分组名称排序的方向。升序传asc，降序传desc。
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * @return DomainId 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * @param _domainId 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，传0或不传会返回所有。
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 按自定义线路分组名称排序的方向。升序传asc，降序传desc。
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 域名ID，如果传了DomainId，系统将会忽略Domain参数，优先使用DomainId
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBELINEGROUPLISTREQUEST_H_
