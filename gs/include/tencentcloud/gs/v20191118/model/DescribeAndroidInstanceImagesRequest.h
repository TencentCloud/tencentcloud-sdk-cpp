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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEIMAGESREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/Filter.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidInstanceImages请求参数结构体
                */
                class DescribeAndroidInstanceImagesRequest : public AbstractModel
                {
                public:
                    DescribeAndroidInstanceImagesRequest();
                    ~DescribeAndroidInstanceImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像 ID 列表
                     * @return AndroidInstanceImageIds 镜像 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceImageIds() const;

                    /**
                     * 设置镜像 ID 列表
                     * @param _androidInstanceImageIds 镜像 ID 列表
                     * 
                     */
                    void SetAndroidInstanceImageIds(const std::vector<std::string>& _androidInstanceImageIds);

                    /**
                     * 判断参数 AndroidInstanceImageIds 是否已赋值
                     * @return AndroidInstanceImageIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageIdsHasBeenSet() const;

                    /**
                     * 获取镜像可用区列表
                     * @return AndroidInstanceImageZones 镜像可用区列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceImageZones() const;

                    /**
                     * 设置镜像可用区列表
                     * @param _androidInstanceImageZones 镜像可用区列表
                     * 
                     */
                    void SetAndroidInstanceImageZones(const std::vector<std::string>& _androidInstanceImageZones);

                    /**
                     * 判断参数 AndroidInstanceImageZones 是否已赋值
                     * @return AndroidInstanceImageZones 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageZonesHasBeenSet() const;

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
                     * 获取限制量，默认为20，最大值为100
                     * @return Limit 限制量，默认为20，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制量，默认为20，最大值为100
                     * @param _limit 限制量，默认为20，最大值为100
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
                     * 获取字段过滤器。Filter 的 Name 有以下值：
ImageName：镜像名称
ImageState：镜像状态
AndroidVersion：安卓版本
                     * @return Filters 字段过滤器。Filter 的 Name 有以下值：
ImageName：镜像名称
ImageState：镜像状态
AndroidVersion：安卓版本
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置字段过滤器。Filter 的 Name 有以下值：
ImageName：镜像名称
ImageState：镜像状态
AndroidVersion：安卓版本
                     * @param _filters 字段过滤器。Filter 的 Name 有以下值：
ImageName：镜像名称
ImageState：镜像状态
AndroidVersion：安卓版本
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
                     * 镜像 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceImageIds;
                    bool m_androidInstanceImageIdsHasBeenSet;

                    /**
                     * 镜像可用区列表
                     */
                    std::vector<std::string> m_androidInstanceImageZones;
                    bool m_androidInstanceImageZonesHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制量，默认为20，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 字段过滤器。Filter 的 Name 有以下值：
ImageName：镜像名称
ImageState：镜像状态
AndroidVersion：安卓版本
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEIMAGESREQUEST_H_
