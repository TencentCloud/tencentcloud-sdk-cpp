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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/PortraitImageInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * HmtResidentPermitOCR返回参数结构体
                */
                class HmtResidentPermitOCRResponse : public AbstractModel
                {
                public:
                    HmtResidentPermitOCRResponse();
                    ~HmtResidentPermitOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证件姓名
                     * @return Name 证件姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return Sex 性别
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取出生日期
                     * @return Birth 出生日期
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Address 地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return IdCardNo 身份证号
                     * 
                     */
                    std::string GetIdCardNo() const;

                    /**
                     * 判断参数 IdCardNo 是否已赋值
                     * @return IdCardNo 是否已赋值
                     * 
                     */
                    bool IdCardNoHasBeenSet() const;

                    /**
                     * 获取0-正面
1-反面
                     * @return CardType 0-正面
1-反面
                     * 
                     */
                    int64_t GetCardType() const;

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取证件有效期限
                     * @return ValidDate 证件有效期限
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取签发机关
                     * @return Authority 签发机关
                     * 
                     */
                    std::string GetAuthority() const;

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取签发次数
                     * @return VisaNum 签发次数
                     * 
                     */
                    std::string GetVisaNum() const;

                    /**
                     * 判断参数 VisaNum 是否已赋值
                     * @return VisaNum 是否已赋值
                     * 
                     */
                    bool VisaNumHasBeenSet() const;

                    /**
                     * 获取通行证号码
                     * @return PassNo 通行证号码
                     * 
                     */
                    std::string GetPassNo() const;

                    /**
                     * 判断参数 PassNo 是否已赋值
                     * @return PassNo 是否已赋值
                     * 
                     */
                    bool PassNoHasBeenSet() const;

                    /**
                     * 获取头像和坐标信息
                     * @return PortraitImageInfo 头像和坐标信息
                     * 
                     */
                    PortraitImageInfo GetPortraitImageInfo() const;

                    /**
                     * 判断参数 PortraitImageInfo 是否已赋值
                     * @return PortraitImageInfo 是否已赋值
                     * 
                     */
                    bool PortraitImageInfoHasBeenSet() const;

                private:

                    /**
                     * 证件姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_idCardNo;
                    bool m_idCardNoHasBeenSet;

                    /**
                     * 0-正面
1-反面
                     */
                    int64_t m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * 证件有效期限
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 签发机关
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * 签发次数
                     */
                    std::string m_visaNum;
                    bool m_visaNumHasBeenSet;

                    /**
                     * 通行证号码
                     */
                    std::string m_passNo;
                    bool m_passNoHasBeenSet;

                    /**
                     * 头像和坐标信息
                     */
                    PortraitImageInfo m_portraitImageInfo;
                    bool m_portraitImageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
