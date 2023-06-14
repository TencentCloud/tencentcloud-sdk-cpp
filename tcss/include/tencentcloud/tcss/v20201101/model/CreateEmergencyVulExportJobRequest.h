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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEMERGENCYVULEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEMERGENCYVULEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateEmergencyVulExportJob请求参数结构体
                */
                class CreateEmergencyVulExportJobRequest : public AbstractModel
                {
                public:
                    CreateEmergencyVulExportJobRequest();
                    ~CreateEmergencyVulExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，默认为50000，最大值为50000
                     * @return Limit 需要返回的数量，默认为50000，最大值为50000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为50000，最大值为50000
                     * @param _limit 需要返回的数量，默认为50000，最大值为50000
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤条件。
<li>Level- String - 是否必填：否 - 威胁等级，CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低</li>
<li>Tags- string - 是否必填：否 - 漏洞标签，POC，EXP。</li>
<li>CanBeFixed- string - 是否必填：否 - 是否可修复true,false。</li>
<li>CVEID- string - 是否必填：否 - CVE编号</li>
<li>ImageID- string - 是否必填：否 - 镜像ID</li>
<li>ImageName- String -是否必填: 否 - 镜像名称</li>
<li>ContainerID- string -是否必填: 否 - 容器ID</li>
<li>ContainerName- string -是否必填: 否 - 容器名称</li>
<li>ComponentName- string -是否必填: 否 - 组件名称</li>
<li>ComponentVersion- string -是否必填: 否 - 组件版本</li>
<li>Name- string -是否必填: 否 - 漏洞名称</li>
                     * @return Filters 过滤条件。
<li>Level- String - 是否必填：否 - 威胁等级，CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低</li>
<li>Tags- string - 是否必填：否 - 漏洞标签，POC，EXP。</li>
<li>CanBeFixed- string - 是否必填：否 - 是否可修复true,false。</li>
<li>CVEID- string - 是否必填：否 - CVE编号</li>
<li>ImageID- string - 是否必填：否 - 镜像ID</li>
<li>ImageName- String -是否必填: 否 - 镜像名称</li>
<li>ContainerID- string -是否必填: 否 - 容器ID</li>
<li>ContainerName- string -是否必填: 否 - 容器名称</li>
<li>ComponentName- string -是否必填: 否 - 组件名称</li>
<li>ComponentVersion- string -是否必填: 否 - 组件版本</li>
<li>Name- string -是否必填: 否 - 漏洞名称</li>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Level- String - 是否必填：否 - 威胁等级，CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低</li>
<li>Tags- string - 是否必填：否 - 漏洞标签，POC，EXP。</li>
<li>CanBeFixed- string - 是否必填：否 - 是否可修复true,false。</li>
<li>CVEID- string - 是否必填：否 - CVE编号</li>
<li>ImageID- string - 是否必填：否 - 镜像ID</li>
<li>ImageName- String -是否必填: 否 - 镜像名称</li>
<li>ContainerID- string -是否必填: 否 - 容器ID</li>
<li>ContainerName- string -是否必填: 否 - 容器名称</li>
<li>ComponentName- string -是否必填: 否 - 组件名称</li>
<li>ComponentVersion- string -是否必填: 否 - 组件版本</li>
<li>Name- string -是否必填: 否 - 漏洞名称</li>
                     * @param _filters 过滤条件。
<li>Level- String - 是否必填：否 - 威胁等级，CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低</li>
<li>Tags- string - 是否必填：否 - 漏洞标签，POC，EXP。</li>
<li>CanBeFixed- string - 是否必填：否 - 是否可修复true,false。</li>
<li>CVEID- string - 是否必填：否 - CVE编号</li>
<li>ImageID- string - 是否必填：否 - 镜像ID</li>
<li>ImageName- String -是否必填: 否 - 镜像名称</li>
<li>ContainerID- string -是否必填: 否 - 容器ID</li>
<li>ContainerName- string -是否必填: 否 - 容器名称</li>
<li>ComponentName- string -是否必填: 否 - 组件名称</li>
<li>ComponentVersion- string -是否必填: 否 - 组件版本</li>
<li>Name- string -是否必填: 否 - 漏洞名称</li>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param _order 排序方式
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

                private:

                    /**
                     * 需要返回的数量，默认为50000，最大值为50000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>Level- String - 是否必填：否 - 威胁等级，CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低</li>
<li>Tags- string - 是否必填：否 - 漏洞标签，POC，EXP。</li>
<li>CanBeFixed- string - 是否必填：否 - 是否可修复true,false。</li>
<li>CVEID- string - 是否必填：否 - CVE编号</li>
<li>ImageID- string - 是否必填：否 - 镜像ID</li>
<li>ImageName- String -是否必填: 否 - 镜像名称</li>
<li>ContainerID- string -是否必填: 否 - 容器ID</li>
<li>ContainerName- string -是否必填: 否 - 容器名称</li>
<li>ComponentName- string -是否必填: 否 - 组件名称</li>
<li>ComponentVersion- string -是否必填: 否 - 组件版本</li>
<li>Name- string -是否必填: 否 - 漏洞名称</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEMERGENCYVULEXPORTJOBREQUEST_H_
