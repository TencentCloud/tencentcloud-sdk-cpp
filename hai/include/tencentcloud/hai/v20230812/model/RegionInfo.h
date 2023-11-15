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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 地域列表
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ap-guangzhou

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region ap-guangzhou

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置ap-guangzhou

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region ap-guangzhou

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取华南地区(广州)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 华南地区(广州)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置华南地区(广州)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionName 华南地区(广州)
注意：此字段可能返回 null，表示取不到有效值。
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
AVAILABLE：可用

注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionState 地域是否可用状态
AVAILABLE：可用

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置地域是否可用状态
AVAILABLE：可用

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionState 地域是否可用状态
AVAILABLE：可用

注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。对于ALREADY_SUPPORT的地域才需进一步调用DescribeScholarRocketStatus查看学术加速是开启还是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScholarRocketSupportState 学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。对于ALREADY_SUPPORT的地域才需进一步调用DescribeScholarRocketStatus查看学术加速是开启还是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScholarRocketSupportState() const;

                    /**
                     * 设置学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。对于ALREADY_SUPPORT的地域才需进一步调用DescribeScholarRocketStatus查看学术加速是开启还是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scholarRocketSupportState 学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。对于ALREADY_SUPPORT的地域才需进一步调用DescribeScholarRocketStatus查看学术加速是开启还是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScholarRocketSupportState(const std::string& _scholarRocketSupportState);

                    /**
                     * 判断参数 ScholarRocketSupportState 是否已赋值
                     * @return ScholarRocketSupportState 是否已赋值
                     * 
                     */
                    bool ScholarRocketSupportStateHasBeenSet() const;

                private:

                    /**
                     * ap-guangzhou

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 华南地区(广州)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域是否可用状态
AVAILABLE：可用

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 学术加速是否支持：
NO_NEED_SUPPORT表示不需支持；NOT_SUPPORT_YET表示暂未支持；ALREADY_SUPPORT表示已经支持。对于ALREADY_SUPPORT的地域才需进一步调用DescribeScholarRocketStatus查看学术加速是开启还是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scholarRocketSupportState;
                    bool m_scholarRocketSupportStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_REGIONINFO_H_
