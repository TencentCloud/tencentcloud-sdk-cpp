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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_COMPANYAPPLYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_COMPANYAPPLYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 企业资质申请信息
                */
                class CompanyApplyInfo : public AbstractModel
                {
                public:
                    CompanyApplyInfo();
                    ~CompanyApplyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申请人身份，0-公司法定代表人，1-经办人（受法定代表人委托）
                     * @return ApplicantType 申请人身份，0-公司法定代表人，1-经办人（受法定代表人委托）
                     * 
                     */
                    int64_t GetApplicantType() const;

                    /**
                     * 设置申请人身份，0-公司法定代表人，1-经办人（受法定代表人委托）
                     * @param _applicantType 申请人身份，0-公司法定代表人，1-经办人（受法定代表人委托）
                     * 
                     */
                    void SetApplicantType(const int64_t& _applicantType);

                    /**
                     * 判断参数 ApplicantType 是否已赋值
                     * @return ApplicantType 是否已赋值
                     * 
                     */
                    bool ApplicantTypeHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return CompanyName 企业名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置企业名称
                     * @param _companyName 企业名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取统一社会信用代码
                     * @return BusinessId 统一社会信用代码
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置统一社会信用代码
                     * @param _businessId 统一社会信用代码
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取营业执照扫描件(加盖公章)。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return BusinessIdPicUrl 营业执照扫描件(加盖公章)。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetBusinessIdPicUrl() const;

                    /**
                     * 设置营业执照扫描件(加盖公章)。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _businessIdPicUrl 营业执照扫描件(加盖公章)。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetBusinessIdPicUrl(const std::string& _businessIdPicUrl);

                    /**
                     * 判断参数 BusinessIdPicUrl 是否已赋值
                     * @return BusinessIdPicUrl 是否已赋值
                     * 
                     */
                    bool BusinessIdPicUrlHasBeenSet() const;

                    /**
                     * 获取法定代表人名称
                     * @return CorporationName 法定代表人名称
                     * 
                     */
                    std::string GetCorporationName() const;

                    /**
                     * 设置法定代表人名称
                     * @param _corporationName 法定代表人名称
                     * 
                     */
                    void SetCorporationName(const std::string& _corporationName);

                    /**
                     * 判断参数 CorporationName 是否已赋值
                     * @return CorporationName 是否已赋值
                     * 
                     */
                    bool CorporationNameHasBeenSet() const;

                    /**
                     * 获取法定代表人身份证号码
                     * @return CorporationId 法定代表人身份证号码
                     * 
                     */
                    std::string GetCorporationId() const;

                    /**
                     * 设置法定代表人身份证号码
                     * @param _corporationId 法定代表人身份证号码
                     * 
                     */
                    void SetCorporationId(const std::string& _corporationId);

                    /**
                     * 判断参数 CorporationId 是否已赋值
                     * @return CorporationId 是否已赋值
                     * 
                     */
                    bool CorporationIdHasBeenSet() const;

                    /**
                     * 获取法定代表人身份证正反面扫描件。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return CorporationIdPicUrl 法定代表人身份证正反面扫描件。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetCorporationIdPicUrl() const;

                    /**
                     * 设置法定代表人身份证正反面扫描件。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _corporationIdPicUrl 法定代表人身份证正反面扫描件。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetCorporationIdPicUrl(const std::string& _corporationIdPicUrl);

                    /**
                     * 判断参数 CorporationIdPicUrl 是否已赋值
                     * @return CorporationIdPicUrl 是否已赋值
                     * 
                     */
                    bool CorporationIdPicUrlHasBeenSet() const;

                    /**
                     * 获取安全合规使用承诺书。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return NetworkCommitmentPicUrl 安全合规使用承诺书。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetNetworkCommitmentPicUrl() const;

                    /**
                     * 设置安全合规使用承诺书。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _networkCommitmentPicUrl 安全合规使用承诺书。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetNetworkCommitmentPicUrl(const std::string& _networkCommitmentPicUrl);

                    /**
                     * 判断参数 NetworkCommitmentPicUrl 是否已赋值
                     * @return NetworkCommitmentPicUrl 是否已赋值
                     * 
                     */
                    bool NetworkCommitmentPicUrlHasBeenSet() const;

                    /**
                     * 获取是否与腾讯云账号的资质一致,0-不一致,1-一致
                     * @return IsEqualTencentCloud 是否与腾讯云账号的资质一致,0-不一致,1-一致
                     * 
                     */
                    int64_t GetIsEqualTencentCloud() const;

                    /**
                     * 设置是否与腾讯云账号的资质一致,0-不一致,1-一致
                     * @param _isEqualTencentCloud 是否与腾讯云账号的资质一致,0-不一致,1-一致
                     * 
                     */
                    void SetIsEqualTencentCloud(const int64_t& _isEqualTencentCloud);

                    /**
                     * 判断参数 IsEqualTencentCloud 是否已赋值
                     * @return IsEqualTencentCloud 是否已赋值
                     * 
                     */
                    bool IsEqualTencentCloudHasBeenSet() const;

                    /**
                     * 获取法定代表人手机号
                     * @return CorporationMobile 法定代表人手机号
                     * 
                     */
                    std::string GetCorporationMobile() const;

                    /**
                     * 设置法定代表人手机号
                     * @param _corporationMobile 法定代表人手机号
                     * 
                     */
                    void SetCorporationMobile(const std::string& _corporationMobile);

                    /**
                     * 判断参数 CorporationMobile 是否已赋值
                     * @return CorporationMobile 是否已赋值
                     * 
                     */
                    bool CorporationMobileHasBeenSet() const;

                    /**
                     * 获取法定代表人手机号码实名认证。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return CorporationMobilePicUrl 法定代表人手机号码实名认证。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetCorporationMobilePicUrl() const;

                    /**
                     * 设置法定代表人手机号码实名认证。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _corporationMobilePicUrl 法定代表人手机号码实名认证。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetCorporationMobilePicUrl(const std::string& _corporationMobilePicUrl);

                    /**
                     * 判断参数 CorporationMobilePicUrl 是否已赋值
                     * @return CorporationMobilePicUrl 是否已赋值
                     * 
                     */
                    bool CorporationMobilePicUrlHasBeenSet() const;

                    /**
                     * 获取通话话术。(支持doc、docx格式的文档不超过50MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return UseDescribeFileUrl 通话话术。(支持doc、docx格式的文档不超过50MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetUseDescribeFileUrl() const;

                    /**
                     * 设置通话话术。(支持doc、docx格式的文档不超过50MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _useDescribeFileUrl 通话话术。(支持doc、docx格式的文档不超过50MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetUseDescribeFileUrl(const std::string& _useDescribeFileUrl);

                    /**
                     * 判断参数 UseDescribeFileUrl 是否已赋值
                     * @return UseDescribeFileUrl 是否已赋值
                     * 
                     */
                    bool UseDescribeFileUrlHasBeenSet() const;

                    /**
                     * 获取公司授权函。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return CompanyAuthLetterPicUrl 公司授权函。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetCompanyAuthLetterPicUrl() const;

                    /**
                     * 设置公司授权函。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _companyAuthLetterPicUrl 公司授权函。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetCompanyAuthLetterPicUrl(const std::string& _companyAuthLetterPicUrl);

                    /**
                     * 判断参数 CompanyAuthLetterPicUrl 是否已赋值
                     * @return CompanyAuthLetterPicUrl 是否已赋值
                     * 
                     */
                    bool CompanyAuthLetterPicUrlHasBeenSet() const;

                    /**
                     * 获取电话受理单。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return AcceptPicUrl 电话受理单。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetAcceptPicUrl() const;

                    /**
                     * 设置电话受理单。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _acceptPicUrl 电话受理单。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetAcceptPicUrl(const std::string& _acceptPicUrl);

                    /**
                     * 判断参数 AcceptPicUrl 是否已赋值
                     * @return AcceptPicUrl 是否已赋值
                     * 
                     */
                    bool AcceptPicUrlHasBeenSet() const;

                    /**
                     * 获取法定代表人手持身份证照，申请人类型为法定代表人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return CorporationHoldingOnIdPicUrl 法定代表人手持身份证照，申请人类型为法定代表人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetCorporationHoldingOnIdPicUrl() const;

                    /**
                     * 设置法定代表人手持身份证照，申请人类型为法定代表人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _corporationHoldingOnIdPicUrl 法定代表人手持身份证照，申请人类型为法定代表人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetCorporationHoldingOnIdPicUrl(const std::string& _corporationHoldingOnIdPicUrl);

                    /**
                     * 判断参数 CorporationHoldingOnIdPicUrl 是否已赋值
                     * @return CorporationHoldingOnIdPicUrl 是否已赋值
                     * 
                     */
                    bool CorporationHoldingOnIdPicUrlHasBeenSet() const;

                    /**
                     * 获取经办人名称，申请人类型为经办人时必填。
                     * @return OperatorName 经办人名称，申请人类型为经办人时必填。
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置经办人名称，申请人类型为经办人时必填。
                     * @param _operatorName 经办人名称，申请人类型为经办人时必填。
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取经办人证件号码，申请人类型为经办人时必填。
                     * @return OperatorId 经办人证件号码，申请人类型为经办人时必填。
                     * 
                     */
                    std::string GetOperatorId() const;

                    /**
                     * 设置经办人证件号码，申请人类型为经办人时必填。
                     * @param _operatorId 经办人证件号码，申请人类型为经办人时必填。
                     * 
                     */
                    void SetOperatorId(const std::string& _operatorId);

                    /**
                     * 判断参数 OperatorId 是否已赋值
                     * @return OperatorId 是否已赋值
                     * 
                     */
                    bool OperatorIdHasBeenSet() const;

                    /**
                     * 获取经办人身份证正反面扫描件，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return OperatorIdPicUrl 经办人身份证正反面扫描件，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetOperatorIdPicUrl() const;

                    /**
                     * 设置经办人身份证正反面扫描件，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _operatorIdPicUrl 经办人身份证正反面扫描件，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetOperatorIdPicUrl(const std::string& _operatorIdPicUrl);

                    /**
                     * 判断参数 OperatorIdPicUrl 是否已赋值
                     * @return OperatorIdPicUrl 是否已赋值
                     * 
                     */
                    bool OperatorIdPicUrlHasBeenSet() const;

                    /**
                     * 获取经办人手持身份证照，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return OperatorHoldingOnIdPicUrl 经办人手持身份证照，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetOperatorHoldingOnIdPicUrl() const;

                    /**
                     * 设置经办人手持身份证照，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _operatorHoldingOnIdPicUrl 经办人手持身份证照，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetOperatorHoldingOnIdPicUrl(const std::string& _operatorHoldingOnIdPicUrl);

                    /**
                     * 判断参数 OperatorHoldingOnIdPicUrl 是否已赋值
                     * @return OperatorHoldingOnIdPicUrl 是否已赋值
                     * 
                     */
                    bool OperatorHoldingOnIdPicUrlHasBeenSet() const;

                    /**
                     * 获取委托授权书，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return CommissionPicUrl 委托授权书，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetCommissionPicUrl() const;

                    /**
                     * 设置委托授权书，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _commissionPicUrl 委托授权书，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetCommissionPicUrl(const std::string& _commissionPicUrl);

                    /**
                     * 判断参数 CommissionPicUrl 是否已赋值
                     * @return CommissionPicUrl 是否已赋值
                     * 
                     */
                    bool CommissionPicUrlHasBeenSet() const;

                    /**
                     * 获取经办人手机号，申请人类型为经办人时必填。
                     * @return OperatorMobile 经办人手机号，申请人类型为经办人时必填。
                     * 
                     */
                    std::string GetOperatorMobile() const;

                    /**
                     * 设置经办人手机号，申请人类型为经办人时必填。
                     * @param _operatorMobile 经办人手机号，申请人类型为经办人时必填。
                     * 
                     */
                    void SetOperatorMobile(const std::string& _operatorMobile);

                    /**
                     * 判断参数 OperatorMobile 是否已赋值
                     * @return OperatorMobile 是否已赋值
                     * 
                     */
                    bool OperatorMobileHasBeenSet() const;

                    /**
                     * 获取经办人邮箱，申请人类型为经办人时必填。
                     * @return OperatorEmail 经办人邮箱，申请人类型为经办人时必填。
                     * 
                     */
                    std::string GetOperatorEmail() const;

                    /**
                     * 设置经办人邮箱，申请人类型为经办人时必填。
                     * @param _operatorEmail 经办人邮箱，申请人类型为经办人时必填。
                     * 
                     */
                    void SetOperatorEmail(const std::string& _operatorEmail);

                    /**
                     * 判断参数 OperatorEmail 是否已赋值
                     * @return OperatorEmail 是否已赋值
                     * 
                     */
                    bool OperatorEmailHasBeenSet() const;

                    /**
                     * 获取经办人手机号码实名认证，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @return OperatorMobilePicUrl 经办人手机号码实名认证，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    std::string GetOperatorMobilePicUrl() const;

                    /**
                     * 设置经办人手机号码实名认证，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * @param _operatorMobilePicUrl 经办人手机号码实名认证，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     * 
                     */
                    void SetOperatorMobilePicUrl(const std::string& _operatorMobilePicUrl);

                    /**
                     * 判断参数 OperatorMobilePicUrl 是否已赋值
                     * @return OperatorMobilePicUrl 是否已赋值
                     * 
                     */
                    bool OperatorMobilePicUrlHasBeenSet() const;

                private:

                    /**
                     * 申请人身份，0-公司法定代表人，1-经办人（受法定代表人委托）
                     */
                    int64_t m_applicantType;
                    bool m_applicantTypeHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 统一社会信用代码
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 营业执照扫描件(加盖公章)。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_businessIdPicUrl;
                    bool m_businessIdPicUrlHasBeenSet;

                    /**
                     * 法定代表人名称
                     */
                    std::string m_corporationName;
                    bool m_corporationNameHasBeenSet;

                    /**
                     * 法定代表人身份证号码
                     */
                    std::string m_corporationId;
                    bool m_corporationIdHasBeenSet;

                    /**
                     * 法定代表人身份证正反面扫描件。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_corporationIdPicUrl;
                    bool m_corporationIdPicUrlHasBeenSet;

                    /**
                     * 安全合规使用承诺书。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_networkCommitmentPicUrl;
                    bool m_networkCommitmentPicUrlHasBeenSet;

                    /**
                     * 是否与腾讯云账号的资质一致,0-不一致,1-一致
                     */
                    int64_t m_isEqualTencentCloud;
                    bool m_isEqualTencentCloudHasBeenSet;

                    /**
                     * 法定代表人手机号
                     */
                    std::string m_corporationMobile;
                    bool m_corporationMobileHasBeenSet;

                    /**
                     * 法定代表人手机号码实名认证。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_corporationMobilePicUrl;
                    bool m_corporationMobilePicUrlHasBeenSet;

                    /**
                     * 通话话术。(支持doc、docx格式的文档不超过50MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_useDescribeFileUrl;
                    bool m_useDescribeFileUrlHasBeenSet;

                    /**
                     * 公司授权函。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_companyAuthLetterPicUrl;
                    bool m_companyAuthLetterPicUrlHasBeenSet;

                    /**
                     * 电话受理单。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_acceptPicUrl;
                    bool m_acceptPicUrlHasBeenSet;

                    /**
                     * 法定代表人手持身份证照，申请人类型为法定代表人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_corporationHoldingOnIdPicUrl;
                    bool m_corporationHoldingOnIdPicUrlHasBeenSet;

                    /**
                     * 经办人名称，申请人类型为经办人时必填。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 经办人证件号码，申请人类型为经办人时必填。
                     */
                    std::string m_operatorId;
                    bool m_operatorIdHasBeenSet;

                    /**
                     * 经办人身份证正反面扫描件，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_operatorIdPicUrl;
                    bool m_operatorIdPicUrlHasBeenSet;

                    /**
                     * 经办人手持身份证照，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_operatorHoldingOnIdPicUrl;
                    bool m_operatorHoldingOnIdPicUrlHasBeenSet;

                    /**
                     * 委托授权书，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_commissionPicUrl;
                    bool m_commissionPicUrlHasBeenSet;

                    /**
                     * 经办人手机号，申请人类型为经办人时必填。
                     */
                    std::string m_operatorMobile;
                    bool m_operatorMobileHasBeenSet;

                    /**
                     * 经办人邮箱，申请人类型为经办人时必填。
                     */
                    std::string m_operatorEmail;
                    bool m_operatorEmailHasBeenSet;

                    /**
                     * 经办人手机号码实名认证，申请人类型为经办人时必填。(支持jpg、png、gif、jpeg格式的图片，每张图片应大于50K，不超过5MB，模板参见控制台:https://console.cloud.tencent.com/ccc/enterprise/update)
                     */
                    std::string m_operatorMobilePicUrl;
                    bool m_operatorMobilePicUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_COMPANYAPPLYINFO_H_
