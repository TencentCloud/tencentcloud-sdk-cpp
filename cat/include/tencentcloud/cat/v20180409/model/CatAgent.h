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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_CATAGENT_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_CATAGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 拨测Agent 所在省份、运营商
                */
                class CatAgent : public AbstractModel
                {
                public:
                    CatAgent();
                    ~CatAgent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拨测结点所在的省份（拼音缩写）
                     * @return Province 拨测结点所在的省份（拼音缩写）
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置拨测结点所在的省份（拼音缩写）
                     * @param Province 拨测结点所在的省份（拼音缩写）
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取拨测结点所在的运营商（英文缩写）
                     * @return Isp 拨测结点所在的运营商（英文缩写）
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置拨测结点所在的运营商（英文缩写）
                     * @param Isp 拨测结点所在的运营商（英文缩写）
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取拨测结点所在的省份（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProvinceName 拨测结点所在的省份（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置拨测结点所在的省份（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProvinceName 拨测结点所在的省份（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取拨测结点所在的运营商（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IspName 拨测结点所在的运营商（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置拨测结点所在的运营商（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IspName 拨测结点所在的运营商（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     */
                    bool IspNameHasBeenSet() const;

                private:

                    /**
                     * 拨测结点所在的省份（拼音缩写）
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 拨测结点所在的运营商（英文缩写）
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 拨测结点所在的省份（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * 拨测结点所在的运营商（中文名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_CATAGENT_H_
