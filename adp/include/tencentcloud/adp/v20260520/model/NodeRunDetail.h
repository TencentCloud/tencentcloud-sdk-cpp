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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/NodeRun.h>
#include <tencentcloud/adp/v20260520/model/NodeRunContent.h>
#include <tencentcloud/adp/v20260520/model/NodeRunExecution.h>
#include <tencentcloud/adp/v20260520/model/NodeRunLog.h>
#include <tencentcloud/adp/v20260520/model/Statistic.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 工作流节点运行详情
                */
                class NodeRunDetail : public AbstractModel
                {
                public:
                    NodeRunDetail();
                    ~NodeRunDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点运行信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeRun <p>节点运行信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeRun GetNodeRun() const;

                    /**
                     * 设置<p>节点运行信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeRun <p>节点运行信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeRun(const NodeRun& _nodeRun);

                    /**
                     * 判断参数 NodeRun 是否已赋值
                     * @return NodeRun 是否已赋值
                     * 
                     */
                    bool NodeRunHasBeenSet() const;

                    /**
                     * 获取<p>节点运行内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeRunContent <p>节点运行内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeRunContent GetNodeRunContent() const;

                    /**
                     * 设置<p>节点运行内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeRunContent <p>节点运行内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeRunContent(const NodeRunContent& _nodeRunContent);

                    /**
                     * 判断参数 NodeRunContent 是否已赋值
                     * @return NodeRunContent 是否已赋值
                     * 
                     */
                    bool NodeRunContentHasBeenSet() const;

                    /**
                     * 获取<p>节点运行过程</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeRunExecution <p>节点运行过程</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeRunExecution GetNodeRunExecution() const;

                    /**
                     * 设置<p>节点运行过程</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeRunExecution <p>节点运行过程</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeRunExecution(const NodeRunExecution& _nodeRunExecution);

                    /**
                     * 判断参数 NodeRunExecution 是否已赋值
                     * @return NodeRunExecution 是否已赋值
                     * 
                     */
                    bool NodeRunExecutionHasBeenSet() const;

                    /**
                     * 获取<p>节点运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeRunLog <p>节点运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeRunLog GetNodeRunLog() const;

                    /**
                     * 设置<p>节点运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeRunLog <p>节点运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeRunLog(const NodeRunLog& _nodeRunLog);

                    /**
                     * 判断参数 NodeRunLog 是否已赋值
                     * @return NodeRunLog 是否已赋值
                     * 
                     */
                    bool NodeRunLogHasBeenSet() const;

                    /**
                     * 获取<p>统计信息</p>
                     * @return StatisticList <p>统计信息</p>
                     * 
                     */
                    std::vector<Statistic> GetStatisticList() const;

                    /**
                     * 设置<p>统计信息</p>
                     * @param _statisticList <p>统计信息</p>
                     * 
                     */
                    void SetStatisticList(const std::vector<Statistic>& _statisticList);

                    /**
                     * 判断参数 StatisticList 是否已赋值
                     * @return StatisticList 是否已赋值
                     * 
                     */
                    bool StatisticListHasBeenSet() const;

                private:

                    /**
                     * <p>节点运行信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeRun m_nodeRun;
                    bool m_nodeRunHasBeenSet;

                    /**
                     * <p>节点运行内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeRunContent m_nodeRunContent;
                    bool m_nodeRunContentHasBeenSet;

                    /**
                     * <p>节点运行过程</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeRunExecution m_nodeRunExecution;
                    bool m_nodeRunExecutionHasBeenSet;

                    /**
                     * <p>节点运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeRunLog m_nodeRunLog;
                    bool m_nodeRunLogHasBeenSet;

                    /**
                     * <p>统计信息</p>
                     */
                    std::vector<Statistic> m_statisticList;
                    bool m_statisticListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNDETAIL_H_
