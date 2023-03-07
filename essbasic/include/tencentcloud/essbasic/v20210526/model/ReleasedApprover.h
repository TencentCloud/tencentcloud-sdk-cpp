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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RELEASEDAPPROVER_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RELEASEDAPPROVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 解除协议的签署人，如不指定，默认使用待解除流程（即原流程）中的签署人。
注意：不支持更换C端（个人身份类型）签署人，如果原流程中含有C端签署人，默认使用原流程中的该签署人。

如果需要指定B端（机构身份类型）签署人，其中ReleasedApprover需要传递的参数如下：
ApproverNumber, OrganizationName, ApproverType必传。
对于其他身份标识
- 子客企业指定经办人：OpenId必传，OrganizationOpenId必传；
- 非子客企业：Name、Mobile必传。
                */
                class ReleasedApprover : public AbstractModel
                {
                public:
                    ReleasedApprover();
                    ~ReleasedApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符
                     * @return OrganizationName 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符
                     * @param OrganizationName 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取签署人在原流程中的签署人列表中的顺序序号（从0开始，按顺序依次递增），如果不清楚原流程中的签署人列表，可以通过DescribeFlows接口查看
                     * @return ApproverNumber 签署人在原流程中的签署人列表中的顺序序号（从0开始，按顺序依次递增），如果不清楚原流程中的签署人列表，可以通过DescribeFlows接口查看
                     */
                    uint64_t GetApproverNumber() const;

                    /**
                     * 设置签署人在原流程中的签署人列表中的顺序序号（从0开始，按顺序依次递增），如果不清楚原流程中的签署人列表，可以通过DescribeFlows接口查看
                     * @param ApproverNumber 签署人在原流程中的签署人列表中的顺序序号（从0开始，按顺序依次递增），如果不清楚原流程中的签署人列表，可以通过DescribeFlows接口查看
                     */
                    void SetApproverNumber(const uint64_t& _approverNumber);

                    /**
                     * 判断参数 ApproverNumber 是否已赋值
                     * @return ApproverNumber 是否已赋值
                     */
                    bool ApproverNumberHasBeenSet() const;

                    /**
                     * 获取签署人类型，目前仅支持
ORGANIZATION-企业
                     * @return ApproverType 签署人类型，目前仅支持
ORGANIZATION-企业
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置签署人类型，目前仅支持
ORGANIZATION-企业
                     * @param ApproverType 签署人类型，目前仅支持
ORGANIZATION-企业
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取签署人姓名，最大长度50个字符
                     * @return Name 签署人姓名，最大长度50个字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名，最大长度50个字符
                     * @param Name 签署人姓名，最大长度50个字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取签署人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     * @return IdCardType 签署人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置签署人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     * @param IdCardType 签署人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取签署人证件号
                     * @return IdCardNumber 签署人证件号
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置签署人证件号
                     * @param IdCardNumber 签署人证件号
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号
                     * @return Mobile 签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号
                     * @param Mobile 签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取企业签署方在同一第三方应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符
                     * @return OrganizationOpenId 企业签署方在同一第三方应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置企业签署方在同一第三方应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符
                     * @param OrganizationOpenId 企业签署方在同一第三方应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取用户侧第三方id，最大长度64个字符
当签署方为同一第三方应用下的员工时，该字必传
                     * @return OpenId 用户侧第三方id，最大长度64个字符
当签署方为同一第三方应用下的员工时，该字必传
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户侧第三方id，最大长度64个字符
当签署方为同一第三方应用下的员工时，该字必传
                     * @param OpenId 用户侧第三方id，最大长度64个字符
当签署方为同一第三方应用下的员工时，该字必传
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 企业签署方工商营业执照上的企业名称，签署方为非发起方企业场景下必传，最大长度64个字符
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 签署人在原流程中的签署人列表中的顺序序号（从0开始，按顺序依次递增），如果不清楚原流程中的签署人列表，可以通过DescribeFlows接口查看
                     */
                    uint64_t m_approverNumber;
                    bool m_approverNumberHasBeenSet;

                    /**
                     * 签署人类型，目前仅支持
ORGANIZATION-企业
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署人姓名，最大长度50个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署人身份证件类型
1.ID_CARD 居民身份证
2.HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证
3.HONGKONG_AND_MACAO 港澳居民来往内地通行证
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 签署人证件号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署人手机号，脱敏显示。大陆手机号为11位，暂不支持海外手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 企业签署方在同一第三方应用下的其他合作企业OpenId，签署方为非发起方企业场景下必传，最大长度64个字符
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 用户侧第三方id，最大长度64个字符
当签署方为同一第三方应用下的员工时，该字必传
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RELEASEDAPPROVER_H_
