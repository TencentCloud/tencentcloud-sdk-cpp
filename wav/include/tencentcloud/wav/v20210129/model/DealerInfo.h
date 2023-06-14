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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_DEALERINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_DEALERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 经销商信息
                */
                class DealerInfo : public AbstractModel
                {
                public:
                    DealerInfo();
                    ~DealerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企微SaaS平台经销商id
                     * @return DealerId 企微SaaS平台经销商id
                     * 
                     */
                    uint64_t GetDealerId() const;

                    /**
                     * 设置企微SaaS平台经销商id
                     * @param _dealerId 企微SaaS平台经销商id
                     * 
                     */
                    void SetDealerId(const uint64_t& _dealerId);

                    /**
                     * 判断参数 DealerId 是否已赋值
                     * @return DealerId 是否已赋值
                     * 
                     */
                    bool DealerIdHasBeenSet() const;

                    /**
                     * 获取经销商名称
                     * @return DealerName 经销商名称
                     * 
                     */
                    std::string GetDealerName() const;

                    /**
                     * 设置经销商名称
                     * @param _dealerName 经销商名称
                     * 
                     */
                    void SetDealerName(const std::string& _dealerName);

                    /**
                     * 判断参数 DealerName 是否已赋值
                     * @return DealerName 是否已赋值
                     * 
                     */
                    bool DealerNameHasBeenSet() const;

                    /**
                     * 获取所属省份编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProvinceCode 所属省份编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvinceCode() const;

                    /**
                     * 设置所属省份编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _provinceCode 所属省份编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvinceCode(const std::string& _provinceCode);

                    /**
                     * 判断参数 ProvinceCode 是否已赋值
                     * @return ProvinceCode 是否已赋值
                     * 
                     */
                    bool ProvinceCodeHasBeenSet() const;

                    /**
                     * 获取所属城市编号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityCodeList 所属城市编号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCityCodeList() const;

                    /**
                     * 设置所属城市编号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityCodeList 所属城市编号列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityCodeList(const std::vector<std::string>& _cityCodeList);

                    /**
                     * 判断参数 CityCodeList 是否已赋值
                     * @return CityCodeList 是否已赋值
                     * 
                     */
                    bool CityCodeListHasBeenSet() const;

                    /**
                     * 获取业务覆盖品牌id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrandIdList 业务覆盖品牌id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBrandIdList() const;

                    /**
                     * 设置业务覆盖品牌id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brandIdList 业务覆盖品牌id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrandIdList(const std::vector<std::string>& _brandIdList);

                    /**
                     * 判断参数 BrandIdList 是否已赋值
                     * @return BrandIdList 是否已赋值
                     * 
                     */
                    bool BrandIdListHasBeenSet() const;

                private:

                    /**
                     * 企微SaaS平台经销商id
                     */
                    uint64_t m_dealerId;
                    bool m_dealerIdHasBeenSet;

                    /**
                     * 经销商名称
                     */
                    std::string m_dealerName;
                    bool m_dealerNameHasBeenSet;

                    /**
                     * 所属省份编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provinceCode;
                    bool m_provinceCodeHasBeenSet;

                    /**
                     * 所属城市编号列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_cityCodeList;
                    bool m_cityCodeListHasBeenSet;

                    /**
                     * 业务覆盖品牌id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_brandIdList;
                    bool m_brandIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_DEALERINFO_H_
