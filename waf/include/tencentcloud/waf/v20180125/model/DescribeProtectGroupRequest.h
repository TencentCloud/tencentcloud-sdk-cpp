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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPROTECTGROUPREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPROTECTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeProtectGroup请求参数结构体
                */
                class DescribeProtectGroupRequest : public AbstractModel
                {
                public:
                    DescribeProtectGroupRequest();
                    ~DescribeProtectGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询防护对象的查询条件，如果为空则获取所有的防护对象组，支持按照 Name：对象组名称、Domain：绑定的域名、InstanceID：实例ID、ID：对象组ID、InstanceName：实例名称
                     * @return Filter 查询防护对象的查询条件，如果为空则获取所有的防护对象组，支持按照 Name：对象组名称、Domain：绑定的域名、InstanceID：实例ID、ID：对象组ID、InstanceName：实例名称
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilter() const;

                    /**
                     * 设置查询防护对象的查询条件，如果为空则获取所有的防护对象组，支持按照 Name：对象组名称、Domain：绑定的域名、InstanceID：实例ID、ID：对象组ID、InstanceName：实例名称
                     * @param _filter 查询防护对象的查询条件，如果为空则获取所有的防护对象组，支持按照 Name：对象组名称、Domain：绑定的域名、InstanceID：实例ID、ID：对象组ID、InstanceName：实例名称
                     * 
                     */
                    void SetFilter(const std::vector<FiltersItemNew>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return OffSet 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffSet() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offSet 偏移量，默认为0
                     * 
                     */
                    void SetOffSet(const uint64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     * 
                     */
                    bool OffSetHasBeenSet() const;

                    /**
                     * 获取页尺寸，默认为10
                     * @return Limit 页尺寸，默认为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置页尺寸，默认为10
                     * @param _limit 页尺寸，默认为10
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
                     * 获取排序字段，支持按照 "update_time"-更新时间、"create_time"-创建时间
                     * @return By 排序字段，支持按照 "update_time"-更新时间、"create_time"-创建时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段，支持按照 "update_time"-更新时间、"create_time"-创建时间
                     * @param _by 排序字段，支持按照 "update_time"-更新时间、"create_time"-创建时间
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序类型desc-降序、asc-升序
                     * @return Order 排序类型desc-降序、asc-升序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序类型desc-降序、asc-升序
                     * @param _order 排序类型desc-降序、asc-升序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 查询防护对象的查询条件，如果为空则获取所有的防护对象组，支持按照 Name：对象组名称、Domain：绑定的域名、InstanceID：实例ID、ID：对象组ID、InstanceName：实例名称
                     */
                    std::vector<FiltersItemNew> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offSet;
                    bool m_offSetHasBeenSet;

                    /**
                     * 页尺寸，默认为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持按照 "update_time"-更新时间、"create_time"-创建时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序类型desc-降序、asc-升序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEPROTECTGROUPREQUEST_H_
