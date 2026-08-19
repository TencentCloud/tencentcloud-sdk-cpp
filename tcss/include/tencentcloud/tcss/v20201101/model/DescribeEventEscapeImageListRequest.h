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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEVENTESCAPEIMAGELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEVENTESCAPEIMAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeEventEscapeImageList请求参数结构体
                */
                class DescribeEventEscapeImageListRequest : public AbstractModel
                {
                public:
                    DescribeEventEscapeImageListRequest();
                    ~DescribeEventEscapeImageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要返回的数量，默认为10，最大值为100</p>
                     * @return Limit <p>需要返回的数量，默认为10，最大值为100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>需要返回的数量，默认为10，最大值为100</p>
                     * @param _limit <p>需要返回的数量，默认为10，最大值为100</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>过滤参数:<br>EventType: 事件类型(MOUNT_SENSITIVE_PTAH:敏感路径挂载 PRIVILEGE_CONTAINER_START:特权容器)<br>Status: 事件状态(EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略)<br>ImageID: 镜像id<br>ImageName:镜像名称</p>
                     * @return Filters <p>过滤参数:<br>EventType: 事件类型(MOUNT_SENSITIVE_PTAH:敏感路径挂载 PRIVILEGE_CONTAINER_START:特权容器)<br>Status: 事件状态(EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略)<br>ImageID: 镜像id<br>ImageName:镜像名称</p>
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置<p>过滤参数:<br>EventType: 事件类型(MOUNT_SENSITIVE_PTAH:敏感路径挂载 PRIVILEGE_CONTAINER_START:特权容器)<br>Status: 事件状态(EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略)<br>ImageID: 镜像id<br>ImageName:镜像名称</p>
                     * @param _filters <p>过滤参数:<br>EventType: 事件类型(MOUNT_SENSITIVE_PTAH:敏感路径挂载 PRIVILEGE_CONTAINER_START:特权容器)<br>Status: 事件状态(EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略)<br>ImageID: 镜像id<br>ImageName:镜像名称</p>
                     * 
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>升序降序,asc desc</p>
                     * @return Order <p>升序降序,asc desc</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>升序降序,asc desc</p>
                     * @param _order <p>升序降序,asc desc</p>
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
                     * 获取<p>排序字段</p>
                     * @return By <p>排序字段</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段</p>
                     * @param _by <p>排序字段</p>
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
                     * <p>需要返回的数量，默认为10，最大值为100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤参数:<br>EventType: 事件类型(MOUNT_SENSITIVE_PTAH:敏感路径挂载 PRIVILEGE_CONTAINER_START:特权容器)<br>Status: 事件状态(EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略)<br>ImageID: 镜像id<br>ImageName:镜像名称</p>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>升序降序,asc desc</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEVENTESCAPEIMAGELISTREQUEST_H_
