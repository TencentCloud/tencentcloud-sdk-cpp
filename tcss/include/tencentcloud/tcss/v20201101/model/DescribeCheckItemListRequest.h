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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECHECKITEMLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECHECKITEMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ComplianceFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeCheckItemList请求参数结构体
                */
                class DescribeCheckItemListRequest : public AbstractModel
                {
                public:
                    DescribeCheckItemListRequest();
                    ~DescribeCheckItemListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取每次查询的最大记录数量
                     * @return Limit 每次查询的最大记录数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每次查询的最大记录数量
                     * @param _limit 每次查询的最大记录数量
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
                     * 获取Name 可取值：
Name: 检查项名称
RiskType: 风险类别
RiskLevel: 风险等级
RiskTarget: 检查对象
RiskAttribute: 检测项所属分型线类型
Enable: 检查项是否开启(0:关闭 1:开启)
                     * @return Filters Name 可取值：
Name: 检查项名称
RiskType: 风险类别
RiskLevel: 风险等级
RiskTarget: 检查对象
RiskAttribute: 检测项所属分型线类型
Enable: 检查项是否开启(0:关闭 1:开启)
                     * 
                     */
                    std::vector<ComplianceFilters> GetFilters() const;

                    /**
                     * 设置Name 可取值：
Name: 检查项名称
RiskType: 风险类别
RiskLevel: 风险等级
RiskTarget: 检查对象
RiskAttribute: 检测项所属分型线类型
Enable: 检查项是否开启(0:关闭 1:开启)
                     * @param _filters Name 可取值：
Name: 检查项名称
RiskType: 风险类别
RiskLevel: 风险等级
RiskTarget: 检查对象
RiskAttribute: 检测项所属分型线类型
Enable: 检查项是否开启(0:关闭 1:开启)
                     * 
                     */
                    void SetFilters(const std::vector<ComplianceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每次查询的最大记录数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Name 可取值：
Name: 检查项名称
RiskType: 风险类别
RiskLevel: 风险等级
RiskTarget: 检查对象
RiskAttribute: 检测项所属分型线类型
Enable: 检查项是否开启(0:关闭 1:开启)
                     */
                    std::vector<ComplianceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECHECKITEMLISTREQUEST_H_
