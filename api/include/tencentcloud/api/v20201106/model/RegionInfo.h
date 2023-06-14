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

#ifndef TENCENTCLOUD_API_V20201106_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_API_V20201106_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Api
    {
        namespace V20201106
        {
            namespace Model
            {
                /**
                * 地域信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域名称，例如，ap-guangzhou
                     * @return Region 地域名称，例如，ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域名称，例如，ap-guangzhou
                     * @param _region 地域名称，例如，ap-guangzhou
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
                     * 获取地域描述，例如，华南地区(广州)
                     * @return RegionName 地域描述，例如，华南地区(广州)
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域描述，例如，华南地区(广州)
                     * @param _regionName 地域描述，例如，华南地区(广州)
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地域是否可用状态
                     * @return RegionState 地域是否可用状态
                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置地域是否可用状态
                     * @param _regionState 地域是否可用状态
                     * 
                     */
                    void SetRegionState(const std::string& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                    /**
                     * 获取控制台类型，api调用时默认null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionTypeMC 控制台类型，api调用时默认null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegionTypeMC() const;

                    /**
                     * 设置控制台类型，api调用时默认null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionTypeMC 控制台类型，api调用时默认null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionTypeMC(const int64_t& _regionTypeMC);

                    /**
                     * 判断参数 RegionTypeMC 是否已赋值
                     * @return RegionTypeMC 是否已赋值
                     * 
                     */
                    bool RegionTypeMCHasBeenSet() const;

                    /**
                     * 获取不同语言的地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocationMC 不同语言的地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocationMC() const;

                    /**
                     * 设置不同语言的地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locationMC 不同语言的地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocationMC(const std::string& _locationMC);

                    /**
                     * 判断参数 LocationMC 是否已赋值
                     * @return LocationMC 是否已赋值
                     * 
                     */
                    bool LocationMCHasBeenSet() const;

                    /**
                     * 获取控制台展示的地域描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionNameMC 控制台展示的地域描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionNameMC() const;

                    /**
                     * 设置控制台展示的地域描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionNameMC 控制台展示的地域描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionNameMC(const std::string& _regionNameMC);

                    /**
                     * 判断参数 RegionNameMC 是否已赋值
                     * @return RegionNameMC 是否已赋值
                     * 
                     */
                    bool RegionNameMCHasBeenSet() const;

                    /**
                     * 获取控制台展示的RegionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionIdMC 控制台展示的RegionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionIdMC() const;

                    /**
                     * 设置控制台展示的RegionId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionIdMC 控制台展示的RegionId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionIdMC(const std::string& _regionIdMC);

                    /**
                     * 判断参数 RegionIdMC 是否已赋值
                     * @return RegionIdMC 是否已赋值
                     * 
                     */
                    bool RegionIdMCHasBeenSet() const;

                private:

                    /**
                     * 地域名称，例如，ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域描述，例如，华南地区(广州)
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域是否可用状态
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 控制台类型，api调用时默认null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionTypeMC;
                    bool m_regionTypeMCHasBeenSet;

                    /**
                     * 不同语言的地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_locationMC;
                    bool m_locationMCHasBeenSet;

                    /**
                     * 控制台展示的地域描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionNameMC;
                    bool m_regionNameMCHasBeenSet;

                    /**
                     * 控制台展示的RegionId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionIdMC;
                    bool m_regionIdMCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_API_V20201106_MODEL_REGIONINFO_H_
