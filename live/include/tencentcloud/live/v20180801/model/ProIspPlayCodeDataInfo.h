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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYCODEDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYCODEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 播放错误码信息
                */
                class ProIspPlayCodeDataInfo : public AbstractModel
                {
                public:
                    ProIspPlayCodeDataInfo();
                    ~ProIspPlayCodeDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家或地区。
                     * @return CountryAreaName 国家或地区。
                     * 
                     */
                    std::string GetCountryAreaName() const;

                    /**
                     * 设置国家或地区。
                     * @param _countryAreaName 国家或地区。
                     * 
                     */
                    void SetCountryAreaName(const std::string& _countryAreaName);

                    /**
                     * 判断参数 CountryAreaName 是否已赋值
                     * @return CountryAreaName 是否已赋值
                     * 
                     */
                    bool CountryAreaNameHasBeenSet() const;

                    /**
                     * 获取省份。
                     * @return ProvinceName 省份。
                     * 
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置省份。
                     * @param _provinceName 省份。
                     * 
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     * 
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取运营商。
                     * @return IspName 运营商。
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置运营商。
                     * @param _ispName 运营商。
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取错误码为2开头的次数。
                     * @return Code2xx 错误码为2开头的次数。
                     * 
                     */
                    uint64_t GetCode2xx() const;

                    /**
                     * 设置错误码为2开头的次数。
                     * @param _code2xx 错误码为2开头的次数。
                     * 
                     */
                    void SetCode2xx(const uint64_t& _code2xx);

                    /**
                     * 判断参数 Code2xx 是否已赋值
                     * @return Code2xx 是否已赋值
                     * 
                     */
                    bool Code2xxHasBeenSet() const;

                    /**
                     * 获取错误码为3开头的次数。
                     * @return Code3xx 错误码为3开头的次数。
                     * 
                     */
                    uint64_t GetCode3xx() const;

                    /**
                     * 设置错误码为3开头的次数。
                     * @param _code3xx 错误码为3开头的次数。
                     * 
                     */
                    void SetCode3xx(const uint64_t& _code3xx);

                    /**
                     * 判断参数 Code3xx 是否已赋值
                     * @return Code3xx 是否已赋值
                     * 
                     */
                    bool Code3xxHasBeenSet() const;

                    /**
                     * 获取错误码为4开头的次数。
                     * @return Code4xx 错误码为4开头的次数。
                     * 
                     */
                    uint64_t GetCode4xx() const;

                    /**
                     * 设置错误码为4开头的次数。
                     * @param _code4xx 错误码为4开头的次数。
                     * 
                     */
                    void SetCode4xx(const uint64_t& _code4xx);

                    /**
                     * 判断参数 Code4xx 是否已赋值
                     * @return Code4xx 是否已赋值
                     * 
                     */
                    bool Code4xxHasBeenSet() const;

                    /**
                     * 获取错误码为5开头的次数。
                     * @return Code5xx 错误码为5开头的次数。
                     * 
                     */
                    uint64_t GetCode5xx() const;

                    /**
                     * 设置错误码为5开头的次数。
                     * @param _code5xx 错误码为5开头的次数。
                     * 
                     */
                    void SetCode5xx(const uint64_t& _code5xx);

                    /**
                     * 判断参数 Code5xx 是否已赋值
                     * @return Code5xx 是否已赋值
                     * 
                     */
                    bool Code5xxHasBeenSet() const;

                private:

                    /**
                     * 国家或地区。
                     */
                    std::string m_countryAreaName;
                    bool m_countryAreaNameHasBeenSet;

                    /**
                     * 省份。
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * 运营商。
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * 错误码为2开头的次数。
                     */
                    uint64_t m_code2xx;
                    bool m_code2xxHasBeenSet;

                    /**
                     * 错误码为3开头的次数。
                     */
                    uint64_t m_code3xx;
                    bool m_code3xxHasBeenSet;

                    /**
                     * 错误码为4开头的次数。
                     */
                    uint64_t m_code4xx;
                    bool m_code4xxHasBeenSet;

                    /**
                     * 错误码为5开头的次数。
                     */
                    uint64_t m_code5xx;
                    bool m_code5xxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYCODEDATAINFO_H_
