/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>证件姓名</p>
                     * @return Name <p>证件姓名</p>
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
                     * 获取<p>性别</p>
                     * @return Sex <p>性别</p>
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
                     * 获取<p>出生日期</p>
                     * @return Birth <p>出生日期</p>
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
                     * 获取<p>地址</p>
                     * @return Address <p>地址</p>
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
                     * 获取<p>身份证号</p>
                     * @return IdCardNo <p>身份证号</p>
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
                     * 获取<p>0-正面<br>1-反面</p>
                     * @return CardType <p>0-正面<br>1-反面</p>
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
                     * 获取<p>证件有效期限</p>
                     * @return ValidDate <p>证件有效期限</p>
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
                     * 获取<p>签发机关</p>
                     * @return Authority <p>签发机关</p>
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
                     * 获取<p>签发次数</p>
                     * @return VisaNum <p>签发次数</p>
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
                     * 获取<p>通行证号码</p>
                     * @return PassNo <p>通行证号码</p>
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
                     * 获取<p>头像和坐标信息</p>
                     * @return PortraitImageInfo <p>头像和坐标信息</p>
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
                     * <p>证件姓名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>性别</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>出生日期</p>
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>身份证号</p>
                     */
                    std::string m_idCardNo;
                    bool m_idCardNoHasBeenSet;

                    /**
                     * <p>0-正面<br>1-反面</p>
                     */
                    int64_t m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * <p>证件有效期限</p>
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * <p>签发机关</p>
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * <p>签发次数</p>
                     */
                    std::string m_visaNum;
                    bool m_visaNumHasBeenSet;

                    /**
                     * <p>通行证号码</p>
                     */
                    std::string m_passNo;
                    bool m_passNoHasBeenSet;

                    /**
                     * <p>头像和坐标信息</p>
                     */
                    PortraitImageInfo m_portraitImageInfo;
                    bool m_portraitImageInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HMTRESIDENTPERMITOCRRESPONSE_H_
