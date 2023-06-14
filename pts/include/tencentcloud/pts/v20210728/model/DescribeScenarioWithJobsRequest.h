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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/ScenarioRelatedJobsParams.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeScenarioWithJobs请求参数结构体
                */
                class DescribeScenarioWithJobsRequest : public AbstractModel
                {
                public:
                    DescribeScenarioWithJobsRequest();
                    ~DescribeScenarioWithJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为20，最大为100
                     * @return Limit 返回数量，默认为20，最大为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大为100
                     * @param _limit 返回数量，默认为20，最大为100
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
                     * 获取项目ID数组
                     * @return ProjectIds 项目ID数组
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目ID数组
                     * @param _projectIds 项目ID数组
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
                     * 获取场景ID数组
                     * @return ScenarioIds 场景ID数组
                     * 
                     */
                    std::vector<std::string> GetScenarioIds() const;

                    /**
                     * 设置场景ID数组
                     * @param _scenarioIds 场景ID数组
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
                     * 获取场景名
                     * @return ScenarioName 场景名
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置场景名
                     * @param _scenarioName 场景名
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取场景状态数组
                     * @return ScenarioStatus 场景状态数组
                     * 
                     */
                    int64_t GetScenarioStatus() const;

                    /**
                     * 设置场景状态数组
                     * @param _scenarioStatus 场景状态数组
                     * 
                     */
                    void SetScenarioStatus(const int64_t& _scenarioStatus);

                    /**
                     * 判断参数 ScenarioStatus 是否已赋值
                     * @return ScenarioStatus 是否已赋值
                     * 
                     */
                    bool ScenarioStatusHasBeenSet() const;

                    /**
                     * 获取排序的列
                     * @return OrderBy 排序的列
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序的列
                     * @param _orderBy 排序的列
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
                     * 获取job相关参数
                     * @return ScenarioRelatedJobsParams job相关参数
                     * 
                     */
                    ScenarioRelatedJobsParams GetScenarioRelatedJobsParams() const;

                    /**
                     * 设置job相关参数
                     * @param _scenarioRelatedJobsParams job相关参数
                     * 
                     */
                    void SetScenarioRelatedJobsParams(const ScenarioRelatedJobsParams& _scenarioRelatedJobsParams);

                    /**
                     * 判断参数 ScenarioRelatedJobsParams 是否已赋值
                     * @return ScenarioRelatedJobsParams 是否已赋值
                     * 
                     */
                    bool ScenarioRelatedJobsParamsHasBeenSet() const;

                    /**
                     * 获取是否需要返回场景的脚本内容
                     * @return IgnoreScript 是否需要返回场景的脚本内容
                     * 
                     */
                    bool GetIgnoreScript() const;

                    /**
                     * 设置是否需要返回场景的脚本内容
                     * @param _ignoreScript 是否需要返回场景的脚本内容
                     * 
                     */
                    void SetIgnoreScript(const bool& _ignoreScript);

                    /**
                     * 判断参数 IgnoreScript 是否已赋值
                     * @return IgnoreScript 是否已赋值
                     * 
                     */
                    bool IgnoreScriptHasBeenSet() const;

                    /**
                     * 获取是否需要返回测试数据文件信息
                     * @return IgnoreDataset 是否需要返回测试数据文件信息
                     * 
                     */
                    bool GetIgnoreDataset() const;

                    /**
                     * 设置是否需要返回测试数据文件信息
                     * @param _ignoreDataset 是否需要返回测试数据文件信息
                     * 
                     */
                    void SetIgnoreDataset(const bool& _ignoreDataset);

                    /**
                     * 判断参数 IgnoreDataset 是否已赋值
                     * @return IgnoreDataset 是否已赋值
                     * 
                     */
                    bool IgnoreDatasetHasBeenSet() const;

                    /**
                     * 获取场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter	
                     * @return ScenarioType 场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter	
                     * 
                     */
                    std::string GetScenarioType() const;

                    /**
                     * 设置场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter	
                     * @param _scenarioType 场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter	
                     * 
                     */
                    void SetScenarioType(const std::string& _scenarioType);

                    /**
                     * 判断参数 ScenarioType 是否已赋值
                     * @return ScenarioType 是否已赋值
                     * 
                     */
                    bool ScenarioTypeHasBeenSet() const;

                    /**
                     * 获取创建人员
                     * @return Owner 创建人员
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置创建人员
                     * @param _owner 创建人员
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 项目ID数组
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 场景ID数组
                     */
                    std::vector<std::string> m_scenarioIds;
                    bool m_scenarioIdsHasBeenSet;

                    /**
                     * 场景名
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * 场景状态数组
                     */
                    int64_t m_scenarioStatus;
                    bool m_scenarioStatusHasBeenSet;

                    /**
                     * 排序的列
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 是否正序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * job相关参数
                     */
                    ScenarioRelatedJobsParams m_scenarioRelatedJobsParams;
                    bool m_scenarioRelatedJobsParamsHasBeenSet;

                    /**
                     * 是否需要返回场景的脚本内容
                     */
                    bool m_ignoreScript;
                    bool m_ignoreScriptHasBeenSet;

                    /**
                     * 是否需要返回测试数据文件信息
                     */
                    bool m_ignoreDataset;
                    bool m_ignoreDatasetHasBeenSet;

                    /**
                     * 场景类型，如pts-http, pts-js, pts-trpc, pts-jmeter	
                     */
                    std::string m_scenarioType;
                    bool m_scenarioTypeHasBeenSet;

                    /**
                     * 创建人员
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESCENARIOWITHJOBSREQUEST_H_
