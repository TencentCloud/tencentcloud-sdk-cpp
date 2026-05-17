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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
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
                     * 获取<p>地域中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName <p>地域中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionName <p>地域中文</p>
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
                     * 获取<p>是否境外</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Foreign <p>是否境外</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetForeign() const;

                    /**
                     * 设置<p>是否境外</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _foreign <p>是否境外</p>
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
                     * 获取<p>地域码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code <p>地域码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>地域码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code <p>地域码</p>
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
                     * 获取<p>是否自驾云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAutoDriveCloud <p>是否自驾云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAutoDriveCloud() const;

                    /**
                     * 设置<p>是否自驾云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAutoDriveCloud <p>是否自驾云</p>
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
                     * 获取<p>是否支持nat</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportNat <p>是否支持nat</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSupportNat() const;

                    /**
                     * 设置<p>是否支持nat</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportNat <p>是否支持nat</p>
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
                     * 获取<p>地区信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionArea <p>地区信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionArea() const;

                    /**
                     * 设置<p>地区信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionArea <p>地区信息</p>
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
                     * 获取<p>地域英文</p>
                     * @return RegionNameEN <p>地域英文</p>
                     * 
                     */
                    std::string GetRegionNameEN() const;

                    /**
                     * 设置<p>地域英文</p>
                     * @param _regionNameEN <p>地域英文</p>
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
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>地域中文</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>是否境外</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_foreign;
                    bool m_foreignHasBeenSet;

                    /**
                     * <p>地域码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>是否自驾云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAutoDriveCloud;
                    bool m_isAutoDriveCloudHasBeenSet;

                    /**
                     * <p>是否支持nat</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSupportNat;
                    bool m_isSupportNatHasBeenSet;

                    /**
                     * <p>地区信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionArea;
                    bool m_regionAreaHasBeenSet;

                    /**
                     * <p>地域英文</p>
                     */
                    std::string m_regionNameEN;
                    bool m_regionNameENHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_REGIONCONFIG_H_
