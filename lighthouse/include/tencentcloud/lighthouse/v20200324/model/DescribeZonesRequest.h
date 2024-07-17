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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeZones请求参数结构体
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区列表排序的依据字段。取值范围：
<li>ZONE：依据可用区排序。</li>
<li>INSTANCE_DISPLAY_LABEL：依据可用区展示标签排序，可用区展示标签包括：HIDDEN（隐藏）、NORMAL（普通）、SELECTED（默认选中），默认采用的升序排列为：['HIDDEN', 'NORMAL', 'SELECTED']。
默认按可用区排序。</li>
                     * @return OrderField 可用区列表排序的依据字段。取值范围：
<li>ZONE：依据可用区排序。</li>
<li>INSTANCE_DISPLAY_LABEL：依据可用区展示标签排序，可用区展示标签包括：HIDDEN（隐藏）、NORMAL（普通）、SELECTED（默认选中），默认采用的升序排列为：['HIDDEN', 'NORMAL', 'SELECTED']。
默认按可用区排序。</li>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置可用区列表排序的依据字段。取值范围：
<li>ZONE：依据可用区排序。</li>
<li>INSTANCE_DISPLAY_LABEL：依据可用区展示标签排序，可用区展示标签包括：HIDDEN（隐藏）、NORMAL（普通）、SELECTED（默认选中），默认采用的升序排列为：['HIDDEN', 'NORMAL', 'SELECTED']。
默认按可用区排序。</li>
                     * @param _orderField 可用区列表排序的依据字段。取值范围：
<li>ZONE：依据可用区排序。</li>
<li>INSTANCE_DISPLAY_LABEL：依据可用区展示标签排序，可用区展示标签包括：HIDDEN（隐藏）、NORMAL（普通）、SELECTED（默认选中），默认采用的升序排列为：['HIDDEN', 'NORMAL', 'SELECTED']。
默认按可用区排序。</li>
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取输出可用区列表的排列顺序。取值范围：
<li>ASC：升序排列。 </li>
<li>DESC：降序排列。</li>
默认按升序排列。
                     * @return Order 输出可用区列表的排列顺序。取值范围：
<li>ASC：升序排列。 </li>
<li>DESC：降序排列。</li>
默认按升序排列。
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置输出可用区列表的排列顺序。取值范围：
<li>ASC：升序排列。 </li>
<li>DESC：降序排列。</li>
默认按升序排列。
                     * @param _order 输出可用区列表的排列顺序。取值范围：
<li>ASC：升序排列。 </li>
<li>DESC：降序排列。</li>
默认按升序排列。
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
                     * 可用区列表排序的依据字段。取值范围：
<li>ZONE：依据可用区排序。</li>
<li>INSTANCE_DISPLAY_LABEL：依据可用区展示标签排序，可用区展示标签包括：HIDDEN（隐藏）、NORMAL（普通）、SELECTED（默认选中），默认采用的升序排列为：['HIDDEN', 'NORMAL', 'SELECTED']。
默认按可用区排序。</li>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 输出可用区列表的排列顺序。取值范围：
<li>ASC：升序排列。 </li>
<li>DESC：降序排列。</li>
默认按升序排列。
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEZONESREQUEST_H_
