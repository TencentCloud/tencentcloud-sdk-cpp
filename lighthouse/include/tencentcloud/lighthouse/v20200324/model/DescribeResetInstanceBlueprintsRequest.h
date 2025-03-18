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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBERESETINSTANCEBLUEPRINTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBERESETINSTANCEBLUEPRINTSREQUEST_H_

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
                * DescribeResetInstanceBlueprints请求参数结构体
                */
                class DescribeResetInstanceBlueprintsRequest : public AbstractModel
                {
                public:
                    DescribeResetInstanceBlueprintsRequest();
                    ~DescribeResetInstanceBlueprintsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。可通过 <a href="https://cloud.tencent.com/document/product/1207/47573">DescribeInstances</a> 接口返回值中的 InstanceId 获取。
                     * @return InstanceId 实例ID。可通过 <a href="https://cloud.tencent.com/document/product/1207/47573">DescribeInstances</a> 接口返回值中的 InstanceId 获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。可通过 <a href="https://cloud.tencent.com/document/product/1207/47573">DescribeInstances</a> 接口返回值中的 InstanceId 获取。
                     * @param _instanceId 实例ID。可通过 <a href="https://cloud.tencent.com/document/product/1207/47573">DescribeInstances</a> 接口返回值中的 InstanceId 获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintId 获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值： APP_OS（应用镜像 ）；PURE_OS（ 系统镜像）；PRIVATE（自定义镜像）;DOCKER（Docker容器镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintName 获取。
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintState 获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
                     * @return Filters 过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintId 获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值： APP_OS（应用镜像 ）；PURE_OS（ 系统镜像）；PRIVATE（自定义镜像）;DOCKER（Docker容器镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintName 获取。
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintState 获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintId 获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值： APP_OS（应用镜像 ）；PURE_OS（ 系统镜像）；PRIVATE（自定义镜像）;DOCKER（Docker容器镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintName 获取。
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintState 获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
                     * @param _filters 过滤器列表。
<li>blueprint-id</li>按照【镜像 ID】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintId 获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值： APP_OS（应用镜像 ）；PURE_OS（ 系统镜像）；PRIVATE（自定义镜像）;DOCKER（Docker容器镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintName 获取。
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintState 获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
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
                     * 实例ID。可通过 <a href="https://cloud.tencent.com/document/product/1207/47573">DescribeInstances</a> 接口返回值中的 InstanceId 获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintId 获取。
<li>blueprint-type</li>按照【镜像类型】进行过滤。
取值： APP_OS（应用镜像 ）；PURE_OS（ 系统镜像）；PRIVATE（自定义镜像）;DOCKER（Docker容器镜像）；SHARED（共享镜像）。
类型：String
必选：否
<li>platform-type</li>按照【镜像平台类型】进行过滤。
取值： LINUX_UNIX（Linux/Unix系统）；WINDOWS（Windows 系统）。
类型：String
必选：否
<li>blueprint-name</li>按照【镜像名称】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintName 获取。
<li>blueprint-state</li>按照【镜像状态】进行过滤。
类型：String
必选：否
可通过 <a href="https://cloud.tencent.com/document/product/1207/47689">DescribeBlueprints</a> 接口返回值中的 BlueprintState 获取。

每次请求的 Filters 的上限为 10，Filter.Values 的上限为 5。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBERESETINSTANCEBLUEPRINTSREQUEST_H_
