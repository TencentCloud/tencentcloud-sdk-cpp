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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEREGIONCONF_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEREGIONCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 数据订阅地域售卖信息
                */
                class SubscribeRegionConf : public AbstractModel
                {
                public:
                    SubscribeRegionConf();
                    ~SubscribeRegionConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域名称，如广州
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 地域名称，如广州
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称，如广州
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionName 地域名称，如广州
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地区标识，如ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地区标识，如ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地区标识，如ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 地区标识，如ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取地域名称，如华南地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 地域名称，如华南地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域名称，如华南地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Area 地域名称，如华南地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取是否为默认地域，0 - 不是，1 - 是的
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefaultRegion 是否为默认地域，0 - 不是，1 - 是的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsDefaultRegion() const;

                    /**
                     * 设置是否为默认地域，0 - 不是，1 - 是的
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsDefaultRegion 是否为默认地域，0 - 不是，1 - 是的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsDefaultRegion(const int64_t& _isDefaultRegion);

                    /**
                     * 判断参数 IsDefaultRegion 是否已赋值
                     * @return IsDefaultRegion 是否已赋值
                     */
                    bool IsDefaultRegionHasBeenSet() const;

                    /**
                     * 获取当前地域的售卖情况，1 - 正常， 2-灰度，3 - 停售
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前地域的售卖情况，1 - 正常， 2-灰度，3 - 停售
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前地域的售卖情况，1 - 正常， 2-灰度，3 - 停售
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 当前地域的售卖情况，1 - 正常， 2-灰度，3 - 停售
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 地域名称，如广州
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地区标识，如ap-guangzhou
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域名称，如华南地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否为默认地域，0 - 不是，1 - 是的
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDefaultRegion;
                    bool m_isDefaultRegionHasBeenSet;

                    /**
                     * 当前地域的售卖情况，1 - 正常， 2-灰度，3 - 停售
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEREGIONCONF_H_
