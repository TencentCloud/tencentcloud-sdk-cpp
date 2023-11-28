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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTLATESTRISKLISTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTLATESTRISKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentLatestRiskList请求参数结构体
                */
                class DescribeDSPAAssessmentLatestRiskListRequest : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentLatestRiskListRequest();
                    ~DescribeDSPAAssessmentLatestRiskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例Id
                     * @return DspaId dspa实例Id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例Id
                     * @param _dspaId dspa实例Id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取评估模板id
                     * @return TemplateId 评估模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置评估模板id
                     * @param _templateId 评估模板id
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取资产名称，数据源id
                     * @return DataSourceId 资产名称，数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置资产名称，数据源id
                     * @param _dataSourceId 资产名称，数据源id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取风险项
                     * @return ControlItemId 风险项
                     * 
                     */
                    std::string GetControlItemId() const;

                    /**
                     * 设置风险项
                     * @param _controlItemId 风险项
                     * 
                     */
                    void SetControlItemId(const std::string& _controlItemId);

                    /**
                     * 判断参数 ControlItemId 是否已赋值
                     * @return ControlItemId 是否已赋值
                     * 
                     */
                    bool ControlItemIdHasBeenSet() const;

                    /**
                     * 获取风险状态
                     * @return Status 风险状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置风险状态
                     * @param _status 风险状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
                     * @return BeginTime 扫描开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置扫描开始时间
                     * @param _beginTime 扫描开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取扫描结束时间
                     * @return EndTime 扫描结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置扫描结束时间
                     * @param _endTime 扫描结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取风险等级筛选
                     * @return RiskLevel 风险等级筛选
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级筛选
                     * @param _riskLevel 风险等级筛选
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险面筛选
                     * @return RiskSide 风险面筛选
                     * 
                     */
                    std::vector<std::string> GetRiskSide() const;

                    /**
                     * 设置风险面筛选
                     * @param _riskSide 风险面筛选
                     * 
                     */
                    void SetRiskSide(const std::vector<std::string>& _riskSide);

                    /**
                     * 判断参数 RiskSide 是否已赋值
                     * @return RiskSide 是否已赋值
                     * 
                     */
                    bool RiskSideHasBeenSet() const;

                    /**
                     * 获取ASC 正序，DESC倒叙
                     * @return TimeSort ASC 正序，DESC倒叙
                     * 
                     */
                    std::string GetTimeSort() const;

                    /**
                     * 设置ASC 正序，DESC倒叙
                     * @param _timeSort ASC 正序，DESC倒叙
                     * 
                     */
                    void SetTimeSort(const std::string& _timeSort);

                    /**
                     * 判断参数 TimeSort 是否已赋值
                     * @return TimeSort 是否已赋值
                     * 
                     */
                    bool TimeSortHasBeenSet() const;

                private:

                    /**
                     * dspa实例Id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 评估模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 限制条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 资产名称，数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 风险项
                     */
                    std::string m_controlItemId;
                    bool m_controlItemIdHasBeenSet;

                    /**
                     * 风险状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 风险等级筛选
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险面筛选
                     */
                    std::vector<std::string> m_riskSide;
                    bool m_riskSideHasBeenSet;

                    /**
                     * ASC 正序，DESC倒叙
                     */
                    std::string m_timeSort;
                    bool m_timeSortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTLATESTRISKLISTREQUEST_H_
