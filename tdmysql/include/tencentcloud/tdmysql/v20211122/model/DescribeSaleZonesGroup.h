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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESGROUP_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 查询售卖地域，提供推荐的可用区组合
                */
                class DescribeSaleZonesGroup : public AbstractModel
                {
                public:
                    DescribeSaleZonesGroup();
                    ~DescribeSaleZonesGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可用区数</p>
                     * @return ZoneNum <p>可用区数</p>
                     * 
                     */
                    int64_t GetZoneNum() const;

                    /**
                     * 设置<p>可用区数</p>
                     * @param _zoneNum <p>可用区数</p>
                     * 
                     */
                    void SetZoneNum(const int64_t& _zoneNum);

                    /**
                     * 判断参数 ZoneNum 是否已赋值
                     * @return ZoneNum 是否已赋值
                     * 
                     */
                    bool ZoneNumHasBeenSet() const;

                    /**
                     * 获取<p>可用区组合</p>
                     * @return Zones <p>可用区组合</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>可用区组合</p>
                     * @param _zones <p>可用区组合</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>支持的类型</p>
                     * @return SupportTypes <p>支持的类型</p>
                     * 
                     */
                    std::vector<std::string> GetSupportTypes() const;

                    /**
                     * 设置<p>支持的类型</p>
                     * @param _supportTypes <p>支持的类型</p>
                     * 
                     */
                    void SetSupportTypes(const std::vector<std::string>& _supportTypes);

                    /**
                     * 判断参数 SupportTypes 是否已赋值
                     * @return SupportTypes 是否已赋值
                     * 
                     */
                    bool SupportTypesHasBeenSet() const;

                    /**
                     * 获取<p>支持的磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_TCS： 本地盘</li><li>CLOUD_HSSD： 增强型云盘</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableDiskTypes <p>支持的磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_TCS： 本地盘</li><li>CLOUD_HSSD： 增强型云盘</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAvailableDiskTypes() const;

                    /**
                     * 设置<p>支持的磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_TCS： 本地盘</li><li>CLOUD_HSSD： 增强型云盘</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableDiskTypes <p>支持的磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_TCS： 本地盘</li><li>CLOUD_HSSD： 增强型云盘</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableDiskTypes(const std::vector<std::string>& _availableDiskTypes);

                    /**
                     * 判断参数 AvailableDiskTypes 是否已赋值
                     * @return AvailableDiskTypes 是否已赋值
                     * 
                     */
                    bool AvailableDiskTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否支持serverless</p>
                     * @return IsSupportServerless <p>是否支持serverless</p>
                     * 
                     */
                    bool GetIsSupportServerless() const;

                    /**
                     * 设置<p>是否支持serverless</p>
                     * @param _isSupportServerless <p>是否支持serverless</p>
                     * 
                     */
                    void SetIsSupportServerless(const bool& _isSupportServerless);

                    /**
                     * 判断参数 IsSupportServerless 是否已赋值
                     * @return IsSupportServerless 是否已赋值
                     * 
                     */
                    bool IsSupportServerlessHasBeenSet() const;

                private:

                    /**
                     * <p>可用区数</p>
                     */
                    int64_t m_zoneNum;
                    bool m_zoneNumHasBeenSet;

                    /**
                     * <p>可用区组合</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>支持的类型</p>
                     */
                    std::vector<std::string> m_supportTypes;
                    bool m_supportTypesHasBeenSet;

                    /**
                     * <p>支持的磁盘类型</p><p>枚举值：</p><ul><li>CLOUD_TCS： 本地盘</li><li>CLOUD_HSSD： 增强型云盘</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_availableDiskTypes;
                    bool m_availableDiskTypesHasBeenSet;

                    /**
                     * <p>是否支持serverless</p>
                     */
                    bool m_isSupportServerless;
                    bool m_isSupportServerlessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEZONESGROUP_H_
