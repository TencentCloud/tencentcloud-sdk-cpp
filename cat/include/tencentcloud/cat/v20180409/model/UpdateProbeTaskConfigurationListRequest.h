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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_UPDATEPROBETASKCONFIGURATIONLISTREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_UPDATEPROBETASKCONFIGURATIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * UpdateProbeTaskConfigurationList请求参数结构体
                */
                class UpdateProbeTaskConfigurationListRequest : public AbstractModel
                {
                public:
                    UpdateProbeTaskConfigurationListRequest();
                    ~UpdateProbeTaskConfigurationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID
                     * @return TaskIds 任务 ID
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务 ID
                     * @param TaskIds 任务 ID
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取拨测节点
                     * @return Nodes 拨测节点
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置拨测节点
                     * @param Nodes 拨测节点
                     */
                    void SetNodes(const std::vector<std::string>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取拨测间隔
                     * @return Interval 拨测间隔
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置拨测间隔
                     * @param Interval 拨测间隔
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取拨测参数
                     * @return Parameters 拨测参数
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置拨测参数
                     * @param Parameters 拨测参数
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取定时任务cron表达式
                     * @return Cron 定时任务cron表达式
                     */
                    std::string GetCron() const;

                    /**
                     * 设置定时任务cron表达式
                     * @param Cron 定时任务cron表达式
                     */
                    void SetCron(const std::string& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     */
                    bool CronHasBeenSet() const;

                private:

                    /**
                     * 任务 ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 拨测节点
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 拨测间隔
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 拨测参数
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 定时任务cron表达式
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_UPDATEPROBETASKCONFIGURATIONLISTREQUEST_H_
