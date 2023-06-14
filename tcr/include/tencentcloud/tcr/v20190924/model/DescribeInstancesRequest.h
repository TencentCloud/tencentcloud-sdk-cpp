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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Filter.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeInstances请求参数结构体
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID列表(为空时，
表示获取账号下所有实例)
                     * @return Registryids 实例ID列表(为空时，
表示获取账号下所有实例)
                     * 
                     */
                    std::vector<std::string> GetRegistryids() const;

                    /**
                     * 设置实例ID列表(为空时，
表示获取账号下所有实例)
                     * @param _registryids 实例ID列表(为空时，
表示获取账号下所有实例)
                     * 
                     */
                    void SetRegistryids(const std::vector<std::string>& _registryids);

                    /**
                     * 判断参数 Registryids 是否已赋值
                     * @return Registryids 是否已赋值
                     * 
                     */
                    bool RegistryidsHasBeenSet() const;

                    /**
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
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
                     * 获取最大输出条数，默认20，最大为100
                     * @return Limit 最大输出条数，默认20，最大为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大输出条数，默认20，最大为100
                     * @param _limit 最大输出条数，默认20，最大为100
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
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
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
                     * 获取获取所有地域的实例，默认为False
                     * @return AllRegion 获取所有地域的实例，默认为False
                     * 
                     */
                    bool GetAllRegion() const;

                    /**
                     * 设置获取所有地域的实例，默认为False
                     * @param _allRegion 获取所有地域的实例，默认为False
                     * 
                     */
                    void SetAllRegion(const bool& _allRegion);

                    /**
                     * 判断参数 AllRegion 是否已赋值
                     * @return AllRegion 是否已赋值
                     * 
                     */
                    bool AllRegionHasBeenSet() const;

                private:

                    /**
                     * 实例ID列表(为空时，
表示获取账号下所有实例)
                     */
                    std::vector<std::string> m_registryids;
                    bool m_registryidsHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大输出条数，默认20，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 获取所有地域的实例，默认为False
                     */
                    bool m_allRegion;
                    bool m_allRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESREQUEST_H_
