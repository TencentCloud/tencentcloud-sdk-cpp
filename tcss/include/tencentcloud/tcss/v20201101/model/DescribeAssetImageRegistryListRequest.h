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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageRegistryList请求参数结构体
                */
                class DescribeAssetImageRegistryListRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryListRequest();
                    ~DescribeAssetImageRegistryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param _limit 需要返回的数量，默认为10，最大值为100
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取过滤字段
IsAuthorized是否授权，取值全部all，未授权0，已授权1
                     * @return Filters 过滤字段
IsAuthorized是否授权，取值全部all，未授权0，已授权1
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤字段
IsAuthorized是否授权，取值全部all，未授权0，已授权1
                     * @param _filters 过滤字段
IsAuthorized是否授权，取值全部all，未授权0，已授权1
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

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

                    /**
                     * 获取排序方式，asc，desc
                     * @return Order 排序方式，asc，desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，asc，desc
                     * @param _order 排序方式，asc，desc
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
                     * 获取是否仅展示各repository最新的镜像, 默认为false
                     * @return OnlyShowLatest 是否仅展示各repository最新的镜像, 默认为false
                     * 
                     */
                    bool GetOnlyShowLatest() const;

                    /**
                     * 设置是否仅展示各repository最新的镜像, 默认为false
                     * @param _onlyShowLatest 是否仅展示各repository最新的镜像, 默认为false
                     * 
                     */
                    void SetOnlyShowLatest(const bool& _onlyShowLatest);

                    /**
                     * 判断参数 OnlyShowLatest 是否已赋值
                     * @return OnlyShowLatest 是否已赋值
                     * 
                     */
                    bool OnlyShowLatestHasBeenSet() const;

                    /**
                     * 获取是否仅展示运行中容器镜像
                     * @return IsRunning 是否仅展示运行中容器镜像
                     * 
                     */
                    bool GetIsRunning() const;

                    /**
                     * 设置是否仅展示运行中容器镜像
                     * @param _isRunning 是否仅展示运行中容器镜像
                     * 
                     */
                    void SetIsRunning(const bool& _isRunning);

                    /**
                     * 判断参数 IsRunning 是否已赋值
                     * @return IsRunning 是否已赋值
                     * 
                     */
                    bool IsRunningHasBeenSet() const;

                private:

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤字段
IsAuthorized是否授权，取值全部all，未授权0，已授权1
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式，asc，desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 是否仅展示各repository最新的镜像, 默认为false
                     */
                    bool m_onlyShowLatest;
                    bool m_onlyShowLatestHasBeenSet;

                    /**
                     * 是否仅展示运行中容器镜像
                     */
                    bool m_isRunning;
                    bool m_isRunningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_
