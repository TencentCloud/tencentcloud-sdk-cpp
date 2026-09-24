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
                     * 获取<p>偏移量，默认为 0</p>
                     * @return Offset <p>偏移量，默认为 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为 0</p>
                     * @param _offset <p>偏移量，默认为 0</p>
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
                     * 获取<p>限制量，默认为20，最大值为100</p>
                     * @return Limit <p>限制量，默认为20，最大值为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制量，默认为20，最大值为100</p>
                     * @param _limit <p>限制量，默认为20，最大值为100</p>
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
                     * 获取<p>实例ID。每次请求的实例的上限为100。</p>
                     * @return AndroidInstanceIds <p>实例ID。每次请求的实例的上限为100。</p>
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置<p>实例ID。每次请求的实例的上限为100。</p>
                     * @param _androidInstanceIds <p>实例ID。每次请求的实例的上限为100。</p>
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
                     * 获取<p>实例地域。目前还不支持按地域进行聚合查询</p>
                     * @return AndroidInstanceRegion <p>实例地域。目前还不支持按地域进行聚合查询</p>
                     * 
                     */
                    std::string GetAndroidInstanceRegion() const;

                    /**
                     * 设置<p>实例地域。目前还不支持按地域进行聚合查询</p>
                     * @param _androidInstanceRegion <p>实例地域。目前还不支持按地域进行聚合查询</p>
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
                     * 获取<p>实例可用区</p>
                     * @return AndroidInstanceZone <p>实例可用区</p>
                     * 
                     */
                    std::string GetAndroidInstanceZone() const;

                    /**
                     * 设置<p>实例可用区</p>
                     * @param _androidInstanceZone <p>实例可用区</p>
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
                     * 获取<p>实例分组 ID 列表</p>
                     * @return AndroidInstanceGroupIds <p>实例分组 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceGroupIds() const;

                    /**
                     * 设置<p>实例分组 ID 列表</p>
                     * @param _androidInstanceGroupIds <p>实例分组 ID 列表</p>
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
                     * 获取<p>实例标签选择器</p>
                     * @return LabelSelector <p>实例标签选择器</p>
                     * 
                     */
                    std::vector<LabelRequirement> GetLabelSelector() const;

                    /**
                     * 设置<p>实例标签选择器</p>
                     * @param _labelSelector <p>实例标签选择器</p>
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
                     * 获取<p>字段过滤器。Filter 的 Name 有以下值：<br>Name：实例名称<br>UserId：实例用户ID<br>HostSerialNumber：宿主机序列号<br>HostServerSerialNumber：机箱序列号<br>AndroidInstanceModel：实例型号</p>
                     * @return Filters <p>字段过滤器。Filter 的 Name 有以下值：<br>Name：实例名称<br>UserId：实例用户ID<br>HostSerialNumber：宿主机序列号<br>HostServerSerialNumber：机箱序列号<br>AndroidInstanceModel：实例型号</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>字段过滤器。Filter 的 Name 有以下值：<br>Name：实例名称<br>UserId：实例用户ID<br>HostSerialNumber：宿主机序列号<br>HostServerSerialNumber：机箱序列号<br>AndroidInstanceModel：实例型号</p>
                     * @param _filters <p>字段过滤器。Filter 的 Name 有以下值：<br>Name：实例名称<br>UserId：实例用户ID<br>HostSerialNumber：宿主机序列号<br>HostServerSerialNumber：机箱序列号<br>AndroidInstanceModel：实例型号</p>
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
                     * <p>偏移量，默认为 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限制量，默认为20，最大值为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>实例ID。每次请求的实例的上限为100。</p>
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * <p>实例地域。目前还不支持按地域进行聚合查询</p>
                     */
                    std::string m_androidInstanceRegion;
                    bool m_androidInstanceRegionHasBeenSet;

                    /**
                     * <p>实例可用区</p>
                     */
                    std::string m_androidInstanceZone;
                    bool m_androidInstanceZoneHasBeenSet;

                    /**
                     * <p>实例分组 ID 列表</p>
                     */
                    std::vector<std::string> m_androidInstanceGroupIds;
                    bool m_androidInstanceGroupIdsHasBeenSet;

                    /**
                     * <p>实例标签选择器</p>
                     */
                    std::vector<LabelRequirement> m_labelSelector;
                    bool m_labelSelectorHasBeenSet;

                    /**
                     * <p>字段过滤器。Filter 的 Name 有以下值：<br>Name：实例名称<br>UserId：实例用户ID<br>HostSerialNumber：宿主机序列号<br>HostServerSerialNumber：机箱序列号<br>AndroidInstanceModel：实例型号</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESREQUEST_H_
