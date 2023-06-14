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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ADDMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ADDMERCHANTREQUEST_H_

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
                * AddMerchant请求参数结构体
                */
                class AddMerchantRequest : public AbstractModel
                {
                public:
                    AddMerchantRequest();
                    ~AddMerchantRequest() = default;
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
                     * 获取机构商户主键（系统有唯一性校验），建议使用商户表的主键ID，防止重复添加商户
                     * @return OutMerchantId 机构商户主键（系统有唯一性校验），建议使用商户表的主键ID，防止重复添加商户
                     * 
                     */
                    std::string GetOutMerchantId() const;

                    /**
                     * 设置机构商户主键（系统有唯一性校验），建议使用商户表的主键ID，防止重复添加商户
                     * @param _outMerchantId 机构商户主键（系统有唯一性校验），建议使用商户表的主键ID，防止重复添加商户
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
                     * 获取商户名称，小微商户命名要符合“”商户_名字” （例如：商户_张三）
                     * @return MerchantName 商户名称，小微商户命名要符合“”商户_名字” （例如：商户_张三）
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称，小微商户命名要符合“”商户_名字” （例如：商户_张三）
                     * @param _merchantName 商户名称，小微商户命名要符合“”商户_名字” （例如：商户_张三）
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
                     * 获取营业执照类型（1三证合一，2非三证合一）
                     * @return BusinessLicenseType 营业执照类型（1三证合一，2非三证合一）
                     * 
                     */
                    std::string GetBusinessLicenseType() const;

                    /**
                     * 设置营业执照类型（1三证合一，2非三证合一）
                     * @param _businessLicenseType 营业执照类型（1三证合一，2非三证合一）
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
                     * 获取营业执照编号（系统有唯一性校验），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @return BusinessLicenseNo 营业执照编号（系统有唯一性校验），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * 
                     */
                    std::string GetBusinessLicenseNo() const;

                    /**
                     * 设置营业执照编号（系统有唯一性校验），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @param _businessLicenseNo 营业执照编号（系统有唯一性校验），（小微商户不效验，随意传要有值，公司/个体户必传）
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
                     * 获取营业执照图片【私密区】（系统返回的图片路径），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @return BusinessLicensePicture 营业执照图片【私密区】（系统返回的图片路径），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * 
                     */
                    std::string GetBusinessLicensePicture() const;

                    /**
                     * 设置营业执照图片【私密区】（系统返回的图片路径），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @param _businessLicensePicture 营业执照图片【私密区】（系统返回的图片路径），（小微商户不效验，随意传要有值，公司/个体户必传）
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
                     * 获取营业执照生效时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @return BusinessLicenseStartDate 营业执照生效时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * 
                     */
                    std::string GetBusinessLicenseStartDate() const;

                    /**
                     * 设置营业执照生效时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @param _businessLicenseStartDate 营业执照生效时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
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
                     * 获取营业执照过期时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @return BusinessLicenseEndDate 营业执照过期时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * 
                     */
                    std::string GetBusinessLicenseEndDate() const;

                    /**
                     * 设置营业执照过期时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @param _businessLicenseEndDate 营业执照过期时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
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
                     * 获取行业分类编号列表（第一个分类编号为主分类，后面的为二级分类）
                     * @return ClassificationIds 行业分类编号列表（第一个分类编号为主分类，后面的为二级分类）
                     * 
                     */
                    std::vector<std::string> GetClassificationIds() const;

                    /**
                     * 设置行业分类编号列表（第一个分类编号为主分类，后面的为二级分类）
                     * @param _classificationIds 行业分类编号列表（第一个分类编号为主分类，后面的为二级分类）
                     * 
                     */
                    void SetClassificationIds(const std::vector<std::string>& _classificationIds);

                    /**
                     * 判断参数 ClassificationIds 是否已赋值
                     * @return ClassificationIds 是否已赋值
                     * 
                     */
                    bool ClassificationIdsHasBeenSet() const;

                    /**
                     * 获取招牌名称
                     * @return BrandName 招牌名称
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置招牌名称
                     * @param _brandName 招牌名称
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
                     * 获取联系电话
                     * @return Telephone 联系电话
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置联系电话
                     * @param _telephone 联系电话
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
                     * 获取城市编号
                     * @return CityId 城市编号
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置城市编号
                     * @param _cityId 城市编号
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
                     * 获取详细地址，不含省市区县名称，长度需要大于5。
                     * @return Address 详细地址，不含省市区县名称，长度需要大于5。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置详细地址，不含省市区县名称，长度需要大于5。
                     * @param _address 详细地址，不含省市区县名称，长度需要大于5。
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
                     * 获取营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * @return OpenHours 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * 
                     */
                    std::string GetOpenHours() const;

                    /**
                     * 设置营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * @param _openHours 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
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
                     * 获取结算账户类型（2对私，1对公）
                     * @return AccountType 结算账户类型（2对私，1对公）
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置结算账户类型（2对私，1对公）
                     * @param _accountType 结算账户类型（2对私，1对公）
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
                     * 获取清算联行号，开户行行号
                     * @return BankNo 清算联行号，开户行行号
                     * 
                     */
                    std::string GetBankNo() const;

                    /**
                     * 设置清算联行号，开户行行号
                     * @param _bankNo 清算联行号，开户行行号
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
                     * 获取开户行名称
                     * @return BankName 开户行名称
                     * 
                     */
                    std::string GetBankName() const;

                    /**
                     * 设置开户行名称
                     * @param _bankName 开户行名称
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
                     * 获取银行账号
                     * @return AccountNo 银行账号
                     * 
                     */
                    std::string GetAccountNo() const;

                    /**
                     * 设置银行账号
                     * @param _accountNo 银行账号
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
                     * 获取银行户名
                     * @return AccountName 银行户名
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置银行户名
                     * @param _accountName 银行户名
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
                     * 获取法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
                     * @return BossIdType 法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
                     * 
                     */
                    std::string GetBossIdType() const;

                    /**
                     * 设置法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
                     * @param _bossIdType 法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
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
                     * 获取法人证件号码
                     * @return BossIdNo 法人证件号码
                     * 
                     */
                    std::string GetBossIdNo() const;

                    /**
                     * 设置法人证件号码
                     * @param _bossIdNo 法人证件号码
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
                     * 获取法人姓名
                     * @return BossName 法人姓名
                     * 
                     */
                    std::string GetBossName() const;

                    /**
                     * 设置法人姓名
                     * @param _bossName 法人姓名
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
                     * 获取法人性别（1男，2女）
                     * @return BossSex 法人性别（1男，2女）
                     * 
                     */
                    std::string GetBossSex() const;

                    /**
                     * 设置法人性别（1男，2女）
                     * @param _bossSex 法人性别（1男，2女）
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
                     * 获取法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
                     * @return BossIdCountry 法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
                     * 
                     */
                    std::string GetBossIdCountry() const;

                    /**
                     * 设置法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
                     * @param _bossIdCountry 法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
                     * 
                     */
                    void SetBossIdCountry(const std::string& _bossIdCountry);

                    /**
                     * 判断参数 BossIdCountry 是否已赋值
                     * @return BossIdCountry 是否已赋值
                     * 
                     */
                    bool BossIdCountryHasBeenSet() const;

                    /**
                     * 获取法人身份证正面【私密区】（系统返回的图片路径）
                     * @return BossPositive 法人身份证正面【私密区】（系统返回的图片路径）
                     * 
                     */
                    std::string GetBossPositive() const;

                    /**
                     * 设置法人身份证正面【私密区】（系统返回的图片路径）
                     * @param _bossPositive 法人身份证正面【私密区】（系统返回的图片路径）
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
                     * 获取法人身份证背面【私密区】（系统返回的图片路径）
                     * @return BossBack 法人身份证背面【私密区】（系统返回的图片路径）
                     * 
                     */
                    std::string GetBossBack() const;

                    /**
                     * 设置法人身份证背面【私密区】（系统返回的图片路径）
                     * @param _bossBack 法人身份证背面【私密区】（系统返回的图片路径）
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
                     * 获取法人证件生效时间（yyyy-mm-dd）
                     * @return BossStartDate 法人证件生效时间（yyyy-mm-dd）
                     * 
                     */
                    std::string GetBossStartDate() const;

                    /**
                     * 设置法人证件生效时间（yyyy-mm-dd）
                     * @param _bossStartDate 法人证件生效时间（yyyy-mm-dd）
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
                     * 获取法人证件过期时间（yyyy-mm-dd）
                     * @return BossEndDate 法人证件过期时间（yyyy-mm-dd）
                     * 
                     */
                    std::string GetBossEndDate() const;

                    /**
                     * 设置法人证件过期时间（yyyy-mm-dd）
                     * @param _bossEndDate 法人证件过期时间（yyyy-mm-dd）
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
                     * 获取许可证图片【私密区】，（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @return LicencePicture 许可证图片【私密区】，（小微商户不效验，随意传要有值，公司/个体户必传）
                     * 
                     */
                    std::string GetLicencePicture() const;

                    /**
                     * 设置许可证图片【私密区】，（小微商户不效验，随意传要有值，公司/个体户必传）
                     * @param _licencePicture 许可证图片【私密区】，（小微商户不效验，随意传要有值，公司/个体户必传）
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
                     * 获取商户类型：1-个体，2-小微，3-企业。不传默认为2-小微商户。
                     * @return Type 商户类型：1-个体，2-小微，3-企业。不传默认为2-小微商户。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置商户类型：1-个体，2-小微，3-企业。不传默认为2-小微商户。
                     * @param _type 商户类型：1-个体，2-小微，3-企业。不传默认为2-小微商户。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取组织机构代码证号
                     * @return OrganizationNo 组织机构代码证号
                     * 
                     */
                    std::string GetOrganizationNo() const;

                    /**
                     * 设置组织机构代码证号
                     * @param _organizationNo 组织机构代码证号
                     * 
                     */
                    void SetOrganizationNo(const std::string& _organizationNo);

                    /**
                     * 判断参数 OrganizationNo 是否已赋值
                     * @return OrganizationNo 是否已赋值
                     * 
                     */
                    bool OrganizationNoHasBeenSet() const;

                    /**
                     * 获取组织机构代码证生效时间（yyyy-mm-dd）
                     * @return OrganizationStartDate 组织机构代码证生效时间（yyyy-mm-dd）
                     * 
                     */
                    std::string GetOrganizationStartDate() const;

                    /**
                     * 设置组织机构代码证生效时间（yyyy-mm-dd）
                     * @param _organizationStartDate 组织机构代码证生效时间（yyyy-mm-dd）
                     * 
                     */
                    void SetOrganizationStartDate(const std::string& _organizationStartDate);

                    /**
                     * 判断参数 OrganizationStartDate 是否已赋值
                     * @return OrganizationStartDate 是否已赋值
                     * 
                     */
                    bool OrganizationStartDateHasBeenSet() const;

                    /**
                     * 获取组织机构代码证图片【私密区】
                     * @return OrganizationPicture 组织机构代码证图片【私密区】
                     * 
                     */
                    std::string GetOrganizationPicture() const;

                    /**
                     * 设置组织机构代码证图片【私密区】
                     * @param _organizationPicture 组织机构代码证图片【私密区】
                     * 
                     */
                    void SetOrganizationPicture(const std::string& _organizationPicture);

                    /**
                     * 判断参数 OrganizationPicture 是否已赋值
                     * @return OrganizationPicture 是否已赋值
                     * 
                     */
                    bool OrganizationPictureHasBeenSet() const;

                    /**
                     * 获取组织机构代码证过期时间（yyyy-mm-dd）
                     * @return OrganizationEndDate 组织机构代码证过期时间（yyyy-mm-dd）
                     * 
                     */
                    std::string GetOrganizationEndDate() const;

                    /**
                     * 设置组织机构代码证过期时间（yyyy-mm-dd）
                     * @param _organizationEndDate 组织机构代码证过期时间（yyyy-mm-dd）
                     * 
                     */
                    void SetOrganizationEndDate(const std::string& _organizationEndDate);

                    /**
                     * 判断参数 OrganizationEndDate 是否已赋值
                     * @return OrganizationEndDate 是否已赋值
                     * 
                     */
                    bool OrganizationEndDateHasBeenSet() const;

                    /**
                     * 获取商户简介
                     * @return Intro 商户简介
                     * 
                     */
                    std::string GetIntro() const;

                    /**
                     * 设置商户简介
                     * @param _intro 商户简介
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
                     * 获取商户logo【公共区】
                     * @return Logo 商户logo【公共区】
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置商户logo【公共区】
                     * @param _logo 商户logo【公共区】
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
                     * 获取商户标记，自定义参数
                     * @return Tag 商户标记，自定义参数
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置商户标记，自定义参数
                     * @param _tag 商户标记，自定义参数
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
                     * @return FinancialTelephone 财务联系人电话
                     * 
                     */
                    std::string GetFinancialTelephone() const;

                    /**
                     * 设置财务联系人电话
                     * @param _financialTelephone 财务联系人电话
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
                     * 获取财务联系人
                     * @return FinancialContact 财务联系人
                     * 
                     */
                    std::string GetFinancialContact() const;

                    /**
                     * 设置财务联系人
                     * @param _financialContact 财务联系人
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
                     * 获取税务登记证号
                     * @return TaxRegistrationNo 税务登记证号
                     * 
                     */
                    std::string GetTaxRegistrationNo() const;

                    /**
                     * 设置税务登记证号
                     * @param _taxRegistrationNo 税务登记证号
                     * 
                     */
                    void SetTaxRegistrationNo(const std::string& _taxRegistrationNo);

                    /**
                     * 判断参数 TaxRegistrationNo 是否已赋值
                     * @return TaxRegistrationNo 是否已赋值
                     * 
                     */
                    bool TaxRegistrationNoHasBeenSet() const;

                    /**
                     * 获取税务登记证图片【私密区】
                     * @return TaxRegistrationPicture 税务登记证图片【私密区】
                     * 
                     */
                    std::string GetTaxRegistrationPicture() const;

                    /**
                     * 设置税务登记证图片【私密区】
                     * @param _taxRegistrationPicture 税务登记证图片【私密区】
                     * 
                     */
                    void SetTaxRegistrationPicture(const std::string& _taxRegistrationPicture);

                    /**
                     * 判断参数 TaxRegistrationPicture 是否已赋值
                     * @return TaxRegistrationPicture 是否已赋值
                     * 
                     */
                    bool TaxRegistrationPictureHasBeenSet() const;

                    /**
                     * 获取税务登记证生效时间（yyyy-mm-dd）
                     * @return TaxRegistrationStartDate 税务登记证生效时间（yyyy-mm-dd）
                     * 
                     */
                    std::string GetTaxRegistrationStartDate() const;

                    /**
                     * 设置税务登记证生效时间（yyyy-mm-dd）
                     * @param _taxRegistrationStartDate 税务登记证生效时间（yyyy-mm-dd）
                     * 
                     */
                    void SetTaxRegistrationStartDate(const std::string& _taxRegistrationStartDate);

                    /**
                     * 判断参数 TaxRegistrationStartDate 是否已赋值
                     * @return TaxRegistrationStartDate 是否已赋值
                     * 
                     */
                    bool TaxRegistrationStartDateHasBeenSet() const;

                    /**
                     * 获取税务登记证过期时间（yyyy-mm-dd）
                     * @return TaxRegistrationEndDate 税务登记证过期时间（yyyy-mm-dd）
                     * 
                     */
                    std::string GetTaxRegistrationEndDate() const;

                    /**
                     * 设置税务登记证过期时间（yyyy-mm-dd）
                     * @param _taxRegistrationEndDate 税务登记证过期时间（yyyy-mm-dd）
                     * 
                     */
                    void SetTaxRegistrationEndDate(const std::string& _taxRegistrationEndDate);

                    /**
                     * 判断参数 TaxRegistrationEndDate 是否已赋值
                     * @return TaxRegistrationEndDate 是否已赋值
                     * 
                     */
                    bool TaxRegistrationEndDateHasBeenSet() const;

                    /**
                     * 获取结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
                     * @return AccountBoss 结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
                     * 
                     */
                    std::string GetAccountBoss() const;

                    /**
                     * 设置结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
                     * @param _accountBoss 结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
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
                     * 获取客户经理姓名，必须为系统后台的管理员真实姓名
                     * @return AccountManagerName 客户经理姓名，必须为系统后台的管理员真实姓名
                     * 
                     */
                    std::string GetAccountManagerName() const;

                    /**
                     * 设置客户经理姓名，必须为系统后台的管理员真实姓名
                     * @param _accountManagerName 客户经理姓名，必须为系统后台的管理员真实姓名
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
                     * 获取法人电话
                     * @return BossTelephone 法人电话
                     * 
                     */
                    std::string GetBossTelephone() const;

                    /**
                     * 设置法人电话
                     * @param _bossTelephone 法人电话
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
                     * 获取法人职业
                     * @return BossJob 法人职业
                     * 
                     */
                    std::string GetBossJob() const;

                    /**
                     * 设置法人职业
                     * @param _bossJob 法人职业
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
                     * 获取法人邮箱
                     * @return BossEmail 法人邮箱
                     * 
                     */
                    std::string GetBossEmail() const;

                    /**
                     * 设置法人邮箱
                     * @param _bossEmail 法人邮箱
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
                     * 获取法人住址
                     * @return BossAddress 法人住址
                     * 
                     */
                    std::string GetBossAddress() const;

                    /**
                     * 设置法人住址
                     * @param _bossAddress 法人住址
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
                     * 获取法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
                     * @return AccountIdType 法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
                     * 
                     */
                    std::string GetAccountIdType() const;

                    /**
                     * 设置法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
                     * @param _accountIdType 法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
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
                     * 获取法人亲属证件号码
                     * @return AccountIdNo 法人亲属证件号码
                     * 
                     */
                    std::string GetAccountIdNo() const;

                    /**
                     * 设置法人亲属证件号码
                     * @param _accountIdNo 法人亲属证件号码
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
                     * 获取授权文件【私密区】
                     * @return LicencePictureTwo 授权文件【私密区】
                     * 
                     */
                    std::string GetLicencePictureTwo() const;

                    /**
                     * 设置授权文件【私密区】
                     * @param _licencePictureTwo 授权文件【私密区】
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
                     * 获取其他资料1
                     * @return OtherPictureOne 其他资料1
                     * 
                     */
                    std::string GetOtherPictureOne() const;

                    /**
                     * 设置其他资料1
                     * @param _otherPictureOne 其他资料1
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
                     * 获取其他资料2
                     * @return OtherPictureTwo 其他资料2
                     * 
                     */
                    std::string GetOtherPictureTwo() const;

                    /**
                     * 设置其他资料2
                     * @param _otherPictureTwo 其他资料2
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
                     * 获取其他资料3
                     * @return OtherPictureThree 其他资料3
                     * 
                     */
                    std::string GetOtherPictureThree() const;

                    /**
                     * 设置其他资料3
                     * @param _otherPictureThree 其他资料3
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
                     * 获取其他资料4
                     * @return OtherPictureFour 其他资料4
                     * 
                     */
                    std::string GetOtherPictureFour() const;

                    /**
                     * 设置其他资料4
                     * @param _otherPictureFour 其他资料4
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
                     * 机构商户主键（系统有唯一性校验），建议使用商户表的主键ID，防止重复添加商户
                     */
                    std::string m_outMerchantId;
                    bool m_outMerchantIdHasBeenSet;

                    /**
                     * 商户名称，小微商户命名要符合“”商户_名字” （例如：商户_张三）
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 营业执照类型（1三证合一，2非三证合一）
                     */
                    std::string m_businessLicenseType;
                    bool m_businessLicenseTypeHasBeenSet;

                    /**
                     * 营业执照编号（系统有唯一性校验），（小微商户不效验，随意传要有值，公司/个体户必传）
                     */
                    std::string m_businessLicenseNo;
                    bool m_businessLicenseNoHasBeenSet;

                    /**
                     * 营业执照图片【私密区】（系统返回的图片路径），（小微商户不效验，随意传要有值，公司/个体户必传）
                     */
                    std::string m_businessLicensePicture;
                    bool m_businessLicensePictureHasBeenSet;

                    /**
                     * 营业执照生效时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     */
                    std::string m_businessLicenseStartDate;
                    bool m_businessLicenseStartDateHasBeenSet;

                    /**
                     * 营业执照过期时间（yyyy-mm-dd），（小微商户不效验，随意传要有值，公司/个体户必传）
                     */
                    std::string m_businessLicenseEndDate;
                    bool m_businessLicenseEndDateHasBeenSet;

                    /**
                     * 行业分类编号列表（第一个分类编号为主分类，后面的为二级分类）
                     */
                    std::vector<std::string> m_classificationIds;
                    bool m_classificationIdsHasBeenSet;

                    /**
                     * 招牌名称
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 城市编号
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 详细地址，不含省市区县名称，长度需要大于5。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     */
                    std::string m_openHours;
                    bool m_openHoursHasBeenSet;

                    /**
                     * 结算账户类型（2对私，1对公）
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 清算联行号，开户行行号
                     */
                    std::string m_bankNo;
                    bool m_bankNoHasBeenSet;

                    /**
                     * 开户行名称
                     */
                    std::string m_bankName;
                    bool m_bankNameHasBeenSet;

                    /**
                     * 银行账号
                     */
                    std::string m_accountNo;
                    bool m_accountNoHasBeenSet;

                    /**
                     * 银行户名
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 法人证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）
                     */
                    std::string m_bossIdType;
                    bool m_bossIdTypeHasBeenSet;

                    /**
                     * 法人证件号码
                     */
                    std::string m_bossIdNo;
                    bool m_bossIdNoHasBeenSet;

                    /**
                     * 法人姓名
                     */
                    std::string m_bossName;
                    bool m_bossNameHasBeenSet;

                    /**
                     * 法人性别（1男，2女）
                     */
                    std::string m_bossSex;
                    bool m_bossSexHasBeenSet;

                    /**
                     * 法人证件国别/地区（中国CHN，香港HKG，澳门MAC，台湾CTN）
                     */
                    std::string m_bossIdCountry;
                    bool m_bossIdCountryHasBeenSet;

                    /**
                     * 法人身份证正面【私密区】（系统返回的图片路径）
                     */
                    std::string m_bossPositive;
                    bool m_bossPositiveHasBeenSet;

                    /**
                     * 法人身份证背面【私密区】（系统返回的图片路径）
                     */
                    std::string m_bossBack;
                    bool m_bossBackHasBeenSet;

                    /**
                     * 法人证件生效时间（yyyy-mm-dd）
                     */
                    std::string m_bossStartDate;
                    bool m_bossStartDateHasBeenSet;

                    /**
                     * 法人证件过期时间（yyyy-mm-dd）
                     */
                    std::string m_bossEndDate;
                    bool m_bossEndDateHasBeenSet;

                    /**
                     * 许可证图片【私密区】，（小微商户不效验，随意传要有值，公司/个体户必传）
                     */
                    std::string m_licencePicture;
                    bool m_licencePictureHasBeenSet;

                    /**
                     * 商户类型：1-个体，2-小微，3-企业。不传默认为2-小微商户。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 组织机构代码证号
                     */
                    std::string m_organizationNo;
                    bool m_organizationNoHasBeenSet;

                    /**
                     * 组织机构代码证生效时间（yyyy-mm-dd）
                     */
                    std::string m_organizationStartDate;
                    bool m_organizationStartDateHasBeenSet;

                    /**
                     * 组织机构代码证图片【私密区】
                     */
                    std::string m_organizationPicture;
                    bool m_organizationPictureHasBeenSet;

                    /**
                     * 组织机构代码证过期时间（yyyy-mm-dd）
                     */
                    std::string m_organizationEndDate;
                    bool m_organizationEndDateHasBeenSet;

                    /**
                     * 商户简介
                     */
                    std::string m_intro;
                    bool m_introHasBeenSet;

                    /**
                     * 商户logo【公共区】
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 商户标记，自定义参数
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 财务联系人电话
                     */
                    std::string m_financialTelephone;
                    bool m_financialTelephoneHasBeenSet;

                    /**
                     * 财务联系人
                     */
                    std::string m_financialContact;
                    bool m_financialContactHasBeenSet;

                    /**
                     * 税务登记证号
                     */
                    std::string m_taxRegistrationNo;
                    bool m_taxRegistrationNoHasBeenSet;

                    /**
                     * 税务登记证图片【私密区】
                     */
                    std::string m_taxRegistrationPicture;
                    bool m_taxRegistrationPictureHasBeenSet;

                    /**
                     * 税务登记证生效时间（yyyy-mm-dd）
                     */
                    std::string m_taxRegistrationStartDate;
                    bool m_taxRegistrationStartDateHasBeenSet;

                    /**
                     * 税务登记证过期时间（yyyy-mm-dd）
                     */
                    std::string m_taxRegistrationEndDate;
                    bool m_taxRegistrationEndDateHasBeenSet;

                    /**
                     * 结算账户人身份（1法人，2法人亲属），结算帐户为对私时必填
                     */
                    std::string m_accountBoss;
                    bool m_accountBossHasBeenSet;

                    /**
                     * 客户经理姓名，必须为系统后台的管理员真实姓名
                     */
                    std::string m_accountManagerName;
                    bool m_accountManagerNameHasBeenSet;

                    /**
                     * 法人电话
                     */
                    std::string m_bossTelephone;
                    bool m_bossTelephoneHasBeenSet;

                    /**
                     * 法人职业
                     */
                    std::string m_bossJob;
                    bool m_bossJobHasBeenSet;

                    /**
                     * 法人邮箱
                     */
                    std::string m_bossEmail;
                    bool m_bossEmailHasBeenSet;

                    /**
                     * 法人住址
                     */
                    std::string m_bossAddress;
                    bool m_bossAddressHasBeenSet;

                    /**
                     * 法人亲属证件类型（1居民身份证,2临时居民身份证,3居民户口簿,4护照,5港澳居民来往内地通行证,6回乡证,7军人证,8武警身份证,9其他法定文件）结算账户人身份为法人亲属时必填
                     */
                    std::string m_accountIdType;
                    bool m_accountIdTypeHasBeenSet;

                    /**
                     * 法人亲属证件号码
                     */
                    std::string m_accountIdNo;
                    bool m_accountIdNoHasBeenSet;

                    /**
                     * 授权文件【私密区】
                     */
                    std::string m_licencePictureTwo;
                    bool m_licencePictureTwoHasBeenSet;

                    /**
                     * 其他资料1
                     */
                    std::string m_otherPictureOne;
                    bool m_otherPictureOneHasBeenSet;

                    /**
                     * 其他资料2
                     */
                    std::string m_otherPictureTwo;
                    bool m_otherPictureTwoHasBeenSet;

                    /**
                     * 其他资料3
                     */
                    std::string m_otherPictureThree;
                    bool m_otherPictureThreeHasBeenSet;

                    /**
                     * 其他资料4
                     */
                    std::string m_otherPictureFour;
                    bool m_otherPictureFourHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ADDMERCHANTREQUEST_H_
