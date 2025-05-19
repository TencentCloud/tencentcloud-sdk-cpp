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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/StageInfoDetail.h>
#include <tencentcloud/emr/v20190103/model/FlowParamsDesc.h>
#include <tencentcloud/emr/v20190103/model/FlowExtraDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeClusterFlowStatusDetail返回参数结构体
                */
                class DescribeClusterFlowStatusDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterFlowStatusDetailResponse();
                    ~DescribeClusterFlowStatusDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务步骤详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StageDetails 任务步骤详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StageInfoDetail> GetStageDetails() const;

                    /**
                     * 判断参数 StageDetails 是否已赋值
                     * @return StageDetails 是否已赋值
                     * 
                     */
                    bool StageDetailsHasBeenSet() const;

                    /**
                     * 获取任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowDesc 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FlowParamsDesc> GetFlowDesc() const;

                    /**
                     * 判断参数 FlowDesc 是否已赋值
                     * @return FlowDesc 是否已赋值
                     * 
                     */
                    bool FlowDescHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return FlowName 任务名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取总任务流程进度：
例如：0.8
                     * @return FlowTotalProgress 总任务流程进度：
例如：0.8
                     * 
                     */
                    double GetFlowTotalProgress() const;

                    /**
                     * 判断参数 FlowTotalProgress 是否已赋值
                     * @return FlowTotalProgress 是否已赋值
                     * 
                     */
                    bool FlowTotalProgressHasBeenSet() const;

                    /**
                     * 获取定义流程总状态：
0:初始化，
1:运行中，
2:完成，
3:完成（存在跳过步骤），
-1:失败，
-3:阻塞，
                     * @return FlowTotalStatus 定义流程总状态：
0:初始化，
1:运行中，
2:完成，
3:完成（存在跳过步骤），
-1:失败，
-3:阻塞，
                     * 
                     */
                    int64_t GetFlowTotalStatus() const;

                    /**
                     * 判断参数 FlowTotalStatus 是否已赋值
                     * @return FlowTotalStatus 是否已赋值
                     * 
                     */
                    bool FlowTotalStatusHasBeenSet() const;

                    /**
                     * 获取流程额外信息
NeedExtraDetail为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowExtraDetail 流程额外信息
NeedExtraDetail为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FlowExtraDetail> GetFlowExtraDetail() const;

                    /**
                     * 判断参数 FlowExtraDetail 是否已赋值
                     * @return FlowExtraDetail 是否已赋值
                     * 
                     */
                    bool FlowExtraDetailHasBeenSet() const;

                    /**
                     * 获取流程描述
                     * @return FlowInfo 流程描述
                     * 
                     */
                    std::string GetFlowInfo() const;

                    /**
                     * 判断参数 FlowInfo 是否已赋值
                     * @return FlowInfo 是否已赋值
                     * 
                     */
                    bool FlowInfoHasBeenSet() const;

                private:

                    /**
                     * 任务步骤详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StageInfoDetail> m_stageDetails;
                    bool m_stageDetailsHasBeenSet;

                    /**
                     * 任务参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FlowParamsDesc> m_flowDesc;
                    bool m_flowDescHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 总任务流程进度：
例如：0.8
                     */
                    double m_flowTotalProgress;
                    bool m_flowTotalProgressHasBeenSet;

                    /**
                     * 定义流程总状态：
0:初始化，
1:运行中，
2:完成，
3:完成（存在跳过步骤），
-1:失败，
-3:阻塞，
                     */
                    int64_t m_flowTotalStatus;
                    bool m_flowTotalStatusHasBeenSet;

                    /**
                     * 流程额外信息
NeedExtraDetail为true时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FlowExtraDetail> m_flowExtraDetail;
                    bool m_flowExtraDetailHasBeenSet;

                    /**
                     * 流程描述
                     */
                    std::string m_flowInfo;
                    bool m_flowInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECLUSTERFLOWSTATUSDETAILRESPONSE_H_
