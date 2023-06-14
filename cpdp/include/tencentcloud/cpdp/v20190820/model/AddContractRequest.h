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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ADDCONTRACTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ADDCONTRACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * AddContract请求参数结构体
                */
                class AddContractRequest : public AbstractModel
                {
                public:
                    AddContractRequest();
                    ~AddContractRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收单系统分配的开放ID
                     * @return OpenId 收单系统分配的开放ID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置收单系统分配的开放ID
                     * @param _openId 收单系统分配的开放ID
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取收单系统分配的密钥
                     * @return OpenKey 收单系统分配的密钥
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置收单系统分配的密钥
                     * @param _openKey 收单系统分配的密钥
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取机构合同主键（系统有唯一性校验），建议使用合同表的主键ID，防止重复添加合同
                     * @return OutContractId 机构合同主键（系统有唯一性校验），建议使用合同表的主键ID，防止重复添加合同
                     * 
                     */
                    std::string GetOutContractId() const;

                    /**
                     * 设置机构合同主键（系统有唯一性校验），建议使用合同表的主键ID，防止重复添加合同
                     * @param _outContractId 机构合同主键（系统有唯一性校验），建议使用合同表的主键ID，防止重复添加合同
                     * 
                     */
                    void SetOutContractId(const std::string& _outContractId);

                    /**
                     * 判断参数 OutContractId 是否已赋值
                     * @return OutContractId 是否已赋值
                     * 
                     */
                    bool OutContractIdHasBeenSet() const;

                    /**
                     * 获取合同编号（系统有唯一性校验）
                     * @return Code 合同编号（系统有唯一性校验）
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置合同编号（系统有唯一性校验）
                     * @param _code 合同编号（系统有唯一性校验）
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取支付方式编号
                     * @return PaymentId 支付方式编号
                     * 
                     */
                    std::string GetPaymentId() const;

                    /**
                     * 设置支付方式编号
                     * @param _paymentId 支付方式编号
                     * 
                     */
                    void SetPaymentId(const std::string& _paymentId);

                    /**
                     * 判断参数 PaymentId 是否已赋值
                     * @return PaymentId 是否已赋值
                     * 
                     */
                    bool PaymentIdHasBeenSet() const;

                    /**
                     * 获取支付方式行业分类编号
                     * @return PaymentClassificationId 支付方式行业分类编号
                     * 
                     */
                    std::string GetPaymentClassificationId() const;

                    /**
                     * 设置支付方式行业分类编号
                     * @param _paymentClassificationId 支付方式行业分类编号
                     * 
                     */
                    void SetPaymentClassificationId(const std::string& _paymentClassificationId);

                    /**
                     * 判断参数 PaymentClassificationId 是否已赋值
                     * @return PaymentClassificationId 是否已赋值
                     * 
                     */
                    bool PaymentClassificationIdHasBeenSet() const;

                    /**
                     * 获取封顶值（分为单位，无封顶填0）
                     * @return PaymentClassificationLimit 封顶值（分为单位，无封顶填0）
                     * 
                     */
                    std::string GetPaymentClassificationLimit() const;

                    /**
                     * 设置封顶值（分为单位，无封顶填0）
                     * @param _paymentClassificationLimit 封顶值（分为单位，无封顶填0）
                     * 
                     */
                    void SetPaymentClassificationLimit(const std::string& _paymentClassificationLimit);

                    /**
                     * 判断参数 PaymentClassificationLimit 是否已赋值
                     * @return PaymentClassificationLimit 是否已赋值
                     * 
                     */
                    bool PaymentClassificationLimitHasBeenSet() const;

                    /**
                     * 获取商户编号
                     * @return MerchantNo 商户编号
                     * 
                     */
                    std::string GetMerchantNo() const;

                    /**
                     * 设置商户编号
                     * @param _merchantNo 商户编号
                     * 
                     */
                    void SetMerchantNo(const std::string& _merchantNo);

                    /**
                     * 判断参数 MerchantNo 是否已赋值
                     * @return MerchantNo 是否已赋值
                     * 
                     */
                    bool MerchantNoHasBeenSet() const;

                    /**
                     * 获取签约扣率百分比（如：0.32）
                     * @return Fee 签约扣率百分比（如：0.32）
                     * 
                     */
                    std::string GetFee() const;

                    /**
                     * 设置签约扣率百分比（如：0.32）
                     * @param _fee 签约扣率百分比（如：0.32）
                     * 
                     */
                    void SetFee(const std::string& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                    /**
                     * 获取合同生效日期（yyyy-mm-dd）
                     * @return StartDate 合同生效日期（yyyy-mm-dd）
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置合同生效日期（yyyy-mm-dd）
                     * @param _startDate 合同生效日期（yyyy-mm-dd）
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取合同过期日期（yyyy-mm-dd）
                     * @return EndDate 合同过期日期（yyyy-mm-dd）
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置合同过期日期（yyyy-mm-dd）
                     * @param _endDate 合同过期日期（yyyy-mm-dd）
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取合同签约人
                     * @return SignMan 合同签约人
                     * 
                     */
                    std::string GetSignMan() const;

                    /**
                     * 设置合同签约人
                     * @param _signMan 合同签约人
                     * 
                     */
                    void SetSignMan(const std::string& _signMan);

                    /**
                     * 判断参数 SignMan 是否已赋值
                     * @return SignMan 是否已赋值
                     * 
                     */
                    bool SignManHasBeenSet() const;

                    /**
                     * 获取签购单名称，建议使用商户招牌名称
                     * @return SignName 签购单名称，建议使用商户招牌名称
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置签购单名称，建议使用商户招牌名称
                     * @param _signName 签购单名称，建议使用商户招牌名称
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取合同签署日期（yyyy-mm-dd）
                     * @return SignDate 合同签署日期（yyyy-mm-dd）
                     * 
                     */
                    std::string GetSignDate() const;

                    /**
                     * 设置合同签署日期（yyyy-mm-dd）
                     * @param _signDate 合同签署日期（yyyy-mm-dd）
                     * 
                     */
                    void SetSignDate(const std::string& _signDate);

                    /**
                     * 判断参数 SignDate 是否已赋值
                     * @return SignDate 是否已赋值
                     * 
                     */
                    bool SignDateHasBeenSet() const;

                    /**
                     * 获取是否自动续签（1是，0否）
                     * @return AutoSign 是否自动续签（1是，0否）
                     * 
                     */
                    std::string GetAutoSign() const;

                    /**
                     * 设置是否自动续签（1是，0否）
                     * @param _autoSign 是否自动续签（1是，0否）
                     * 
                     */
                    void SetAutoSign(const std::string& _autoSign);

                    /**
                     * 判断参数 AutoSign 是否已赋值
                     * @return AutoSign 是否已赋值
                     * 
                     */
                    bool AutoSignHasBeenSet() const;

                    /**
                     * 获取联系人
                     * @return Contact 联系人
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 设置联系人
                     * @param _contact 联系人
                     * 
                     */
                    void SetContact(const std::string& _contact);

                    /**
                     * 判断参数 Contact 是否已赋值
                     * @return Contact 是否已赋值
                     * 
                     */
                    bool ContactHasBeenSet() const;

                    /**
                     * 获取联系人电话
                     * @return ContactTelephone 联系人电话
                     * 
                     */
                    std::string GetContactTelephone() const;

                    /**
                     * 设置联系人电话
                     * @param _contactTelephone 联系人电话
                     * 
                     */
                    void SetContactTelephone(const std::string& _contactTelephone);

                    /**
                     * 判断参数 ContactTelephone 是否已赋值
                     * @return ContactTelephone 是否已赋值
                     * 
                     */
                    bool ContactTelephoneHasBeenSet() const;

                    /**
                     * 获取合同照片【私密区】
                     * @return PictureOne 合同照片【私密区】
                     * 
                     */
                    std::string GetPictureOne() const;

                    /**
                     * 设置合同照片【私密区】
                     * @param _pictureOne 合同照片【私密区】
                     * 
                     */
                    void SetPictureOne(const std::string& _pictureOne);

                    /**
                     * 判断参数 PictureOne 是否已赋值
                     * @return PictureOne 是否已赋值
                     * 
                     */
                    bool PictureOneHasBeenSet() const;

                    /**
                     * 获取合同照片【私密区】
                     * @return PictureTwo 合同照片【私密区】
                     * 
                     */
                    std::string GetPictureTwo() const;

                    /**
                     * 设置合同照片【私密区】
                     * @param _pictureTwo 合同照片【私密区】
                     * 
                     */
                    void SetPictureTwo(const std::string& _pictureTwo);

                    /**
                     * 判断参数 PictureTwo 是否已赋值
                     * @return PictureTwo 是否已赋值
                     * 
                     */
                    bool PictureTwoHasBeenSet() const;

                    /**
                     * 获取渠道扩展字段，json格式
                     * @return ChannelExtJson 渠道扩展字段，json格式
                     * 
                     */
                    std::string GetChannelExtJson() const;

                    /**
                     * 设置渠道扩展字段，json格式
                     * @param _channelExtJson 渠道扩展字段，json格式
                     * 
                     */
                    void SetChannelExtJson(const std::string& _channelExtJson);

                    /**
                     * 判断参数 ChannelExtJson 是否已赋值
                     * @return ChannelExtJson 是否已赋值
                     * 
                     */
                    bool ChannelExtJsonHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取合同选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionOne 合同选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionOne() const;

                    /**
                     * 设置合同选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionOne 合同选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionOne(const std::string& _paymentOptionOne);

                    /**
                     * 判断参数 PaymentOptionOne 是否已赋值
                     * @return PaymentOptionOne 是否已赋值
                     * 
                     */
                    bool PaymentOptionOneHasBeenSet() const;

                    /**
                     * 获取合同选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionTwo 合同选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionTwo() const;

                    /**
                     * 设置合同选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionTwo 合同选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionTwo(const std::string& _paymentOptionTwo);

                    /**
                     * 判断参数 PaymentOptionTwo 是否已赋值
                     * @return PaymentOptionTwo 是否已赋值
                     * 
                     */
                    bool PaymentOptionTwoHasBeenSet() const;

                    /**
                     * 获取合同选项3（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionThree 合同选项3（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionThree() const;

                    /**
                     * 设置合同选项3（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionThree 合同选项3（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionThree(const std::string& _paymentOptionThree);

                    /**
                     * 判断参数 PaymentOptionThree 是否已赋值
                     * @return PaymentOptionThree 是否已赋值
                     * 
                     */
                    bool PaymentOptionThreeHasBeenSet() const;

                    /**
                     * 获取合同选项4（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionFour 合同选项4（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionFour() const;

                    /**
                     * 设置合同选项4（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionFour 合同选项4（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionFour(const std::string& _paymentOptionFour);

                    /**
                     * 判断参数 PaymentOptionFour 是否已赋值
                     * @return PaymentOptionFour 是否已赋值
                     * 
                     */
                    bool PaymentOptionFourHasBeenSet() const;

                    /**
                     * 获取合同证书选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionFive 合同证书选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionFive() const;

                    /**
                     * 设置合同证书选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionFive 合同证书选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionFive(const std::string& _paymentOptionFive);

                    /**
                     * 判断参数 PaymentOptionFive 是否已赋值
                     * @return PaymentOptionFive 是否已赋值
                     * 
                     */
                    bool PaymentOptionFiveHasBeenSet() const;

                    /**
                     * 获取合同证书选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionSix 合同证书选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionSix() const;

                    /**
                     * 设置合同证书选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionSix 合同证书选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionSix(const std::string& _paymentOptionSix);

                    /**
                     * 判断参数 PaymentOptionSix 是否已赋值
                     * @return PaymentOptionSix 是否已赋值
                     * 
                     */
                    bool PaymentOptionSixHasBeenSet() const;

                    /**
                     * 获取合同选项5（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionSeven 合同选项5（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionSeven() const;

                    /**
                     * 设置合同选项5（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionSeven 合同选项5（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionSeven(const std::string& _paymentOptionSeven);

                    /**
                     * 判断参数 PaymentOptionSeven 是否已赋值
                     * @return PaymentOptionSeven 是否已赋值
                     * 
                     */
                    bool PaymentOptionSevenHasBeenSet() const;

                    /**
                     * 获取合同选项6（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionOther 合同选项6（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionOther() const;

                    /**
                     * 设置合同选项6（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionOther 合同选项6（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionOther(const std::string& _paymentOptionOther);

                    /**
                     * 判断参数 PaymentOptionOther 是否已赋值
                     * @return PaymentOptionOther 是否已赋值
                     * 
                     */
                    bool PaymentOptionOtherHasBeenSet() const;

                    /**
                     * 获取合同选项8
                     * @return PaymentOptionTen 合同选项8
                     * 
                     */
                    std::string GetPaymentOptionTen() const;

                    /**
                     * 设置合同选项8
                     * @param _paymentOptionTen 合同选项8
                     * 
                     */
                    void SetPaymentOptionTen(const std::string& _paymentOptionTen);

                    /**
                     * 判断参数 PaymentOptionTen 是否已赋值
                     * @return PaymentOptionTen 是否已赋值
                     * 
                     */
                    bool PaymentOptionTenHasBeenSet() const;

                    /**
                     * 获取合同选项7（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @return PaymentOptionNine 合同选项7（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    std::string GetPaymentOptionNine() const;

                    /**
                     * 设置合同选项7（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * @param _paymentOptionNine 合同选项7（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     * 
                     */
                    void SetPaymentOptionNine(const std::string& _paymentOptionNine);

                    /**
                     * 判断参数 PaymentOptionNine 是否已赋值
                     * @return PaymentOptionNine 是否已赋值
                     * 
                     */
                    bool PaymentOptionNineHasBeenSet() const;

                private:

                    /**
                     * 收单系统分配的开放ID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 收单系统分配的密钥
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 机构合同主键（系统有唯一性校验），建议使用合同表的主键ID，防止重复添加合同
                     */
                    std::string m_outContractId;
                    bool m_outContractIdHasBeenSet;

                    /**
                     * 合同编号（系统有唯一性校验）
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 支付方式编号
                     */
                    std::string m_paymentId;
                    bool m_paymentIdHasBeenSet;

                    /**
                     * 支付方式行业分类编号
                     */
                    std::string m_paymentClassificationId;
                    bool m_paymentClassificationIdHasBeenSet;

                    /**
                     * 封顶值（分为单位，无封顶填0）
                     */
                    std::string m_paymentClassificationLimit;
                    bool m_paymentClassificationLimitHasBeenSet;

                    /**
                     * 商户编号
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 签约扣率百分比（如：0.32）
                     */
                    std::string m_fee;
                    bool m_feeHasBeenSet;

                    /**
                     * 合同生效日期（yyyy-mm-dd）
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 合同过期日期（yyyy-mm-dd）
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 合同签约人
                     */
                    std::string m_signMan;
                    bool m_signManHasBeenSet;

                    /**
                     * 签购单名称，建议使用商户招牌名称
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * 合同签署日期（yyyy-mm-dd）
                     */
                    std::string m_signDate;
                    bool m_signDateHasBeenSet;

                    /**
                     * 是否自动续签（1是，0否）
                     */
                    std::string m_autoSign;
                    bool m_autoSignHasBeenSet;

                    /**
                     * 联系人
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_contactTelephone;
                    bool m_contactTelephoneHasBeenSet;

                    /**
                     * 合同照片【私密区】
                     */
                    std::string m_pictureOne;
                    bool m_pictureOneHasBeenSet;

                    /**
                     * 合同照片【私密区】
                     */
                    std::string m_pictureTwo;
                    bool m_pictureTwoHasBeenSet;

                    /**
                     * 渠道扩展字段，json格式
                     */
                    std::string m_channelExtJson;
                    bool m_channelExtJsonHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 合同选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionOne;
                    bool m_paymentOptionOneHasBeenSet;

                    /**
                     * 合同选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionTwo;
                    bool m_paymentOptionTwoHasBeenSet;

                    /**
                     * 合同选项3（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionThree;
                    bool m_paymentOptionThreeHasBeenSet;

                    /**
                     * 合同选项4（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionFour;
                    bool m_paymentOptionFourHasBeenSet;

                    /**
                     * 合同证书选项1（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionFive;
                    bool m_paymentOptionFiveHasBeenSet;

                    /**
                     * 合同证书选项2（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionSix;
                    bool m_paymentOptionSixHasBeenSet;

                    /**
                     * 合同选项5（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionSeven;
                    bool m_paymentOptionSevenHasBeenSet;

                    /**
                     * 合同选项6（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionOther;
                    bool m_paymentOptionOtherHasBeenSet;

                    /**
                     * 合同选项8
                     */
                    std::string m_paymentOptionTen;
                    bool m_paymentOptionTenHasBeenSet;

                    /**
                     * 合同选项7（不同支付方式规则不一样，请以支付方式规定的格式传值）
                     */
                    std::string m_paymentOptionNine;
                    bool m_paymentOptionNineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ADDCONTRACTREQUEST_H_
