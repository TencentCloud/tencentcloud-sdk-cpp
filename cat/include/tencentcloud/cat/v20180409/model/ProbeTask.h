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
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 任务名
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
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param _taskId 任务 ID
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
                     * 获取拨测类型
<li>1 = 页面浏览</li>
<li> 2 =文件上传 </li>
<li> 3 = 文件下载</li>
<li> 4 = 端口性能 </li>
<li> 5 = 网络质量 </li>
<li> 6 =流媒体 </li>

即时拨测只支持页面浏览，网络质量，文件下载
                     * @return TaskType 拨测类型
<li>1 = 页面浏览</li>
<li> 2 =文件上传 </li>
<li> 3 = 文件下载</li>
<li> 4 = 端口性能 </li>
<li> 5 = 网络质量 </li>
<li> 6 =流媒体 </li>

即时拨测只支持页面浏览，网络质量，文件下载
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置拨测类型
<li>1 = 页面浏览</li>
<li> 2 =文件上传 </li>
<li> 3 = 文件下载</li>
<li> 4 = 端口性能 </li>
<li> 5 = 网络质量 </li>
<li> 6 =流媒体 </li>

即时拨测只支持页面浏览，网络质量，文件下载
                     * @param _taskType 拨测类型
<li>1 = 页面浏览</li>
<li> 2 =文件上传 </li>
<li> 3 = 文件下载</li>
<li> 4 = 端口性能 </li>
<li> 5 = 网络质量 </li>
<li> 6 =流媒体 </li>

即时拨测只支持页面浏览，网络质量，文件下载
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
                     * 获取拨测节点列表
                     * @return Nodes 拨测节点列表
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置拨测节点列表
                     * @param _nodes 拨测节点列表
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
                     * 获取拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIpType 拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodeIpType() const;

                    /**
                     * 设置拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeIpType 拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6
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
                     * 获取拨测参数
                     * @return Parameters 拨测参数
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置拨测参数
                     * @param _parameters 拨测参数
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
                     * 获取任务状态
<li>1 = 创建中</li>
<li> 2 = 运行中 </li>
<li> 3 = 运行异常 </li>
<li> 4 = 暂停中 </li>
<li> 5 = 暂停异常 </li>
<li> 6 = 任务暂停 </li>
<li> 7 = 任务删除中 </li>
<li> 8 = 任务删除异常 </li>
<li> 9 = 任务删除</li>
<li> 10 = 定时任务暂停中 </li>
                     * @return Status 任务状态
<li>1 = 创建中</li>
<li> 2 = 运行中 </li>
<li> 3 = 运行异常 </li>
<li> 4 = 暂停中 </li>
<li> 5 = 暂停异常 </li>
<li> 6 = 任务暂停 </li>
<li> 7 = 任务删除中 </li>
<li> 8 = 任务删除异常 </li>
<li> 9 = 任务删除</li>
<li> 10 = 定时任务暂停中 </li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态
<li>1 = 创建中</li>
<li> 2 = 运行中 </li>
<li> 3 = 运行异常 </li>
<li> 4 = 暂停中 </li>
<li> 5 = 暂停异常 </li>
<li> 6 = 任务暂停 </li>
<li> 7 = 任务删除中 </li>
<li> 8 = 任务删除异常 </li>
<li> 9 = 任务删除</li>
<li> 10 = 定时任务暂停中 </li>
                     * @param _status 任务状态
<li>1 = 创建中</li>
<li> 2 = 运行中 </li>
<li> 3 = 运行异常 </li>
<li> 4 = 暂停中 </li>
<li> 5 = 暂停异常 </li>
<li> 6 = 任务暂停 </li>
<li> 7 = 任务删除中 </li>
<li> 8 = 任务删除异常 </li>
<li> 9 = 任务删除</li>
<li> 10 = 定时任务暂停中 </li>
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
                     * 获取目标地址
                     * @return TargetAddress 目标地址
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置目标地址
                     * @param _targetAddress 目标地址
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
                     * 获取付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @return PayMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @param _payMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
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
                     * 获取订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * @return OrderState 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * 
                     */
                    int64_t GetOrderState() const;

                    /**
                     * 设置订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * @param _orderState 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
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
                     * 获取定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cron 定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCron() const;

                    /**
                     * 设置定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cron 定时任务cron表达式
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
                     * 获取定时任务启动状态
<li>1 = 定时任务表达式生效</li>
<li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronState 定时任务启动状态
<li>1 = 定时任务表达式生效</li>
<li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCronState() const;

                    /**
                     * 设置定时任务启动状态
<li>1 = 定时任务表达式生效</li>
<li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronState 定时任务启动状态
<li>1 = 定时任务表达式生效</li>
<li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
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
                     * 获取任务当前绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInfoList 任务当前绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValuePair> GetTagInfoList() const;

                    /**
                     * 设置任务当前绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInfoList 任务当前绑定的标签
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
                     * 获取是否为同步账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubSyncFlag 是否为同步账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSubSyncFlag() const;

                    /**
                     * 设置是否为同步账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subSyncFlag 是否为同步账号
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
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 拨测类型
<li>1 = 页面浏览</li>
<li> 2 =文件上传 </li>
<li> 3 = 文件下载</li>
<li> 4 = 端口性能 </li>
<li> 5 = 网络质量 </li>
<li> 6 =流媒体 </li>

即时拨测只支持页面浏览，网络质量，文件下载
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 拨测节点列表
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 拨测任务所选的拨测点IP类型，0-不限，1-IPv4，2-IPv6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeIpType;
                    bool m_nodeIpTypeHasBeenSet;

                    /**
                     * 拨测间隔，单位为分钟
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 拨测参数
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 任务状态
<li>1 = 创建中</li>
<li> 2 = 运行中 </li>
<li> 3 = 运行异常 </li>
<li> 4 = 暂停中 </li>
<li> 5 = 暂停异常 </li>
<li> 6 = 任务暂停 </li>
<li> 7 = 任务删除中 </li>
<li> 8 = 任务删除异常 </li>
<li> 9 = 任务删除</li>
<li> 10 = 定时任务暂停中 </li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 目标地址
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    int64_t m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    int64_t m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * 定时任务启动状态
<li>1 = 定时任务表达式生效</li>
<li> 2 = 定时任务表达式未生效（一般为任务手动暂停）</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cronState;
                    bool m_cronStateHasBeenSet;

                    /**
                     * 任务当前绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValuePair> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * 是否为同步账号
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
