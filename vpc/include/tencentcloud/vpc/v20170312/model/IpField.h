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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPFIELD_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * IP在线查询的字段信息
                */
                class IpField : public AbstractModel
                {
                public:
                    IpField();
                    ~IpField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取国家字段信息
                     * @return Country 国家字段信息
                     * 
                     */
                    bool GetCountry() const;

                    /**
                     * 设置国家字段信息
                     * @param _country 国家字段信息
                     * 
                     */
                    void SetCountry(const bool& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省、州、郡一级行政区域字段信息
                     * @return Province 省、州、郡一级行政区域字段信息
                     * 
                     */
                    bool GetProvince() const;

                    /**
                     * 设置省、州、郡一级行政区域字段信息
                     * @param _province 省、州、郡一级行政区域字段信息
                     * 
                     */
                    void SetProvince(const bool& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市一级行政区域字段信息
                     * @return City 市一级行政区域字段信息
                     * 
                     */
                    bool GetCity() const;

                    /**
                     * 设置市一级行政区域字段信息
                     * @param _city 市一级行政区域字段信息
                     * 
                     */
                    void SetCity(const bool& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取市内区域字段信息
                     * @return Region 市内区域字段信息
                     * 
                     */
                    bool GetRegion() const;

                    /**
                     * 设置市内区域字段信息
                     * @param _region 市内区域字段信息
                     * 
                     */
                    void SetRegion(const bool& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取接入运营商字段信息
                     * @return Isp 接入运营商字段信息
                     * 
                     */
                    bool GetIsp() const;

                    /**
                     * 设置接入运营商字段信息
                     * @param _isp 接入运营商字段信息
                     * 
                     */
                    void SetIsp(const bool& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取骨干运营商字段信息
                     * @return AsName 骨干运营商字段信息
                     * 
                     */
                    bool GetAsName() const;

                    /**
                     * 设置骨干运营商字段信息
                     * @param _asName 骨干运营商字段信息
                     * 
                     */
                    void SetAsName(const bool& _asName);

                    /**
                     * 判断参数 AsName 是否已赋值
                     * @return AsName 是否已赋值
                     * 
                     */
                    bool AsNameHasBeenSet() const;

                    /**
                     * 获取骨干As号
                     * @return AsId 骨干As号
                     * 
                     */
                    bool GetAsId() const;

                    /**
                     * 设置骨干As号
                     * @param _asId 骨干As号
                     * 
                     */
                    void SetAsId(const bool& _asId);

                    /**
                     * 判断参数 AsId 是否已赋值
                     * @return AsId 是否已赋值
                     * 
                     */
                    bool AsIdHasBeenSet() const;

                    /**
                     * 获取注释字段
                     * @return Comment 注释字段
                     * 
                     */
                    bool GetComment() const;

                    /**
                     * 设置注释字段
                     * @param _comment 注释字段
                     * 
                     */
                    void SetComment(const bool& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 国家字段信息
                     */
                    bool m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省、州、郡一级行政区域字段信息
                     */
                    bool m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市一级行政区域字段信息
                     */
                    bool m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 市内区域字段信息
                     */
                    bool m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 接入运营商字段信息
                     */
                    bool m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 骨干运营商字段信息
                     */
                    bool m_asName;
                    bool m_asNameHasBeenSet;

                    /**
                     * 骨干As号
                     */
                    bool m_asId;
                    bool m_asIdHasBeenSet;

                    /**
                     * 注释字段
                     */
                    bool m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPFIELD_H_
