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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_FLOWDETAIL_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_FLOWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/FlowActivityDetail.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 流程详情
                */
                class FlowDetail : public AbstractModel
                {
                public:
                    FlowDetail();
                    ~FlowDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>流程ID（数据库主键）</p>
                     * @return FlowId <p>流程ID（数据库主键）</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>流程ID（数据库主键）</p>
                     * @param _flowId <p>流程ID（数据库主键）</p>
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>Temporal Workflow ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkFlowId <p>Temporal Workflow ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkFlowId() const;

                    /**
                     * 设置<p>Temporal Workflow ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workFlowId <p>Temporal Workflow ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkFlowId(const std::string& _workFlowId);

                    /**
                     * 判断参数 WorkFlowId 是否已赋值
                     * @return WorkFlowId 是否已赋值
                     * 
                     */
                    bool WorkFlowIdHasBeenSet() const;

                    /**
                     * 获取<p>流程编码</p>
                     * @return WorkFlowCode <p>流程编码</p>
                     * 
                     */
                    std::string GetWorkFlowCode() const;

                    /**
                     * 设置<p>流程编码</p>
                     * @param _workFlowCode <p>流程编码</p>
                     * 
                     */
                    void SetWorkFlowCode(const std::string& _workFlowCode);

                    /**
                     * 判断参数 WorkFlowCode 是否已赋值
                     * @return WorkFlowCode 是否已赋值
                     * 
                     */
                    bool WorkFlowCodeHasBeenSet() const;

                    /**
                     * 获取<p>流程进度，0~100</p>
                     * @return Progress <p>流程进度，0~100</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>流程进度，0~100</p>
                     * @param _progress <p>流程进度，0~100</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>流程状态</p>
                     * @return Status <p>流程状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>流程状态</p>
                     * @param _status <p>流程状态</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>流程活动列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Activities <p>流程活动列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FlowActivityDetail> GetActivities() const;

                    /**
                     * 设置<p>流程活动列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activities <p>流程活动列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivities(const std::vector<FlowActivityDetail>& _activities);

                    /**
                     * 判断参数 Activities 是否已赋值
                     * @return Activities 是否已赋值
                     * 
                     */
                    bool ActivitiesHasBeenSet() const;

                private:

                    /**
                     * <p>流程ID（数据库主键）</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Temporal Workflow ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workFlowId;
                    bool m_workFlowIdHasBeenSet;

                    /**
                     * <p>流程编码</p>
                     */
                    std::string m_workFlowCode;
                    bool m_workFlowCodeHasBeenSet;

                    /**
                     * <p>流程进度，0~100</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>流程状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>流程活动列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FlowActivityDetail> m_activities;
                    bool m_activitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_FLOWDETAIL_H_
