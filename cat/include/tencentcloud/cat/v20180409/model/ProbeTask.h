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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASK_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/KeyValuePair.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测任务
                */
                class ProbeTask : public AbstractModel
                {
                public:
                    ProbeTask();
                    ~ProbeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>任务 ID</p>
                     * @return TaskId <p>任务 ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _taskId <p>任务 ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即时拨测只支持页面浏览，网络质量，文件下载</p>
                     * @return TaskType <p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即时拨测只支持页面浏览，网络质量，文件下载</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即时拨测只支持页面浏览，网络质量，文件下载</p>
                     * @param _taskType <p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即时拨测只支持页面浏览，网络质量，文件下载</p>
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
                     * 获取<p>拨测节点列表</p>
                     * @return Nodes <p>拨测节点列表</p>
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置<p>拨测节点列表</p>
                     * @param _nodes <p>拨测节点列表</p>
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
                     * 获取<p>拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIpType <p>拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodeIpType() const;

                    /**
                     * 设置<p>拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeIpType <p>拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>拨测间隔，单位为分钟</p>
                     * @return Interval <p>拨测间隔，单位为分钟</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>拨测间隔，单位为分钟</p>
                     * @param _interval <p>拨测间隔，单位为分钟</p>
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
                     * 获取<p>拨测参数</p>
                     * @return Parameters <p>拨测参数</p>
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置<p>拨测参数</p>
                     * @param _parameters <p>拨测参数</p>
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
                     * 获取<p>任务状态</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * @return Status <p>任务状态</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * @param _status <p>任务状态</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
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
                     * 获取<p>目标地址</p>
                     * @return TargetAddress <p>目标地址</p>
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置<p>目标地址</p>
                     * @param _targetAddress <p>目标地址</p>
                     * 
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     * 
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取<p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * @return PayMode <p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * @param _payMode <p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * @return OrderState <p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * 
                     */
                    int64_t GetOrderState() const;

                    /**
                     * 设置<p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * @param _orderState <p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * 
                     */
                    void SetOrderState(const int64_t& _orderState);

                    /**
                     * 判断参数 OrderState 是否已赋值
                     * @return OrderState 是否已赋值
                     * 
                     */
                    bool OrderStateHasBeenSet() const;

                    /**
                     * 获取<p>任务分类</p><li>1 = PC</li><li> 2 = Mobile </li>
                     * @return TaskCategory <p>任务分类</p><li>1 = PC</li><li> 2 = Mobile </li>
                     * 
                     */
                    int64_t GetTaskCategory() const;

                    /**
                     * 设置<p>任务分类</p><li>1 = PC</li><li> 2 = Mobile </li>
                     * @param _taskCategory <p>任务分类</p><li>1 = PC</li><li> 2 = Mobile </li>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>定时任务cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cron <p>定时任务cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置<p>定时任务cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cron <p>定时任务cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>定时任务启动状态</p><li>1 = 定时任务表达式生效</li><li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronState <p>定时任务启动状态</p><li>1 = 定时任务表达式生效</li><li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCronState() const;

                    /**
                     * 设置<p>定时任务启动状态</p><li>1 = 定时任务表达式生效</li><li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronState <p>定时任务启动状态</p><li>1 = 定时任务表达式生效</li><li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCronState(const int64_t& _cronState);

                    /**
                     * 判断参数 CronState 是否已赋值
                     * @return CronState 是否已赋值
                     * 
                     */
                    bool CronStateHasBeenSet() const;

                    /**
                     * 获取<p>任务当前绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInfoList <p>任务当前绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValuePair> GetTagInfoList() const;

                    /**
                     * 设置<p>任务当前绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInfoList <p>任务当前绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagInfoList(const std::vector<KeyValuePair>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     * 
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取<p>是否为同步账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubSyncFlag <p>是否为同步账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubSyncFlag() const;

                    /**
                     * 设置<p>是否为同步账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subSyncFlag <p>是否为同步账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubSyncFlag(const int64_t& _subSyncFlag);

                    /**
                     * 判断参数 SubSyncFlag 是否已赋值
                     * @return SubSyncFlag 是否已赋值
                     * 
                     */
                    bool SubSyncFlagHasBeenSet() const;

                private:

                    /**
                     * <p>任务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即时拨测只支持页面浏览，网络质量，文件下载</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>拨测节点列表</p>
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeIpType;
                    bool m_nodeIpTypeHasBeenSet;

                    /**
                     * <p>拨测间隔，单位为分钟</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>拨测参数</p>
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * <p>任务状态</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>目标地址</p>
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * <p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     */
                    int64_t m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * <p>任务分类</p><li>1 = PC</li><li> 2 = Mobile </li>
                     */
                    int64_t m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>定时任务cron表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * <p>定时任务启动状态</p><li>1 = 定时任务表达式生效</li><li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cronState;
                    bool m_cronStateHasBeenSet;

                    /**
                     * <p>任务当前绑定的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValuePair> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * <p>是否为同步账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_subSyncFlag;
                    bool m_subSyncFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASK_H_
