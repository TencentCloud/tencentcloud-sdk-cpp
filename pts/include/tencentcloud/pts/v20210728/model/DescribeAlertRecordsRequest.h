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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeAlertRecords请求参数结构体
                */
                class DescribeAlertRecordsRequest : public AbstractModel
                {
                public:
                    DescribeAlertRecordsRequest();
                    ~DescribeAlertRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 ID 列表
                     * @return ProjectIds 项目 ID 列表
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目 ID 列表
                     * @param _projectIds 项目 ID 列表
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取场景 ID 列表
                     * @return ScenarioIds 场景 ID 列表
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置场景 ID 列表
                     * @param _scenarioIds 场景 ID 列表
                     * 
                     */
                    void SetScenarioIds(const std::vector<std::string>& _scenarioIds);

                    /**
                     * 判断参数 ScenarioIds 是否已赋值
                     * @return ScenarioIds 是否已赋值
                     * 
                     */
                    bool ScenarioIdsHasBeenSet() const;

                    /**
                     * 获取任务 ID 列表
                     * @return JobIds 任务 ID 列表
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置任务 ID 列表
                     * @param _jobIds 任务 ID 列表
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                    /**
                     * 获取是否正序
                     * @return Ascend 是否正序
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置是否正序
                     * @param _ascend 是否正序
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取排序项
                     * @return OrderBy 排序项
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序项
                     * @param _orderBy 排序项
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
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为20，最大为100
                     * @return Limit 返回数量，默认为20，最大为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大为100
                     * @param _limit 返回数量，默认为20，最大为100
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
                     * 获取按场景名筛选
                     * @return ScenarioNames 按场景名筛选
                     * 
                     */
                    std::vector<std::string> GetScenarioNames() const;

                    /**
                     * 设置按场景名筛选
                     * @param _scenarioNames 按场景名筛选
                     * 
                     */
                    void SetScenarioNames(const std::vector<std::string>& _scenarioNames);

                    /**
                     * 判断参数 ScenarioNames 是否已赋值
                     * @return ScenarioNames 是否已赋值
                     * 
                     */
                    bool ScenarioNamesHasBeenSet() const;

                private:

                    /**
                     * 项目 ID 列表
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 场景 ID 列表
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * 任务 ID 列表
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                    /**
                     * 是否正序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * 排序项
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按场景名筛选
                     */
                    std::vector<std::string> m_scenarioNames;
                    bool m_scenarioNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEALERTRECORDSREQUEST_H_
