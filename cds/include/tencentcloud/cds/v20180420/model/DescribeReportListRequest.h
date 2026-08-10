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
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取报告名称
                     * @return Name 报告名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置报告名称
                     * @param _name 报告名称
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取报告类型
                     * @return ReportType 报告类型
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报告类型
                     * @param _reportType 报告类型
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
                     * 获取报告状态
                     * @return ReportStatus 报告状态
                     * 
                     */
                    int64_t GetReportStatus() const;

                    /**
                     * 设置报告状态
                     * @param _reportStatus 报告状态
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
                     * 获取报表模版id
                     * @return TemplateId 报表模版id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置报表模版id
                     * @param _templateId 报表模版id
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
                     * 获取需要排序的字段
                     * @return Field 需要排序的字段
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置需要排序的字段
                     * @param _field 需要排序的字段
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
                     * 获取排序顺序 asc desc
                     * @return Sort 排序顺序 asc desc
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序顺序 asc desc
                     * @param _sort 排序顺序 asc desc
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
                     * 获取时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * @return CntDay 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * 
                     */
                    int64_t GetCntDay() const;

                    /**
                     * 设置时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     * @param _cntDay 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
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
                     * 限制数目
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 报告名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 报告类型
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 报告状态
                     */
                    int64_t m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * 报表模版id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 需要排序的字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 排序顺序 asc desc
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 时间范围 1:24小时 7:近一周 30:近30天 90:近90天 180:近180天 不变更为0
                     */
                    int64_t m_cntDay;
                    bool m_cntDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTLISTREQUEST_H_
