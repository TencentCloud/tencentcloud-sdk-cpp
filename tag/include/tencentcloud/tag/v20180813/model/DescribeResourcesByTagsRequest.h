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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCESBYTAGSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCESBYTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeResourcesByTags请求参数结构体
                */
                class DescribeResourcesByTagsRequest : public AbstractModel
                {
                public:
                    DescribeResourcesByTagsRequest();
                    ~DescribeResourcesByTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签过滤数组
                     * @return TagFilters 标签过滤数组
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置标签过滤数组
                     * @param TagFilters 标签过滤数组
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取创建标签者uin
                     * @return CreateUin 创建标签者uin
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建标签者uin
                     * @param CreateUin 创建标签者uin
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * @return Offset 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * @param Offset 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页大小，默认为 15
                     * @return Limit 每页大小，默认为 15
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页大小，默认为 15
                     * @param Limit 每页大小，默认为 15
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资源前缀
                     * @return ResourcePrefix 资源前缀
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置资源前缀
                     * @param ResourcePrefix 资源前缀
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取资源唯一标记
                     * @return ResourceId 资源唯一标记
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一标记
                     * @param ResourceId 资源唯一标记
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param ResourceRegion 资源所在地域
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取业务类型
                     * @return ServiceType 业务类型
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置业务类型
                     * @param ServiceType 业务类型
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 标签过滤数组
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * 创建标签者uin
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页大小，默认为 15
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资源前缀
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * 资源唯一标记
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 业务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCESBYTAGSREQUEST_H_
