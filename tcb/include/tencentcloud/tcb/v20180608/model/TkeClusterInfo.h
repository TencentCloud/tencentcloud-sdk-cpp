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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_TKECLUSTERINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_TKECLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * tke集群信息
                */
                class TkeClusterInfo : public AbstractModel
                {
                public:
                    TkeClusterInfo();
                    ~TkeClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群的vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 集群的vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群的vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 集群的vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取版本内网CLB所在子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionClbSubnetId 版本内网CLB所在子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersionClbSubnetId() const;

                    /**
                     * 设置版本内网CLB所在子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionClbSubnetId 版本内网CLB所在子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionClbSubnetId(const std::string& _versionClbSubnetId);

                    /**
                     * 判断参数 VersionClbSubnetId 是否已赋值
                     * @return VersionClbSubnetId 是否已赋值
                     */
                    bool VersionClbSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群的vpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 版本内网CLB所在子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionClbSubnetId;
                    bool m_versionClbSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_TKECLUSTERINFO_H_
