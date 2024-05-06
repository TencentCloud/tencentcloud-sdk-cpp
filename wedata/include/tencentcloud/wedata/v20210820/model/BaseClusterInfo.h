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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASECLUSTERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASECLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 集群基础信息
                */
                class BaseClusterInfo : public AbstractModel
                {
                public:
                    BaseClusterInfo();
                    ~BaseClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群类型，EMR/CDW等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型，EMR/CDW等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，EMR/CDW等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型，EMR/CDW等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCn 地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionCn() const;

                    /**
                     * 设置地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionCn 地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionCn(const std::string& _regionCn);

                    /**
                     * 判断参数 RegionCn 是否已赋值
                     * @return RegionCn 是否已赋值
                     * 
                     */
                    bool RegionCnHasBeenSet() const;

                    /**
                     * 获取地域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionEn 地域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionEn() const;

                    /**
                     * 设置地域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionEn 地域英文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionEn(const std::string& _regionEn);

                    /**
                     * 判断参数 RegionEn 是否已赋值
                     * @return RegionEn 是否已赋值
                     * 
                     */
                    bool RegionEnHasBeenSet() const;

                    /**
                     * 获取地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionArea 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionArea 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionArea(const std::string& _regionArea);

                    /**
                     * 判断参数 RegionArea 是否已赋值
                     * @return RegionArea 是否已赋值
                     * 
                     */
                    bool RegionAreaHasBeenSet() const;

                    /**
                     * 获取集群是否使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Used 集群是否使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUsed() const;

                    /**
                     * 设置集群是否使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _used 集群是否使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsed(const bool& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusInfo 集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusInfo() const;

                    /**
                     * 设置集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusInfo 集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusInfo(const std::string& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取集群存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 集群存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置集群存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 集群存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取集群计算类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeType 集群计算类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputeType() const;

                    /**
                     * 设置集群计算类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeType 集群计算类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeType(const std::string& _computeType);

                    /**
                     * 判断参数 ComputeType 是否已赋值
                     * @return ComputeType 是否已赋值
                     * 
                     */
                    bool ComputeTypeHasBeenSet() const;

                    /**
                     * 获取集群资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterResource 集群资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterResource() const;

                    /**
                     * 设置集群资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterResource 集群资源量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterResource(const std::string& _clusterResource);

                    /**
                     * 判断参数 ClusterResource 是否已赋值
                     * @return ClusterResource 是否已赋值
                     * 
                     */
                    bool ClusterResourceHasBeenSet() const;

                    /**
                     * 获取集群付费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 集群付费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置集群付费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 集群付费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 集群创建时间
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
                     * 获取额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraConf 额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraConf() const;

                    /**
                     * 设置额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraConf 额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraConf(const std::string& _extraConf);

                    /**
                     * 判断参数 ExtraConf 是否已赋值
                     * @return ExtraConf 是否已赋值
                     * 
                     */
                    bool ExtraConfHasBeenSet() const;

                    /**
                     * 获取ranger账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangerUserName ranger账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRangerUserName() const;

                    /**
                     * 设置ranger账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangerUserName ranger账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangerUserName(const std::string& _rangerUserName);

                    /**
                     * 判断参数 RangerUserName 是否已赋值
                     * @return RangerUserName 是否已赋值
                     * 
                     */
                    bool RangerUserNameHasBeenSet() const;

                    /**
                     * 获取cdw账号（用于展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdwUserName cdw账号（用于展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdwUserName() const;

                    /**
                     * 设置cdw账号（用于展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdwUserName cdw账号（用于展示）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdwUserName(const std::string& _cdwUserName);

                    /**
                     * 判断参数 CdwUserName 是否已赋值
                     * @return CdwUserName 是否已赋值
                     * 
                     */
                    bool CdwUserNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群类型，EMR/CDW等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCn;
                    bool m_regionCnHasBeenSet;

                    /**
                     * 地域英文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionEn;
                    bool m_regionEnHasBeenSet;

                    /**
                     * 地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * 集群是否使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * 集群存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 集群计算类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeType;
                    bool m_computeTypeHasBeenSet;

                    /**
                     * 集群资源量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterResource;
                    bool m_clusterResourceHasBeenSet;

                    /**
                     * 集群付费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 额外配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraConf;
                    bool m_extraConfHasBeenSet;

                    /**
                     * ranger账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rangerUserName;
                    bool m_rangerUserNameHasBeenSet;

                    /**
                     * cdw账号（用于展示）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdwUserName;
                    bool m_cdwUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASECLUSTERINFO_H_
