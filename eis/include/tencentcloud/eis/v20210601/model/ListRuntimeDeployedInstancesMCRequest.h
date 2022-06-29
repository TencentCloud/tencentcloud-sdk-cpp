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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMEDEPLOYEDINSTANCESMCREQUEST_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMEDEPLOYEDINSTANCESMCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * ListRuntimeDeployedInstancesMC请求参数结构体
                */
                class ListRuntimeDeployedInstancesMCRequest : public AbstractModel
                {
                public:
                    ListRuntimeDeployedInstancesMCRequest();
                    ~ListRuntimeDeployedInstancesMCRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取运行时id
                     * @return RuntimeId 运行时id
                     */
                    int64_t GetRuntimeId() const;

                    /**
                     * 设置运行时id
                     * @param RuntimeId 运行时id
                     */
                    void SetRuntimeId(const int64_t& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取最大请求数量
                     * @return Limit 最大请求数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大请求数量
                     * @param Limit 最大请求数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取请求偏移量
                     * @return Offset 请求偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置请求偏移量
                     * @param Offset 请求偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序类型：1:创建时间排序, 2:更新时间排序（默认）
                     * @return SortType 排序类型：1:创建时间排序, 2:更新时间排序（默认）
                     */
                    int64_t GetSortType() const;

                    /**
                     * 设置排序类型：1:创建时间排序, 2:更新时间排序（默认）
                     * @param SortType 排序类型：1:创建时间排序, 2:更新时间排序（默认）
                     */
                    void SetSortType(const int64_t& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取排序方式：asc，desc（默认）
                     * @return Sort 排序方式：asc，desc（默认）
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序方式：asc，desc（默认）
                     * @param Sort 排序方式：asc，desc（默认）
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取运行时地域
                     * @return Zone 运行时地域
                     */
                    std::string GetZone() const;

                    /**
                     * 设置运行时地域
                     * @param Zone 运行时地域
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取1:3.0版本新控制台传1；否则传0
                     * @return ApiVersion 1:3.0版本新控制台传1；否则传0
                     */
                    int64_t GetApiVersion() const;

                    /**
                     * 设置1:3.0版本新控制台传1；否则传0
                     * @param ApiVersion 1:3.0版本新控制台传1；否则传0
                     */
                    void SetApiVersion(const int64_t& _apiVersion);

                    /**
                     * 判断参数 ApiVersion 是否已赋值
                     * @return ApiVersion 是否已赋值
                     */
                    bool ApiVersionHasBeenSet() const;

                private:

                    /**
                     * 运行时id
                     */
                    int64_t m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 最大请求数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 请求偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序类型：1:创建时间排序, 2:更新时间排序（默认）
                     */
                    int64_t m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 排序方式：asc，desc（默认）
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 运行时地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 1:3.0版本新控制台传1；否则传0
                     */
                    int64_t m_apiVersion;
                    bool m_apiVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMEDEPLOYEDINSTANCESMCREQUEST_H_
