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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCESREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Filter.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeResources请求参数结构体
                */
                class DescribeResourcesRequest : public AbstractModel
                {
                public:
                    DescribeResourcesRequest();
                    ~DescribeResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的资源ID数组，数量不超过100个。如果填写了该参数则忽略Filters参数。
                     * @return ResourceIds 需要查询的资源ID数组，数量不超过100个。如果填写了该参数则忽略Filters参数。
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置需要查询的资源ID数组，数量不超过100个。如果填写了该参数则忽略Filters参数。
                     * @param _resourceIds 需要查询的资源ID数组，数量不超过100个。如果填写了该参数则忽略Filters参数。
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
                     * 获取偏移量，仅当设置 Limit 参数时有效
                     * @return Offset 偏移量，仅当设置 Limit 参数时有效
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，仅当设置 Limit 参数时有效
                     * @param _offset 偏移量，仅当设置 Limit 参数时有效
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
                     * 获取条数限制。如果不填，默认返回 20 条
                     * @return Limit 条数限制。如果不填，默认返回 20 条
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数限制。如果不填，默认返回 20 条
                     * @param _limit 条数限制。如果不填，默认返回 20 条
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
                     * 获取<li><strong>ResourceName</strong></li>
<p style="padding-left: 30px;">按照资源名字过滤，支持模糊过滤。传入的过滤名字不超过5个</p><p style="padding-left: 30px;">类型: String</p><p style="padding-left: 30px;">必选: 否</p>
                     * @return Filters <li><strong>ResourceName</strong></li>
<p style="padding-left: 30px;">按照资源名字过滤，支持模糊过滤。传入的过滤名字不超过5个</p><p style="padding-left: 30px;">类型: String</p><p style="padding-left: 30px;">必选: 否</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li><strong>ResourceName</strong></li>
<p style="padding-left: 30px;">按照资源名字过滤，支持模糊过滤。传入的过滤名字不超过5个</p><p style="padding-left: 30px;">类型: String</p><p style="padding-left: 30px;">必选: 否</p>
                     * @param _filters <li><strong>ResourceName</strong></li>
<p style="padding-left: 30px;">按照资源名字过滤，支持模糊过滤。传入的过滤名字不超过5个</p><p style="padding-left: 30px;">类型: String</p><p style="padding-left: 30px;">必选: 否</p>
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
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取资源类型，0=用户，1系统connector，2=用户自定义connector
                     * @return SystemResource 资源类型，0=用户，1系统connector，2=用户自定义connector
                     * 
                     */
                    uint64_t GetSystemResource() const;

                    /**
                     * 设置资源类型，0=用户，1系统connector，2=用户自定义connector
                     * @param _systemResource 资源类型，0=用户，1系统connector，2=用户自定义connector
                     * 
                     */
                    void SetSystemResource(const uint64_t& _systemResource);

                    /**
                     * 判断参数 SystemResource 是否已赋值
                     * @return SystemResource 是否已赋值
                     * 
                     */
                    bool SystemResourceHasBeenSet() const;

                private:

                    /**
                     * 需要查询的资源ID数组，数量不超过100个。如果填写了该参数则忽略Filters参数。
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 偏移量，仅当设置 Limit 参数时有效
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 条数限制。如果不填，默认返回 20 条
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <li><strong>ResourceName</strong></li>
<p style="padding-left: 30px;">按照资源名字过滤，支持模糊过滤。传入的过滤名字不超过5个</p><p style="padding-left: 30px;">类型: String</p><p style="padding-left: 30px;">必选: 否</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 资源类型，0=用户，1系统connector，2=用户自定义connector
                     */
                    uint64_t m_systemResource;
                    bool m_systemResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBERESOURCESREQUEST_H_
