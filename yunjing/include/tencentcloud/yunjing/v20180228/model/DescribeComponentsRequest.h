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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeComponents请求参数结构体
                */
                class DescribeComponentsRequest : public AbstractModel
                {
                public:
                    DescribeComponentsRequest();
                    ~DescribeComponentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云镜客户端唯一Uuid。Uuid和ComponentId必填其一，使用Uuid表示，查询该主机列表信息。
                     * @return Uuid 云镜客户端唯一Uuid。Uuid和ComponentId必填其一，使用Uuid表示，查询该主机列表信息。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端唯一Uuid。Uuid和ComponentId必填其一，使用Uuid表示，查询该主机列表信息。
                     * @param _uuid 云镜客户端唯一Uuid。Uuid和ComponentId必填其一，使用Uuid表示，查询该主机列表信息。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取组件ID。Uuid和ComponentId必填其一，使用ComponentId表示，查询该组件列表信息。
                     * @return ComponentId 组件ID。Uuid和ComponentId必填其一，使用ComponentId表示，查询该组件列表信息。
                     * 
                     */
                    uint64_t GetComponentId() const;

                    /**
                     * 设置组件ID。Uuid和ComponentId必填其一，使用ComponentId表示，查询该组件列表信息。
                     * @param _componentId 组件ID。Uuid和ComponentId必填其一，使用ComponentId表示，查询该组件列表信息。
                     * 
                     */
                    void SetComponentId(const uint64_t& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
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
<li>ComponentVersion - String - 是否必填：否 - 组件版本号</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
                     * @return Filters 过滤条件。
<li>ComponentVersion - String - 是否必填：否 - 组件版本号</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>ComponentVersion - String - 是否必填：否 - 组件版本号</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
                     * @param _filters 过滤条件。
<li>ComponentVersion - String - 是否必填：否 - 组件版本号</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
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
                     * 云镜客户端唯一Uuid。Uuid和ComponentId必填其一，使用Uuid表示，查询该主机列表信息。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 组件ID。Uuid和ComponentId必填其一，使用ComponentId表示，查询该组件列表信息。
                     */
                    uint64_t m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 返回数量，默认为10，最大值为100。
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
<li>ComponentVersion - String - 是否必填：否 - 组件版本号</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTSREQUEST_H_
