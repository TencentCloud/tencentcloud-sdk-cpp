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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWMERCHANTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWMERCHANTRESULT_H_

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
                * 商户明细响应对象
                */
                class ViewMerchantResult : public AbstractModel
                {
                public:
                    ViewMerchantResult();
                    ~ViewMerchantResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取税务登记证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxCollectionPicture 税务登记证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxCollectionPicture() const;

                    /**
                     * 设置税务登记证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxCollectionPicture 税务登记证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxCollectionPicture(const std::string& _taxCollectionPicture);

                    /**
                     * 判断参数 TaxCollectionPicture 是否已赋值
                     * @return TaxCollectionPicture 是否已赋值
                     * 
                     */
                    bool TaxCollectionPictureHasBeenSet() const;

                    /**
                     * 获取法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossIdNo 法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossIdNo() const;

                    /**
                     * 设置法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossIdNo 法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossIdNo(const std::string& _bossIdNo);

                    /**
                     * 判断参数 BossIdNo 是否已赋值
                     * @return BossIdNo 是否已赋值
                     * 
                     */
                    bool BossIdNoHasBeenSet() const;

                    /**
                     * 获取法人亲属证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountIdNo 法人亲属证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountIdNo() const;

                    /**
                     * 设置法人亲属证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountIdNo 法人亲属证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountIdNo(const std::string& _accountIdNo);

                    /**
                     * 判断参数 AccountIdNo 是否已赋值
                     * @return AccountIdNo 是否已赋值
                     * 
                     */
                    bool AccountIdNoHasBeenSet() const;

                    /**
                     * 获取其他资料3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherPictureThree 其他资料3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherPictureThree() const;

                    /**
                     * 设置其他资料3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherPictureThree 其他资料3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherPictureThree(const std::string& _otherPictureThree);

                    /**
                     * 判断参数 OtherPictureThree 是否已赋值
                     * @return OtherPictureThree 是否已赋值
                     * 
                     */
                    bool OtherPictureThreeHasBeenSet() const;

                    /**
                     * 获取法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountIdType 法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountIdType() const;

                    /**
                     * 设置法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountIdType 法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountIdType(const std::string& _accountIdType);

                    /**
                     * 判断参数 AccountIdType 是否已赋值
                     * @return AccountIdType 是否已赋值
                     * 
                     */
                    bool AccountIdTypeHasBeenSet() const;

                    /**
                     * 获取商户状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 商户状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置商户状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 商户状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
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
                     * 获取营业执照图片【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLicensePicture 营业执照图片【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessLicensePicture() const;

                    /**
                     * 设置营业执照图片【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLicensePicture 营业执照图片【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLicensePicture(const std::string& _businessLicensePicture);

                    /**
                     * 判断参数 BusinessLicensePicture 是否已赋值
                     * @return BusinessLicensePicture 是否已赋值
                     * 
                     */
                    bool BusinessLicensePictureHasBeenSet() const;

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
                     * 获取法人身份证正面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossPositive 法人身份证正面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossPositive() const;

                    /**
                     * 设置法人身份证正面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossPositive 法人身份证正面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossPositive(const std::string& _bossPositive);

                    /**
                     * 判断参数 BossPositive 是否已赋值
                     * @return BossPositive 是否已赋值
                     * 
                     */
                    bool BossPositiveHasBeenSet() const;

                    /**
                     * 获取开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppCount 开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppCount() const;

                    /**
                     * 设置开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appCount 开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppCount(const std::string& _appCount);

                    /**
                     * 判断参数 AppCount 是否已赋值
                     * @return AppCount 是否已赋值
                     * 
                     */
                    bool AppCountHasBeenSet() const;

                    /**
                     * 获取法人身份证背面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossBack 法人身份证背面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossBack() const;

                    /**
                     * 设置法人身份证背面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossBack 法人身份证背面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossBack(const std::string& _bossBack);

                    /**
                     * 判断参数 BossBack 是否已赋值
                     * @return BossBack 是否已赋值
                     * 
                     */
                    bool BossBackHasBeenSet() const;

                    /**
                     * 获取组织机构代码证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCodePicture 组织机构代码证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCodePicture() const;

                    /**
                     * 设置组织机构代码证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCodePicture 组织机构代码证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationCodePicture(const std::string& _organizationCodePicture);

                    /**
                     * 判断参数 OrganizationCodePicture 是否已赋值
                     * @return OrganizationCodePicture 是否已赋值
                     * 
                     */
                    bool OrganizationCodePictureHasBeenSet() const;

                    /**
                     * 获取营业执照过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLicenseEndDate 营业执照过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessLicenseEndDate() const;

                    /**
                     * 设置营业执照过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLicenseEndDate 营业执照过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLicenseEndDate(const std::string& _businessLicenseEndDate);

                    /**
                     * 判断参数 BusinessLicenseEndDate 是否已赋值
                     * @return BusinessLicenseEndDate 是否已赋值
                     * 
                     */
                    bool BusinessLicenseEndDateHasBeenSet() const;

                    /**
                     * 获取组织机构代码证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCodeNo 组织机构代码证号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCodeNo() const;

                    /**
                     * 设置组织机构代码证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCodeNo 组织机构代码证号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationCodeNo(const std::string& _organizationCodeNo);

                    /**
                     * 判断参数 OrganizationCodeNo 是否已赋值
                     * @return OrganizationCodeNo 是否已赋值
                     * 
                     */
                    bool OrganizationCodeNoHasBeenSet() const;

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
                     * 获取法人证件生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossStartDate 法人证件生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossStartDate() const;

                    /**
                     * 设置法人证件生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossStartDate 法人证件生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossStartDate(const std::string& _bossStartDate);

                    /**
                     * 判断参数 BossStartDate 是否已赋值
                     * @return BossStartDate 是否已赋值
                     * 
                     */
                    bool BossStartDateHasBeenSet() const;

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
                     * 获取清算联行号，开户行行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankNo 清算联行号，开户行行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankNo() const;

                    /**
                     * 设置清算联行号，开户行行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankNo 清算联行号，开户行行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankNo(const std::string& _bankNo);

                    /**
                     * 判断参数 BankNo 是否已赋值
                     * @return BankNo 是否已赋值
                     * 
                     */
                    bool BankNoHasBeenSet() const;

                    /**
                     * 获取税务登记证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxCollectionStartDate 税务登记证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxCollectionStartDate() const;

                    /**
                     * 设置税务登记证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxCollectionStartDate 税务登记证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxCollectionStartDate(const std::string& _taxCollectionStartDate);

                    /**
                     * 判断参数 TaxCollectionStartDate 是否已赋值
                     * @return TaxCollectionStartDate 是否已赋值
                     * 
                     */
                    bool TaxCollectionStartDateHasBeenSet() const;

                    /**
                     * 获取营业执照生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLicenseStartDate 营业执照生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessLicenseStartDate() const;

                    /**
                     * 设置营业执照生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLicenseStartDate 营业执照生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLicenseStartDate(const std::string& _businessLicenseStartDate);

                    /**
                     * 判断参数 BusinessLicenseStartDate 是否已赋值
                     * @return BusinessLicenseStartDate 是否已赋值
                     * 
                     */
                    bool BusinessLicenseStartDateHasBeenSet() const;

                    /**
                     * 获取客户经理用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountManagerId 客户经理用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountManagerId() const;

                    /**
                     * 设置客户经理用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountManagerId 客户经理用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountManagerId(const std::string& _accountManagerId);

                    /**
                     * 判断参数 AccountManagerId 是否已赋值
                     * @return AccountManagerId 是否已赋值
                     * 
                     */
                    bool AccountManagerIdHasBeenSet() const;

                    /**
                     * 获取分类编号(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationIds 分类编号(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassificationIds() const;

                    /**
                     * 设置分类编号(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationIds 分类编号(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassificationIds(const std::string& _classificationIds);

                    /**
                     * 判断参数 ClassificationIds 是否已赋值
                     * @return ClassificationIds 是否已赋值
                     * 
                     */
                    bool ClassificationIdsHasBeenSet() const;

                    /**
                     * 获取营业执照类型（1三证合一，2非三证合一）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLicenseType 营业执照类型（1三证合一，2非三证合一）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessLicenseType() const;

                    /**
                     * 设置营业执照类型（1三证合一，2非三证合一）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLicenseType 营业执照类型（1三证合一，2非三证合一）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLicenseType(const std::string& _businessLicenseType);

                    /**
                     * 判断参数 BusinessLicenseType 是否已赋值
                     * @return BusinessLicenseType 是否已赋值
                     * 
                     */
                    bool BusinessLicenseTypeHasBeenSet() const;

                    /**
                     * 获取法人证件过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossEndDate 法人证件过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossEndDate() const;

                    /**
                     * 设置法人证件过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossEndDate 法人证件过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossEndDate(const std::string& _bossEndDate);

                    /**
                     * 判断参数 BossEndDate 是否已赋值
                     * @return BossEndDate 是否已赋值
                     * 
                     */
                    bool BossEndDateHasBeenSet() const;

                    /**
                     * 获取营业执照编号（系统有唯一性校验）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessLicenseNo 营业执照编号（系统有唯一性校验）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessLicenseNo() const;

                    /**
                     * 设置营业执照编号（系统有唯一性校验）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessLicenseNo 营业执照编号（系统有唯一性校验）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessLicenseNo(const std::string& _businessLicenseNo);

                    /**
                     * 判断参数 BusinessLicenseNo 是否已赋值
                     * @return BusinessLicenseNo 是否已赋值
                     * 
                     */
                    bool BusinessLicenseNoHasBeenSet() const;

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
                     * 获取商户简介
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Intro 商户简介
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntro() const;

                    /**
                     * 设置商户简介
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intro 商户简介
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntro(const std::string& _intro);

                    /**
                     * 判断参数 Intro 是否已赋值
                     * @return Intro 是否已赋值
                     * 
                     */
                    bool IntroHasBeenSet() const;

                    /**
                     * 获取法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossIdType 法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossIdType() const;

                    /**
                     * 设置法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossIdType 法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossIdType(const std::string& _bossIdType);

                    /**
                     * 判断参数 BossIdType 是否已赋值
                     * @return BossIdType 是否已赋值
                     * 
                     */
                    bool BossIdTypeHasBeenSet() const;

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
                     * 获取门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopCount 门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopCount() const;

                    /**
                     * 设置门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopCount 门店数量
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
                     * 获取结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountBoss 结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountBoss() const;

                    /**
                     * 设置结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountBoss 结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountBoss(const std::string& _accountBoss);

                    /**
                     * 判断参数 AccountBoss 是否已赋值
                     * @return AccountBoss 是否已赋值
                     * 
                     */
                    bool AccountBossHasBeenSet() const;

                    /**
                     * 获取分类名称(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationNames 分类名称(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassificationNames() const;

                    /**
                     * 设置分类名称(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classificationNames 分类名称(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassificationNames(const std::string& _classificationNames);

                    /**
                     * 判断参数 ClassificationNames 是否已赋值
                     * @return ClassificationNames 是否已赋值
                     * 
                     */
                    bool ClassificationNamesHasBeenSet() const;

                    /**
                     * 获取法人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossTelephone 法人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossTelephone() const;

                    /**
                     * 设置法人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossTelephone 法人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossTelephone(const std::string& _bossTelephone);

                    /**
                     * 判断参数 BossTelephone 是否已赋值
                     * @return BossTelephone 是否已赋值
                     * 
                     */
                    bool BossTelephoneHasBeenSet() const;

                    /**
                     * 获取客户经理姓名，必须为系统后台的管理员真实姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountManagerName 客户经理姓名，必须为系统后台的管理员真实姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountManagerName() const;

                    /**
                     * 设置客户经理姓名，必须为系统后台的管理员真实姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountManagerName 客户经理姓名，必须为系统后台的管理员真实姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountManagerName(const std::string& _accountManagerName);

                    /**
                     * 判断参数 AccountManagerName 是否已赋值
                     * @return AccountManagerName 是否已赋值
                     * 
                     */
                    bool AccountManagerNameHasBeenSet() const;

                    /**
                     * 获取终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerminalCount 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTerminalCount() const;

                    /**
                     * 设置终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terminalCount 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerminalCount(const std::string& _terminalCount);

                    /**
                     * 判断参数 TerminalCount 是否已赋值
                     * @return TerminalCount 是否已赋值
                     * 
                     */
                    bool TerminalCountHasBeenSet() const;

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
                     * 获取财务联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinancialContact 财务联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinancialContact() const;

                    /**
                     * 设置财务联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _financialContact 财务联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinancialContact(const std::string& _financialContact);

                    /**
                     * 判断参数 FinancialContact 是否已赋值
                     * @return FinancialContact 是否已赋值
                     * 
                     */
                    bool FinancialContactHasBeenSet() const;

                    /**
                     * 获取商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantName 商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _merchantName 商户名称
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
                     * 获取法人性别（1男，2女）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossSex 法人性别（1男，2女）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossSex() const;

                    /**
                     * 设置法人性别（1男，2女）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossSex 法人性别（1男，2女）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossSex(const std::string& _bossSex);

                    /**
                     * 判断参数 BossSex 是否已赋值
                     * @return BossSex 是否已赋值
                     * 
                     */
                    bool BossSexHasBeenSet() const;

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
                     * 获取法人住址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossAddress 法人住址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossAddress() const;

                    /**
                     * 设置法人住址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossAddress 法人住址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossAddress(const std::string& _bossAddress);

                    /**
                     * 判断参数 BossAddress 是否已赋值
                     * @return BossAddress 是否已赋值
                     * 
                     */
                    bool BossAddressHasBeenSet() const;

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
                     * 获取法人职业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossJob 法人职业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossJob() const;

                    /**
                     * 设置法人职业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossJob 法人职业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossJob(const std::string& _bossJob);

                    /**
                     * 判断参数 BossJob 是否已赋值
                     * @return BossJob 是否已赋值
                     * 
                     */
                    bool BossJobHasBeenSet() const;

                    /**
                     * 获取许可证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicencePicture 许可证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLicencePicture() const;

                    /**
                     * 设置许可证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licencePicture 许可证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicencePicture(const std::string& _licencePicture);

                    /**
                     * 判断参数 LicencePicture 是否已赋值
                     * @return LicencePicture 是否已赋值
                     * 
                     */
                    bool LicencePictureHasBeenSet() const;

                    /**
                     * 获取组织机构代码证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCodeEndDate 组织机构代码证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCodeEndDate() const;

                    /**
                     * 设置组织机构代码证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCodeEndDate 组织机构代码证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationCodeEndDate(const std::string& _organizationCodeEndDate);

                    /**
                     * 判断参数 OrganizationCodeEndDate 是否已赋值
                     * @return OrganizationCodeEndDate 是否已赋值
                     * 
                     */
                    bool OrganizationCodeEndDateHasBeenSet() const;

                    /**
                     * 获取营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenHours 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenHours() const;

                    /**
                     * 设置营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openHours 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenHours(const std::string& _openHours);

                    /**
                     * 判断参数 OpenHours 是否已赋值
                     * @return OpenHours 是否已赋值
                     * 
                     */
                    bool OpenHoursHasBeenSet() const;

                    /**
                     * 获取其他资料2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherPictureTwo 其他资料2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherPictureTwo() const;

                    /**
                     * 设置其他资料2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherPictureTwo 其他资料2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherPictureTwo(const std::string& _otherPictureTwo);

                    /**
                     * 判断参数 OtherPictureTwo 是否已赋值
                     * @return OtherPictureTwo 是否已赋值
                     * 
                     */
                    bool OtherPictureTwoHasBeenSet() const;

                    /**
                     * 获取其他资料1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherPictureOne 其他资料1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherPictureOne() const;

                    /**
                     * 设置其他资料1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherPictureOne 其他资料1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherPictureOne(const std::string& _otherPictureOne);

                    /**
                     * 判断参数 OtherPictureOne 是否已赋值
                     * @return OtherPictureOne 是否已赋值
                     * 
                     */
                    bool OtherPictureOneHasBeenSet() const;

                    /**
                     * 获取银行户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 银行户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置银行户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName 银行户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取合同数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractCount 合同数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractCount() const;

                    /**
                     * 设置合同数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractCount 合同数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractCount(const std::string& _contractCount);

                    /**
                     * 判断参数 ContractCount 是否已赋值
                     * @return ContractCount 是否已赋值
                     * 
                     */
                    bool ContractCountHasBeenSet() const;

                    /**
                     * 获取授权文件【私密区】（当结算帐户身份为法人亲属时必传）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicencePictureTwo 授权文件【私密区】（当结算帐户身份为法人亲属时必传）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLicencePictureTwo() const;

                    /**
                     * 设置授权文件【私密区】（当结算帐户身份为法人亲属时必传）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licencePictureTwo 授权文件【私密区】（当结算帐户身份为法人亲属时必传）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicencePictureTwo(const std::string& _licencePictureTwo);

                    /**
                     * 判断参数 LicencePictureTwo 是否已赋值
                     * @return LicencePictureTwo 是否已赋值
                     * 
                     */
                    bool LicencePictureTwoHasBeenSet() const;

                    /**
                     * 获取银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountNo 银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountNo 银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountNo(const std::string& _accountNo);

                    /**
                     * 判断参数 AccountNo 是否已赋值
                     * @return AccountNo 是否已赋值
                     * 
                     */
                    bool AccountNoHasBeenSet() const;

                    /**
                     * 获取法人邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossEmail 法人邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossEmail() const;

                    /**
                     * 设置法人邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossEmail 法人邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossEmail(const std::string& _bossEmail);

                    /**
                     * 判断参数 BossEmail 是否已赋值
                     * @return BossEmail 是否已赋值
                     * 
                     */
                    bool BossEmailHasBeenSet() const;

                    /**
                     * 获取结算账户类型（2对私，1对公）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountType 结算账户类型（2对私，1对公）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置结算账户类型（2对私，1对公）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountType 结算账户类型（2对私，1对公）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取税务登记证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxCollectionEndDate 税务登记证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxCollectionEndDate() const;

                    /**
                     * 设置税务登记证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxCollectionEndDate 税务登记证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxCollectionEndDate(const std::string& _taxCollectionEndDate);

                    /**
                     * 判断参数 TaxCollectionEndDate 是否已赋值
                     * @return TaxCollectionEndDate 是否已赋值
                     * 
                     */
                    bool TaxCollectionEndDateHasBeenSet() const;

                    /**
                     * 获取开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankName 开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankName 开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankName(const std::string& _bankName);

                    /**
                     * 判断参数 BankName 是否已赋值
                     * @return BankName 是否已赋值
                     * 
                     */
                    bool BankNameHasBeenSet() const;

                    /**
                     * 获取联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Telephone 联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _telephone 联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取外部商户主键编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutMerchantId 外部商户主键编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutMerchantId() const;

                    /**
                     * 设置外部商户主键编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outMerchantId 外部商户主键编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutMerchantId(const std::string& _outMerchantId);

                    /**
                     * 判断参数 OutMerchantId 是否已赋值
                     * @return OutMerchantId 是否已赋值
                     * 
                     */
                    bool OutMerchantIdHasBeenSet() const;

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
                     * 获取法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossIdCount 法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossIdCount() const;

                    /**
                     * 设置法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossIdCount 法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossIdCount(const std::string& _bossIdCount);

                    /**
                     * 判断参数 BossIdCount 是否已赋值
                     * @return BossIdCount 是否已赋值
                     * 
                     */
                    bool BossIdCountHasBeenSet() const;

                    /**
                     * 获取商户标记，自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 商户标记，自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置商户标记，自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 商户标记，自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取财务联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinancialTelephone 财务联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinancialTelephone() const;

                    /**
                     * 设置财务联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _financialTelephone 财务联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinancialTelephone(const std::string& _financialTelephone);

                    /**
                     * 判断参数 FinancialTelephone 是否已赋值
                     * @return FinancialTelephone 是否已赋值
                     * 
                     */
                    bool FinancialTelephoneHasBeenSet() const;

                    /**
                     * 获取法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BossName 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBossName() const;

                    /**
                     * 设置法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bossName 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBossName(const std::string& _bossName);

                    /**
                     * 判断参数 BossName 是否已赋值
                     * @return BossName 是否已赋值
                     * 
                     */
                    bool BossNameHasBeenSet() const;

                    /**
                     * 获取组织机构代码证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCodeStartDate 组织机构代码证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCodeStartDate() const;

                    /**
                     * 设置组织机构代码证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCodeStartDate 组织机构代码证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationCodeStartDate(const std::string& _organizationCodeStartDate);

                    /**
                     * 判断参数 OrganizationCodeStartDate 是否已赋值
                     * @return OrganizationCodeStartDate 是否已赋值
                     * 
                     */
                    bool OrganizationCodeStartDateHasBeenSet() const;

                    /**
                     * 获取商户logo【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logo 商户logo【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置商户logo【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logo 商户logo【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取其他资料4
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherPictureFour 其他资料4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherPictureFour() const;

                    /**
                     * 设置其他资料4
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherPictureFour 其他资料4
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherPictureFour(const std::string& _otherPictureFour);

                    /**
                     * 判断参数 OtherPictureFour 是否已赋值
                     * @return OtherPictureFour 是否已赋值
                     * 
                     */
                    bool OtherPictureFourHasBeenSet() const;

                    /**
                     * 获取税务登记证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxCollectionNo 税务登记证号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaxCollectionNo() const;

                    /**
                     * 设置税务登记证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxCollectionNo 税务登记证号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxCollectionNo(const std::string& _taxCollectionNo);

                    /**
                     * 判断参数 TaxCollectionNo 是否已赋值
                     * @return TaxCollectionNo 是否已赋值
                     * 
                     */
                    bool TaxCollectionNoHasBeenSet() const;

                private:

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 税务登记证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxCollectionPicture;
                    bool m_taxCollectionPictureHasBeenSet;

                    /**
                     * 法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossIdNo;
                    bool m_bossIdNoHasBeenSet;

                    /**
                     * 法人亲属证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountIdNo;
                    bool m_accountIdNoHasBeenSet;

                    /**
                     * 其他资料3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherPictureThree;
                    bool m_otherPictureThreeHasBeenSet;

                    /**
                     * 法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountIdType;
                    bool m_accountIdTypeHasBeenSet;

                    /**
                     * 商户状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 营业执照图片【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessLicensePicture;
                    bool m_businessLicensePictureHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 法人身份证正面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossPositive;
                    bool m_bossPositiveHasBeenSet;

                    /**
                     * 开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appCount;
                    bool m_appCountHasBeenSet;

                    /**
                     * 法人身份证背面【私密区】（系统返回的图片路径）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossBack;
                    bool m_bossBackHasBeenSet;

                    /**
                     * 组织机构代码证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCodePicture;
                    bool m_organizationCodePictureHasBeenSet;

                    /**
                     * 营业执照过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessLicenseEndDate;
                    bool m_businessLicenseEndDateHasBeenSet;

                    /**
                     * 组织机构代码证号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCodeNo;
                    bool m_organizationCodeNoHasBeenSet;

                    /**
                     * 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentNo;
                    bool m_agentNoHasBeenSet;

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 法人证件生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossStartDate;
                    bool m_bossStartDateHasBeenSet;

                    /**
                     * 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 清算联行号，开户行行号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankNo;
                    bool m_bankNoHasBeenSet;

                    /**
                     * 税务登记证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxCollectionStartDate;
                    bool m_taxCollectionStartDateHasBeenSet;

                    /**
                     * 营业执照生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessLicenseStartDate;
                    bool m_businessLicenseStartDateHasBeenSet;

                    /**
                     * 客户经理用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountManagerId;
                    bool m_accountManagerIdHasBeenSet;

                    /**
                     * 分类编号(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classificationIds;
                    bool m_classificationIdsHasBeenSet;

                    /**
                     * 营业执照类型（1三证合一，2非三证合一）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessLicenseType;
                    bool m_businessLicenseTypeHasBeenSet;

                    /**
                     * 法人证件过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossEndDate;
                    bool m_bossEndDateHasBeenSet;

                    /**
                     * 营业执照编号（系统有唯一性校验）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessLicenseNo;
                    bool m_businessLicenseNoHasBeenSet;

                    /**
                     * 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 商户简介
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intro;
                    bool m_introHasBeenSet;

                    /**
                     * 法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossIdType;
                    bool m_bossIdTypeHasBeenSet;

                    /**
                     * 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 门店数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopCount;
                    bool m_shopCountHasBeenSet;

                    /**
                     * 结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountBoss;
                    bool m_accountBossHasBeenSet;

                    /**
                     * 分类名称(多个以小写逗号分开)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classificationNames;
                    bool m_classificationNamesHasBeenSet;

                    /**
                     * 法人电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossTelephone;
                    bool m_bossTelephoneHasBeenSet;

                    /**
                     * 客户经理姓名，必须为系统后台的管理员真实姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountManagerName;
                    bool m_accountManagerNameHasBeenSet;

                    /**
                     * 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_terminalCount;
                    bool m_terminalCountHasBeenSet;

                    /**
                     * 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 财务联系人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_financialContact;
                    bool m_financialContactHasBeenSet;

                    /**
                     * 商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 法人性别（1男，2女）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossSex;
                    bool m_bossSexHasBeenSet;

                    /**
                     * 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 法人住址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossAddress;
                    bool m_bossAddressHasBeenSet;

                    /**
                     * 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 法人职业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossJob;
                    bool m_bossJobHasBeenSet;

                    /**
                     * 许可证图片【私密区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_licencePicture;
                    bool m_licencePictureHasBeenSet;

                    /**
                     * 组织机构代码证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCodeEndDate;
                    bool m_organizationCodeEndDateHasBeenSet;

                    /**
                     * 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openHours;
                    bool m_openHoursHasBeenSet;

                    /**
                     * 其他资料2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherPictureTwo;
                    bool m_otherPictureTwoHasBeenSet;

                    /**
                     * 其他资料1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherPictureOne;
                    bool m_otherPictureOneHasBeenSet;

                    /**
                     * 银行户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 合同数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractCount;
                    bool m_contractCountHasBeenSet;

                    /**
                     * 授权文件【私密区】（当结算帐户身份为法人亲属时必传）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_licencePictureTwo;
                    bool m_licencePictureTwoHasBeenSet;

                    /**
                     * 银行账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 法人邮箱
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossEmail;
                    bool m_bossEmailHasBeenSet;

                    /**
                     * 结算账户类型（2对私，1对公）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 税务登记证过期时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxCollectionEndDate;
                    bool m_taxCollectionEndDateHasBeenSet;

                    /**
                     * 开户行名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 联系电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 外部商户主键编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outMerchantId;
                    bool m_outMerchantIdHasBeenSet;

                    /**
                     * 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossIdCount;
                    bool m_bossIdCountHasBeenSet;

                    /**
                     * 商户标记，自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 财务联系人电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_financialTelephone;
                    bool m_financialTelephoneHasBeenSet;

                    /**
                     * 法人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bossName;
                    bool m_bossNameHasBeenSet;

                    /**
                     * 组织机构代码证生效时间（yyyy-mm-dd）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCodeStartDate;
                    bool m_organizationCodeStartDateHasBeenSet;

                    /**
                     * 商户logo【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 其他资料4
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherPictureFour;
                    bool m_otherPictureFourHasBeenSet;

                    /**
                     * 税务登记证号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taxCollectionNo;
                    bool m_taxCollectionNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWMERCHANTRESULT_H_
