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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGRESULTV2_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGRESULTV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigSts.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigLicense.h>
#include <tencentcloud/tsf/v20180326/model/GroupResourceConfig.h>
#include <tencentcloud/tsf/v20180326/model/InstanceResourceConfig.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigCluster.h>
#include <tencentcloud/tsf/v20180326/model/PackageConfig.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeResourceConfig
                */
                class DescribeResourceConfigResultV2 : public AbstractModel
                {
                public:
                    DescribeResourceConfigResultV2();
                    ~DescribeResourceConfigResultV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STS参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sts STS参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeResourceConfigSts GetSts() const;

                    /**
                     * 设置STS参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sts STS参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSts(const DescribeResourceConfigSts& _sts);

                    /**
                     * 判断参数 Sts 是否已赋值
                     * @return Sts 是否已赋值
                     * 
                     */
                    bool StsHasBeenSet() const;

                    /**
                     * 获取许可信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return License 许可信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeResourceConfigLicense GetLicense() const;

                    /**
                     * 设置许可信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _license 许可信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicense(const DescribeResourceConfigLicense& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取部署组相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 部署组相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GroupResourceConfig GetGroup() const;

                    /**
                     * 设置部署组相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 部署组相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const GroupResourceConfig& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instance 实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceResourceConfig GetInstance() const;

                    /**
                     * 设置实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instance 实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstance(const InstanceResourceConfig& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Cluster相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cluster Cluster相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeResourceConfigCluster GetCluster() const;

                    /**
                     * 设置Cluster相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cluster Cluster相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCluster(const DescribeResourceConfigCluster& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取程序包相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Package 程序包相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PackageConfig GetPackage() const;

                    /**
                     * 设置程序包相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _package 程序包相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackage(const PackageConfig& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                private:

                    /**
                     * STS参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeResourceConfigSts m_sts;
                    bool m_stsHasBeenSet;

                    /**
                     * 许可信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeResourceConfigLicense m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 部署组相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GroupResourceConfig m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 实例相关的参数配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceResourceConfig m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Cluster相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeResourceConfigCluster m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 程序包相关配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PackageConfig m_package;
                    bool m_packageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGRESULTV2_H_
