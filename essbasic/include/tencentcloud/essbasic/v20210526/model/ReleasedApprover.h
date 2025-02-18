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
                * 解除协议的签署人，如不指定，默认使用待解除流程(原流程)中的签署人。</br>
`注意`:
 - 不支持更换C端(个人身份类型)签署人，如果原流程中含有C端签署人，默认使用原流程中的该签署人。
 - 目前不支持替换C端(个人身份类型)签署人，但是可以指定C端签署人的签署方自定义控件别名，具体见参数ApproverSignRole描述。 
 - 当指定C端签署人的签署方自定义控件别名不空时，除参数ApproverNumber外，可以只传参数ApproverSignRole。

如果需要指定B端(企业身份类型)签署人，其中ReleasedApprover需要传递的参数如下：
(`ApproverNumber`, `ReleasedApproverRecipientId`这两个二选一), `OrganizationName`, `ApproverType`必传。</br>
对于其他身份标识：
- **子客企业指定经办人**：OpenId必传，OrganizationOpenId必传；
- **非子客企业经办人**：Name、Mobile必传。
                */
                class ReleasedApprover : public AbstractModel
                {
                public:
                    ReleasedApprover();
                    ~ReleasedApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人在原合同签署人列表中的顺序序号(从0开始，按顺序依次递增)。
可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人列表。
                     * @return ApproverNumber 签署人在原合同签署人列表中的顺序序号(从0开始，按顺序依次递增)。
可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人列表。
                     * 
                     */
                    uint64_t GetApproverNumber() const;

                    /**
                     * 设置签署人在原合同签署人列表中的顺序序号(从0开始，按顺序依次递增)。
可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人列表。
                     * @param _approverNumber 签署人在原合同签署人列表中的顺序序号(从0开始，按顺序依次递增)。
可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人列表。
                     * 
                     */
                    void SetApproverNumber(const uint64_t& _approverNumber);

                    /**
                     * 判断参数 ApproverNumber 是否已赋值
                     * @return ApproverNumber 是否已赋值
                     * 
                     */
                    bool ApproverNumberHasBeenSet() const;

                    /**
                     * 获取指定签署人类型，目前支持
<ul><li> **ORGANIZATION**：企业(默认值)</li>
<li> **ENTERPRISESERVER**：企业静默签</li></ul>
                     * @return ApproverType 指定签署人类型，目前支持
<ul><li> **ORGANIZATION**：企业(默认值)</li>
<li> **ENTERPRISESERVER**：企业静默签</li></ul>
                     * 
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置指定签署人类型，目前支持
<ul><li> **ORGANIZATION**：企业(默认值)</li>
<li> **ENTERPRISESERVER**：企业静默签</li></ul>
                     * @param _approverType 指定签署人类型，目前支持
<ul><li> **ORGANIZATION**：企业(默认值)</li>
<li> **ENTERPRISESERVER**：企业静默签</li></ul>
                     * 
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取签署人在原合同中的RecipientId，可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人信息，可参考返回结构体<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#flowapproverdetail" target="_blank">FlowApproverDetail</a>中的RecipientId。
**注意**：当指定了此参数后，ApproverNumber即失效，会以本参数作为原合同参与人的选取。与ApproverNumber二选一。
                     * @return ReleasedApproverRecipientId 签署人在原合同中的RecipientId，可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人信息，可参考返回结构体<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#flowapproverdetail" target="_blank">FlowApproverDetail</a>中的RecipientId。
**注意**：当指定了此参数后，ApproverNumber即失效，会以本参数作为原合同参与人的选取。与ApproverNumber二选一。
                     * 
                     */
                    std::string GetReleasedApproverRecipientId() const;

                    /**
                     * 设置签署人在原合同中的RecipientId，可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人信息，可参考返回结构体<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#flowapproverdetail" target="_blank">FlowApproverDetail</a>中的RecipientId。
**注意**：当指定了此参数后，ApproverNumber即失效，会以本参数作为原合同参与人的选取。与ApproverNumber二选一。
                     * @param _releasedApproverRecipientId 签署人在原合同中的RecipientId，可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人信息，可参考返回结构体<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#flowapproverdetail" target="_blank">FlowApproverDetail</a>中的RecipientId。
**注意**：当指定了此参数后，ApproverNumber即失效，会以本参数作为原合同参与人的选取。与ApproverNumber二选一。
                     * 
                     */
                    void SetReleasedApproverRecipientId(const std::string& _releasedApproverRecipientId);

                    /**
                     * 判断参数 ReleasedApproverRecipientId 是否已赋值
                     * @return ReleasedApproverRecipientId 是否已赋值
                     * 
                     */
                    bool ReleasedApproverRecipientIdHasBeenSet() const;

                    /**
                     * 获取签署人姓名，最大长度50个字。
                     * @return Name 签署人姓名，最大长度50个字。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名，最大长度50个字。
                     * @param _name 签署人姓名，最大长度50个字。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取签署方经办人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证(默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @return IdCardType 签署方经办人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证(默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置签署方经办人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证(默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @param _idCardType 签署方经办人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证(默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。
</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return IdCardNumber 证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。
</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。
</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _idCardNumber 证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。
</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署人手机号。
                     * @return Mobile 签署人手机号。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号。
                     * @param _mobile 签署人手机号。
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
如果签署方是企业签署方(approverType = 0 或者 approverType = 3)， 则企业名称必填。
                     * @return OrganizationName 组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
如果签署方是企业签署方(approverType = 0 或者 approverType = 3)， 则企业名称必填。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
如果签署方是企业签署方(approverType = 0 或者 approverType = 3)， 则企业名称必填。
                     * @param _organizationName 组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
如果签署方是企业签署方(approverType = 0 或者 approverType = 3)， 则企业名称必填。
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
                     * 获取第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>。
<font color="red">当为子客企业指定经办人时，此OrganizationOpenId必传。</font>
                     * @return OrganizationOpenId 第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>。
<font color="red">当为子客企业指定经办人时，此OrganizationOpenId必传。</font>
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>。
<font color="red">当为子客企业指定经办人时，此OrganizationOpenId必传。</font>
                     * @param _organizationOpenId 第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>。
<font color="red">当为子客企业指定经办人时，此OrganizationOpenId必传。</font>
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业员工的唯一标识，长度不能超过64，只能由字母和数字组成。
<font color="red">当签署方为同一第三方平台下的员工时，此OpenId必传。</font>
                     * @return OpenId 第三方平台子客企业员工的唯一标识，长度不能超过64，只能由字母和数字组成。
<font color="red">当签署方为同一第三方平台下的员工时，此OpenId必传。</font>
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方平台子客企业员工的唯一标识，长度不能超过64，只能由字母和数字组成。
<font color="red">当签署方为同一第三方平台下的员工时，此OpenId必传。</font>
                     * @param _openId 第三方平台子客企业员工的唯一标识，长度不能超过64，只能由字母和数字组成。
<font color="red">当签署方为同一第三方平台下的员工时，此OpenId必传。</font>
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
                     * 获取签署控件类型，支持自定义企业签署方的签署控件类型
<ul><li> **SIGN_SEAL**：默认为印章控件类型(默认值)</li>
<li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * @return ApproverSignComponentType 签署控件类型，支持自定义企业签署方的签署控件类型
<ul><li> **SIGN_SEAL**：默认为印章控件类型(默认值)</li>
<li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * 
                     */
                    std::string GetApproverSignComponentType() const;

                    /**
                     * 设置签署控件类型，支持自定义企业签署方的签署控件类型
<ul><li> **SIGN_SEAL**：默认为印章控件类型(默认值)</li>
<li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * @param _approverSignComponentType 签署控件类型，支持自定义企业签署方的签署控件类型
<ul><li> **SIGN_SEAL**：默认为印章控件类型(默认值)</li>
<li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * 
                     */
                    void SetApproverSignComponentType(const std::string& _approverSignComponentType);

                    /**
                     * 判断参数 ApproverSignComponentType 是否已赋值
                     * @return ApproverSignComponentType 是否已赋值
                     * 
                     */
                    bool ApproverSignComponentTypeHasBeenSet() const;

                    /**
                     * 获取参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫`甲方`,第二个叫`乙方`,  第三个叫`丙方`，以此类推。
如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。

![image](https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png)
                     * @return ApproverSignRole 参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫`甲方`,第二个叫`乙方`,  第三个叫`丙方`，以此类推。
如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。

![image](https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png)
                     * 
                     */
                    std::string GetApproverSignRole() const;

                    /**
                     * 设置参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫`甲方`,第二个叫`乙方`,  第三个叫`丙方`，以此类推。
如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。

![image](https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png)
                     * @param _approverSignRole 参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫`甲方`,第二个叫`乙方`,  第三个叫`丙方`，以此类推。
如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。

![image](https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png)
                     * 
                     */
                    void SetApproverSignRole(const std::string& _approverSignRole);

                    /**
                     * 判断参数 ApproverSignRole 是否已赋值
                     * @return ApproverSignRole 是否已赋值
                     * 
                     */
                    bool ApproverSignRoleHasBeenSet() const;

                    /**
                     * 获取印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署
                     * @return ApproverSignSealId 印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署
                     * 
                     */
                    std::string GetApproverSignSealId() const;

                    /**
                     * 设置印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署
                     * @param _approverSignSealId 印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署
                     * 
                     */
                    void SetApproverSignSealId(const std::string& _approverSignSealId);

                    /**
                     * 判断参数 ApproverSignSealId 是否已赋值
                     * @return ApproverSignSealId 是否已赋值
                     * 
                     */
                    bool ApproverSignSealIdHasBeenSet() const;

                private:

                    /**
                     * 签署人在原合同签署人列表中的顺序序号(从0开始，按顺序依次递增)。
可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人列表。
                     */
                    uint64_t m_approverNumber;
                    bool m_approverNumberHasBeenSet;

                    /**
                     * 指定签署人类型，目前支持
<ul><li> **ORGANIZATION**：企业(默认值)</li>
<li> **ENTERPRISESERVER**：企业静默签</li></ul>
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署人在原合同中的RecipientId，可以通过<a href="https://qian.tencent.com/developers/partnerApis/flows/DescribeFlowDetailInfo" target="_blank">DescribeFlowDetailInfo</a>接口查看原流程中的签署人信息，可参考返回结构体<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#flowapproverdetail" target="_blank">FlowApproverDetail</a>中的RecipientId。
**注意**：当指定了此参数后，ApproverNumber即失效，会以本参数作为原合同参与人的选取。与ApproverNumber二选一。
                     */
                    std::string m_releasedApproverRecipientId;
                    bool m_releasedApproverRecipientIdHasBeenSet;

                    /**
                     * 签署人姓名，最大长度50个字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署方经办人的证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证(默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。
</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署人手机号。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 组织机构名称。
请确认该名称与企业营业执照中注册的名称一致。
如果名称中包含英文括号()，请使用中文括号（）代替。
如果签署方是企业签署方(approverType = 0 或者 approverType = 3)， 则企业名称必填。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>。
<font color="red">当为子客企业指定经办人时，此OrganizationOpenId必传。</font>
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 第三方平台子客企业员工的唯一标识，长度不能超过64，只能由字母和数字组成。
<font color="red">当签署方为同一第三方平台下的员工时，此OpenId必传。</font>
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 签署控件类型，支持自定义企业签署方的签署控件类型
<ul><li> **SIGN_SEAL**：默认为印章控件类型(默认值)</li>
<li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     */
                    std::string m_approverSignComponentType;
                    bool m_approverSignComponentTypeHasBeenSet;

                    /**
                     * 参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫`甲方`,第二个叫`乙方`,  第三个叫`丙方`，以此类推。
如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。

![image](https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png)
                     */
                    std::string m_approverSignRole;
                    bool m_approverSignRoleHasBeenSet;

                    /**
                     * 印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署
                     */
                    std::string m_approverSignSealId;
                    bool m_approverSignSealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RELEASEDAPPROVER_H_
