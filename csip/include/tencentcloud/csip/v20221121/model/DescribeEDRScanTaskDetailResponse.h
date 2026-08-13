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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRSCANTASKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRSCANTASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRScanTaskHostItem.h>
#include <tencentcloud/csip/v20221121/model/EDRScanTaskContainerItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEDRScanTaskDetail返回参数结构体
                */
                class DescribeEDRScanTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeEDRScanTaskDetailResponse();
                    ~DescribeEDRScanTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
                     * @return TaskName <p>任务名称</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>整体状态：WAIT/SCANNING/FINISHED/FAILED/CANCELED/TERMINATED/TIMEOUT</p>
                     * @return Status <p>整体状态：WAIT/SCANNING/FINISHED/FAILED/CANCELED/TERMINATED/TIMEOUT</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务类型：HOST/CONTAINER</p>
                     * @return TaskType <p>任务类型：HOST/CONTAINER</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>触发方式：MANUAL/CYCLE</p>
                     * @return TriggerType <p>触发方式：MANUAL/CYCLE</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始时间</p>
                     * @return StartTime <p>任务开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间</p>
                     * @return EndTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>检测模式：full/quick/include/exclude</p>
                     * @return ScanType <p>检测模式：full/quick/include/exclude</p>
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>自选路径列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomPaths <p>自选路径列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomPaths() const;

                    /**
                     * 判断参数 CustomPaths 是否已赋值
                     * @return CustomPaths 是否已赋值
                     * 
                     */
                    bool CustomPathsHasBeenSet() const;

                    /**
                     * 获取<p>超时时间（秒）</p>
                     * @return Timeout <p>超时时间（秒）</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否开启深度检测：0-否/1-是</p>
                     * @return EnableMemShellScan <p>是否开启深度检测：0-否/1-是</p>
                     * 
                     */
                    int64_t GetEnableMemShellScan() const;

                    /**
                     * 判断参数 EnableMemShellScan 是否已赋值
                     * @return EnableMemShellScan 是否已赋值
                     * 
                     */
                    bool EnableMemShellScanHasBeenSet() const;

                    /**
                     * 获取<p>创建者账号AppId</p>
                     * @return CreateAppID <p>创建者账号AppId</p>
                     * 
                     */
                    uint64_t GetCreateAppID() const;

                    /**
                     * 判断参数 CreateAppID 是否已赋值
                     * @return CreateAppID 是否已赋值
                     * 
                     */
                    bool CreateAppIDHasBeenSet() const;

                    /**
                     * 获取<p>任务创建者账号名称（后端富化）</p>
                     * @return AccountName <p>任务创建者账号名称（后端富化）</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>创建者云类型</p>
                     * @return CloudType <p>创建者云类型</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务总资产数</p>
                     * @return TotalAssetCount <p>任务总资产数</p>
                     * 
                     */
                    int64_t GetTotalAssetCount() const;

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>已完成资产数</p>
                     * @return FinishedAssetCount <p>已完成资产数</p>
                     * 
                     */
                    int64_t GetFinishedAssetCount() const;

                    /**
                     * 判断参数 FinishedAssetCount 是否已赋值
                     * @return FinishedAssetCount 是否已赋值
                     * 
                     */
                    bool FinishedAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>风险资产数</p>
                     * @return RiskAssetCount <p>风险资产数</p>
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 判断参数 RiskAssetCount 是否已赋值
                     * @return RiskAssetCount 是否已赋值
                     * 
                     */
                    bool RiskAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>主机资产列表（TaskType=HOST时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostList <p>主机资产列表（TaskType=HOST时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EDRScanTaskHostItem> GetHostList() const;

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                    /**
                     * 获取<p>容器资产列表（TaskType=CONTAINER时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerList <p>容器资产列表（TaskType=CONTAINER时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EDRScanTaskContainerItem> GetContainerList() const;

                    /**
                     * 判断参数 ContainerList 是否已赋值
                     * @return ContainerList 是否已赋值
                     * 
                     */
                    bool ContainerListHasBeenSet() const;

                    /**
                     * 获取<p>当前筛选条件下资产列表总条数</p>
                     * @return TotalCount <p>当前筛选条件下资产列表总条数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>整体状态：WAIT/SCANNING/FINISHED/FAILED/CANCELED/TERMINATED/TIMEOUT</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务类型：HOST/CONTAINER</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>触发方式：MANUAL/CYCLE</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>任务开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>检测模式：full/quick/include/exclude</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>自选路径列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customPaths;
                    bool m_customPathsHasBeenSet;

                    /**
                     * <p>超时时间（秒）</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>是否开启深度检测：0-否/1-是</p>
                     */
                    int64_t m_enableMemShellScan;
                    bool m_enableMemShellScanHasBeenSet;

                    /**
                     * <p>创建者账号AppId</p>
                     */
                    uint64_t m_createAppID;
                    bool m_createAppIDHasBeenSet;

                    /**
                     * <p>任务创建者账号名称（后端富化）</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>创建者云类型</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>任务总资产数</p>
                     */
                    int64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>已完成资产数</p>
                     */
                    int64_t m_finishedAssetCount;
                    bool m_finishedAssetCountHasBeenSet;

                    /**
                     * <p>风险资产数</p>
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * <p>主机资产列表（TaskType=HOST时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EDRScanTaskHostItem> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * <p>容器资产列表（TaskType=CONTAINER时有值）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EDRScanTaskContainerItem> m_containerList;
                    bool m_containerListHasBeenSet;

                    /**
                     * <p>当前筛选条件下资产列表总条数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRSCANTASKDETAILRESPONSE_H_
