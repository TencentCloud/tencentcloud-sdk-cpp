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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_UPDATEPROBETASKCONFIGURATIONLISTREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_UPDATEPROBETASKCONFIGURATIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/ProbeTaskBasicConfiguration.h>


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
                     * 获取<p>任务 ID，如task-n1wchki8</p>
                     * @return TaskIds <p>任务 ID，如task-n1wchki8</p>
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置<p>任务 ID，如task-n1wchki8</p>
                     * @param _taskIds <p>任务 ID，如task-n1wchki8</p>
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>拨测节点，如10001，详细地区运营商拨测编号请联系云拨测。</p>
                     * @return Nodes <p>拨测节点，如10001，详细地区运营商拨测编号请联系云拨测。</p>
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置<p>拨测节点，如10001，详细地区运营商拨测编号请联系云拨测。</p>
                     * @param _nodes <p>拨测节点，如10001，详细地区运营商拨测编号请联系云拨测。</p>
                     * 
                     */
                    void SetNodes(const std::vector<std::string>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取<p>拨测间隔，如30，单位为分钟。</p>
                     * @return Interval <p>拨测间隔，如30，单位为分钟。</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>拨测间隔，如30，单位为分钟。</p>
                     * @param _interval <p>拨测间隔，如30，单位为分钟。</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>拨测参数，详细参数配置可参考云拨测官网文档。</p>
                     * @return Parameters <p>拨测参数，详细参数配置可参考云拨测官网文档。</p>
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置<p>拨测参数，详细参数配置可参考云拨测官网文档。</p>
                     * @param _parameters <p>拨测参数，详细参数配置可参考云拨测官网文档。</p>
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取<p>定时任务cron表达式</p>
                     * @return Cron <p>定时任务cron表达式</p>
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置<p>定时任务cron表达式</p>
                     * @param _cron <p>定时任务cron表达式</p>
                     * 
                     */
                    void SetCron(const std::string& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取<p>预付费套餐id<br>需要与taskId对应</p>
                     * @return ResourceIDs <p>预付费套餐id<br>需要与taskId对应</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIDs() const;

                    /**
                     * 设置<p>预付费套餐id<br>需要与taskId对应</p>
                     * @param _resourceIDs <p>预付费套餐id<br>需要与taskId对应</p>
                     * 
                     */
                    void SetResourceIDs(const std::vector<std::string>& _resourceIDs);

                    /**
                     * 判断参数 ResourceIDs 是否已赋值
                     * @return ResourceIDs 是否已赋值
                     * 
                     */
                    bool ResourceIDsHasBeenSet() const;

                    /**
                     * 获取<p>拨测节点的IP类型，0-不限，1-IPv4，2-IPv6</p>
                     * @return NodeIpType <p>拨测节点的IP类型，0-不限，1-IPv4，2-IPv6</p>
                     * 
                     */
                    int64_t GetNodeIpType() const;

                    /**
                     * 设置<p>拨测节点的IP类型，0-不限，1-IPv4，2-IPv6</p>
                     * @param _nodeIpType <p>拨测节点的IP类型，0-不限，1-IPv4，2-IPv6</p>
                     * 
                     */
                    void SetNodeIpType(const int64_t& _nodeIpType);

                    /**
                     * 判断参数 NodeIpType 是否已赋值
                     * @return NodeIpType 是否已赋值
                     * 
                     */
                    bool NodeIpTypeHasBeenSet() const;

                    /**
                     * 获取<p>批量任务名-地址</p>
                     * @return BatchTasks <p>批量任务名-地址</p>
                     * 
                     */
                    std::vector<ProbeTaskBasicConfiguration> GetBatchTasks() const;

                    /**
                     * 设置<p>批量任务名-地址</p>
                     * @param _batchTasks <p>批量任务名-地址</p>
                     * 
                     */
                    void SetBatchTasks(const std::vector<ProbeTaskBasicConfiguration>& _batchTasks);

                    /**
                     * 判断参数 BatchTasks 是否已赋值
                     * @return BatchTasks 是否已赋值
                     * 
                     */
                    bool BatchTasksHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID，如task-n1wchki8</p>
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * <p>拨测节点，如10001，详细地区运营商拨测编号请联系云拨测。</p>
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>拨测间隔，如30，单位为分钟。</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>拨测参数，详细参数配置可参考云拨测官网文档。</p>
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * <p>定时任务cron表达式</p>
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * <p>预付费套餐id<br>需要与taskId对应</p>
                     */
                    std::vector<std::string> m_resourceIDs;
                    bool m_resourceIDsHasBeenSet;

                    /**
                     * <p>拨测节点的IP类型，0-不限，1-IPv4，2-IPv6</p>
                     */
                    int64_t m_nodeIpType;
                    bool m_nodeIpTypeHasBeenSet;

                    /**
                     * <p>批量任务名-地址</p>
                     */
                    std::vector<ProbeTaskBasicConfiguration> m_batchTasks;
                    bool m_batchTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_UPDATEPROBETASKCONFIGURATIONLISTREQUEST_H_
