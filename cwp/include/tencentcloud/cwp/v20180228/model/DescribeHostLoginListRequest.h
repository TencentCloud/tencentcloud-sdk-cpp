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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTLOGINLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTLOGINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHostLoginList请求参数结构体
                */
                class DescribeHostLoginListRequest : public AbstractModel
                {
                public:
                    DescribeHostLoginListRequest();
                    ~DescribeHostLoginListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，最大值为100
                     * @return Limit 需要返回的数量，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，最大值为100
                     * @param _limit 需要返回的数量，最大值为100
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
                     * 获取过滤条件。<li>Quuid - String - 是否必填：否 - 云服务器uuid</li><li>Uuid - String - 是否必填：否 - 主机安全唯一Uuid</li><li>MachineName - String - 是否必填：否 - 主机别名</li><li>Ip - String - 是否必填：否 - 主机ip</li><li>InstanceID - String - 是否必填：否 - 主机实例ID</li><li>SrcIp - String - 是否必填：否 - 来源ip筛选</li><li>UserName - String - 是否必填：否 - 用户名筛选</li><li>Status - string - 是否必填：否 - 状态筛选：2:待处理；5：已加白,14:已处理，15：已忽略</li><li>LoginTimeBegin - String - 是否必填：否 - 按照修改时间段筛选，开始时间</li><li>LoginTimeEnd - String - 是否必填：否 - 按照修改时间段筛选，结束时间</li><li>RiskLevel - string - 是否必填：否 - 状态筛选0:高危；1：可疑</li>
                     * @return Filters 过滤条件。<li>Quuid - String - 是否必填：否 - 云服务器uuid</li><li>Uuid - String - 是否必填：否 - 主机安全唯一Uuid</li><li>MachineName - String - 是否必填：否 - 主机别名</li><li>Ip - String - 是否必填：否 - 主机ip</li><li>InstanceID - String - 是否必填：否 - 主机实例ID</li><li>SrcIp - String - 是否必填：否 - 来源ip筛选</li><li>UserName - String - 是否必填：否 - 用户名筛选</li><li>Status - string - 是否必填：否 - 状态筛选：2:待处理；5：已加白,14:已处理，15：已忽略</li><li>LoginTimeBegin - String - 是否必填：否 - 按照修改时间段筛选，开始时间</li><li>LoginTimeEnd - String - 是否必填：否 - 按照修改时间段筛选，结束时间</li><li>RiskLevel - string - 是否必填：否 - 状态筛选0:高危；1：可疑</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。<li>Quuid - String - 是否必填：否 - 云服务器uuid</li><li>Uuid - String - 是否必填：否 - 主机安全唯一Uuid</li><li>MachineName - String - 是否必填：否 - 主机别名</li><li>Ip - String - 是否必填：否 - 主机ip</li><li>InstanceID - String - 是否必填：否 - 主机实例ID</li><li>SrcIp - String - 是否必填：否 - 来源ip筛选</li><li>UserName - String - 是否必填：否 - 用户名筛选</li><li>Status - string - 是否必填：否 - 状态筛选：2:待处理；5：已加白,14:已处理，15：已忽略</li><li>LoginTimeBegin - String - 是否必填：否 - 按照修改时间段筛选，开始时间</li><li>LoginTimeEnd - String - 是否必填：否 - 按照修改时间段筛选，结束时间</li><li>RiskLevel - string - 是否必填：否 - 状态筛选0:高危；1：可疑</li>
                     * @param _filters 过滤条件。<li>Quuid - String - 是否必填：否 - 云服务器uuid</li><li>Uuid - String - 是否必填：否 - 主机安全唯一Uuid</li><li>MachineName - String - 是否必填：否 - 主机别名</li><li>Ip - String - 是否必填：否 - 主机ip</li><li>InstanceID - String - 是否必填：否 - 主机实例ID</li><li>SrcIp - String - 是否必填：否 - 来源ip筛选</li><li>UserName - String - 是否必填：否 - 用户名筛选</li><li>Status - string - 是否必填：否 - 状态筛选：2:待处理；5：已加白,14:已处理，15：已忽略</li><li>LoginTimeBegin - String - 是否必填：否 - 按照修改时间段筛选，开始时间</li><li>LoginTimeEnd - String - 是否必填：否 - 按照修改时间段筛选，结束时间</li><li>RiskLevel - string - 是否必填：否 - 状态筛选0:高危；1：可疑</li>
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
                     * 获取排序方式：根据请求次数排序：asc-升序/desc-降序
                     * @return Order 排序方式：根据请求次数排序：asc-升序/desc-降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式：根据请求次数排序：asc-升序/desc-降序
                     * @param _order 排序方式：根据请求次数排序：asc-升序/desc-降序
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
                     * 获取排序字段：LoginTime-发生时间
                     * @return By 排序字段：LoginTime-发生时间
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段：LoginTime-发生时间
                     * @param _by 排序字段：LoginTime-发生时间
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
                     * 需要返回的数量，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。<li>Quuid - String - 是否必填：否 - 云服务器uuid</li><li>Uuid - String - 是否必填：否 - 主机安全唯一Uuid</li><li>MachineName - String - 是否必填：否 - 主机别名</li><li>Ip - String - 是否必填：否 - 主机ip</li><li>InstanceID - String - 是否必填：否 - 主机实例ID</li><li>SrcIp - String - 是否必填：否 - 来源ip筛选</li><li>UserName - String - 是否必填：否 - 用户名筛选</li><li>Status - string - 是否必填：否 - 状态筛选：2:待处理；5：已加白,14:已处理，15：已忽略</li><li>LoginTimeBegin - String - 是否必填：否 - 按照修改时间段筛选，开始时间</li><li>LoginTimeEnd - String - 是否必填：否 - 按照修改时间段筛选，结束时间</li><li>RiskLevel - string - 是否必填：否 - 状态筛选0:高危；1：可疑</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式：根据请求次数排序：asc-升序/desc-降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段：LoginTime-发生时间
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTLOGINLISTREQUEST_H_
