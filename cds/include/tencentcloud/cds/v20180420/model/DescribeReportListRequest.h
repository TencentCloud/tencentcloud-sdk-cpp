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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTLISTREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * DescribeReportList请求参数结构体
                */
                class DescribeReportListRequest : public AbstractModel
                {
                public:
                    DescribeReportListRequest();
                    ~DescribeReportListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>限制数目</p>
                     * @return Limit <p>限制数目</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>限制数目</p>
                     * @param _limit <p>限制数目</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>报告名称</p>
                     * @return Name <p>报告名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>报告名称</p>
                     * @param _name <p>报告名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>报告类型</p>
                     * @return ReportType <p>报告类型</p>
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置<p>报告类型</p>
                     * @param _reportType <p>报告类型</p>
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取<p>报告状态</p>
                     * @return ReportStatus <p>报告状态</p>
                     * 
                     */
                    int64_t GetReportStatus() const;

                    /**
                     * 设置<p>报告状态</p>
                     * @param _reportStatus <p>报告状态</p>
                     * 
                     */
                    void SetReportStatus(const int64_t& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     * 
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取<p>报表模板id</p>
                     * @return TemplateId <p>报表模板id</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>报表模板id</p>
                     * @param _templateId <p>报表模板id</p>
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>需要排序的字段</p>
                     * @return Field <p>需要排序的字段</p>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置<p>需要排序的字段</p>
                     * @param _field <p>需要排序的字段</p>
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取<p>排序顺序 asc desc</p>
                     * @return Sort <p>排序顺序 asc desc</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序顺序 asc desc</p>
                     * @param _sort <p>排序顺序 asc desc</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * @return CntDay <p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * 
                     */
                    int64_t GetCntDay() const;

                    /**
                     * 设置<p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * @param _cntDay <p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     * 
                     */
                    void SetCntDay(const int64_t& _cntDay);

                    /**
                     * 判断参数 CntDay 是否已赋值
                     * @return CntDay 是否已赋值
                     * 
                     */
                    bool CntDayHasBeenSet() const;

                private:

                    /**
                     * <p>限制数目</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>报告名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>报告类型</p>
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * <p>报告状态</p>
                     */
                    int64_t m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * <p>报表模板id</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>需要排序的字段</p>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * <p>排序顺序 asc desc</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0</p>
                     */
                    int64_t m_cntDay;
                    bool m_cntDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTLISTREQUEST_H_
