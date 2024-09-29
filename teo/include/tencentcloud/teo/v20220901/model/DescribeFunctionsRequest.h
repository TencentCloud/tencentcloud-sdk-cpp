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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeFunctions请求参数结构体
                */
                class DescribeFunctionsRequest : public AbstractModel
                {
                public:
                    DescribeFunctionsRequest();
                    ~DescribeFunctionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取按照函数 ID 列表过滤。
                     * @return FunctionIds 按照函数 ID 列表过滤。
                     * 
                     */
                    std::vector<std::string> GetFunctionIds() const;

                    /**
                     * 设置按照函数 ID 列表过滤。
                     * @param _functionIds 按照函数 ID 列表过滤。
                     * 
                     */
                    void SetFunctionIds(const std::vector<std::string>& _functionIds);

                    /**
                     * 判断参数 FunctionIds 是否已赋值
                     * @return FunctionIds 是否已赋值
                     * 
                     */
                    bool FunctionIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件列表，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：
<li>name：按照【函数名称】进行模糊匹配。</li>
<li>remark：按照【函数描述】进行模糊匹配。</li>
                     * @return Filters 过滤条件列表，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：
<li>name：按照【函数名称】进行模糊匹配。</li>
<li>remark：按照【函数描述】进行模糊匹配。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件列表，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：
<li>name：按照【函数名称】进行模糊匹配。</li>
<li>remark：按照【函数描述】进行模糊匹配。</li>
                     * @param _filters 过滤条件列表，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：
<li>name：按照【函数名称】进行模糊匹配。</li>
<li>remark：按照【函数描述】进行模糊匹配。</li>
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
                     * 获取分页查询偏移量。默认值：0。
                     * @return Offset 分页查询偏移量。默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量。默认值：0。
                     * @param _offset 分页查询偏移量。默认值：0。
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
                     * 获取分页查询限制数目。默认值：20，最大值：200。
                     * @return Limit 分页查询限制数目。默认值：20，最大值：200。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目。默认值：20，最大值：200。
                     * @param _limit 分页查询限制数目。默认值：20，最大值：200。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 按照函数 ID 列表过滤。
                     */
                    std::vector<std::string> m_functionIds;
                    bool m_functionIdsHasBeenSet;

                    /**
                     * 过滤条件列表，多个条件为且关系，Filters.Values 的上限为 20。详细的过滤条件如下：
<li>name：按照【函数名称】进行模糊匹配。</li>
<li>remark：按照【函数描述】进行模糊匹配。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页查询偏移量。默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：20，最大值：200。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEFUNCTIONSREQUEST_H_
