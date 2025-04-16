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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REGIONDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REGIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SupportFeature.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 区域信息详情
                */
                class RegionDetail : public AbstractModel
                {
                public:
                    RegionDetail();
                    ~RegionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域ID
                     * @return RegionId 区域ID
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置区域ID
                     * @param _regionId 区域ID
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取区域英文名或中文名
                     * @return RegionName 区域英文名或中文名
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域英文名或中文名
                     * @param _regionName 区域英文名或中文名
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
                     * 获取机房所属大区
                     * @return RegionArea 机房所属大区
                     * 
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置机房所属大区
                     * @param _regionArea 机房所属大区
                     * 
                     */
                    void SetRegionArea(const std::string& _regionArea);

                    /**
                     * 判断参数 RegionArea 是否已赋值
                     * @return RegionArea 是否已赋值
                     * 
                     */
                    bool RegionAreaHasBeenSet() const;

                    /**
                     * 获取机房所属大区名
                     * @return RegionAreaName 机房所属大区名
                     * 
                     */
                    std::string GetRegionAreaName() const;

                    /**
                     * 设置机房所属大区名
                     * @param _regionAreaName 机房所属大区名
                     * 
                     */
                    void SetRegionAreaName(const std::string& _regionAreaName);

                    /**
                     * 判断参数 RegionAreaName 是否已赋值
                     * @return RegionAreaName 是否已赋值
                     * 
                     */
                    bool RegionAreaNameHasBeenSet() const;

                    /**
                     * 获取机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     * @return IDCType 机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     * 
                     */
                    std::string GetIDCType() const;

                    /**
                     * 设置机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     * @param _iDCType 机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     * 
                     */
                    void SetIDCType(const std::string& _iDCType);

                    /**
                     * 判断参数 IDCType 是否已赋值
                     * @return IDCType 是否已赋值
                     * 
                     */
                    bool IDCTypeHasBeenSet() const;

                    /**
                     * 获取特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
                     * @return FeatureBitmap 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
                     * 
                     */
                    uint64_t GetFeatureBitmap() const;

                    /**
                     * 设置特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
                     * @param _featureBitmap 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
                     * 
                     */
                    void SetFeatureBitmap(const uint64_t& _featureBitmap);

                    /**
                     * 判断参数 FeatureBitmap 是否已赋值
                     * @return FeatureBitmap 是否已赋值
                     * 
                     */
                    bool FeatureBitmapHasBeenSet() const;

                    /**
                     * 获取接入区域支持的能力
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportFeature 接入区域支持的能力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SupportFeature GetSupportFeature() const;

                    /**
                     * 设置接入区域支持的能力
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportFeature 接入区域支持的能力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportFeature(const SupportFeature& _supportFeature);

                    /**
                     * 判断参数 SupportFeature 是否已赋值
                     * @return SupportFeature 是否已赋值
                     * 
                     */
                    bool SupportFeatureHasBeenSet() const;

                private:

                    /**
                     * 区域ID
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域英文名或中文名
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 机房所属大区
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * 机房所属大区名
                     */
                    std::string m_regionAreaName;
                    bool m_regionAreaNameHasBeenSet;

                    /**
                     * 机房类型, dc表示DataCenter数据中心, ec表示EdgeComputing边缘节点
                     */
                    std::string m_iDCType;
                    bool m_iDCTypeHasBeenSet;

                    /**
                     * 特性位图，每个bit位代表一种特性，其中：
0，表示不支持该特性；
1，表示支持该特性。
特性位图含义如下（从右往左）：
第1个bit，支持4层加速；
第2个bit，支持7层加速；
第3个bit，支持Http3接入；
第4个bit，支持IPv6；
第5个bit，支持精品BGP接入；
第6个bit，支持三网接入；
第7个bit，支持接入段Qos加速。
                     */
                    uint64_t m_featureBitmap;
                    bool m_featureBitmapHasBeenSet;

                    /**
                     * 接入区域支持的能力
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SupportFeature m_supportFeature;
                    bool m_supportFeatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REGIONDETAIL_H_
