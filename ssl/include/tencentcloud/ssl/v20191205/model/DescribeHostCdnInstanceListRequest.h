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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTCDNINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTCDNINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Filter.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostCdnInstanceList请求参数结构体
                */
                class DescribeHostCdnInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeHostCdnInstanceListRequest();
                    ~DescribeHostCdnInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待部署的证书ID
                     * @return CertificateId 待部署的证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置待部署的证书ID
                     * @param _certificateId 待部署的证书ID
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * @return IsCache 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * 
                     */
                    uint64_t GetIsCache() const;

                    /**
                     * 设置是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * @param _isCache 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * 
                     */
                    void SetIsCache(const uint64_t& _isCache);

                    /**
                     * 判断参数 IsCache 是否已赋值
                     * @return IsCache 是否已赋值
                     * 
                     */
                    bool IsCacheHasBeenSet() const;

                    /**
                     * 获取过滤参数列表； FilterKey：domainMatch（查询域名是否匹配的实例列表） FilterValue：1，表示查询匹配； 0，表示查询不匹配； 默认查询匹配
                     * @return Filters 过滤参数列表； FilterKey：domainMatch（查询域名是否匹配的实例列表） FilterValue：1，表示查询匹配； 0，表示查询不匹配； 默认查询匹配
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数列表； FilterKey：domainMatch（查询域名是否匹配的实例列表） FilterValue：1，表示查询匹配； 0，表示查询不匹配； 默认查询匹配
                     * @param _filters 过滤参数列表； FilterKey：domainMatch（查询域名是否匹配的实例列表） FilterValue：1，表示查询匹配； 0，表示查询不匹配； 默认查询匹配
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
                     * 获取部署资源类型cdn
                     * @return ResourceType 部署资源类型cdn
                     * @deprecated
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置部署资源类型cdn
                     * @param _resourceType 部署资源类型cdn
                     * @deprecated
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * @deprecated
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取原证书ID
                     * @return OldCertificateId 原证书ID
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置原证书ID
                     * @param _oldCertificateId 原证书ID
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值为0。	
                     * @return Offset 分页偏移量，默认值为0。	
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值为0。	
                     * @param _offset 分页偏移量，默认值为0。	
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
                     * 获取每页数量，默认10，最大值为200。	
                     * @return Limit 每页数量，默认10，最大值为200。	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认10，最大值为200。	
                     * @param _limit 每页数量，默认10，最大值为200。	
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
                     * 获取是否异步,0表示否，1表示是，默认为0
                     * @return AsyncCache 是否异步,0表示否，1表示是，默认为0
                     * 
                     */
                    int64_t GetAsyncCache() const;

                    /**
                     * 设置是否异步,0表示否，1表示是，默认为0
                     * @param _asyncCache 是否异步,0表示否，1表示是，默认为0
                     * 
                     */
                    void SetAsyncCache(const int64_t& _asyncCache);

                    /**
                     * 判断参数 AsyncCache 是否已赋值
                     * @return AsyncCache 是否已赋值
                     * 
                     */
                    bool AsyncCacheHasBeenSet() const;

                private:

                    /**
                     * 待部署的证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     */
                    uint64_t m_isCache;
                    bool m_isCacheHasBeenSet;

                    /**
                     * 过滤参数列表； FilterKey：domainMatch（查询域名是否匹配的实例列表） FilterValue：1，表示查询匹配； 0，表示查询不匹配； 默认查询匹配
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 部署资源类型cdn
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 原证书ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 分页偏移量，默认值为0。	
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认10，最大值为200。	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否异步,0表示否，1表示是，默认为0
                     */
                    int64_t m_asyncCache;
                    bool m_asyncCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTCDNINSTANCELISTREQUEST_H_
