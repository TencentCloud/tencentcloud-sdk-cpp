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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGV2REQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRumGroupLogV2请求参数结构体
                */
                class DescribeRumGroupLogV2Request : public AbstractModel
                {
                public:
                    DescribeRumGroupLogV2Request();
                    ~DescribeRumGroupLogV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>排序方式 desc asc（必填）</p>
                     * @return OrderBy <p>排序方式 desc asc（必填）</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序方式 desc asc（必填）</p>
                     * @param _orderBy <p>排序方式 desc asc（必填）</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>开始时间（必填）</p>
                     * @return StartTime <p>开始时间（必填）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间（必填）</p>
                     * @param _startTime <p>开始时间（必填）</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * @return Limit <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     * @param _limit <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
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
                     * 获取<p>过滤条件</p>
                     * @return Filter <p>过滤条件</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filter <p>过滤条件</p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>结束时间（必填）</p>
                     * @return EndTime <p>结束时间（必填）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间（必填）</p>
                     * @param _endTime <p>结束时间（必填）</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID（必填）</p>
                     * @return ID <p>项目ID（必填）</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>项目ID（必填）</p>
                     * @param _iD <p>项目ID（必填）</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>聚合字段</p>
                     * @return Label <p>聚合字段</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>聚合字段</p>
                     * @param _label <p>聚合字段</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>页数，第几页（注意：该字段已废弃！）</p>
                     * @return Last <p>页数，第几页（注意：该字段已废弃！）</p>
                     * 
                     */
                    int64_t GetLast() const;

                    /**
                     * 设置<p>页数，第几页（注意：该字段已废弃！）</p>
                     * @param _last <p>页数，第几页（注意：该字段已废弃！）</p>
                     * 
                     */
                    void SetLast(const int64_t& _last);

                    /**
                     * 判断参数 Last 是否已赋值
                     * @return Last 是否已赋值
                     * 
                     */
                    bool LastHasBeenSet() const;

                private:

                    /**
                     * <p>排序方式 desc asc（必填）</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>开始时间（必填）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>单次查询返回的原始日志条数，最大值为100（必填）</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>结束时间（必填）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>项目ID（必填）</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>聚合字段</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>页数，第几页（注意：该字段已废弃！）</p>
                     */
                    int64_t m_last;
                    bool m_lastHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMGROUPLOGV2REQUEST_H_
