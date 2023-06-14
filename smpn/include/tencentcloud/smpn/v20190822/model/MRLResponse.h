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

#ifndef TENCENTCLOUD_SMPN_V20190822_MODEL_MRLRESPONSE_H_
#define TENCENTCLOUD_SMPN_V20190822_MODEL_MRLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            namespace Model
            {
                /**
                * 号码恶意标记等级
                */
                class MRLResponse : public AbstractModel
                {
                public:
                    MRLResponse();
                    ~MRLResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取骚扰电话恶意标记等级
                     * @return DisturbLevel 骚扰电话恶意标记等级
                     * 
                     */
                    int64_t GetDisturbLevel() const;

                    /**
                     * 设置骚扰电话恶意标记等级
                     * @param _disturbLevel 骚扰电话恶意标记等级
                     * 
                     */
                    void SetDisturbLevel(const int64_t& _disturbLevel);

                    /**
                     * 判断参数 DisturbLevel 是否已赋值
                     * @return DisturbLevel 是否已赋值
                     * 
                     */
                    bool DisturbLevelHasBeenSet() const;

                    /**
                     * 获取房产中介恶意标记等级
                     * @return HouseAgentLevel 房产中介恶意标记等级
                     * 
                     */
                    int64_t GetHouseAgentLevel() const;

                    /**
                     * 设置房产中介恶意标记等级
                     * @param _houseAgentLevel 房产中介恶意标记等级
                     * 
                     */
                    void SetHouseAgentLevel(const int64_t& _houseAgentLevel);

                    /**
                     * 判断参数 HouseAgentLevel 是否已赋值
                     * @return HouseAgentLevel 是否已赋值
                     * 
                     */
                    bool HouseAgentLevelHasBeenSet() const;

                    /**
                     * 获取保险理财恶意标记等级
                     * @return InsuranceLevel 保险理财恶意标记等级
                     * 
                     */
                    int64_t GetInsuranceLevel() const;

                    /**
                     * 设置保险理财恶意标记等级
                     * @param _insuranceLevel 保险理财恶意标记等级
                     * 
                     */
                    void SetInsuranceLevel(const int64_t& _insuranceLevel);

                    /**
                     * 判断参数 InsuranceLevel 是否已赋值
                     * @return InsuranceLevel 是否已赋值
                     * 
                     */
                    bool InsuranceLevelHasBeenSet() const;

                    /**
                     * 获取广告推销恶意标记等级
                     * @return SalesLevel 广告推销恶意标记等级
                     * 
                     */
                    int64_t GetSalesLevel() const;

                    /**
                     * 设置广告推销恶意标记等级
                     * @param _salesLevel 广告推销恶意标记等级
                     * 
                     */
                    void SetSalesLevel(const int64_t& _salesLevel);

                    /**
                     * 判断参数 SalesLevel 是否已赋值
                     * @return SalesLevel 是否已赋值
                     * 
                     */
                    bool SalesLevelHasBeenSet() const;

                    /**
                     * 获取诈骗电话恶意标记等级
                     * @return CheatLevel 诈骗电话恶意标记等级
                     * 
                     */
                    int64_t GetCheatLevel() const;

                    /**
                     * 设置诈骗电话恶意标记等级
                     * @param _cheatLevel 诈骗电话恶意标记等级
                     * 
                     */
                    void SetCheatLevel(const int64_t& _cheatLevel);

                    /**
                     * 判断参数 CheatLevel 是否已赋值
                     * @return CheatLevel 是否已赋值
                     * 
                     */
                    bool CheatLevelHasBeenSet() const;

                private:

                    /**
                     * 骚扰电话恶意标记等级
                     */
                    int64_t m_disturbLevel;
                    bool m_disturbLevelHasBeenSet;

                    /**
                     * 房产中介恶意标记等级
                     */
                    int64_t m_houseAgentLevel;
                    bool m_houseAgentLevelHasBeenSet;

                    /**
                     * 保险理财恶意标记等级
                     */
                    int64_t m_insuranceLevel;
                    bool m_insuranceLevelHasBeenSet;

                    /**
                     * 广告推销恶意标记等级
                     */
                    int64_t m_salesLevel;
                    bool m_salesLevelHasBeenSet;

                    /**
                     * 诈骗电话恶意标记等级
                     */
                    int64_t m_cheatLevel;
                    bool m_cheatLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_MODEL_MRLRESPONSE_H_
