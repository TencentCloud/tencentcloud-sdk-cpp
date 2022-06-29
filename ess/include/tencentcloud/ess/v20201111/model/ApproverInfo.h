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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Component.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 参与者信息
                */
                class ApproverInfo : public AbstractModel
                {
                public:
                    ApproverInfo();
                    ~ApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。
                     * @return ApproverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。
                     * @param ApproverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取本环节需要操作人的名字
                     * @return ApproverName 本环节需要操作人的名字
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置本环节需要操作人的名字
                     * @param ApproverName 本环节需要操作人的名字
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取本环节需要操作人的手机号
                     * @return ApproverMobile 本环节需要操作人的手机号
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置本环节需要操作人的手机号
                     * @param ApproverMobile 本环节需要操作人的手机号
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取本环节操作人签署控件配置，为企业静默签署时，只允许类型为SIGN_SEAL（印章）和SIGN_DATE（日期）控件，并且传入印章编号。
                     * @return SignComponents 本环节操作人签署控件配置，为企业静默签署时，只允许类型为SIGN_SEAL（印章）和SIGN_DATE（日期）控件，并且传入印章编号。
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置本环节操作人签署控件配置，为企业静默签署时，只允许类型为SIGN_SEAL（印章）和SIGN_DATE（日期）控件，并且传入印章编号。
                     * @param SignComponents 本环节操作人签署控件配置，为企业静默签署时，只允许类型为SIGN_SEAL（印章）和SIGN_DATE（日期）控件，并且传入印章编号。
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取如果是企业,则为企业的名字
                     * @return OrganizationName 如果是企业,则为企业的名字
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置如果是企业,则为企业的名字
                     * @param OrganizationName 如果是企业,则为企业的名字
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取身份证号
                     * @return ApproverIdCardNumber 身份证号
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置身份证号
                     * @param ApproverIdCardNumber 身份证号
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取证件类型 
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @return ApproverIdCardType 证件类型 
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置证件类型 
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     * @param ApproverIdCardType 证件类型 
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取sms--短信，none--不通知
                     * @return NotifyType sms--短信，none--不通知
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置sms--短信，none--不通知
                     * @param NotifyType sms--短信，none--不通知
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取1--收款人、2--开具人、3--见证人
                     * @return ApproverRole 1--收款人、2--开具人、3--见证人
                     */
                    int64_t GetApproverRole() const;

                    /**
                     * 设置1--收款人、2--开具人、3--见证人
                     * @param ApproverRole 1--收款人、2--开具人、3--见证人
                     */
                    void SetApproverRole(const int64_t& _approverRole);

                    /**
                     * 判断参数 ApproverRole 是否已赋值
                     * @return ApproverRole 是否已赋值
                     */
                    bool ApproverRoleHasBeenSet() const;

                    /**
                     * 获取签署意愿确认渠道,WEIXINAPP:人脸识别
                     * @return VerifyChannel 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置签署意愿确认渠道,WEIXINAPP:人脸识别
                     * @param VerifyChannel 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    void SetVerifyChannel(const std::vector<std::string>& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @return PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @param PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    void SetPreReadTime(const int64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     */
                    bool PreReadTimeHasBeenSet() const;

                private:

                    /**
                     * 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 本环节需要操作人的名字
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 本环节需要操作人的手机号
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 本环节操作人签署控件配置，为企业静默签署时，只允许类型为SIGN_SEAL（印章）和SIGN_DATE（日期）控件，并且传入印章编号。
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 如果是企业,则为企业的名字
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 身份证号
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * 证件类型 
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * sms--短信，none--不通知
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 1--收款人、2--开具人、3--见证人
                     */
                    int64_t m_approverRole;
                    bool m_approverRoleHasBeenSet;

                    /**
                     * 签署意愿确认渠道,WEIXINAPP:人脸识别
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_
