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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAssociatedInstanceList请求参数结构体
                */
                class DescribeAssociatedInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeAssociatedInstanceListRequest();
                    ~DescribeAssociatedInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取列表偏移量
                     * @return Offset 列表偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置列表偏移量
                     * @param _offset 列表偏移量
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
                     * 获取每页记录条数
                     * @return Limit 每页记录条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页记录条数
                     * @param _limit 每页记录条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取地域代码（例：ap-guangzhou）,支持腾讯云全地域
                     * @return Area 地域代码（例：ap-guangzhou）,支持腾讯云全地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域代码（例：ap-guangzhou）,支持腾讯云全地域
                     * @param _area 地域代码（例：ap-guangzhou）,支持腾讯云全地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取额外检索条件（JSON字符串）
                     * @return SearchValue 额外检索条件（JSON字符串）
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置额外检索条件（JSON字符串）
                     * @param _searchValue 额外检索条件（JSON字符串）
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方式（asc:升序,desc:降序）
                     * @return Order 排序方式（asc:升序,desc:降序）
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式（asc:升序,desc:降序）
                     * @param _order 排序方式（asc:升序,desc:降序）
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SecurityGroupId 安全组ID
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组ID
                     * @param _securityGroupId 安全组ID
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取实例类型,'3'是cvm实例,'4'是clb实例,'5'是eni实例,'6'是云数据库
                     * @return Type 实例类型,'3'是cvm实例,'4'是clb实例,'5'是eni实例,'6'是云数据库
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例类型,'3'是cvm实例,'4'是clb实例,'5'是eni实例,'6'是云数据库
                     * @param _type 实例类型,'3'是cvm实例,'4'是clb实例,'5'是eni实例,'6'是云数据库
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 列表偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页记录条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 地域代码（例：ap-guangzhou）,支持腾讯云全地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 额外检索条件（JSON字符串）
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式（asc:升序,desc:降序）
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 实例类型,'3'是cvm实例,'4'是clb实例,'5'是eni实例,'6'是云数据库
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTREQUEST_H_
