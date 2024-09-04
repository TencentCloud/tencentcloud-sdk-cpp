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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SPACEINTERNETACCESSIBLE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SPACEINTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 描述了工作空间的公网可访问性，声明了工作空间的公网使用计费模式，最大带宽等
                */
                class SpaceInternetAccessible : public AbstractModel
                {
                public:
                    SpaceInternetAccessible();
                    ~SpaceInternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetChargeType 网络计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置网络计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetChargeType 网络计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取公网出带宽上限，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetMaxBandwidthOut 公网出带宽上限，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网出带宽上限，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetMaxBandwidthOut 公网出带宽上限，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取是否分配公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAssigned 是否分配公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublicIpAssigned() const;

                    /**
                     * 设置是否分配公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIpAssigned 是否分配公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIpAssigned(const bool& _publicIpAssigned);

                    /**
                     * 判断参数 PublicIpAssigned 是否已赋值
                     * @return PublicIpAssigned 是否已赋值
                     * 
                     */
                    bool PublicIpAssignedHasBeenSet() const;

                    /**
                     * 获取带宽包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthPackageId 带宽包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidthPackageId 带宽包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                private:

                    /**
                     * 网络计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 公网出带宽上限，默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 是否分配公网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_publicIpAssigned;
                    bool m_publicIpAssignedHasBeenSet;

                    /**
                     * 带宽包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SPACEINTERNETACCESSIBLE_H_
