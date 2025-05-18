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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_CREATEPROBETASKSREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_CREATEPROBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/ProbeTaskBasicConfiguration.h>
#include <tencentcloud/cat/v20180409/model/Tag.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * CreateProbeTasks请求参数结构体
                */
                class CreateProbeTasksRequest : public AbstractModel
                {
                public:
                    CreateProbeTasksRequest();
                    ~CreateProbeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量任务名-地址
                     * @return BatchTasks 批量任务名-地址
                     * 
                     */
                    std::vector<ProbeTaskBasicConfiguration> GetBatchTasks() const;

                    /**
                     * 设置批量任务名-地址
                     * @param _batchTasks 批量任务名-地址
                     * 
                     */
                    void SetBatchTasks(const std::vector<ProbeTaskBasicConfiguration>& _batchTasks);

                    /**
                     * 判断参数 BatchTasks 是否已赋值
                     * @return BatchTasks 是否已赋值
                     * 
                     */
                    bool BatchTasksHasBeenSet() const;

                    /**
                     * 获取任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois
                     * @return TaskType 任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois
                     * @param _taskType 任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取拨测节点，如10001，具体拨测地域运营商对应的拨测点编号可联系云拨测确认。
                     * @return Nodes 拨测节点，如10001，具体拨测地域运营商对应的拨测点编号可联系云拨测确认。
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置拨测节点，如10001，具体拨测地域运营商对应的拨测点编号可联系云拨测确认。
                     * @param _nodes 拨测节点，如10001，具体拨测地域运营商对应的拨测点编号可联系云拨测确认。
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
                     * 获取拨测间隔，单位为分钟
                     * @return Interval 拨测间隔，单位为分钟
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置拨测间隔，单位为分钟
                     * @param _interval 拨测间隔，单位为分钟
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
                     * 获取拨测参数，详细可参考云拨测官方文档,链接:https://cloud.tencent.com/document/product/248/87308#createprobetasks。
                     * @return Parameters 拨测参数，详细可参考云拨测官方文档,链接:https://cloud.tencent.com/document/product/248/87308#createprobetasks。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置拨测参数，详细可参考云拨测官方文档,链接:https://cloud.tencent.com/document/product/248/87308#createprobetasks。
                     * @param _parameters 拨测参数，详细可参考云拨测官方文档,链接:https://cloud.tencent.com/document/product/248/87308#createprobetasks。
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
                     * 获取任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * @return TaskCategory 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * 
                     */
                    int64_t GetTaskCategory() const;

                    /**
                     * 设置任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * @param _taskCategory 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * 
                     */
                    void SetTaskCategory(const int64_t& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     * 
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取定时任务cron表达式
                     * @return Cron 定时任务cron表达式
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置定时任务cron表达式
                     * @param _cron 定时任务cron表达式
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
                     * 获取资源标签值
                     * @return Tag 资源标签值
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置资源标签值
                     * @param _tag 资源标签值
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。
                     * @return ProbeType 测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。
                     * 
                     */
                    uint64_t GetProbeType() const;

                    /**
                     * 设置测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。
                     * @param _probeType 测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。
                     * 
                     */
                    void SetProbeType(const uint64_t& _probeType);

                    /**
                     * 判断参数 ProbeType 是否已赋值
                     * @return ProbeType 是否已赋值
                     * 
                     */
                    bool ProbeTypeHasBeenSet() const;

                    /**
                     * 获取插件类型，如CDN，详情参考云拨测官方文档。
                     * @return PluginSource 插件类型，如CDN，详情参考云拨测官方文档。
                     * 
                     */
                    std::string GetPluginSource() const;

                    /**
                     * 设置插件类型，如CDN，详情参考云拨测官方文档。
                     * @param _pluginSource 插件类型，如CDN，详情参考云拨测官方文档。
                     * 
                     */
                    void SetPluginSource(const std::string& _pluginSource);

                    /**
                     * 判断参数 PluginSource 是否已赋值
                     * @return PluginSource 是否已赋值
                     * 
                     */
                    bool PluginSourceHasBeenSet() const;

                    /**
                     * 获取客户端ID
                     * @return ClientNum 客户端ID
                     * 
                     */
                    std::string GetClientNum() const;

                    /**
                     * 设置客户端ID
                     * @param _clientNum 客户端ID
                     * 
                     */
                    void SetClientNum(const std::string& _clientNum);

                    /**
                     * 判断参数 ClientNum 是否已赋值
                     * @return ClientNum 是否已赋值
                     * 
                     */
                    bool ClientNumHasBeenSet() const;

                    /**
                     * 获取拨测点IP类型：0-不限制IP类型，1-IPv4，2-IPv6
                     * @return NodeIpType 拨测点IP类型：0-不限制IP类型，1-IPv4，2-IPv6
                     * 
                     */
                    int64_t GetNodeIpType() const;

                    /**
                     * 设置拨测点IP类型：0-不限制IP类型，1-IPv4，2-IPv6
                     * @param _nodeIpType 拨测点IP类型：0-不限制IP类型，1-IPv4，2-IPv6
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
                     * 获取供应商子账户同步标志
                     * @return SubSyncFlag 供应商子账户同步标志
                     * 
                     */
                    int64_t GetSubSyncFlag() const;

                    /**
                     * 设置供应商子账户同步标志
                     * @param _subSyncFlag 供应商子账户同步标志
                     * 
                     */
                    void SetSubSyncFlag(const int64_t& _subSyncFlag);

                    /**
                     * 判断参数 SubSyncFlag 是否已赋值
                     * @return SubSyncFlag 是否已赋值
                     * 
                     */
                    bool SubSyncFlagHasBeenSet() const;

                    /**
                     * 获取创建者名称
                     * @return RtxName 创建者名称
                     * 
                     */
                    std::string GetRtxName() const;

                    /**
                     * 设置创建者名称
                     * @param _rtxName 创建者名称
                     * 
                     */
                    void SetRtxName(const std::string& _rtxName);

                    /**
                     * 判断参数 RtxName 是否已赋值
                     * @return RtxName 是否已赋值
                     * 
                     */
                    bool RtxNameHasBeenSet() const;

                private:

                    /**
                     * 批量任务名-地址
                     */
                    std::vector<ProbeTaskBasicConfiguration> m_batchTasks;
                    bool m_batchTasksHasBeenSet;

                    /**
                     * 任务类型，如1、2、3、4、5、6、7；1-页面性能、2-文件上传、3-文件下载、4-端口性能、5-网络质量、6-音视频体验、7-域名whois
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 拨测节点，如10001，具体拨测地域运营商对应的拨测点编号可联系云拨测确认。
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 拨测间隔，单位为分钟
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 拨测参数，详细可参考云拨测官方文档,链接:https://cloud.tencent.com/document/product/248/87308#createprobetasks。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    int64_t m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * 定时任务cron表达式
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * 资源标签值
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 测试类型，包含定时测试与即时测试。0-定时拨测，其它表示即时拨测。
                     */
                    uint64_t m_probeType;
                    bool m_probeTypeHasBeenSet;

                    /**
                     * 插件类型，如CDN，详情参考云拨测官方文档。
                     */
                    std::string m_pluginSource;
                    bool m_pluginSourceHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_clientNum;
                    bool m_clientNumHasBeenSet;

                    /**
                     * 拨测点IP类型：0-不限制IP类型，1-IPv4，2-IPv6
                     */
                    int64_t m_nodeIpType;
                    bool m_nodeIpTypeHasBeenSet;

                    /**
                     * 供应商子账户同步标志
                     */
                    int64_t m_subSyncFlag;
                    bool m_subSyncFlagHasBeenSet;

                    /**
                     * 创建者名称
                     */
                    std::string m_rtxName;
                    bool m_rtxNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_CREATEPROBETASKSREQUEST_H_
