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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEESCAPEEVENTSEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEESCAPEEVENTSEXPORTJOBREQUEST_H_

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
                * CreateEscapeEventsExportJob请求参数结构体
                */
                class CreateEscapeEventsExportJobRequest : public AbstractModel
                {
                public:
                    CreateEscapeEventsExportJobRequest();
                    ~CreateEscapeEventsExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，最大值为10000
                     * @return Limit 需要返回的数量，最大值为10000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，最大值为10000
                     * @param _limit 需要返回的数量，最大值为10000
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
                     * 获取过滤参数,Status：EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     * @return Filters 过滤参数,Status：EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     * 
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置过滤参数,Status：EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     * @param _filters 过滤参数,Status：EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
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
                     * 获取升序降序,asc desc
                     * @return Order 升序降序,asc desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置升序降序,asc desc
                     * @param _order 升序降序,asc desc
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
                     * 获取排序字段：latest_found_time
                     * @return By 排序字段：latest_found_time
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段：latest_found_time
                     * @param _by 排序字段：latest_found_time
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
                     * 获取导出字段
                     * @return ExportField 导出字段
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置导出字段
                     * @param _exportField 导出字段
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                private:

                    /**
                     * 需要返回的数量，最大值为10000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤参数,Status：EVENT_UNDEAL:未处理，EVENT_DEALED:已处理，EVENT_INGNORE:忽略
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 升序降序,asc desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段：latest_found_time
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEESCAPEEVENTSEXPORTJOBREQUEST_H_
