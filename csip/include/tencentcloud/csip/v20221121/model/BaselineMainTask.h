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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEMAINTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEMAINTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线扫描主任务，对应一次“一键扫描/周期扫描/分散扫描”动作。
                */
                class BaselineMainTask : public AbstractModel
                {
                public:
                    BaselineMainTask();
                    ~BaselineMainTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主任务对应的全局任务 ID。</p>
                     * @return JobID <p>主任务对应的全局任务 ID。</p>
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置<p>主任务对应的全局任务 ID。</p>
                     * @param _jobID <p>主任务对应的全局任务 ID。</p>
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                    /**
                     * 获取<p>主任务 ID。</p>
                     * @return ID <p>主任务 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>主任务 ID。</p>
                     * @param _iD <p>主任务 ID。</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>主任务状态。取值：</p><ul><li>INIT：初始化</li><li>SUBTASK_CREATING：子任务创建中</li><li>SCANNING：扫描中</li><li>TIMEOUT：超时</li><li>USER_CANCELED：用户取消</li><li>ALL_FAILED：全部失败</li><li>SUCCESS：成功</li></ul>
                     * @return Status <p>主任务状态。取值：</p><ul><li>INIT：初始化</li><li>SUBTASK_CREATING：子任务创建中</li><li>SCANNING：扫描中</li><li>TIMEOUT：超时</li><li>USER_CANCELED：用户取消</li><li>ALL_FAILED：全部失败</li><li>SUCCESS：成功</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>主任务状态。取值：</p><ul><li>INIT：初始化</li><li>SUBTASK_CREATING：子任务创建中</li><li>SCANNING：扫描中</li><li>TIMEOUT：超时</li><li>USER_CANCELED：用户取消</li><li>ALL_FAILED：全部失败</li><li>SUCCESS：成功</li></ul>
                     * @param _status <p>主任务状态。取值：</p><ul><li>INIT：初始化</li><li>SUBTASK_CREATING：子任务创建中</li><li>SCANNING：扫描中</li><li>TIMEOUT：超时</li><li>USER_CANCELED：用户取消</li><li>ALL_FAILED：全部失败</li><li>SUCCESS：成功</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>主任务所属租户 Appid。</p>
                     * @return Appid <p>主任务所属租户 Appid。</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>主任务所属租户 Appid。</p>
                     * @param _appid <p>主任务所属租户 Appid。</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>主任务类型。取值：</p><ul><li>ONE_SHOT：一键策略扫描（手动触发）</li><li>PERIODIC：周期扫描（按 CycleScanConf 自动触发）</li><li>OTHER：其他分散扫描（资产维度等触发）</li></ul>
                     * @return TaskType <p>主任务类型。取值：</p><ul><li>ONE_SHOT：一键策略扫描（手动触发）</li><li>PERIODIC：周期扫描（按 CycleScanConf 自动触发）</li><li>OTHER：其他分散扫描（资产维度等触发）</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>主任务类型。取值：</p><ul><li>ONE_SHOT：一键策略扫描（手动触发）</li><li>PERIODIC：周期扫描（按 CycleScanConf 自动触发）</li><li>OTHER：其他分散扫描（资产维度等触发）</li></ul>
                     * @param _taskType <p>主任务类型。取值：</p><ul><li>ONE_SHOT：一键策略扫描（手动触发）</li><li>PERIODIC：周期扫描（按 CycleScanConf 自动触发）</li><li>OTHER：其他分散扫描（资产维度等触发）</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>主任务开始执行时间。</p>
                     * @return StartTime <p>主任务开始执行时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>主任务开始执行时间。</p>
                     * @param _startTime <p>主任务开始执行时间。</p>
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
                     * 获取<p>主任务结束时间，未结束时为空。</p>
                     * @return FinishTime <p>主任务结束时间，未结束时为空。</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>主任务结束时间，未结束时为空。</p>
                     * @param _finishTime <p>主任务结束时间，未结束时为空。</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @return CheckAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * @param _checkAssetType <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>失败错误码，成功时为空。</p>
                     * @return ErrCode <p>失败错误码，成功时为空。</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>失败错误码，成功时为空。</p>
                     * @param _errCode <p>失败错误码，成功时为空。</p>
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>失败原因，成功时为空。</p>
                     * @return ErrMessage <p>失败原因，成功时为空。</p>
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置<p>失败原因，成功时为空。</p>
                     * @param _errMessage <p>失败原因，成功时为空。</p>
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取<p>解决方案（根据 ErrCode 映射，成功时为空）</p>
                     * @return Solution <p>解决方案（根据 ErrCode 映射，成功时为空）</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>解决方案（根据 ErrCode 映射，成功时为空）</p>
                     * @param _solution <p>解决方案（根据 ErrCode 映射，成功时为空）</p>
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>扫描成功的资产数量。</p>
                     * @return ScanSuccessCount <p>扫描成功的资产数量。</p>
                     * 
                     */
                    uint64_t GetScanSuccessCount() const;

                    /**
                     * 设置<p>扫描成功的资产数量。</p>
                     * @param _scanSuccessCount <p>扫描成功的资产数量。</p>
                     * 
                     */
                    void SetScanSuccessCount(const uint64_t& _scanSuccessCount);

                    /**
                     * 判断参数 ScanSuccessCount 是否已赋值
                     * @return ScanSuccessCount 是否已赋值
                     * 
                     */
                    bool ScanSuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>扫描失败的资产数量。</p>
                     * @return ScanFailedCount <p>扫描失败的资产数量。</p>
                     * 
                     */
                    uint64_t GetScanFailedCount() const;

                    /**
                     * 设置<p>扫描失败的资产数量。</p>
                     * @param _scanFailedCount <p>扫描失败的资产数量。</p>
                     * 
                     */
                    void SetScanFailedCount(const uint64_t& _scanFailedCount);

                    /**
                     * 判断参数 ScanFailedCount 是否已赋值
                     * @return ScanFailedCount 是否已赋值
                     * 
                     */
                    bool ScanFailedCountHasBeenSet() const;

                    /**
                     * 获取<p>子任务总数</p>
                     * @return ScanTotalCount <p>子任务总数</p>
                     * 
                     */
                    uint64_t GetScanTotalCount() const;

                    /**
                     * 设置<p>子任务总数</p>
                     * @param _scanTotalCount <p>子任务总数</p>
                     * 
                     */
                    void SetScanTotalCount(const uint64_t& _scanTotalCount);

                    /**
                     * 判断参数 ScanTotalCount 是否已赋值
                     * @return ScanTotalCount 是否已赋值
                     * 
                     */
                    bool ScanTotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>主任务对应的全局任务 ID。</p>
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * <p>主任务 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>主任务状态。取值：</p><ul><li>INIT：初始化</li><li>SUBTASK_CREATING：子任务创建中</li><li>SCANNING：扫描中</li><li>TIMEOUT：超时</li><li>USER_CANCELED：用户取消</li><li>ALL_FAILED：全部失败</li><li>SUCCESS：成功</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>主任务所属租户 Appid。</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>主任务类型。取值：</p><ul><li>ONE_SHOT：一键策略扫描（手动触发）</li><li>PERIODIC：周期扫描（按 CycleScanConf 自动触发）</li><li>OTHER：其他分散扫描（资产维度等触发）</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>主任务开始执行时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>主任务结束时间，未结束时为空。</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>失败错误码，成功时为空。</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>失败原因，成功时为空。</p>
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * <p>解决方案（根据 ErrCode 映射，成功时为空）</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>扫描成功的资产数量。</p>
                     */
                    uint64_t m_scanSuccessCount;
                    bool m_scanSuccessCountHasBeenSet;

                    /**
                     * <p>扫描失败的资产数量。</p>
                     */
                    uint64_t m_scanFailedCount;
                    bool m_scanFailedCountHasBeenSet;

                    /**
                     * <p>子任务总数</p>
                     */
                    uint64_t m_scanTotalCount;
                    bool m_scanTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEMAINTASK_H_
