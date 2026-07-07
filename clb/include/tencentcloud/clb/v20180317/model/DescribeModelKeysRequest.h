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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELKEYSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelKeys请求参数结构体
                */
                class DescribeModelKeysRequest : public AbstractModel
                {
                public:
                    DescribeModelKeysRequest();
                    ~DescribeModelKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入类型过滤：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * @return AccessType <p>接入类型过滤：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入类型过滤：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * @param _accessType <p>接入类型过滤：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
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
                     * 获取<p>返回数量限制</p>
                     * @return Limit <p>返回数量限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量限制</p>
                     * @param _limit <p>返回数量限制</p>
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
                     * 获取<p>翻页启始索引</p>
                     * @return Offset <p>翻页启始索引</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>翻页启始索引</p>
                     * @param _offset <p>翻页启始索引</p>
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
                     * 获取<p>服务提供商ID</p>
                     * @return ServiceProviderIds <p>服务提供商ID</p>
                     * 
                     */
                    std::vector<std::string> GetServiceProviderIds() const;

                    /**
                     * 设置<p>服务提供商ID</p>
                     * @param _serviceProviderIds <p>服务提供商ID</p>
                     * 
                     */
                    void SetServiceProviderIds(const std::vector<std::string>& _serviceProviderIds);

                    /**
                     * 判断参数 ServiceProviderIds 是否已赋值
                     * @return ServiceProviderIds 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdsHasBeenSet() const;

                private:

                    /**
                     * <p>接入类型过滤：PublicBYOK/PublicCustom/PrivateCustom</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>返回数量限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>翻页启始索引</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>服务提供商ID</p>
                     */
                    std::vector<std::string> m_serviceProviderIds;
                    bool m_serviceProviderIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELKEYSREQUEST_H_
