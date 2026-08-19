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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEMRISKRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEMRISKRECORD_H_

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
                * 单个资产上单个检测项的风险结果记录。
                */
                class BaselineItemRiskRecord : public AbstractModel
                {
                public:
                    BaselineItemRiskRecord();
                    ~BaselineItemRiskRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险记录主键 ID。</p>
                     * @return ID <p>风险记录主键 ID。</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>风险记录主键 ID。</p>
                     * @param _iD <p>风险记录主键 ID。</p>
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
                     * 获取<p>命中风险的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostInfo <p>命中风险的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineHostAsset GetHostInfo() const;

                    /**
                     * 设置<p>命中风险的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostInfo <p>命中风险的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostInfo(const BaselineHostAsset& _hostInfo);

                    /**
                     * 判断参数 HostInfo 是否已赋值
                     * @return HostInfo 是否已赋值
                     * 
                     */
                    bool HostInfoHasBeenSet() const;

                    /**
                     * 获取<p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterInfo <p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BaselineClusterAsset GetClusterInfo() const;

                    /**
                     * 设置<p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterInfo <p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterInfo(const BaselineClusterAsset& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取<p>命中资产的资产类型。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：集群</li><li>POD：Pod</li><li>CONTAINER：容器</li><li>IMAGE：镜像</li></ul>
                     * @return AssetType <p>命中资产的资产类型。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：集群</li><li>POD：Pod</li><li>CONTAINER：容器</li><li>IMAGE：镜像</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>命中资产的资产类型。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：集群</li><li>POD：Pod</li><li>CONTAINER：容器</li><li>IMAGE：镜像</li></ul>
                     * @param _assetType <p>命中资产的资产类型。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：集群</li><li>POD：Pod</li><li>CONTAINER：容器</li><li>IMAGE：镜像</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>风险检测结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li><li>IGNORED：已忽略</li></ul>
                     * @return ResultStatus <p>风险检测结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li><li>IGNORED：已忽略</li></ul>
                     * 
                     */
                    std::string GetResultStatus() const;

                    /**
                     * 设置<p>风险检测结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li><li>IGNORED：已忽略</li></ul>
                     * @param _resultStatus <p>风险检测结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li><li>IGNORED：已忽略</li></ul>
                     * 
                     */
                    void SetResultStatus(const std::string& _resultStatus);

                    /**
                     * 判断参数 ResultStatus 是否已赋值
                     * @return ResultStatus 是否已赋值
                     * 
                     */
                    bool ResultStatusHasBeenSet() const;

                    /**
                     * 获取<p>最近检查时间。</p>
                     * @return LatestCheckTime <p>最近检查时间。</p>
                     * 
                     */
                    std::string GetLatestCheckTime() const;

                    /**
                     * 设置<p>最近检查时间。</p>
                     * @param _latestCheckTime <p>最近检查时间。</p>
                     * 
                     */
                    void SetLatestCheckTime(const std::string& _latestCheckTime);

                    /**
                     * 判断参数 LatestCheckTime 是否已赋值
                     * @return LatestCheckTime 是否已赋值
                     * 
                     */
                    bool LatestCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>基线检测项 ID。</p>
                     * @return ItemID <p>基线检测项 ID。</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>基线检测项 ID。</p>
                     * @param _itemID <p>基线检测项 ID。</p>
                     * 
                     */
                    void SetItemID(const uint64_t& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取<p>风险事件 ID，用于唯一标识该风险记录。</p>
                     * @return RiskID <p>风险事件 ID，用于唯一标识该风险记录。</p>
                     * 
                     */
                    std::string GetRiskID() const;

                    /**
                     * 设置<p>风险事件 ID，用于唯一标识该风险记录。</p>
                     * @param _riskID <p>风险事件 ID，用于唯一标识该风险记录。</p>
                     * 
                     */
                    void SetRiskID(const std::string& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取<p>本次扫描的全局 JobID。</p>
                     * @return JobID <p>本次扫描的全局 JobID。</p>
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置<p>本次扫描的全局 JobID。</p>
                     * @param _jobID <p>本次扫描的全局 JobID。</p>
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                private:

                    /**
                     * <p>风险记录主键 ID。</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>命中风险的主机资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineHostAsset m_hostInfo;
                    bool m_hostInfoHasBeenSet;

                    /**
                     * <p>集群资产信息，无数据时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaselineClusterAsset m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>命中资产的资产类型。取值：</p><ul><li>HOST：主机</li><li>CLUSTER：集群</li><li>POD：Pod</li><li>CONTAINER：容器</li><li>IMAGE：镜像</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>风险检测结果状态。取值：</p><ul><li>CHECKING：检测中</li><li>PASS：通过</li><li>NOT_PASS：未通过</li><li>CHECK_FAILED：检测失败</li><li>NOT_INVOLVED：不涉及</li><li>IGNORED：已忽略</li></ul>
                     */
                    std::string m_resultStatus;
                    bool m_resultStatusHasBeenSet;

                    /**
                     * <p>最近检查时间。</p>
                     */
                    std::string m_latestCheckTime;
                    bool m_latestCheckTimeHasBeenSet;

                    /**
                     * <p>基线检测项 ID。</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * <p>风险事件 ID，用于唯一标识该风险记录。</p>
                     */
                    std::string m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * <p>本次扫描的全局 JobID。</p>
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEITEMRISKRECORD_H_
