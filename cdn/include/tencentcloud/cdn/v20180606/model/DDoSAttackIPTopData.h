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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DDOSATTACKIPTOPDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DDOSATTACKIPTOPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 攻击ip数据详细数据
                */
                class DDoSAttackIPTopData : public AbstractModel
                {
                public:
                    DDoSAttackIPTopData();
                    ~DDoSAttackIPTopData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击ip
                     * @return AttackIP 攻击ip
                     * 
                     */
                    std::string GetAttackIP() const;

                    /**
                     * 设置攻击ip
                     * @param _attackIP 攻击ip
                     * 
                     */
                    void SetAttackIP(const std::string& _attackIP);

                    /**
                     * 判断参数 AttackIP 是否已赋值
                     * @return AttackIP 是否已赋值
                     * 
                     */
                    bool AttackIPHasBeenSet() const;

                    /**
                     * 获取攻击ip所在省份
                     * @return Province 攻击ip所在省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置攻击ip所在省份
                     * @param _province 攻击ip所在省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取攻击ip所在国家
                     * @return Country 攻击ip所在国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置攻击ip所在国家
                     * @param _country 攻击ip所在国家
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取红果电信
                     * @return Isp 红果电信
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置红果电信
                     * @param _isp 红果电信
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取攻击次数
                     * @return AttackCount 攻击次数
                     * 
                     */
                    double GetAttackCount() const;

                    /**
                     * 设置攻击次数
                     * @param _attackCount 攻击次数
                     * 
                     */
                    void SetAttackCount(const double& _attackCount);

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                private:

                    /**
                     * 攻击ip
                     */
                    std::string m_attackIP;
                    bool m_attackIPHasBeenSet;

                    /**
                     * 攻击ip所在省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 攻击ip所在国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 红果电信
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 攻击次数
                     */
                    double m_attackCount;
                    bool m_attackCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DDOSATTACKIPTOPDATA_H_
