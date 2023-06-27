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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCORETRENDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCORETRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableScoreTrend请求参数结构体
                */
                class DescribeTableScoreTrendRequest : public AbstractModel
                {
                public:
                    DescribeTableScoreTrendRequest();
                    ~DescribeTableScoreTrendRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取开始时间 秒级时间戳
                     * @return StatisticsStartDate 开始时间 秒级时间戳
                     * 
                     */
                    int64_t GetStatisticsStartDate() const;

                    /**
                     * 设置开始时间 秒级时间戳
                     * @param _statisticsStartDate 开始时间 秒级时间戳
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
                     * 获取结束时间 秒级时间戳
                     * @return StatisticsEndDate 结束时间 秒级时间戳
                     * 
                     */
                    int64_t GetStatisticsEndDate() const;

                    /**
                     * 设置结束时间 秒级时间戳
                     * @param _statisticsEndDate 结束时间 秒级时间戳
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
                     * 获取表id
                     * @return TableId 表id
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表id
                     * @param _tableId 表id
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

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

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 开始时间 秒级时间戳
                     */
                    int64_t m_statisticsStartDate;
                    bool m_statisticsStartDateHasBeenSet;

                    /**
                     * 结束时间 秒级时间戳
                     */
                    int64_t m_statisticsEndDate;
                    bool m_statisticsEndDateHasBeenSet;

                    /**
                     * 表id
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 1:按全维度权重计算,2:按已配置维度权重计算,3:不按维度权重计算,默认1
                     */
                    std::string m_scoreType;
                    bool m_scoreTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLESCORETRENDREQUEST_H_
