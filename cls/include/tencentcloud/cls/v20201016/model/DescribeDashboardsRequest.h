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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>
#include <tencentcloud/cls/v20201016/model/TopicIdAndRegion.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeDashboards请求参数结构体
                */
                class DescribeDashboardsRequest : public AbstractModel
                {
                public:
                    DescribeDashboardsRequest();
                    ~DescribeDashboardsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取分页单页限制数目，默认值为20，最大值100。
                     * @return Limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100。
                     * @param _limit 分页单页限制数目，默认值为20，最大值100。
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
                     * 获取- dashboardId 按照【仪表盘id】进行过滤，类型：String， 必选：否。
    - 示例值：dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
- dashboardName 按照【仪表盘名字】进行模糊搜索过滤，类型：String，必选：否。
    - 示例值：业务大盘
- dashboardRegion 按照【仪表盘地域】进行过滤（兼容老的仪表盘），通过云API创建的仪表盘该属性，类型：String，必选：否。
    - 参考  [地域和访问域名](https://cloud.tencent.com/document/product/614/18940)
    - 示例：ap-guangzhou
- tagKey 按照【标签键】进行过滤，类型：String，必选：否。
    - 示例值：
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

- tag:tagKey 按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，类型：String，必选：否，
    - 参考 [示例1](https://cloud.tencent.com/document/api/614/95636#4.-.E7.A4.BA.E4.BE.8B) 使用。
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * @return Filters - dashboardId 按照【仪表盘id】进行过滤，类型：String， 必选：否。
    - 示例值：dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
- dashboardName 按照【仪表盘名字】进行模糊搜索过滤，类型：String，必选：否。
    - 示例值：业务大盘
- dashboardRegion 按照【仪表盘地域】进行过滤（兼容老的仪表盘），通过云API创建的仪表盘该属性，类型：String，必选：否。
    - 参考  [地域和访问域名](https://cloud.tencent.com/document/product/614/18940)
    - 示例：ap-guangzhou
- tagKey 按照【标签键】进行过滤，类型：String，必选：否。
    - 示例值：
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

- tag:tagKey 按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，类型：String，必选：否，
    - 参考 [示例1](https://cloud.tencent.com/document/api/614/95636#4.-.E7.A4.BA.E4.BE.8B) 使用。
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置- dashboardId 按照【仪表盘id】进行过滤，类型：String， 必选：否。
    - 示例值：dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
- dashboardName 按照【仪表盘名字】进行模糊搜索过滤，类型：String，必选：否。
    - 示例值：业务大盘
- dashboardRegion 按照【仪表盘地域】进行过滤（兼容老的仪表盘），通过云API创建的仪表盘该属性，类型：String，必选：否。
    - 参考  [地域和访问域名](https://cloud.tencent.com/document/product/614/18940)
    - 示例：ap-guangzhou
- tagKey 按照【标签键】进行过滤，类型：String，必选：否。
    - 示例值：
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

- tag:tagKey 按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，类型：String，必选：否，
    - 参考 [示例1](https://cloud.tencent.com/document/api/614/95636#4.-.E7.A4.BA.E4.BE.8B) 使用。
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * @param _filters - dashboardId 按照【仪表盘id】进行过滤，类型：String， 必选：否。
    - 示例值：dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
- dashboardName 按照【仪表盘名字】进行模糊搜索过滤，类型：String，必选：否。
    - 示例值：业务大盘
- dashboardRegion 按照【仪表盘地域】进行过滤（兼容老的仪表盘），通过云API创建的仪表盘该属性，类型：String，必选：否。
    - 参考  [地域和访问域名](https://cloud.tencent.com/document/product/614/18940)
    - 示例：ap-guangzhou
- tagKey 按照【标签键】进行过滤，类型：String，必选：否。
    - 示例值：
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

- tag:tagKey 按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，类型：String，必选：否，
    - 参考 [示例1](https://cloud.tencent.com/document/api/614/95636#4.-.E7.A4.BA.E4.BE.8B) 使用。
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

每次请求的Filters的上限为10，Filter.Values的上限为100。
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
                     * 获取按照topicId和regionId过滤。
- topicId:日志主题Id。
    -  通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
    - 示例值：439a5304-08f9-484b-9c4d-46ff57133816
- regionId
    - 1:广州
    - 4:上海
    - 5:中国香港
    - 7:上海金融
    - 8:北京
    - 9:新加坡
    - 11:深圳金融
    - 15:硅谷
    - 16:成都
    - 17:法兰克福
    - 18:首尔
    - 19:重庆
    - 22:弗吉尼亚
    - 23:曼谷
    - 25:东京
    - 33:南京
    - 36:天津
    - 39:台北
    - 46:北京金融
    - 72:雅加达
    - 74:圣保罗
    - 78:上海自动驾驶云

                     * @return TopicIdRegionFilter 按照topicId和regionId过滤。
- topicId:日志主题Id。
    -  通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
    - 示例值：439a5304-08f9-484b-9c4d-46ff57133816
- regionId
    - 1:广州
    - 4:上海
    - 5:中国香港
    - 7:上海金融
    - 8:北京
    - 9:新加坡
    - 11:深圳金融
    - 15:硅谷
    - 16:成都
    - 17:法兰克福
    - 18:首尔
    - 19:重庆
    - 22:弗吉尼亚
    - 23:曼谷
    - 25:东京
    - 33:南京
    - 36:天津
    - 39:台北
    - 46:北京金融
    - 72:雅加达
    - 74:圣保罗
    - 78:上海自动驾驶云

                     * 
                     */
                    std::vector<TopicIdAndRegion> GetTopicIdRegionFilter() const;

                    /**
                     * 设置按照topicId和regionId过滤。
- topicId:日志主题Id。
    -  通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
    - 示例值：439a5304-08f9-484b-9c4d-46ff57133816
- regionId
    - 1:广州
    - 4:上海
    - 5:中国香港
    - 7:上海金融
    - 8:北京
    - 9:新加坡
    - 11:深圳金融
    - 15:硅谷
    - 16:成都
    - 17:法兰克福
    - 18:首尔
    - 19:重庆
    - 22:弗吉尼亚
    - 23:曼谷
    - 25:东京
    - 33:南京
    - 36:天津
    - 39:台北
    - 46:北京金融
    - 72:雅加达
    - 74:圣保罗
    - 78:上海自动驾驶云

                     * @param _topicIdRegionFilter 按照topicId和regionId过滤。
- topicId:日志主题Id。
    -  通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
    - 示例值：439a5304-08f9-484b-9c4d-46ff57133816
- regionId
    - 1:广州
    - 4:上海
    - 5:中国香港
    - 7:上海金融
    - 8:北京
    - 9:新加坡
    - 11:深圳金融
    - 15:硅谷
    - 16:成都
    - 17:法兰克福
    - 18:首尔
    - 19:重庆
    - 22:弗吉尼亚
    - 23:曼谷
    - 25:东京
    - 33:南京
    - 36:天津
    - 39:台北
    - 46:北京金融
    - 72:雅加达
    - 74:圣保罗
    - 78:上海自动驾驶云

                     * 
                     */
                    void SetTopicIdRegionFilter(const std::vector<TopicIdAndRegion>& _topicIdRegionFilter);

                    /**
                     * 判断参数 TopicIdRegionFilter 是否已赋值
                     * @return TopicIdRegionFilter 是否已赋值
                     * 
                     */
                    bool TopicIdRegionFilterHasBeenSet() const;

                private:

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * - dashboardId 按照【仪表盘id】进行过滤，类型：String， 必选：否。
    - 示例值：dashboard-522a5609-1f41-4b11-8086-5afd1d7574f5
- dashboardName 按照【仪表盘名字】进行模糊搜索过滤，类型：String，必选：否。
    - 示例值：业务大盘
- dashboardRegion 按照【仪表盘地域】进行过滤（兼容老的仪表盘），通过云API创建的仪表盘该属性，类型：String，必选：否。
    - 参考  [地域和访问域名](https://cloud.tencent.com/document/product/614/18940)
    - 示例：ap-guangzhou
- tagKey 按照【标签键】进行过滤，类型：String，必选：否。
    - 示例值：
    ```
    "Filters":[
        {
            "Key": "tagKey",
            "Values": [
                "tag-key-test"
            ]
        }
    ]
    ```

- tag:tagKey 按照【标签键值对】进行过滤。tagKey使用具体的标签键进行替换，类型：String，必选：否，
    - 参考 [示例1](https://cloud.tencent.com/document/api/614/95636#4.-.E7.A4.BA.E4.BE.8B) 使用。
    ```
    "Filters": [
        {
            "Key": "tag:tag-key-test",
            "Values": [
                "12"
            ]
        }
    ]
    ```

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 按照topicId和regionId过滤。
- topicId:日志主题Id。
    -  通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
    - 示例值：439a5304-08f9-484b-9c4d-46ff57133816
- regionId
    - 1:广州
    - 4:上海
    - 5:中国香港
    - 7:上海金融
    - 8:北京
    - 9:新加坡
    - 11:深圳金融
    - 15:硅谷
    - 16:成都
    - 17:法兰克福
    - 18:首尔
    - 19:重庆
    - 22:弗吉尼亚
    - 23:曼谷
    - 25:东京
    - 33:南京
    - 36:天津
    - 39:台北
    - 46:北京金融
    - 72:雅加达
    - 74:圣保罗
    - 78:上海自动驾驶云

                     */
                    std::vector<TopicIdAndRegion> m_topicIdRegionFilter;
                    bool m_topicIdRegionFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEDASHBOARDSREQUEST_H_
