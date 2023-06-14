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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BOTSTATISTICSCOUNT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BOTSTATISTICSCOUNT_H_

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
                * session/ip维度的bot统计复杂对象
                */
                class BotStatisticsCount : public AbstractModel
                {
                public:
                    BotStatisticsCount();
                    ~BotStatisticsCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取BOT次数
                     * @return Count BOT次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置BOT次数
                     * @param _count BOT次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Top指标值,如果是ip维度就是ip如果是session维度就是域名
                     * @return Value Top指标值,如果是ip维度就是ip如果是session维度就是域名
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Top指标值,如果是ip维度就是ip如果是session维度就是域名
                     * @param _value Top指标值,如果是ip维度就是ip如果是session维度就是域名
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取ip所在国家
                     * @return Country ip所在国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置ip所在国家
                     * @param _country ip所在国家
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
                     * 获取ip所在省份
                     * @return Province ip所在省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置ip所在省份
                     * @param _province ip所在省份
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
                     * 获取ip归属的idc
                     * @return Isp ip归属的idc
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置ip归属的idc
                     * @param _isp ip归属的idc
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                private:

                    /**
                     * BOT次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Top指标值,如果是ip维度就是ip如果是session维度就是域名
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * ip所在国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * ip所在省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * ip归属的idc
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BOTSTATISTICSCOUNT_H_
