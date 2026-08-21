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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineHostAsset.h>
#include <tencentcloud/csip/v20221121/model/BaselineClusterAsset.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线扫描的子任务，按检测资产维度拆分（一台主机或一个集群对应一条子任务）。
                */
                class BaselineSubTask : public AbstractModel
                {
                public:
                    BaselineSubTask();
                    ~BaselineSubTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子任务 ID。</p>
                     * @return ID <p>子任务 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>子任务 ID。</p>
                     * @param _iD <p>子任务 ID。</p>
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
                     * 获取<p>所属主任务 ID（对应 BaselineMainTask.ID）。</p>
                     * @return TaskID <p>所属主任务 ID（对应 BaselineMainTask.ID）。</p>
                     * 
                     */
                    uint64_t GetTaskID() const;

                    /**
                     * 设置<p>所属主任务 ID（对应 BaselineMainTask.ID）。</p>
                     * @param _taskID <p>所属主任务 ID（对应 BaselineMainTask.ID）。</p>
                     * 
                     */
                    void SetTaskID(const uint64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>子任务执行结果。取值：</p><ul><li>SUCCESS：成功</li><li>FAILED：失败</li><li>USER_CANCELED：用户取消</li><li>CHECKING：检测中</li><li>UNKNOWN：未知状态</li></ul>
                     * @return Status <p>子任务执行结果。取值：</p><ul><li>SUCCESS：成功</li><li>FAILED：失败</li><li>USER_CANCELED：用户取消</li><li>CHECKING：检测中</li><li>UNKNOWN：未知状态</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>子任务执行结果。取值：</p><ul><li>SUCCESS：成功</li><li>FAILED：失败</li><li>USER_CANCELED：用户取消</li><li>CHECKING：检测中</li><li>UNKNOWN：未知状态</li></ul>
                     * @param _status <p>子任务执行结果。取值：</p><ul><li>SUCCESS：成功</li><li>FAILED：失败</li><li>USER_CANCELED：用户取消</li><li>CHECKING：检测中</li><li>UNKNOWN：未知状态</li></ul>
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
                     * 获取<p>子任务所属租户 Appid。</p>
                     * @return Appid <p>子任务所属租户 Appid。</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>子任务所属租户 Appid。</p>
                     * @param _appid <p>子任务所属租户 Appid。</p>
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
                     * 获取<p>子任务开始执行时间。</p>
                     * @return StartTime <p>子任务开始执行时间。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>子任务开始执行时间。</p>
                     * @param _startTime <p>子任务开始执行时间。</p>
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
                     * 获取<p>子任务结束时间，未结束时为空。</p>
                     * @return FinishTime <p>子任务结束时间，未结束时为空。</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>子任务结束时间，未结束时为空。</p>
                     * @param _finishTime <p>子任务结束时间，未结束时为空。</p>
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
                     * 获取<p>CheckAssetType=HOST 时返回的主机资产信息，CLUSTER 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostAsset <p>CheckAssetType=HOST 时返回的主机资产信息，CLUSTER 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineHostAsset GetHostAsset() const;

                    /**
                     * 设置<p>CheckAssetType=HOST 时返回的主机资产信息，CLUSTER 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostAsset <p>CheckAssetType=HOST 时返回的主机资产信息，CLUSTER 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostAsset(const BaselineHostAsset& _hostAsset);

                    /**
                     * 判断参数 HostAsset 是否已赋值
                     * @return HostAsset 是否已赋值
                     * 
                     */
                    bool HostAssetHasBeenSet() const;

                    /**
                     * 获取<p>状态码：失败时返回失败码（如 AGENT_OFFLINE、SCAN_TIMEOUT、CLIENT_SCAN_FAILED 等），检测中时返回检测状态，成功或用户取消时为空。</p>
                     * @return ErrCode <p>状态码：失败时返回失败码（如 AGENT_OFFLINE、SCAN_TIMEOUT、CLIENT_SCAN_FAILED 等），检测中时返回检测状态，成功或用户取消时为空。</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>状态码：失败时返回失败码（如 AGENT_OFFLINE、SCAN_TIMEOUT、CLIENT_SCAN_FAILED 等），检测中时返回检测状态，成功或用户取消时为空。</p>
                     * @param _errCode <p>状态码：失败时返回失败码（如 AGENT_OFFLINE、SCAN_TIMEOUT、CLIENT_SCAN_FAILED 等），检测中时返回检测状态，成功或用户取消时为空。</p>
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
                     * 获取<p>失败时的详细原因描述，成功、用户取消或检测中时为空。</p>
                     * @return ErrMessage <p>失败时的详细原因描述，成功、用户取消或检测中时为空。</p>
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置<p>失败时的详细原因描述，成功、用户取消或检测中时为空。</p>
                     * @param _errMessage <p>失败时的详细原因描述，成功、用户取消或检测中时为空。</p>
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
                     * 获取<p>失败时的解决方案建议，成功、用户取消或检测中时为空。</p>
                     * @return Solution <p>失败时的解决方案建议，成功、用户取消或检测中时为空。</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>失败时的解决方案建议，成功、用户取消或检测中时为空。</p>
                     * @param _solution <p>失败时的解决方案建议，成功、用户取消或检测中时为空。</p>
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
                     * 获取<p>CheckAssetType=CLUSTER 时返回的集群资产信息，HOST 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterAsset <p>CheckAssetType=CLUSTER 时返回的集群资产信息，HOST 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineClusterAsset GetClusterAsset() const;

                    /**
                     * 设置<p>CheckAssetType=CLUSTER 时返回的集群资产信息，HOST 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterAsset <p>CheckAssetType=CLUSTER 时返回的集群资产信息，HOST 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterAsset(const BaselineClusterAsset& _clusterAsset);

                    /**
                     * 判断参数 ClusterAsset 是否已赋值
                     * @return ClusterAsset 是否已赋值
                     * 
                     */
                    bool ClusterAssetHasBeenSet() const;

                private:

                    /**
                     * <p>子任务 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>所属主任务 ID（对应 BaselineMainTask.ID）。</p>
                     */
                    uint64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>子任务执行结果。取值：</p><ul><li>SUCCESS：成功</li><li>FAILED：失败</li><li>USER_CANCELED：用户取消</li><li>CHECKING：检测中</li><li>UNKNOWN：未知状态</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>子任务所属租户 Appid。</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>子任务开始执行时间。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>子任务结束时间，未结束时为空。</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>检测资产大类，区分主机基线与容器集群基线。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：容器集群</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>CheckAssetType=HOST 时返回的主机资产信息，CLUSTER 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineHostAsset m_hostAsset;
                    bool m_hostAssetHasBeenSet;

                    /**
                     * <p>状态码：失败时返回失败码（如 AGENT_OFFLINE、SCAN_TIMEOUT、CLIENT_SCAN_FAILED 等），检测中时返回检测状态，成功或用户取消时为空。</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>失败时的详细原因描述，成功、用户取消或检测中时为空。</p>
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * <p>失败时的解决方案建议，成功、用户取消或检测中时为空。</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>CheckAssetType=CLUSTER 时返回的集群资产信息，HOST 时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineClusterAsset m_clusterAsset;
                    bool m_clusterAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBTASK_H_
