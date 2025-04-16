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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBlueprints请求参数结构体
                */
                class DescribeBlueprintsRequest : public AbstractModel
                {
                public:
                    DescribeBlueprintsRequest();
                    ~DescribeBlueprintsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像 ID 列表。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。列表长度最大值为100。
                     * @return BlueprintIds 镜像 ID 列表。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。列表长度最大值为100。
                     * 
                     */
                    std::vector<std::string> GetBlueprintIds() const;

                    /**
                     * 设置镜像 ID 列表。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。列表长度最大值为100。
                     * @param _blueprintIds 镜像 ID 列表。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。列表长度最大值为100。
                     * 
                     */
                    void SetBlueprintIds(const std::vector<std::string>& _blueprintIds);

                    /**
                     * 判断参数 BlueprintIds 是否已赋值
                     * @return BlueprintIds 是否已赋值
                     * 
                     */
                    bool BlueprintIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
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
                     * 获取返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
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
                     * 获取过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
镜像 ID ，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值：APP_OS（应用镜像 ）；PURE_OS（系统镜像）；DOCKER（Docker容器镜像）；PRIVATE（自定义镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
镜像状态，可通过[数据结构Blueprint](https://cloud.tencent.com/document/api/1207/47576#Blueprint)中的BlueprintState来获取。
<li>scene-id</li>按照【使用场景Id】进行过滤。
类型：String
必选：否
场景Id，可通过[查看使用场景列表](https://cloud.tencent.com/document/product/1207/83512)接口获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 BlueprintIds (可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取BlueprintId)和 Filters 。
                     * @return Filters 过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
镜像 ID ，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值：APP_OS（应用镜像 ）；PURE_OS（系统镜像）；DOCKER（Docker容器镜像）；PRIVATE（自定义镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
镜像状态，可通过[数据结构Blueprint](https://cloud.tencent.com/document/api/1207/47576#Blueprint)中的BlueprintState来获取。
<li>scene-id</li>按照【使用场景Id】进行过滤。
类型：String
必选：否
场景Id，可通过[查看使用场景列表](https://cloud.tencent.com/document/product/1207/83512)接口获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 BlueprintIds (可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取BlueprintId)和 Filters 。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
镜像 ID ，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值：APP_OS（应用镜像 ）；PURE_OS（系统镜像）；DOCKER（Docker容器镜像）；PRIVATE（自定义镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
镜像状态，可通过[数据结构Blueprint](https://cloud.tencent.com/document/api/1207/47576#Blueprint)中的BlueprintState来获取。
<li>scene-id</li>按照【使用场景Id】进行过滤。
类型：String
必选：否
场景Id，可通过[查看使用场景列表](https://cloud.tencent.com/document/product/1207/83512)接口获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 BlueprintIds (可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取BlueprintId)和 Filters 。
                     * @param _filters 过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
镜像 ID ，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值：APP_OS（应用镜像 ）；PURE_OS（系统镜像）；DOCKER（Docker容器镜像）；PRIVATE（自定义镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
镜像状态，可通过[数据结构Blueprint](https://cloud.tencent.com/document/api/1207/47576#Blueprint)中的BlueprintState来获取。
<li>scene-id</li>按照【使用场景Id】进行过滤。
类型：String
必选：否
场景Id，可通过[查看使用场景列表](https://cloud.tencent.com/document/product/1207/83512)接口获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 BlueprintIds (可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取BlueprintId)和 Filters 。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 镜像 ID 列表。可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。列表长度最大值为100。
                     */
                    std::vector<std::string> m_blueprintIds;
                    bool m_blueprintIdsHasBeenSet;

                    /**
                     * 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
镜像 ID ，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值：APP_OS（应用镜像 ）；PURE_OS（系统镜像）；DOCKER（Docker容器镜像）；PRIVATE（自定义镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
镜像状态，可通过[数据结构Blueprint](https://cloud.tencent.com/document/api/1207/47576#Blueprint)中的BlueprintState来获取。
<li>scene-id</li>按照【使用场景Id】进行过滤。
类型：String
必选：否
场景Id，可通过[查看使用场景列表](https://cloud.tencent.com/document/product/1207/83512)接口获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 100。参数不支持同时指定 BlueprintIds (可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值字段BlueprintSet获取BlueprintId)和 Filters 。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTSREQUEST_H_
