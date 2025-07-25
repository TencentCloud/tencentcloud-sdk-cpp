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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYRESOURCEIDSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYRESOURCEIDSREQUEST_H_

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
                * DescribeResourceTagsByResourceIds请求参数结构体
                */
                class DescribeResourceTagsByResourceIdsRequest : public AbstractModel
                {
                public:
                    DescribeResourceTagsByResourceIdsRequest();
                    ~DescribeResourceTagsByResourceIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务类型，示例 cvm 。资源所属业务名称（资源六段式中的第三段）
                     * @return ServiceType 业务类型，示例 cvm 。资源所属业务名称（资源六段式中的第三段）
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置业务类型，示例 cvm 。资源所属业务名称（资源六段式中的第三段）
                     * @param _serviceType 业务类型，示例 cvm 。资源所属业务名称（资源六段式中的第三段）
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
                     * 获取资源前缀，示例 instance
                     * @return ResourcePrefix 资源前缀，示例 instance
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置资源前缀，示例 instance
                     * @param _resourcePrefix 资源前缀，示例 instance
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
                     * 获取资源ID数组，大小不超过50
                     * @return ResourceIds 资源ID数组，大小不超过50
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源ID数组，大小不超过50
                     * @param _resourceIds 资源ID数组，大小不超过50
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
                     * 获取资源所在地域，示例：ap-guangzhou，不区分地域的资源该字段传空字符串，区分地域的资源必填
                     * @return ResourceRegion 资源所在地域，示例：ap-guangzhou，不区分地域的资源该字段传空字符串，区分地域的资源必填
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域，示例：ap-guangzhou，不区分地域的资源该字段传空字符串，区分地域的资源必填
                     * @param _resourceRegion 资源所在地域，示例：ap-guangzhou，不区分地域的资源该字段传空字符串，区分地域的资源必填
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

                    /**
                     * 获取每页大小，默认为 15
                     * @return Limit 每页大小，默认为 15
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页大小，默认为 15
                     * @param _limit 每页大小，默认为 15
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
                     * 获取标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * @return Category 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * @param _category 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 业务类型，示例 cvm 。资源所属业务名称（资源六段式中的第三段）
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 资源前缀，示例 instance
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * 资源ID数组，大小不超过50
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 资源所在地域，示例：ap-guangzhou，不区分地域的资源该字段传空字符串，区分地域的资源必填
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

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
                     * 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYRESOURCEIDSREQUEST_H_
