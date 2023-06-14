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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYNAMESPACELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYNAMESPACELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageRegistryNamespaceList请求参数结构体
                */
                class DescribeImageRegistryNamespaceListRequest : public AbstractModel
                {
                public:
                    DescribeImageRegistryNamespaceListRequest();
                    ~DescribeImageRegistryNamespaceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本次查询的起始偏移量，默认为0。
                     * @return Offset 本次查询的起始偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置本次查询的起始偏移量，默认为0。
                     * @param _offset 本次查询的起始偏移量，默认为0。
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
                     * 获取本次查询的数据量，默认为10，最大值为100。
                     * @return Limit 本次查询的数据量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置本次查询的数据量，默认为10，最大值为100。
                     * @param _limit 本次查询的数据量，默认为10，最大值为100。
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
                     * 获取查询的过滤条件。Name字段可取值"Namespace"。
                     * @return Filters 查询的过滤条件。Name字段可取值"Namespace"。
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置查询的过滤条件。Name字段可取值"Namespace"。
                     * @param _filters 查询的过滤条件。Name字段可取值"Namespace"。
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 本次查询的起始偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本次查询的数据量，默认为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的过滤条件。Name字段可取值"Namespace"。
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYNAMESPACELISTREQUEST_H_
