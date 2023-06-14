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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CAPACITY_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 接口扩展参数
                */
                class Capacity : public AbstractModel
                {
                public:
                    Capacity();
                    ~Capacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电信鉴权的Token
                     * @return CTCCToken 电信鉴权的Token
                     * 
                     */
                    std::string GetCTCCToken() const;

                    /**
                     * 设置电信鉴权的Token
                     * @param _cTCCToken 电信鉴权的Token
                     * 
                     */
                    void SetCTCCToken(const std::string& _cTCCToken);

                    /**
                     * 判断参数 CTCCToken 是否已赋值
                     * @return CTCCToken 是否已赋值
                     * 
                     */
                    bool CTCCTokenHasBeenSet() const;

                    /**
                     * 获取终端所处在的省份，建议不填写由服务端自动获取，若需填写请填写带有省、市、自治区、特别行政区等后缀的省份中文全称
                     * @return Province 终端所处在的省份，建议不填写由服务端自动获取，若需填写请填写带有省、市、自治区、特别行政区等后缀的省份中文全称
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置终端所处在的省份，建议不填写由服务端自动获取，若需填写请填写带有省、市、自治区、特别行政区等后缀的省份中文全称
                     * @param _province 终端所处在的省份，建议不填写由服务端自动获取，若需填写请填写带有省、市、自治区、特别行政区等后缀的省份中文全称
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                private:

                    /**
                     * 电信鉴权的Token
                     */
                    std::string m_cTCCToken;
                    bool m_cTCCTokenHasBeenSet;

                    /**
                     * 终端所处在的省份，建议不填写由服务端自动获取，若需填写请填写带有省、市、自治区、特别行政区等后缀的省份中文全称
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CAPACITY_H_
