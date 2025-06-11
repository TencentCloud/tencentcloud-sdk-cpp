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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/LabelRequirement.h>
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
                * DescribeAndroidInstances请求参数结构体
                */
                class DescribeAndroidInstancesRequest : public AbstractModel
                {
                public:
                    DescribeAndroidInstancesRequest();
                    ~DescribeAndroidInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param _offset 偏移量，默认为 0
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
                     * 获取限制量，默认为20，最大值为100
                     * @return Limit 限制量，默认为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制量，默认为20，最大值为100
                     * @param _limit 限制量，默认为20，最大值为100
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
                     * 获取实例ID。每次请求的实例的上限为100。
                     * @return AndroidInstanceIds 实例ID。每次请求的实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置实例ID。每次请求的实例的上限为100。
                     * @param _androidInstanceIds 实例ID。每次请求的实例的上限为100。
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例地域。目前还不支持按地域进行聚合查询
                     * @return AndroidInstanceRegion 实例地域。目前还不支持按地域进行聚合查询
                     * 
                     */
                    std::string GetAndroidInstanceRegion() const;

                    /**
                     * 设置实例地域。目前还不支持按地域进行聚合查询
                     * @param _androidInstanceRegion 实例地域。目前还不支持按地域进行聚合查询
                     * 
                     */
                    void SetAndroidInstanceRegion(const std::string& _androidInstanceRegion);

                    /**
                     * 判断参数 AndroidInstanceRegion 是否已赋值
                     * @return AndroidInstanceRegion 是否已赋值
                     * 
                     */
                    bool AndroidInstanceRegionHasBeenSet() const;

                    /**
                     * 获取实例可用区
                     * @return AndroidInstanceZone 实例可用区
                     * 
                     */
                    std::string GetAndroidInstanceZone() const;

                    /**
                     * 设置实例可用区
                     * @param _androidInstanceZone 实例可用区
                     * 
                     */
                    void SetAndroidInstanceZone(const std::string& _androidInstanceZone);

                    /**
                     * 判断参数 AndroidInstanceZone 是否已赋值
                     * @return AndroidInstanceZone 是否已赋值
                     * 
                     */
                    bool AndroidInstanceZoneHasBeenSet() const;

                    /**
                     * 获取实例分组 ID 列表
                     * @return AndroidInstanceGroupIds 实例分组 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceGroupIds() const;

                    /**
                     * 设置实例分组 ID 列表
                     * @param _androidInstanceGroupIds 实例分组 ID 列表
                     * 
                     */
                    void SetAndroidInstanceGroupIds(const std::vector<std::string>& _androidInstanceGroupIds);

                    /**
                     * 判断参数 AndroidInstanceGroupIds 是否已赋值
                     * @return AndroidInstanceGroupIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceGroupIdsHasBeenSet() const;

                    /**
                     * 获取实例标签选择器
                     * @return LabelSelector 实例标签选择器
                     * 
                     */
                    std::vector<LabelRequirement> GetLabelSelector() const;

                    /**
                     * 设置实例标签选择器
                     * @param _labelSelector 实例标签选择器
                     * 
                     */
                    void SetLabelSelector(const std::vector<LabelRequirement>& _labelSelector);

                    /**
                     * 判断参数 LabelSelector 是否已赋值
                     * @return LabelSelector 是否已赋值
                     * 
                     */
                    bool LabelSelectorHasBeenSet() const;

                    /**
                     * 获取字段过滤器。Filter 的 Name 有以下值：
Name：实例名称
UserId：实例用户ID
HostSerialNumber：宿主机序列号
HostServerSerialNumber：机箱序列号
                     * @return Filters 字段过滤器。Filter 的 Name 有以下值：
Name：实例名称
UserId：实例用户ID
HostSerialNumber：宿主机序列号
HostServerSerialNumber：机箱序列号
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置字段过滤器。Filter 的 Name 有以下值：
Name：实例名称
UserId：实例用户ID
HostSerialNumber：宿主机序列号
HostServerSerialNumber：机箱序列号
                     * @param _filters 字段过滤器。Filter 的 Name 有以下值：
Name：实例名称
UserId：实例用户ID
HostSerialNumber：宿主机序列号
HostServerSerialNumber：机箱序列号
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
                     * 偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制量，默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 实例ID。每次请求的实例的上限为100。
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 实例地域。目前还不支持按地域进行聚合查询
                     */
                    std::string m_androidInstanceRegion;
                    bool m_androidInstanceRegionHasBeenSet;

                    /**
                     * 实例可用区
                     */
                    std::string m_androidInstanceZone;
                    bool m_androidInstanceZoneHasBeenSet;

                    /**
                     * 实例分组 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceGroupIds;
                    bool m_androidInstanceGroupIdsHasBeenSet;

                    /**
                     * 实例标签选择器
                     */
                    std::vector<LabelRequirement> m_labelSelector;
                    bool m_labelSelectorHasBeenSet;

                    /**
                     * 字段过滤器。Filter 的 Name 有以下值：
Name：实例名称
UserId：实例用户ID
HostSerialNumber：宿主机序列号
HostServerSerialNumber：机箱序列号
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESREQUEST_H_
