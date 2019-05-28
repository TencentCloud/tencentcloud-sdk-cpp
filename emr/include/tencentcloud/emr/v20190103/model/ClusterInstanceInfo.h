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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCEINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/EMRProductConfigSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 实例信息
                */
                class ClusterInstanceInfo : public AbstractModel
                {
                public:
                    ClusterInstanceInfo();
                    ~ClusterInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取clusterId
                     * @return ClusterId clusterId
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置clusterId
                     * @param ClusterId clusterId
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群地域
                     * @return ZoneId 集群地域
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置集群地域
                     * @param ZoneId 集群地域
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户APPID
                     * @return AppId 用户APPID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户APPID
                     * @param AppId 用户APPID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Addtime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddtime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Addtime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddtime(const std::string& _addtime);

                    /**
                     * 判断参数 Addtime 是否已赋值
                     * @return Addtime 是否已赋值
                     */
                    bool AddtimeHasBeenSet() const;

                    /**
                     * 获取运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Runtime 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EMRProductConfigSettings GetConfig() const;

                    /**
                     * 设置集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Config 集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfig(const EMRProductConfigSettings& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取集群IP
                     * @return MasterIp 集群IP
                     */
                    std::string GetMasterIp() const;

                    /**
                     * 设置集群IP
                     * @param MasterIp 集群IP
                     */
                    void SetMasterIp(const std::string& _masterIp);

                    /**
                     * 判断参数 MasterIp 是否已赋值
                     * @return MasterIp 是否已赋值
                     */
                    bool MasterIpHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return EmrVersion 集群版本
                     */
                    std::string GetEmrVersion() const;

                    /**
                     * 设置集群版本
                     * @param EmrVersion 集群版本
                     */
                    void SetEmrVersion(const std::string& _emrVersion);

                    /**
                     * 判断参数 EmrVersion 是否已赋值
                     * @return EmrVersion 是否已赋值
                     */
                    bool EmrVersionHasBeenSet() const;

                    /**
                     * 获取集群计费类型
                     * @return ChargeType 集群计费类型
                     */
                    uint64_t GetChargeType() const;

                    /**
                     * 设置集群计费类型
                     * @param ChargeType 集群计费类型
                     */
                    void SetChargeType(const uint64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                private:

                    /**
                     * clusterId
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 集群名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群地域
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户APPID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addtime;
                    bool m_addtimeHasBeenSet;

                    /**
                     * 运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 集群配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EMRProductConfigSettings m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 集群IP
                     */
                    std::string m_masterIp;
                    bool m_masterIpHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_emrVersion;
                    bool m_emrVersionHasBeenSet;

                    /**
                     * 集群计费类型
                     */
                    uint64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINSTANCEINFO_H_
