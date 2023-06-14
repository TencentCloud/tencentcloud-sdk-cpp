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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSREQUEST_H_

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
                * DescribeVuls请求参数结构体
                */
                class DescribeVulsRequest : public AbstractModel
                {
                public:
                    DescribeVulsRequest();
                    ~DescribeVulsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞类型。
<li>WEB：Web应用漏洞</li>
<li>SYSTEM：系统组件漏洞</li>
<li>BASELINE：安全基线</li>
                     * @return VulType 漏洞类型。
<li>WEB：Web应用漏洞</li>
<li>SYSTEM：系统组件漏洞</li>
<li>BASELINE：安全基线</li>
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 设置漏洞类型。
<li>WEB：Web应用漏洞</li>
<li>SYSTEM：系统组件漏洞</li>
<li>BASELINE：安全基线</li>
                     * @param _vulType 漏洞类型。
<li>WEB：Web应用漏洞</li>
<li>SYSTEM：系统组件漏洞</li>
<li>BASELINE：安全基线</li>
                     * 
                     */
                    void SetVulType(const std::string& _vulType);

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

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
<li>Status - String - 是否必填：否 - 状态筛选（UN_OPERATED: 待处理 | FIXED：已修复）

Status过滤条件值只能取其一，不能是“或”逻辑。
                     * @return Filters 过滤条件。
<li>Status - String - 是否必填：否 - 状态筛选（UN_OPERATED: 待处理 | FIXED：已修复）

Status过滤条件值只能取其一，不能是“或”逻辑。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Status - String - 是否必填：否 - 状态筛选（UN_OPERATED: 待处理 | FIXED：已修复）

Status过滤条件值只能取其一，不能是“或”逻辑。
                     * @param _filters 过滤条件。
<li>Status - String - 是否必填：否 - 状态筛选（UN_OPERATED: 待处理 | FIXED：已修复）

Status过滤条件值只能取其一，不能是“或”逻辑。
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
                     * 漏洞类型。
<li>WEB：Web应用漏洞</li>
<li>SYSTEM：系统组件漏洞</li>
<li>BASELINE：安全基线</li>
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

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
<li>Status - String - 是否必填：否 - 状态筛选（UN_OPERATED: 待处理 | FIXED：已修复）

Status过滤条件值只能取其一，不能是“或”逻辑。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSREQUEST_H_
