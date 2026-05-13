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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 地域配置
                */
                class RegionConfig : public AbstractModel
                {
                public:
                    RegionConfig();
                    ~RegionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
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
                     * 获取地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionName 地域中文
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
                     * 获取是否国外
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Foreign 是否国外
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetForeign() const;

                    /**
                     * 设置是否国外
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _foreign 是否国外
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForeign(const int64_t& _foreign);

                    /**
                     * 判断参数 Foreign 是否已赋值
                     * @return Foreign 是否已赋值
                     * 
                     */
                    bool ForeignHasBeenSet() const;

                    /**
                     * 获取地域码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 地域码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置地域码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 地域码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取是否自驾云
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAutoDriveCloud 是否自驾云
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAutoDriveCloud() const;

                    /**
                     * 设置是否自驾云
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAutoDriveCloud 是否自驾云
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAutoDriveCloud(const int64_t& _isAutoDriveCloud);

                    /**
                     * 判断参数 IsAutoDriveCloud 是否已赋值
                     * @return IsAutoDriveCloud 是否已赋值
                     * 
                     */
                    bool IsAutoDriveCloudHasBeenSet() const;

                    /**
                     * 获取是否支持nat
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportNat 是否支持nat
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSupportNat() const;

                    /**
                     * 设置是否支持nat
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportNat 是否支持nat
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSupportNat(const int64_t& _isSupportNat);

                    /**
                     * 判断参数 IsSupportNat 是否已赋值
                     * @return IsSupportNat 是否已赋值
                     * 
                     */
                    bool IsSupportNatHasBeenSet() const;

                    /**
                     * 获取地区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionArea 地区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置地区信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionArea 地区信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取地域英文
                     * @return RegionNameEN 地域英文
                     * 
                     */
                    std::string GetRegionNameEN() const;

                    /**
                     * 设置地域英文
                     * @param _regionNameEN 地域英文
                     * 
                     */
                    void SetRegionNameEN(const std::string& _regionNameEN);

                    /**
                     * 判断参数 RegionNameEN 是否已赋值
                     * @return RegionNameEN 是否已赋值
                     * 
                     */
                    bool RegionNameENHasBeenSet() const;

                private:

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域中文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 是否国外
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_foreign;
                    bool m_foreignHasBeenSet;

                    /**
                     * 地域码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 是否自驾云
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAutoDriveCloud;
                    bool m_isAutoDriveCloudHasBeenSet;

                    /**
                     * 是否支持nat
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSupportNat;
                    bool m_isSupportNatHasBeenSet;

                    /**
                     * 地区信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * 地域英文
                     */
                    std::string m_regionNameEN;
                    bool m_regionNameENHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_
