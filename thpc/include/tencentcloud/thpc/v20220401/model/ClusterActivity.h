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

#ifndef TENCENTCLOUD_THPC_V20220401_MODEL_CLUSTERACTIVITY_H_
#define TENCENTCLOUD_THPC_V20220401_MODEL_CLUSTERACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20220401/model/NodeActivity.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
        {
            namespace Model
            {
                /**
                * 符合条件的集群活动信息。
                */
                class ClusterActivity : public AbstractModel
                {
                public:
                    ClusterActivity();
                    ~ClusterActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param _clusterId 集群ID。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群活动ID。
                     * @return ActivityId 集群活动ID。
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置集群活动ID。
                     * @param _activityId 集群活动ID。
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取集群活动类型。取值范围：<br><li>CreateAndAddNodes：创建实例并添加进集群</li><br><li>RemoveNodesFromCluster：从集群移除实例</li><br><li>TerminateNodes：销毁实例</li><br><li>MountStorageOption：增加挂载选项并进行挂载</li><br><li>UmountStorageOption：删除集群挂载存储选项并解挂载</li>	
                     * @return ActivityType 集群活动类型。取值范围：<br><li>CreateAndAddNodes：创建实例并添加进集群</li><br><li>RemoveNodesFromCluster：从集群移除实例</li><br><li>TerminateNodes：销毁实例</li><br><li>MountStorageOption：增加挂载选项并进行挂载</li><br><li>UmountStorageOption：删除集群挂载存储选项并解挂载</li>	
                     * 
                     */
                    std::string GetActivityType() const;

                    /**
                     * 设置集群活动类型。取值范围：<br><li>CreateAndAddNodes：创建实例并添加进集群</li><br><li>RemoveNodesFromCluster：从集群移除实例</li><br><li>TerminateNodes：销毁实例</li><br><li>MountStorageOption：增加挂载选项并进行挂载</li><br><li>UmountStorageOption：删除集群挂载存储选项并解挂载</li>	
                     * @param _activityType 集群活动类型。取值范围：<br><li>CreateAndAddNodes：创建实例并添加进集群</li><br><li>RemoveNodesFromCluster：从集群移除实例</li><br><li>TerminateNodes：销毁实例</li><br><li>MountStorageOption：增加挂载选项并进行挂载</li><br><li>UmountStorageOption：删除集群挂载存储选项并解挂载</li>	
                     * 
                     */
                    void SetActivityType(const std::string& _activityType);

                    /**
                     * 判断参数 ActivityType 是否已赋值
                     * @return ActivityType 是否已赋值
                     * 
                     */
                    bool ActivityTypeHasBeenSet() const;

                    /**
                     * 获取集群活动状态。取值范围：<br><li>PENDING：等待运行</li><br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>PARTIALLY_SUCCESSFUL：活动部分成功</li><br><li>FAILED：活动失败</li>	
                     * @return ActivityStatus 集群活动状态。取值范围：<br><li>PENDING：等待运行</li><br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>PARTIALLY_SUCCESSFUL：活动部分成功</li><br><li>FAILED：活动失败</li>	
                     * 
                     */
                    std::string GetActivityStatus() const;

                    /**
                     * 设置集群活动状态。取值范围：<br><li>PENDING：等待运行</li><br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>PARTIALLY_SUCCESSFUL：活动部分成功</li><br><li>FAILED：活动失败</li>	
                     * @param _activityStatus 集群活动状态。取值范围：<br><li>PENDING：等待运行</li><br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>PARTIALLY_SUCCESSFUL：活动部分成功</li><br><li>FAILED：活动失败</li>	
                     * 
                     */
                    void SetActivityStatus(const std::string& _activityStatus);

                    /**
                     * 判断参数 ActivityStatus 是否已赋值
                     * @return ActivityStatus 是否已赋值
                     * 
                     */
                    bool ActivityStatusHasBeenSet() const;

                    /**
                     * 获取集群活动状态码。
                     * @return ActivityStatusCode 集群活动状态码。
                     * 
                     */
                    std::string GetActivityStatusCode() const;

                    /**
                     * 设置集群活动状态码。
                     * @param _activityStatusCode 集群活动状态码。
                     * 
                     */
                    void SetActivityStatusCode(const std::string& _activityStatusCode);

                    /**
                     * 判断参数 ActivityStatusCode 是否已赋值
                     * @return ActivityStatusCode 是否已赋值
                     * 
                     */
                    bool ActivityStatusCodeHasBeenSet() const;

                    /**
                     * 获取集群活动结果详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultDetail 集群活动结果详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultDetail() const;

                    /**
                     * 设置集群活动结果详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultDetail 集群活动结果详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultDetail(const std::string& _resultDetail);

                    /**
                     * 判断参数 ResultDetail 是否已赋值
                     * @return ResultDetail 是否已赋值
                     * 
                     */
                    bool ResultDetailHasBeenSet() const;

                    /**
                     * 获取集群活动起因。
                     * @return Cause 集群活动起因。
                     * 
                     */
                    std::string GetCause() const;

                    /**
                     * 设置集群活动起因。
                     * @param _cause 集群活动起因。
                     * 
                     */
                    void SetCause(const std::string& _cause);

                    /**
                     * 判断参数 Cause 是否已赋值
                     * @return Cause 是否已赋值
                     * 
                     */
                    bool CauseHasBeenSet() const;

                    /**
                     * 获取集群活动描述。
                     * @return Description 集群活动描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集群活动描述。
                     * @param _description 集群活动描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取集群活动相关节点活动集合。
                     * @return RelatedNodeActivitySet 集群活动相关节点活动集合。
                     * 
                     */
                    std::vector<NodeActivity> GetRelatedNodeActivitySet() const;

                    /**
                     * 设置集群活动相关节点活动集合。
                     * @param _relatedNodeActivitySet 集群活动相关节点活动集合。
                     * 
                     */
                    void SetRelatedNodeActivitySet(const std::vector<NodeActivity>& _relatedNodeActivitySet);

                    /**
                     * 判断参数 RelatedNodeActivitySet 是否已赋值
                     * @return RelatedNodeActivitySet 是否已赋值
                     * 
                     */
                    bool RelatedNodeActivitySetHasBeenSet() const;

                    /**
                     * 获取集群活动开始时间。
                     * @return StartTime 集群活动开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置集群活动开始时间。
                     * @param _startTime 集群活动开始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取集群活动结束时间。
                     * @return EndTime 集群活动结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置集群活动结束时间。
                     * @param _endTime 集群活动结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群活动ID。
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 集群活动类型。取值范围：<br><li>CreateAndAddNodes：创建实例并添加进集群</li><br><li>RemoveNodesFromCluster：从集群移除实例</li><br><li>TerminateNodes：销毁实例</li><br><li>MountStorageOption：增加挂载选项并进行挂载</li><br><li>UmountStorageOption：删除集群挂载存储选项并解挂载</li>	
                     */
                    std::string m_activityType;
                    bool m_activityTypeHasBeenSet;

                    /**
                     * 集群活动状态。取值范围：<br><li>PENDING：等待运行</li><br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>PARTIALLY_SUCCESSFUL：活动部分成功</li><br><li>FAILED：活动失败</li>	
                     */
                    std::string m_activityStatus;
                    bool m_activityStatusHasBeenSet;

                    /**
                     * 集群活动状态码。
                     */
                    std::string m_activityStatusCode;
                    bool m_activityStatusCodeHasBeenSet;

                    /**
                     * 集群活动结果详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultDetail;
                    bool m_resultDetailHasBeenSet;

                    /**
                     * 集群活动起因。
                     */
                    std::string m_cause;
                    bool m_causeHasBeenSet;

                    /**
                     * 集群活动描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 集群活动相关节点活动集合。
                     */
                    std::vector<NodeActivity> m_relatedNodeActivitySet;
                    bool m_relatedNodeActivitySetHasBeenSet;

                    /**
                     * 集群活动开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 集群活动结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_MODEL_CLUSTERACTIVITY_H_
