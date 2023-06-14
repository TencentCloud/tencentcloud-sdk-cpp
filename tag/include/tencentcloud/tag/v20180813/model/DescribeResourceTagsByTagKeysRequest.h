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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYTAGKEYSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYTAGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeResourceTagsByTagKeys请求参数结构体
                */
                class DescribeResourceTagsByTagKeysRequest : public AbstractModel
                {
                public:
                    DescribeResourceTagsByTagKeysRequest();
                    ~DescribeResourceTagsByTagKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务类型
                     * @return ServiceType 业务类型
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置业务类型
                     * @param _serviceType 业务类型
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取资源前缀
                     * @return ResourcePrefix 资源前缀
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置资源前缀
                     * @param _resourcePrefix 资源前缀
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
                     * @param _resourceRegion 资源地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源唯一标识ID的列表，列表容量不超过20
                     * @return ResourceIds 资源唯一标识ID的列表，列表容量不超过20
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源唯一标识ID的列表，列表容量不超过20
                     * @param _resourceIds 资源唯一标识ID的列表，列表容量不超过20
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取资源标签键列表，列表容量不超过20
                     * @return TagKeys 资源标签键列表，列表容量不超过20
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置资源标签键列表，列表容量不超过20
                     * @param _tagKeys 资源标签键列表，列表容量不超过20
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取每页大小，默认为 400
                     * @return Limit 每页大小，默认为 400
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页大小，默认为 400
                     * @param _limit 每页大小，默认为 400
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
                     * 获取数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * @return Offset 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * @param _offset 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 业务类型
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 资源前缀
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源唯一标识ID的列表，列表容量不超过20
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 资源标签键列表，列表容量不超过20
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * 每页大小，默认为 400
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYTAGKEYSREQUEST_H_
