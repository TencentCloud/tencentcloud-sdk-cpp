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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHDETAILRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AsyncResourceVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ListBatchDetail返回参数结构体
                */
                class ListBatchDetailResponse : public AbstractModel
                {
                public:
                    ListBatchDetailResponse();
                    ~ListBatchDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量操作ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 批量操作ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取运行类型：
ASYNC-异步
SYNC-同步
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunType 运行类型：
ASYNC-异步
SYNC-同步
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取成功列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessResource 成功列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AsyncResourceVO> GetSuccessResource() const;

                    /**
                     * 判断参数 SuccessResource 是否已赋值
                     * @return SuccessResource 是否已赋值
                     * 
                     */
                    bool SuccessResourceHasBeenSet() const;

                    /**
                     * 获取失败列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailResource 失败列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AsyncResourceVO> GetFailResource() const;

                    /**
                     * 判断参数 FailResource 是否已赋值
                     * @return FailResource 是否已赋值
                     * 
                     */
                    bool FailResourceHasBeenSet() const;

                    /**
                     * 获取job类型
BATCH_DELETE --批量删除：1、任务名称：ResourceName
BATCH_CREATE_VERSION --批量提交：1、任务名称：ResourceId 2、资源组：GroupId
BATCH_MODIFY_DATASOURCE --批量修改数据源：1、任务名称：ResourceName
BATCH_MODIFY_INCHARGE --批量修改责任人：1、任务名称：ResourceName
BATCH_MODIFY_PARAMETER --批量修改参数：1、任务名称：ResourceName
BATCH_MODIFY_SCHEDULE --批量修改调度计划：1、任务名称：ResourceName
BATCH_MODIFY_GROUPID --批量修改资源组：1、任务名称：ResourceName
BATCH_MODIFY_CONFIG --批量修改高级配置：1、任务名称：ResourceName
BATCH_MODIFY_SCHEDULE_PARAMETER --批量修改调度参数：1、任务名称：ResourceName
FORM_CREATE_VERSION--模版提交
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType job类型
BATCH_DELETE --批量删除：1、任务名称：ResourceName
BATCH_CREATE_VERSION --批量提交：1、任务名称：ResourceId 2、资源组：GroupId
BATCH_MODIFY_DATASOURCE --批量修改数据源：1、任务名称：ResourceName
BATCH_MODIFY_INCHARGE --批量修改责任人：1、任务名称：ResourceName
BATCH_MODIFY_PARAMETER --批量修改参数：1、任务名称：ResourceName
BATCH_MODIFY_SCHEDULE --批量修改调度计划：1、任务名称：ResourceName
BATCH_MODIFY_GROUPID --批量修改资源组：1、任务名称：ResourceName
BATCH_MODIFY_CONFIG --批量修改高级配置：1、任务名称：ResourceName
BATCH_MODIFY_SCHEDULE_PARAMETER --批量修改调度参数：1、任务名称：ResourceName
FORM_CREATE_VERSION--模版提交
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取CREATING("CREATING", "创建中"),
INIT("INIT", "已被创建"),
RUNNING("RUNNING", "运行中"),
SUCCESS("SUCCESS", "成功"),
FAIL("FAIL", "失败"),
PART_SUCCESS("PART_SUCCESS", "部分成功"),
PART_SUCCESS_WITH_ALARM("PART_SUCCESS_WITH_ALARM", "部分成功有告警"),
SUCCESS_WITH_ALARM("SUCCESS_WITH_ALARM", "成功有告警"),
UNKNOWN("UNKNOWN", "未知状态");
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobStatus CREATING("CREATING", "创建中"),
INIT("INIT", "已被创建"),
RUNNING("RUNNING", "运行中"),
SUCCESS("SUCCESS", "成功"),
FAIL("FAIL", "失败"),
PART_SUCCESS("PART_SUCCESS", "部分成功"),
PART_SUCCESS_WITH_ALARM("PART_SUCCESS_WITH_ALARM", "部分成功有告警"),
SUCCESS_WITH_ALARM("SUCCESS_WITH_ALARM", "成功有告警"),
UNKNOWN("UNKNOWN", "未知状态");
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalResource 资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalResource() const;

                    /**
                     * 判断参数 TotalResource 是否已赋值
                     * @return TotalResource 是否已赋值
                     * 
                     */
                    bool TotalResourceHasBeenSet() const;

                    /**
                     * 获取批量提交是是否需要审批，其他的批量操作默认为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedApprove 批量提交是是否需要审批，其他的批量操作默认为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNeedApprove() const;

                    /**
                     * 判断参数 NeedApprove 是否已赋值
                     * @return NeedApprove 是否已赋值
                     * 
                     */
                    bool NeedApproveHasBeenSet() const;

                private:

                    /**
                     * 批量操作ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 运行类型：
ASYNC-异步
SYNC-同步
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * 成功列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AsyncResourceVO> m_successResource;
                    bool m_successResourceHasBeenSet;

                    /**
                     * 失败列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AsyncResourceVO> m_failResource;
                    bool m_failResourceHasBeenSet;

                    /**
                     * job类型
BATCH_DELETE --批量删除：1、任务名称：ResourceName
BATCH_CREATE_VERSION --批量提交：1、任务名称：ResourceId 2、资源组：GroupId
BATCH_MODIFY_DATASOURCE --批量修改数据源：1、任务名称：ResourceName
BATCH_MODIFY_INCHARGE --批量修改责任人：1、任务名称：ResourceName
BATCH_MODIFY_PARAMETER --批量修改参数：1、任务名称：ResourceName
BATCH_MODIFY_SCHEDULE --批量修改调度计划：1、任务名称：ResourceName
BATCH_MODIFY_GROUPID --批量修改资源组：1、任务名称：ResourceName
BATCH_MODIFY_CONFIG --批量修改高级配置：1、任务名称：ResourceName
BATCH_MODIFY_SCHEDULE_PARAMETER --批量修改调度参数：1、任务名称：ResourceName
FORM_CREATE_VERSION--模版提交
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * CREATING("CREATING", "创建中"),
INIT("INIT", "已被创建"),
RUNNING("RUNNING", "运行中"),
SUCCESS("SUCCESS", "成功"),
FAIL("FAIL", "失败"),
PART_SUCCESS("PART_SUCCESS", "部分成功"),
PART_SUCCESS_WITH_ALARM("PART_SUCCESS_WITH_ALARM", "部分成功有告警"),
SUCCESS_WITH_ALARM("SUCCESS_WITH_ALARM", "成功有告警"),
UNKNOWN("UNKNOWN", "未知状态");
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalResource;
                    bool m_totalResourceHasBeenSet;

                    /**
                     * 批量提交是是否需要审批，其他的批量操作默认为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needApprove;
                    bool m_needApproveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LISTBATCHDETAILRESPONSE_H_
