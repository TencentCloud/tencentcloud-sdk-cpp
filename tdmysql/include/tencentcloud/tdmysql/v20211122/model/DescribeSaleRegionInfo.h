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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEREGIONINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesInfo.h>
#include <tencentcloud/tdmysql/v20211122/model/DescribeSaleZonesGroup.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 查询售卖接口，region信息返回类型
                */
                class DescribeSaleRegionInfo : public AbstractModel
                {
                public:
                    DescribeSaleRegionInfo();
                    ~DescribeSaleRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Region英文字符串</p>
                     * @return Region <p>Region英文字符串</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region英文字符串</p>
                     * @param _region <p>Region英文字符串</p>
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
                     * 获取<p>售卖Zone列表</p>
                     * @return ZoneList <p>售卖Zone列表</p>
                     * 
                     */
                    std::vector<DescribeSaleZonesInfo> GetZoneList() const;

                    /**
                     * 设置<p>售卖Zone列表</p>
                     * @param _zoneList <p>售卖Zone列表</p>
                     * 
                     */
                    void SetZoneList(const std::vector<DescribeSaleZonesInfo>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取<p>Region中文字符串</p>
                     * @return RegionName <p>Region中文字符串</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>Region中文字符串</p>
                     * @param _regionName <p>Region中文字符串</p>
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
                     * 获取<p>是否售卖。1:售卖，0不售卖</p>
                     * @return Enable <p>是否售卖。1:售卖，0不售卖</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>是否售卖。1:售卖，0不售卖</p>
                     * @param _enable <p>是否售卖。1:售卖，0不售卖</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>多可用可选数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableZoneNum <p>多可用可选数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvailableZoneNum() const;

                    /**
                     * 设置<p>多可用可选数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableZoneNum <p>多可用可选数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableZoneNum(const int64_t& _availableZoneNum);

                    /**
                     * 判断参数 AvailableZoneNum 是否已赋值
                     * @return AvailableZoneNum 是否已赋值
                     * 
                     */
                    bool AvailableZoneNumHasBeenSet() const;

                    /**
                     * 获取<p>是否允许使用日志副本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportedLogReplica <p>是否允许使用日志副本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsSupportedLogReplica() const;

                    /**
                     * 设置<p>是否允许使用日志副本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportedLogReplica <p>是否允许使用日志副本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSupportedLogReplica(const bool& _isSupportedLogReplica);

                    /**
                     * 判断参数 IsSupportedLogReplica 是否已赋值
                     * @return IsSupportedLogReplica 是否已赋值
                     * 
                     */
                    bool IsSupportedLogReplicaHasBeenSet() const;

                    /**
                     * 获取<p>可用区组合</p>
                     * @return ZoneGroup <p>可用区组合</p>
                     * 
                     */
                    std::vector<DescribeSaleZonesGroup> GetZoneGroup() const;

                    /**
                     * 设置<p>可用区组合</p>
                     * @param _zoneGroup <p>可用区组合</p>
                     * 
                     */
                    void SetZoneGroup(const std::vector<DescribeSaleZonesGroup>& _zoneGroup);

                    /**
                     * 判断参数 ZoneGroup 是否已赋值
                     * @return ZoneGroup 是否已赋值
                     * 
                     */
                    bool ZoneGroupHasBeenSet() const;

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
                     * <p>Region英文字符串</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>售卖Zone列表</p>
                     */
                    std::vector<DescribeSaleZonesInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * <p>Region中文字符串</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>是否售卖。1:售卖，0不售卖</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>多可用可选数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_availableZoneNum;
                    bool m_availableZoneNumHasBeenSet;

                    /**
                     * <p>是否允许使用日志副本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSupportedLogReplica;
                    bool m_isSupportedLogReplicaHasBeenSet;

                    /**
                     * <p>可用区组合</p>
                     */
                    std::vector<DescribeSaleZonesGroup> m_zoneGroup;
                    bool m_zoneGroupHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESALEREGIONINFO_H_
