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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBERESOURCETOSHAREMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBERESOURCETOSHAREMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeResourceToShareMember请求参数结构体
                */
                class DescribeResourceToShareMemberRequest : public AbstractModel
                {
                public:
                    DescribeResourceToShareMemberRequest();
                    ~DescribeResourceToShareMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域
                     * @return Area 地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域
                     * @param _area 地域
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
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
                     * 获取搜索关键字，支持业务资源ID搜索
                     * @return SearchKey 搜索关键字，支持业务资源ID搜索
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键字，支持业务资源ID搜索
                     * @param _searchKey 搜索关键字，支持业务资源ID搜索
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return Type 资源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源类型
                     * @param _type 资源类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取业务资源ID。最大50个
                     * @return ProductResourceIds 业务资源ID。最大50个
                     * 
                     */
                    std::vector<std::string> GetProductResourceIds() const;

                    /**
                     * 设置业务资源ID。最大50个
                     * @param _productResourceIds 业务资源ID。最大50个
                     * 
                     */
                    void SetProductResourceIds(const std::vector<std::string>& _productResourceIds);

                    /**
                     * 判断参数 ProductResourceIds 是否已赋值
                     * @return ProductResourceIds 是否已赋值
                     * 
                     */
                    bool ProductResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字，支持业务资源ID搜索
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 业务资源ID。最大50个
                     */
                    std::vector<std::string> m_productResourceIds;
                    bool m_productResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBERESOURCETOSHAREMEMBERREQUEST_H_
