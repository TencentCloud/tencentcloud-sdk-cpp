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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
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
                     * 获取地域编码
                     * @return RegionCode 地域编码
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域编码
                     * @param _regionCode 地域编码
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取地域中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CnName 地域中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 设置地域中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cnName 地域中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCnName(const std::string& _cnName);

                    /**
                     * 判断参数 CnName 是否已赋值
                     * @return CnName 是否已赋值
                     * 
                     */
                    bool CnNameHasBeenSet() const;

                    /**
                     * 获取地域英文名
                     * @return EnName 地域英文名
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置地域英文名
                     * @param _enName 地域英文名
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取可用区数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableZoneNum 可用区数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAvailableZoneNum() const;

                    /**
                     * 设置可用区数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableZoneNum 可用区数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableZoneNum(const uint64_t& _availableZoneNum);

                    /**
                     * 判断参数 AvailableZoneNum 是否已赋值
                     * @return AvailableZoneNum 是否已赋值
                     * 
                     */
                    bool AvailableZoneNumHasBeenSet() const;

                private:

                    /**
                     * 地域编码
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 地域中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * 地域英文名
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_availableZoneNum;
                    bool m_availableZoneNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_REGIONINFO_H_
