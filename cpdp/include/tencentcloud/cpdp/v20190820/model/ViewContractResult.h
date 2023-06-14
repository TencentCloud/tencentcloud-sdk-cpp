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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWCONTRACTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWCONTRACTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 合同明细响应对象
                */
                class ViewContractResult : public AbstractModel
                {
                public:
                    ViewContractResult();
                    ~ViewContractResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付标签（唯一性）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentTag 支付标签（唯一性）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentTag() const;

                    /**
                     * 设置支付标签（唯一性）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentTag 支付标签（唯一性）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentTag(const std::string& _paymentTag);

                    /**
                     * 判断参数 PaymentTag 是否已赋值
                     * @return PaymentTag 是否已赋值
                     * 
                     */
                    bool PaymentTagHasBeenSet() const;

                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentNo 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentNo() const;

                    /**
                     * 设置机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentNo 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentNo(const std::string& _agentNo);

                    /**
                     * 判断参数 AgentNo 是否已赋值
                     * @return AgentNo 是否已赋值
                     * 
                     */
                    bool AgentNoHasBeenSet() const;

                    /**
                     * 获取合同选项值4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionFour 合同选项值4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionFour() const;

                    /**
                     * 设置合同选项值4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionFour 合同选项值4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionFour(const std::string& _contractOptionFour);

                    /**
                     * 判断参数 ContractOptionFour 是否已赋值
                     * @return ContractOptionFour 是否已赋值
                     * 
                     */
                    bool ContractOptionFourHasBeenSet() const;

                    /**
                     * 获取合同选项值2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionTwo 合同选项值2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionTwo() const;

                    /**
                     * 设置合同选项值2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionTwo 合同选项值2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionTwo(const std::string& _contractOptionTwo);

                    /**
                     * 判断参数 ContractOptionTwo 是否已赋值
                     * @return ContractOptionTwo 是否已赋值
                     * 
                     */
                    bool ContractOptionTwoHasBeenSet() const;

                    /**
                     * 获取合同状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 合同状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置合同状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 合同状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentId 支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentId() const;

                    /**
                     * 设置支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentId 支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商户签约扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fee 商户签约扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFee() const;

                    /**
                     * 设置商户签约扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fee 商户签约扣率
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项名称5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionFive 合同选项名称5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionFive() const;

                    /**
                     * 设置合同选项名称5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionFive 合同选项名称5
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机构合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutContractId 机构合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutContractId() const;

                    /**
                     * 设置机构合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outContractId 机构合同主键
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取不同的支付方式对于进件有不同的个性化需求，支付方式字段都是以双下划写开头的字段名称，请以支付方式规定的格式传值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelExtJson 不同的支付方式对于进件有不同的个性化需求，支付方式字段都是以双下划写开头的字段名称，请以支付方式规定的格式传值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelExtJson() const;

                    /**
                     * 设置不同的支付方式对于进件有不同的个性化需求，支付方式字段都是以双下划写开头的字段名称，请以支付方式规定的格式传值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelExtJson 不同的支付方式对于进件有不同的个性化需求，支付方式字段都是以双下划写开头的字段名称，请以支付方式规定的格式传值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项值5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionFive 合同选项值5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionFive() const;

                    /**
                     * 设置合同选项值5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionFive 合同选项值5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionFive(const std::string& _contractOptionFive);

                    /**
                     * 判断参数 ContractOptionFive 是否已赋值
                     * @return ContractOptionFive 是否已赋值
                     * 
                     */
                    bool ContractOptionFiveHasBeenSet() const;

                    /**
                     * 获取省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _province 省份
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartDate 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startDate 生效日期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取过期日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndDate 过期日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置过期日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endDate 过期日期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项值6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionSix 合同选项值6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionSix() const;

                    /**
                     * 设置合同选项值6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionSix 合同选项值6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionSix(const std::string& _contractOptionSix);

                    /**
                     * 判断参数 ContractOptionSix 是否已赋值
                     * @return ContractOptionSix 是否已赋值
                     * 
                     */
                    bool ContractOptionSixHasBeenSet() const;

                    /**
                     * 获取合同选项名称7
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionSeven 合同选项名称7
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionSeven() const;

                    /**
                     * 设置合同选项名称7
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionSeven 合同选项名称7
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同照片补充【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PictureTwo 合同照片补充【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPictureTwo() const;

                    /**
                     * 设置合同照片补充【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pictureTwo 合同照片补充【私密区】
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantNo 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMerchantNo() const;

                    /**
                     * 设置商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _merchantNo 商户编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentName 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentName 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取合同选项值8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionOther 合同选项值8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionOther() const;

                    /**
                     * 设置合同选项值8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionOther 合同选项值8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionOther(const std::string& _contractOptionOther);

                    /**
                     * 判断参数 ContractOptionOther 是否已赋值
                     * @return ContractOptionOther 是否已赋值
                     * 
                     */
                    bool ContractOptionOtherHasBeenSet() const;

                    /**
                     * 获取合同选项值3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionThree 合同选项值3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionThree() const;

                    /**
                     * 设置合同选项值3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionThree 合同选项值3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionThree(const std::string& _contractOptionThree);

                    /**
                     * 判断参数 ContractOptionThree 是否已赋值
                     * @return ContractOptionThree 是否已赋值
                     * 
                     */
                    bool ContractOptionThreeHasBeenSet() const;

                    /**
                     * 获取县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _country 县/区
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同关联的门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopCount 合同关联的门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopCount() const;

                    /**
                     * 设置合同关联的门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopCount 合同关联的门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopCount(const std::string& _shopCount);

                    /**
                     * 判断参数 ShopCount 是否已赋值
                     * @return ShopCount 是否已赋值
                     * 
                     */
                    bool ShopCountHasBeenSet() const;

                    /**
                     * 获取合同选项名称3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionThree 合同选项名称3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionThree() const;

                    /**
                     * 设置合同选项名称3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionThree 合同选项名称3
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取支付方式行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentClassificationName 支付方式行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentClassificationName() const;

                    /**
                     * 设置支付方式行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentClassificationName 支付方式行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentClassificationName(const std::string& _paymentClassificationName);

                    /**
                     * 判断参数 PaymentClassificationName 是否已赋值
                     * @return PaymentClassificationName 是否已赋值
                     * 
                     */
                    bool PaymentClassificationNameHasBeenSet() const;

                    /**
                     * 获取合同选项值7
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionSeven 合同选项值7
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionSeven() const;

                    /**
                     * 设置合同选项值7
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionSeven 合同选项值7
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionSeven(const std::string& _contractOptionSeven);

                    /**
                     * 判断参数 ContractOptionSeven 是否已赋值
                     * @return ContractOptionSeven 是否已赋值
                     * 
                     */
                    bool ContractOptionSevenHasBeenSet() const;

                    /**
                     * 获取合同选项名称4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionFour 合同选项名称4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionFour() const;

                    /**
                     * 设置合同选项名称4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionFour 合同选项名称4
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取商户签约扣率封顶值（分为单位）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentClassificationLimit 商户签约扣率封顶值（分为单位）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentClassificationLimit() const;

                    /**
                     * 设置商户签约扣率封顶值（分为单位）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentClassificationLimit 商户签约扣率封顶值（分为单位）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取合同选项名称6
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionSix 合同选项名称6
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionSix() const;

                    /**
                     * 设置合同选项名称6
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionSix 合同选项名称6
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _merchantName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取合同选项值1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionOne 合同选项值1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionOne() const;

                    /**
                     * 设置合同选项值1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionOne 合同选项值1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionOne(const std::string& _contractOptionOne);

                    /**
                     * 判断参数 ContractOptionOne 是否已赋值
                     * @return ContractOptionOne 是否已赋值
                     * 
                     */
                    bool ContractOptionOneHasBeenSet() const;

                    /**
                     * 获取合同选项名称8
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionOther 合同选项名称8
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionOther() const;

                    /**
                     * 设置合同选项名称8
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionOther 合同选项名称8
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项名称2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionTwo 合同选项名称2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionTwo() const;

                    /**
                     * 设置合同选项名称2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionTwo 合同选项名称2
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项名称1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionOne 合同选项名称1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionOne() const;

                    /**
                     * 设置合同选项名称1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionOne 合同选项名称1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactTelephone 联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactTelephone() const;

                    /**
                     * 设置联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactTelephone 联系人电话
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contact 联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 设置联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contact 联系人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取签约日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignDate 签约日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignDate() const;

                    /**
                     * 设置签约日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signDate 签约日期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项名称9
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionNine 合同选项名称9
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionNine() const;

                    /**
                     * 设置合同选项名称9
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionNine 合同选项名称9
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentOptionNine(const std::string& _paymentOptionNine);

                    /**
                     * 判断参数 PaymentOptionNine 是否已赋值
                     * @return PaymentOptionNine 是否已赋值
                     * 
                     */
                    bool PaymentOptionNineHasBeenSet() const;

                    /**
                     * 获取付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentName 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentName() const;

                    /**
                     * 设置付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentName 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentName(const std::string& _paymentName);

                    /**
                     * 判断参数 PaymentName 是否已赋值
                     * @return PaymentName 是否已赋值
                     * 
                     */
                    bool PaymentNameHasBeenSet() const;

                    /**
                     * 获取付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentInternalName 付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentInternalName() const;

                    /**
                     * 设置付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentInternalName 付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentInternalName(const std::string& _paymentInternalName);

                    /**
                     * 判断参数 PaymentInternalName 是否已赋值
                     * @return PaymentInternalName 是否已赋值
                     * 
                     */
                    bool PaymentInternalNameHasBeenSet() const;

                    /**
                     * 获取合同选项值10
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionTen 合同选项值10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionTen() const;

                    /**
                     * 设置合同选项值10
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionTen 合同选项值10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionTen(const std::string& _contractOptionTen);

                    /**
                     * 判断参数 ContractOptionTen 是否已赋值
                     * @return ContractOptionTen 是否已赋值
                     * 
                     */
                    bool ContractOptionTenHasBeenSet() const;

                    /**
                     * 获取合同编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 合同编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置合同编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 合同编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同照片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PictureOne 合同照片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPictureOne() const;

                    /**
                     * 设置合同照片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pictureOne 合同照片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取签约人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignMan 签约人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignMan() const;

                    /**
                     * 设置签约人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signMan 签约人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取渠道号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelNo 渠道号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelNo() const;

                    /**
                     * 设置渠道号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelNo 渠道号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelNo(const std::string& _channelNo);

                    /**
                     * 判断参数 ChannelNo 是否已赋值
                     * @return ChannelNo 是否已赋值
                     * 
                     */
                    bool ChannelNoHasBeenSet() const;

                    /**
                     * 获取添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addTime 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取是否自动续签（1是，0否）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoSign 是否自动续签（1是，0否）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoSign() const;

                    /**
                     * 设置是否自动续签（1是，0否）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoSign 是否自动续签（1是，0否）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同选项值9
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractOptionNine 合同选项值9
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractOptionNine() const;

                    /**
                     * 设置合同选项值9
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractOptionNine 合同选项值9
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractOptionNine(const std::string& _contractOptionNine);

                    /**
                     * 判断参数 ContractOptionNine 是否已赋值
                     * @return ContractOptionNine 是否已赋值
                     * 
                     */
                    bool ContractOptionNineHasBeenSet() const;

                    /**
                     * 获取城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityId 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityId 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityId(const std::string& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentType 交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentType() const;

                    /**
                     * 设置交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentType 交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPaymentType(const std::string& _paymentType);

                    /**
                     * 判断参数 PaymentType 是否已赋值
                     * @return PaymentType 是否已赋值
                     * 
                     */
                    bool PaymentTypeHasBeenSet() const;

                    /**
                     * 获取支付方式行业编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentClassificationId 支付方式行业编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentClassificationId() const;

                    /**
                     * 设置支付方式行业编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentClassificationId 支付方式行业编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取合同选项名称10
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PaymentOptionTen 合同选项名称10
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPaymentOptionTen() const;

                    /**
                     * 设置合同选项名称10
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paymentOptionTen 合同选项名称10
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractId 合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractId() const;

                    /**
                     * 设置合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractId 合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractId(const std::string& _contractId);

                    /**
                     * 判断参数 ContractId 是否已赋值
                     * @return ContractId 是否已赋值
                     * 
                     */
                    bool ContractIdHasBeenSet() const;

                private:

                    /**
                     * 支付标签（唯一性）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentTag;
                    bool m_paymentTagHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentNo;
                    bool m_agentNoHasBeenSet;

                    /**
                     * 合同选项值4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionFour;
                    bool m_contractOptionFourHasBeenSet;

                    /**
                     * 合同选项值2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionTwo;
                    bool m_contractOptionTwoHasBeenSet;

                    /**
                     * 合同状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支付方式编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentId;
                    bool m_paymentIdHasBeenSet;

                    /**
                     * 商户签约扣率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fee;
                    bool m_feeHasBeenSet;

                    /**
                     * 合同选项名称5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionFive;
                    bool m_paymentOptionFiveHasBeenSet;

                    /**
                     * 机构合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outContractId;
                    bool m_outContractIdHasBeenSet;

                    /**
                     * 不同的支付方式对于进件有不同的个性化需求，支付方式字段都是以双下划写开头的字段名称，请以支付方式规定的格式传值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelExtJson;
                    bool m_channelExtJsonHasBeenSet;

                    /**
                     * 合同选项值5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionFive;
                    bool m_contractOptionFiveHasBeenSet;

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 生效日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 过期日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 合同选项值6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionSix;
                    bool m_contractOptionSixHasBeenSet;

                    /**
                     * 合同选项名称7
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionSeven;
                    bool m_paymentOptionSevenHasBeenSet;

                    /**
                     * 合同照片补充【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pictureTwo;
                    bool m_pictureTwoHasBeenSet;

                    /**
                     * 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 合同选项值8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionOther;
                    bool m_contractOptionOtherHasBeenSet;

                    /**
                     * 合同选项值3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionThree;
                    bool m_contractOptionThreeHasBeenSet;

                    /**
                     * 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 合同关联的门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopCount;
                    bool m_shopCountHasBeenSet;

                    /**
                     * 合同选项名称3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionThree;
                    bool m_paymentOptionThreeHasBeenSet;

                    /**
                     * 支付方式行业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentClassificationName;
                    bool m_paymentClassificationNameHasBeenSet;

                    /**
                     * 合同选项值7
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionSeven;
                    bool m_contractOptionSevenHasBeenSet;

                    /**
                     * 合同选项名称4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionFour;
                    bool m_paymentOptionFourHasBeenSet;

                    /**
                     * 商户签约扣率封顶值（分为单位）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentClassificationLimit;
                    bool m_paymentClassificationLimitHasBeenSet;

                    /**
                     * 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 合同选项名称6
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionSix;
                    bool m_paymentOptionSixHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 合同选项值1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionOne;
                    bool m_contractOptionOneHasBeenSet;

                    /**
                     * 合同选项名称8
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionOther;
                    bool m_paymentOptionOtherHasBeenSet;

                    /**
                     * 合同选项名称2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionTwo;
                    bool m_paymentOptionTwoHasBeenSet;

                    /**
                     * 合同选项名称1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionOne;
                    bool m_paymentOptionOneHasBeenSet;

                    /**
                     * 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactTelephone;
                    bool m_contactTelephoneHasBeenSet;

                    /**
                     * 联系人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 签约日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signDate;
                    bool m_signDateHasBeenSet;

                    /**
                     * 合同选项名称9
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionNine;
                    bool m_paymentOptionNineHasBeenSet;

                    /**
                     * 付款方式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentName;
                    bool m_paymentNameHasBeenSet;

                    /**
                     * 付款方式名称（内部名称）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentInternalName;
                    bool m_paymentInternalNameHasBeenSet;

                    /**
                     * 合同选项值10
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionTen;
                    bool m_contractOptionTenHasBeenSet;

                    /**
                     * 合同编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 合同照片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pictureOne;
                    bool m_pictureOneHasBeenSet;

                    /**
                     * 签约人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signMan;
                    bool m_signManHasBeenSet;

                    /**
                     * 渠道号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelNo;
                    bool m_channelNoHasBeenSet;

                    /**
                     * 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 是否自动续签（1是，0否）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoSign;
                    bool m_autoSignHasBeenSet;

                    /**
                     * 合同选项值9
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractOptionNine;
                    bool m_contractOptionNineHasBeenSet;

                    /**
                     * 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 交易类型（多个以小写逗号分开，0现金，1刷卡，2主扫，3被扫，4JSPAY，5预授权）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentType;
                    bool m_paymentTypeHasBeenSet;

                    /**
                     * 支付方式行业编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentClassificationId;
                    bool m_paymentClassificationIdHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 合同选项名称10
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymentOptionTen;
                    bool m_paymentOptionTenHasBeenSet;

                    /**
                     * 合同主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractId;
                    bool m_contractIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWCONTRACTRESULT_H_
