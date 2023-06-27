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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCORETRENDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCORETRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeQualityScoreTrend请求参数结构体
                */
                class DescribeQualityScoreTrendRequest : public AbstractModel
                {
                public:
                    DescribeQualityScoreTrendRequest();
                    ~DescribeQualityScoreTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计开始日期
                     * @return StatisticsStartDate 统计开始日期
                     * 
                     */
                    int64_t GetStatisticsStartDate() const;

                    /**
                     * 设置统计开始日期
                     * @param _statisticsStartDate 统计开始日期
                     * 
                     */
                    void SetStatisticsStartDate(const int64_t& _statisticsStartDate);

                    /**
                     * 判断参数 StatisticsStartDate 是否已赋值
                     * @return StatisticsStartDate 是否已赋值
                     * 
                     */
                    bool StatisticsStartDateHasBeenSet() const;

                    /**
                     * 获取统计结束日期
                     * @return StatisticsEndDate 统计结束日期
                     * 
                     */
                    int64_t GetStatisticsEndDate() const;

                    /**
                     * 设置统计结束日期
                     * @param _statisticsEndDate 统计结束日期
                     * 
                     */
                    void SetStatisticsEndDate(const int64_t& _statisticsEndDate);

                    /**
                     * 判断参数 StatisticsEndDate 是否已赋值
                     * @return StatisticsEndDate 是否已赋值
                     * 
                     */
                    bool StatisticsEndDateHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据来源id
                     * @return DatasourceId 数据来源id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据来源id
                     * @param _datasourceId 数据来源id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * @return ScoreType 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * 
                     */
                    std::string GetScoreType() const;

                    /**
                     * 设置1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * @param _scoreType 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     * 
                     */
                    void SetScoreType(const std::string& _scoreType);

                    /**
                     * 判断参数 ScoreType 是否已赋值
                     * @return ScoreType 是否已赋值
                     * 
                     */
                    bool ScoreTypeHasBeenSet() const;

                    /**
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param _filters 过滤参数
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
                     * 统计开始日期
                     */
                    int64_t m_statisticsStartDate;
                    bool m_statisticsStartDateHasBeenSet;

                    /**
                     * 统计结束日期
                     */
                    int64_t m_statisticsEndDate;
                    bool m_statisticsEndDateHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据来源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     */
                    std::string m_scoreType;
                    bool m_scoreTypeHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCORETRENDREQUEST_H_
