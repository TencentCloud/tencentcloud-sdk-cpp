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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCOREREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCOREREQUEST_H_

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
                * DescribeQualityScore请求参数结构体
                */
                class DescribeQualityScoreRequest : public AbstractModel
                {
                public:
                    DescribeQualityScoreRequest();
                    ~DescribeQualityScoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计日期
                     * @return StatisticsDate 统计日期
                     * 
                     */
                    int64_t GetStatisticsDate() const;

                    /**
                     * 设置统计日期
                     * @param _statisticsDate 统计日期
                     * 
                     */
                    void SetStatisticsDate(const int64_t& _statisticsDate);

                    /**
                     * 判断参数 StatisticsDate 是否已赋值
                     * @return StatisticsDate 是否已赋值
                     * 
                     */
                    bool StatisticsDateHasBeenSet() const;

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

                private:

                    /**
                     * 统计日期
                     */
                    int64_t m_statisticsDate;
                    bool m_statisticsDateHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEQUALITYSCOREREQUEST_H_
