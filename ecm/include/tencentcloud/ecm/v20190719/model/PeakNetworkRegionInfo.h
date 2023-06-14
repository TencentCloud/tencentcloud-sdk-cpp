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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORKREGIONINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORKREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PeakNetwork.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * region维度的网络峰值信息
                */
                class PeakNetworkRegionInfo : public AbstractModel
                {
                public:
                    PeakNetworkRegionInfo();
                    ~PeakNetworkRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取region信息
                     * @return Region region信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置region信息
                     * @param _region region信息
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
                     * 获取网络峰值集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeakNetworkSet 网络峰值集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PeakNetwork> GetPeakNetworkSet() const;

                    /**
                     * 设置网络峰值集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _peakNetworkSet 网络峰值集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeakNetworkSet(const std::vector<PeakNetwork>& _peakNetworkSet);

                    /**
                     * 判断参数 PeakNetworkSet 是否已赋值
                     * @return PeakNetworkSet 是否已赋值
                     * 
                     */
                    bool PeakNetworkSetHasBeenSet() const;

                private:

                    /**
                     * region信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 网络峰值集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PeakNetwork> m_peakNetworkSet;
                    bool m_peakNetworkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PEAKNETWORKREGIONINFO_H_
