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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_NATIONCOUNTRYINNERINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_NATIONCOUNTRYINNERINFO_H_

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
                * 就近接入的国家地区详情
                */
                class NationCountryInnerInfo : public AbstractModel
                {
                public:
                    NationCountryInnerInfo();
                    ~NationCountryInnerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家名
                     * @return NationCountryName 国家名
                     * 
                     */
                    std::string GetNationCountryName() const;

                    /**
                     * 设置国家名
                     * @param _nationCountryName 国家名
                     * 
                     */
                    void SetNationCountryName(const std::string& _nationCountryName);

                    /**
                     * 判断参数 NationCountryName 是否已赋值
                     * @return NationCountryName 是否已赋值
                     * 
                     */
                    bool NationCountryNameHasBeenSet() const;

                    /**
                     * 获取国家内部编码
                     * @return NationCountryInnerCode 国家内部编码
                     * 
                     */
                    std::string GetNationCountryInnerCode() const;

                    /**
                     * 设置国家内部编码
                     * @param _nationCountryInnerCode 国家内部编码
                     * 
                     */
                    void SetNationCountryInnerCode(const std::string& _nationCountryInnerCode);

                    /**
                     * 判断参数 NationCountryInnerCode 是否已赋值
                     * @return NationCountryInnerCode 是否已赋值
                     * 
                     */
                    bool NationCountryInnerCodeHasBeenSet() const;

                private:

                    /**
                     * 国家名
                     */
                    std::string m_nationCountryName;
                    bool m_nationCountryNameHasBeenSet;

                    /**
                     * 国家内部编码
                     */
                    std::string m_nationCountryInnerCode;
                    bool m_nationCountryInnerCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_NATIONCOUNTRYINNERINFO_H_
