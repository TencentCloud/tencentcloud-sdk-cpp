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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_PROMETHEUSCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_PROMETHEUSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/CustomPromConfig.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Prometheus 配置
                */
                class PrometheusConfig : public AbstractModel
                {
                public:
                    PrometheusConfig();
                    ~PrometheusConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取虚拟网络Id
                     * @return VpcId 虚拟网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置虚拟网络Id
                     * @param _vpcId 虚拟网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param _subnetId 子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取关联已存在实例Id，不填则默认创建
                     * @return InstanceId 关联已存在实例Id，不填则默认创建
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置关联已存在实例Id，不填则默认创建
                     * @param _instanceId 关联已存在实例Id，不填则默认创建
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取第三方 Prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomProm 第三方 Prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CustomPromConfig GetCustomProm() const;

                    /**
                     * 设置第三方 Prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customProm 第三方 Prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomProm(const CustomPromConfig& _customProm);

                    /**
                     * 判断参数 CustomProm 是否已赋值
                     * @return CustomProm 是否已赋值
                     * 
                     */
                    bool CustomPromHasBeenSet() const;

                private:

                    /**
                     * 虚拟网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 关联已存在实例Id，不填则默认创建
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 第三方 Prometheus
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CustomPromConfig m_customProm;
                    bool m_customPromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_PROMETHEUSCONFIG_H_
