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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTMISSIONLISTREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTMISSIONLISTREQUEST_H_

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
                * DescribeReportMissionList请求参数结构体
                */
                class DescribeReportMissionListRequest : public AbstractModel
                {
                public:
                    DescribeReportMissionListRequest();
                    ~DescribeReportMissionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取报表名 可模糊查询
                     * @return TplName 报表名 可模糊查询
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置报表名 可模糊查询
                     * @param _tplName 报表名 可模糊查询
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取报表类型 1:单次报表 2:周期报表 0全查
                     * @return ReportType 报表类型 1:单次报表 2:周期报表 0全查
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置报表类型 1:单次报表 2:周期报表 0全查
                     * @param _reportType 报表类型 1:单次报表 2:周期报表 0全查
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
                     * 获取报表模板 1:综合分析报告 2:等保合规报告 0全查
                     * @return TemplateId 报表模板 1:综合分析报告 2:等保合规报告 0全查
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置报表模板 1:综合分析报告 2:等保合规报告 0全查
                     * @param _templateId 报表模板 1:综合分析报告 2:等保合规报告 0全查
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
                     * 获取任务状态0全查 1:生成中 2:待生成 3:已生成 4:生成失败 5:已暂停
                     * @return MissionStatus 任务状态0全查 1:生成中 2:待生成 3:已生成 4:生成失败 5:已暂停
                     * 
                     */
                    int64_t GetMissionStatus() const;

                    /**
                     * 设置任务状态0全查 1:生成中 2:待生成 3:已生成 4:生成失败 5:已暂停
                     * @param _missionStatus 任务状态0全查 1:生成中 2:待生成 3:已生成 4:生成失败 5:已暂停
                     * 
                     */
                    void SetMissionStatus(const int64_t& _missionStatus);

                    /**
                     * 判断参数 MissionStatus 是否已赋值
                     * @return MissionStatus 是否已赋值
                     * 
                     */
                    bool MissionStatusHasBeenSet() const;

                    /**
                     * 获取排序字段 支持“NextStartTime” 与 “MissionStatus”
                     * @return Field 排序字段 支持“NextStartTime” 与 “MissionStatus”
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置排序字段 支持“NextStartTime” 与 “MissionStatus”
                     * @param _field 排序字段 支持“NextStartTime” 与 “MissionStatus”
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
                     * 获取‘desc' | 'asc'
                     * @return Sort ‘desc' | 'asc'
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置‘desc' | 'asc'
                     * @param _sort ‘desc' | 'asc'
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
                     * 获取限制条数
                     * @return Limit 限制条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制条数
                     * @param _limit 限制条数
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

                private:

                    /**
                     * 报表名 可模糊查询
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 报表类型 1:单次报表 2:周期报表 0全查
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 报表模板 1:综合分析报告 2:等保合规报告 0全查
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 任务状态0全查 1:生成中 2:待生成 3:已生成 4:生成失败 5:已暂停
                     */
                    int64_t m_missionStatus;
                    bool m_missionStatusHasBeenSet;

                    /**
                     * 排序字段 支持“NextStartTime” 与 “MissionStatus”
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * ‘desc' | 'asc'
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 限制条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEREPORTMISSIONLISTREQUEST_H_
