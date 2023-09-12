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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ATTACKEVENT_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ATTACKEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 攻击事件
                */
                class AttackEvent : public AbstractModel
                {
                public:
                    AttackEvent();
                    ~AttackEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaSrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaSrcIp() const;

                    /**
                     * 设置来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaSrcIp 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaSrcIp(const std::string& _ssaSrcIp);

                    /**
                     * 判断参数 SsaSrcIp 是否已赋值
                     * @return SsaSrcIp 是否已赋值
                     * 
                     */
                    bool SsaSrcIpHasBeenSet() const;

                    /**
                     * 获取目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaDstIp 目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaDstIp() const;

                    /**
                     * 设置目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaDstIp 目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaDstIp(const std::string& _ssaDstIp);

                    /**
                     * 判断参数 SsaDstIp 是否已赋值
                     * @return SsaDstIp 是否已赋值
                     * 
                     */
                    bool SsaDstIpHasBeenSet() const;

                    /**
                     * 获取目标省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaDstProvince 目标省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaDstProvince() const;

                    /**
                     * 设置目标省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaDstProvince 目标省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaDstProvince(const std::string& _ssaDstProvince);

                    /**
                     * 判断参数 SsaDstProvince 是否已赋值
                     * @return SsaDstProvince 是否已赋值
                     * 
                     */
                    bool SsaDstProvinceHasBeenSet() const;

                    /**
                     * 获取目标城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaDstCity 目标城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaDstCity() const;

                    /**
                     * 设置目标城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaDstCity 目标城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaDstCity(const std::string& _ssaDstCity);

                    /**
                     * 判断参数 SsaDstCity 是否已赋值
                     * @return SsaDstCity 是否已赋值
                     * 
                     */
                    bool SsaDstCityHasBeenSet() const;

                    /**
                     * 获取目标国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaDstCountry 目标国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaDstCountry() const;

                    /**
                     * 设置目标国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaDstCountry 目标国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaDstCountry(const std::string& _ssaDstCountry);

                    /**
                     * 判断参数 SsaDstCountry 是否已赋值
                     * @return SsaDstCountry 是否已赋值
                     * 
                     */
                    bool SsaDstCountryHasBeenSet() const;

                    /**
                     * 获取来源省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaSrcProvince 来源省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaSrcProvince() const;

                    /**
                     * 设置来源省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaSrcProvince 来源省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaSrcProvince(const std::string& _ssaSrcProvince);

                    /**
                     * 判断参数 SsaSrcProvince 是否已赋值
                     * @return SsaSrcProvince 是否已赋值
                     * 
                     */
                    bool SsaSrcProvinceHasBeenSet() const;

                    /**
                     * 获取来源国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaSrcCountry 来源国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaSrcCountry() const;

                    /**
                     * 设置来源国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaSrcCountry 来源国家
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaSrcCountry(const std::string& _ssaSrcCountry);

                    /**
                     * 判断参数 SsaSrcCountry 是否已赋值
                     * @return SsaSrcCountry 是否已赋值
                     * 
                     */
                    bool SsaSrcCountryHasBeenSet() const;

                    /**
                     * 获取来源城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaSrcCity 来源城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaSrcCity() const;

                    /**
                     * 设置来源城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaSrcCity 来源城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaSrcCity(const std::string& _ssaSrcCity);

                    /**
                     * 判断参数 SsaSrcCity 是否已赋值
                     * @return SsaSrcCity 是否已赋值
                     * 
                     */
                    bool SsaSrcCityHasBeenSet() const;

                private:

                    /**
                     * 来源ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaSrcIp;
                    bool m_ssaSrcIpHasBeenSet;

                    /**
                     * 目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaDstIp;
                    bool m_ssaDstIpHasBeenSet;

                    /**
                     * 目标省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaDstProvince;
                    bool m_ssaDstProvinceHasBeenSet;

                    /**
                     * 目标城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaDstCity;
                    bool m_ssaDstCityHasBeenSet;

                    /**
                     * 目标国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaDstCountry;
                    bool m_ssaDstCountryHasBeenSet;

                    /**
                     * 来源省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaSrcProvince;
                    bool m_ssaSrcProvinceHasBeenSet;

                    /**
                     * 来源国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaSrcCountry;
                    bool m_ssaSrcCountryHasBeenSet;

                    /**
                     * 来源城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaSrcCity;
                    bool m_ssaSrcCityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ATTACKEVENT_H_
