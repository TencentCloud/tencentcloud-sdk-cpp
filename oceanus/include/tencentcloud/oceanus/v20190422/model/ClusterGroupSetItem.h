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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERGROUPSETITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERGROUPSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/SubEks.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 工作空间集群组信息
                */
                class ClusterGroupSetItem : public AbstractModel
                {
                public:
                    ClusterGroupSetItem();
                    ~ClusterGroupSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取clusterGroup 的 SerialId
                     * @return ClusterId clusterGroup 的 SerialId
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置clusterGroup 的 SerialId
                     * @param _clusterId clusterGroup 的 SerialId
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
                     * 获取集群名称
                     * @return Name 集群名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置集群名称
                     * @param _name 集群名称
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取区
                     * @return Zone 区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区
                     * @param _zone 区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取账号 APPID
                     * @return AppId 账号 APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置账号 APPID
                     * @param _appId 账号 APPID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账号 UIN
                     * @return OwnerUin 主账号 UIN
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号 UIN
                     * @param _ownerUin 主账号 UIN
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建账号 UIN
                     * @return CreatorUin 创建账号 UIN
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置创建账号 UIN
                     * @param _creatorUin 创建账号 UIN
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取CU 数量
                     * @return CuNum CU 数量
                     * 
                     */
                    int64_t GetCuNum() const;

                    /**
                     * 设置CU 数量
                     * @param _cuNum CU 数量
                     * 
                     */
                    void SetCuNum(const int64_t& _cuNum);

                    /**
                     * 判断参数 CuNum 是否已赋值
                     * @return CuNum 是否已赋值
                     * 
                     */
                    bool CuNumHasBeenSet() const;

                    /**
                     * 获取CU 内存规格
                     * @return CuMem CU 内存规格
                     * 
                     */
                    int64_t GetCuMem() const;

                    /**
                     * 设置CU 内存规格
                     * @param _cuMem CU 内存规格
                     * 
                     */
                    void SetCuMem(const int64_t& _cuMem);

                    /**
                     * 判断参数 CuMem 是否已赋值
                     * @return CuMem 是否已赋值
                     * 
                     */
                    bool CuMemHasBeenSet() const;

                    /**
                     * 获取集群状态, 1 未初始化,，3 初始化中，2 运行中
                     * @return Status 集群状态, 1 未初始化,，3 初始化中，2 运行中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态, 1 未初始化,，3 初始化中，2 运行中
                     * @param _status 集群状态, 1 未初始化,，3 初始化中，2 运行中
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
                     * 获取状态描述
                     * @return StatusDesc 状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
                     * @param _statusDesc 状态描述
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群创建时间
                     * @return CreateTime 集群创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
                     * @param _createTime 集群创建时间
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
                     * 获取最后一次操作集群的时间
                     * @return UpdateTime 最后一次操作集群的时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后一次操作集群的时间
                     * @param _updateTime 最后一次操作集群的时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Remark 描述
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置描述
                     * @param _remark 描述
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取网络
                     * @return NetEnvironmentType 网络
                     * 
                     */
                    int64_t GetNetEnvironmentType() const;

                    /**
                     * 设置网络
                     * @param _netEnvironmentType 网络
                     * 
                     */
                    void SetNetEnvironmentType(const int64_t& _netEnvironmentType);

                    /**
                     * 判断参数 NetEnvironmentType 是否已赋值
                     * @return NetEnvironmentType 是否已赋值
                     * 
                     */
                    bool NetEnvironmentTypeHasBeenSet() const;

                    /**
                     * 获取空闲 CU
                     * @return FreeCuNum 空闲 CU
                     * 
                     */
                    int64_t GetFreeCuNum() const;

                    /**
                     * 设置空闲 CU
                     * @param _freeCuNum 空闲 CU
                     * 
                     */
                    void SetFreeCuNum(const int64_t& _freeCuNum);

                    /**
                     * 判断参数 FreeCuNum 是否已赋值
                     * @return FreeCuNum 是否已赋值
                     * 
                     */
                    bool FreeCuNumHasBeenSet() const;

                    /**
                     * 获取细粒度资源下的空闲CU
                     * @return FreeCu 细粒度资源下的空闲CU
                     * 
                     */
                    double GetFreeCu() const;

                    /**
                     * 设置细粒度资源下的空闲CU
                     * @param _freeCu 细粒度资源下的空闲CU
                     * 
                     */
                    void SetFreeCu(const double& _freeCu);

                    /**
                     * 判断参数 FreeCu 是否已赋值
                     * @return FreeCu 是否已赋值
                     * 
                     */
                    bool FreeCuHasBeenSet() const;

                    /**
                     * 获取运行中CU
                     * @return RunningCu 运行中CU
                     * 
                     */
                    double GetRunningCu() const;

                    /**
                     * 设置运行中CU
                     * @param _runningCu 运行中CU
                     * 
                     */
                    void SetRunningCu(const double& _runningCu);

                    /**
                     * 判断参数 RunningCu 是否已赋值
                     * @return RunningCu 是否已赋值
                     * 
                     */
                    bool RunningCuHasBeenSet() const;

                    /**
                     * 获取付费模式
                     * @return PayMode 付费模式
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
                     * @param _payMode 付费模式
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
                     * 获取弹性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubEks 弹性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SubEks GetSubEks() const;

                    /**
                     * 设置弹性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subEks 弹性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubEks(const SubEks& _subEks);

                    /**
                     * 判断参数 SubEks 是否已赋值
                     * @return SubEks 是否已赋值
                     * 
                     */
                    bool SubEksHasBeenSet() const;

                    /**
                     * 获取默认 "" 包销模式 "exclusiveSale"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingResourceMode 默认 "" 包销模式 "exclusiveSale"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingResourceMode() const;

                    /**
                     * 设置默认 "" 包销模式 "exclusiveSale"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingResourceMode 默认 "" 包销模式 "exclusiveSale"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingResourceMode(const std::string& _billingResourceMode);

                    /**
                     * 判断参数 BillingResourceMode 是否已赋值
                     * @return BillingResourceMode 是否已赋值
                     * 
                     */
                    bool BillingResourceModeHasBeenSet() const;

                    /**
                     * 获取TotalCpu
                     * @return TotalCpu TotalCpu
                     * 
                     */
                    double GetTotalCpu() const;

                    /**
                     * 设置TotalCpu
                     * @param _totalCpu TotalCpu
                     * 
                     */
                    void SetTotalCpu(const double& _totalCpu);

                    /**
                     * 判断参数 TotalCpu 是否已赋值
                     * @return TotalCpu 是否已赋值
                     * 
                     */
                    bool TotalCpuHasBeenSet() const;

                    /**
                     * 获取TotalMem
                     * @return TotalMem TotalMem
                     * 
                     */
                    double GetTotalMem() const;

                    /**
                     * 设置TotalMem
                     * @param _totalMem TotalMem
                     * 
                     */
                    void SetTotalMem(const double& _totalMem);

                    /**
                     * 判断参数 TotalMem 是否已赋值
                     * @return TotalMem 是否已赋值
                     * 
                     */
                    bool TotalMemHasBeenSet() const;

                    /**
                     * 获取RunningCpu
                     * @return RunningCpu RunningCpu
                     * 
                     */
                    double GetRunningCpu() const;

                    /**
                     * 设置RunningCpu
                     * @param _runningCpu RunningCpu
                     * 
                     */
                    void SetRunningCpu(const double& _runningCpu);

                    /**
                     * 判断参数 RunningCpu 是否已赋值
                     * @return RunningCpu 是否已赋值
                     * 
                     */
                    bool RunningCpuHasBeenSet() const;

                    /**
                     * 获取RunningMem
                     * @return RunningMem RunningMem
                     * 
                     */
                    double GetRunningMem() const;

                    /**
                     * 设置RunningMem
                     * @param _runningMem RunningMem
                     * 
                     */
                    void SetRunningMem(const double& _runningMem);

                    /**
                     * 判断参数 RunningMem 是否已赋值
                     * @return RunningMem 是否已赋值
                     * 
                     */
                    bool RunningMemHasBeenSet() const;

                private:

                    /**
                     * clusterGroup 的 SerialId
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 账号 APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号 UIN
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建账号 UIN
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * CU 数量
                     */
                    int64_t m_cuNum;
                    bool m_cuNumHasBeenSet;

                    /**
                     * CU 内存规格
                     */
                    int64_t m_cuMem;
                    bool m_cuMemHasBeenSet;

                    /**
                     * 集群状态, 1 未初始化,，3 初始化中，2 运行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后一次操作集群的时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 网络
                     */
                    int64_t m_netEnvironmentType;
                    bool m_netEnvironmentTypeHasBeenSet;

                    /**
                     * 空闲 CU
                     */
                    int64_t m_freeCuNum;
                    bool m_freeCuNumHasBeenSet;

                    /**
                     * 细粒度资源下的空闲CU
                     */
                    double m_freeCu;
                    bool m_freeCuHasBeenSet;

                    /**
                     * 运行中CU
                     */
                    double m_runningCu;
                    bool m_runningCuHasBeenSet;

                    /**
                     * 付费模式
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 弹性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SubEks m_subEks;
                    bool m_subEksHasBeenSet;

                    /**
                     * 默认 "" 包销模式 "exclusiveSale"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingResourceMode;
                    bool m_billingResourceModeHasBeenSet;

                    /**
                     * TotalCpu
                     */
                    double m_totalCpu;
                    bool m_totalCpuHasBeenSet;

                    /**
                     * TotalMem
                     */
                    double m_totalMem;
                    bool m_totalMemHasBeenSet;

                    /**
                     * RunningCpu
                     */
                    double m_runningCpu;
                    bool m_runningCpuHasBeenSet;

                    /**
                     * RunningMem
                     */
                    double m_runningMem;
                    bool m_runningMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERGROUPSETITEM_H_
