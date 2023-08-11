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
#include <tencentcloud/ess/v20201111/model/ApproverOption.h>


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
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
                     * @return ApproverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
                     * @param _approverType 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取签署人的姓名
                     * @return ApproverName 签署人的姓名
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署人的姓名
                     * @param _approverName 签署人的姓名
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取签署人的手机号，11位数字
                     * @return ApproverMobile 签署人的手机号，11位数字
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置签署人的手机号，11位数字
                     * @param _approverMobile 签署人的手机号，11位数字
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取如果签署方是企业签署方(approverType = 1 或者 approverType = 3)，

则企业名称必填
                     * @return OrganizationName 如果签署方是企业签署方(approverType = 1 或者 approverType = 3)，

则企业名称必填
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置如果签署方是企业签署方(approverType = 1 或者 approverType = 3)，

则企业名称必填
                     * @param _organizationName 如果签署方是企业签署方(approverType = 1 或者 approverType = 3)，

则企业名称必填
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取签署人的签署控件列表
                     * @return SignComponents 签署人的签署控件列表
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署人的签署控件列表
                     * @param _signComponents 签署人的签署控件列表
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取签署人的证件类型
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * @return ApproverIdCardType 签署人的证件类型
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置签署人的证件类型
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * @param _approverIdCardType 签署人的证件类型
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     * 
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     * 
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取签署人证件号（长度不超过18位）	
                     * @return ApproverIdCardNumber 签署人证件号（长度不超过18位）	
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置签署人证件号（长度不超过18位）	
                     * @param _approverIdCardNumber 签署人证件号（长度不超过18位）	
                     * 
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     * 
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署通知类型：sms--短信，none--不通知
                     * @return NotifyType 签署通知类型：sms--短信，none--不通知
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置签署通知类型：sms--短信，none--不通知
                     * @param _notifyType 签署通知类型：sms--短信，none--不通知
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取签署人角色类型：1--收款人、2--开具人、3--见证人
                     * @return ApproverRole 签署人角色类型：1--收款人、2--开具人、3--见证人
                     * 
                     */
                    int64_t GetApproverRole() const;

                    /**
                     * 设置签署人角色类型：1--收款人、2--开具人、3--见证人
                     * @param _approverRole 签署人角色类型：1--收款人、2--开具人、3--见证人
                     * 
                     */
                    void SetApproverRole(const int64_t& _approverRole);

                    /**
                     * 判断参数 ApproverRole 是否已赋值
                     * @return ApproverRole 是否已赋值
                     * 
                     */
                    bool ApproverRoleHasBeenSet() const;

                    /**
                     * 获取签署意愿确认渠道，默认为WEIXINAPP:人脸识别
                     * @return VerifyChannel 签署意愿确认渠道，默认为WEIXINAPP:人脸识别
                     * 
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置签署意愿确认渠道，默认为WEIXINAPP:人脸识别
                     * @param _verifyChannel 签署意愿确认渠道，默认为WEIXINAPP:人脸识别
                     * 
                     */
                    void SetVerifyChannel(const std::vector<std::string>& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     * 
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @return PreReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * @param _preReadTime 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     * 
                     */
                    void SetPreReadTime(const int64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     * 
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * @return UserId 签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * @param _userId 签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取签署人用户来源，此参数仅针对企微用户开放

企微侧用户请传入：WEWORKAPP
                     * @return ApproverSource 签署人用户来源，此参数仅针对企微用户开放

企微侧用户请传入：WEWORKAPP
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置签署人用户来源，此参数仅针对企微用户开放

企微侧用户请传入：WEWORKAPP
                     * @param _approverSource 签署人用户来源，此参数仅针对企微用户开放

企微侧用户请传入：WEWORKAPP
                     * 
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     * 
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * @return CustomApproverTag 企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * 
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * @param _customApproverTag 企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     * 
                     */
                    void SetCustomApproverTag(const std::string& _customApproverTag);

                    /**
                     * 判断参数 CustomApproverTag 是否已赋值
                     * @return CustomApproverTag 是否已赋值
                     * 
                     */
                    bool CustomApproverTagHasBeenSet() const;

                    /**
                     * 获取签署人个性化能力值
                     * @return ApproverOption 签署人个性化能力值
                     * 
                     */
                    ApproverOption GetApproverOption() const;

                    /**
                     * 设置签署人个性化能力值
                     * @param _approverOption 签署人个性化能力值
                     * 
                     */
                    void SetApproverOption(const ApproverOption& _approverOption);

                    /**
                     * 判断参数 ApproverOption 是否已赋值
                     * @return ApproverOption 是否已赋值
                     * 
                     */
                    bool ApproverOptionHasBeenSet() const;

                    /**
                     * 获取签署人查看合同时认证方式, 
1-实名查看 2-短信验证码查看(企业签署方不支持该方式)
如果不传默认为1
模板发起的时候,认证方式以模板配置为主
                     * @return ApproverVerifyTypes 签署人查看合同时认证方式, 
1-实名查看 2-短信验证码查看(企业签署方不支持该方式)
如果不传默认为1
模板发起的时候,认证方式以模板配置为主
                     * 
                     */
                    std::vector<int64_t> GetApproverVerifyTypes() const;

                    /**
                     * 设置签署人查看合同时认证方式, 
1-实名查看 2-短信验证码查看(企业签署方不支持该方式)
如果不传默认为1
模板发起的时候,认证方式以模板配置为主
                     * @param _approverVerifyTypes 签署人查看合同时认证方式, 
1-实名查看 2-短信验证码查看(企业签署方不支持该方式)
如果不传默认为1
模板发起的时候,认证方式以模板配置为主
                     * 
                     */
                    void SetApproverVerifyTypes(const std::vector<int64_t>& _approverVerifyTypes);

                    /**
                     * 判断参数 ApproverVerifyTypes 是否已赋值
                     * @return ApproverVerifyTypes 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypesHasBeenSet() const;

                    /**
                     * 获取签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
合同签署认证方式的优先级 verifyChannel>approverSignTypes
模板发起的时候,认证方式以模板配置为主
                     * @return ApproverSignTypes 签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
合同签署认证方式的优先级 verifyChannel>approverSignTypes
模板发起的时候,认证方式以模板配置为主
                     * 
                     */
                    std::vector<int64_t> GetApproverSignTypes() const;

                    /**
                     * 设置签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
合同签署认证方式的优先级 verifyChannel>approverSignTypes
模板发起的时候,认证方式以模板配置为主
                     * @param _approverSignTypes 签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
合同签署认证方式的优先级 verifyChannel>approverSignTypes
模板发起的时候,认证方式以模板配置为主
                     * 
                     */
                    void SetApproverSignTypes(const std::vector<int64_t>& _approverSignTypes);

                    /**
                     * 判断参数 ApproverSignTypes 是否已赋值
                     * @return ApproverSignTypes 是否已赋值
                     * 
                     */
                    bool ApproverSignTypesHasBeenSet() const;

                    /**
                     * 获取当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。	
                     * @return ApproverNeedSignReview 当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。	
                     * 
                     */
                    bool GetApproverNeedSignReview() const;

                    /**
                     * 设置当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。	
                     * @param _approverNeedSignReview 当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。	
                     * 
                     */
                    void SetApproverNeedSignReview(const bool& _approverNeedSignReview);

                    /**
                     * 判断参数 ApproverNeedSignReview 是否已赋值
                     * @return ApproverNeedSignReview 是否已赋值
                     * 
                     */
                    bool ApproverNeedSignReviewHasBeenSet() const;

                private:

                    /**
                     * 参与者类型：
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能, 使用前请联系对接的客户经理沟通。
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署人的姓名
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 签署人的手机号，11位数字
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 如果签署方是企业签署方(approverType = 1 或者 approverType = 3)，

则企业名称必填
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 签署人的签署控件列表
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 签署人的证件类型
ID_CARD 身份证
HONGKONG_AND_MACAO 港澳居民来往内地通行证
HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
OTHER_CARD_TYPE 其他（需要使用该类型请先联系运营经理）
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * 签署人证件号（长度不超过18位）	
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * 签署通知类型：sms--短信，none--不通知
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 签署人角色类型：1--收款人、2--开具人、3--见证人
                     */
                    int64_t m_approverRole;
                    bool m_approverRoleHasBeenSet;

                    /**
                     * 签署意愿确认渠道，默认为WEIXINAPP:人脸识别
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 合同的强制预览时间：3~300s，未指定则按合同页数计算
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 签署人用户来源，此参数仅针对企微用户开放

企微侧用户请传入：WEWORKAPP
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 企业签署方或签标识，客户自定义，64位长度。用于发起含有或签签署人的合同。或签参与人必须有此字段。合同内不同或签参与人CustomApproverTag需要保证唯一。如果或签签署人为本方企微参与人，ApproverSource参数需要指定WEWORKAPP
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * 签署人个性化能力值
                     */
                    ApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * 签署人查看合同时认证方式, 
1-实名查看 2-短信验证码查看(企业签署方不支持该方式)
如果不传默认为1
模板发起的时候,认证方式以模板配置为主
                     */
                    std::vector<int64_t> m_approverVerifyTypes;
                    bool m_approverVerifyTypesHasBeenSet;

                    /**
                     * 签署人签署合同时的认证方式
1-人脸认证 2-签署密码 3-运营商三要素(默认为1,2)
合同签署认证方式的优先级 verifyChannel>approverSignTypes
模板发起的时候,认证方式以模板配置为主
                     */
                    std::vector<int64_t> m_approverSignTypes;
                    bool m_approverSignTypesHasBeenSet;

                    /**
                     * 当前签署方进行签署操作是否需要企业内部审批，true 则为需要。为个人签署方时则由发起方企业审核。	
                     */
                    bool m_approverNeedSignReview;
                    bool m_approverNeedSignReviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_
