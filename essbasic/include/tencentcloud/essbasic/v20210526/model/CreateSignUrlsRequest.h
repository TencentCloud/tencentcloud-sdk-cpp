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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/FlowGroupUrlInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateSignUrls请求参数结构体
                */
                class CreateSignUrlsRequest : public AbstractModel
                {
                public:
                    CreateSignUrlsRequest();
                    ~CreateSignUrlsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经过实名认证
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经过实名认证
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经过实名认证
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取合同流程ID数组，最多支持100个。

注: 
1. 必须选择提供此参数或合同组编号中的一个。
2. 当生成类型（GenerateType）设为“ALL”时，不可提供多个流程ID。
                     * @return FlowIds 合同流程ID数组，最多支持100个。

注: 
1. 必须选择提供此参数或合同组编号中的一个。
2. 当生成类型（GenerateType）设为“ALL”时，不可提供多个流程ID。
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置合同流程ID数组，最多支持100个。

注: 
1. 必须选择提供此参数或合同组编号中的一个。
2. 当生成类型（GenerateType）设为“ALL”时，不可提供多个流程ID。
                     * @param _flowIds 合同流程ID数组，最多支持100个。

注: 
1. 必须选择提供此参数或合同组编号中的一个。
2. 当生成类型（GenerateType）设为“ALL”时，不可提供多个流程ID。
                     * 
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取合同组编号
注：`该参数和合同流程ID数组必须二选一`
                     * @return FlowGroupId 合同组编号
注：`该参数和合同流程ID数组必须二选一`
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同组编号
注：`该参数和合同流程ID数组必须二选一`
                     * @param _flowGroupId 合同组编号
注：`该参数和合同流程ID数组必须二选一`
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取签署链接类型,可以设置的参数如下
<ul><li> **WEIXINAPP** :(默认)跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型 ，此时返回短链</li>
<li> **CHANNEL** :带有H5引导页的跳转电子签小程序的链接(<b>GenerateType非ALL时候不能设置成CHANNEL</b>)</li>
<li> **APP** :第三方App或小程序跳转电子签小程序的path, App或者小程序跳转适合此类型</li>
<li> **LONGURL2WEIXINAPP** :跳转电子签小程序的链接, H5跳转适合此类型，此时返回长链</li></ul>

**注：**动态签署人场景，如果签署链接类型设置为`APP`，则仅支持跳转到封面页。

详细使用场景可以参考接口描述说明中的 **主要使用场景EndPoint分类**

                     * @return Endpoint 签署链接类型,可以设置的参数如下
<ul><li> **WEIXINAPP** :(默认)跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型 ，此时返回短链</li>
<li> **CHANNEL** :带有H5引导页的跳转电子签小程序的链接(<b>GenerateType非ALL时候不能设置成CHANNEL</b>)</li>
<li> **APP** :第三方App或小程序跳转电子签小程序的path, App或者小程序跳转适合此类型</li>
<li> **LONGURL2WEIXINAPP** :跳转电子签小程序的链接, H5跳转适合此类型，此时返回长链</li></ul>

**注：**动态签署人场景，如果签署链接类型设置为`APP`，则仅支持跳转到封面页。

详细使用场景可以参考接口描述说明中的 **主要使用场景EndPoint分类**

                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置签署链接类型,可以设置的参数如下
<ul><li> **WEIXINAPP** :(默认)跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型 ，此时返回短链</li>
<li> **CHANNEL** :带有H5引导页的跳转电子签小程序的链接(<b>GenerateType非ALL时候不能设置成CHANNEL</b>)</li>
<li> **APP** :第三方App或小程序跳转电子签小程序的path, App或者小程序跳转适合此类型</li>
<li> **LONGURL2WEIXINAPP** :跳转电子签小程序的链接, H5跳转适合此类型，此时返回长链</li></ul>

**注：**动态签署人场景，如果签署链接类型设置为`APP`，则仅支持跳转到封面页。

详细使用场景可以参考接口描述说明中的 **主要使用场景EndPoint分类**

                     * @param _endpoint 签署链接类型,可以设置的参数如下
<ul><li> **WEIXINAPP** :(默认)跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型 ，此时返回短链</li>
<li> **CHANNEL** :带有H5引导页的跳转电子签小程序的链接(<b>GenerateType非ALL时候不能设置成CHANNEL</b>)</li>
<li> **APP** :第三方App或小程序跳转电子签小程序的path, App或者小程序跳转适合此类型</li>
<li> **LONGURL2WEIXINAPP** :跳转电子签小程序的链接, H5跳转适合此类型，此时返回长链</li></ul>

**注：**动态签署人场景，如果签署链接类型设置为`APP`，则仅支持跳转到封面页。

详细使用场景可以参考接口描述说明中的 **主要使用场景EndPoint分类**

                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取签署链接生成类型，可以选择的类型如下

<ul><li><strong>ALL</strong>：（默认）为所有签署方生成签署链接，但不包括自动签署（静默签署）的签署方。注意：<strong>此中类型不支持多个合同ID（FlowIds）</strong>。</li>
<li><strong>CHANNEL</strong>：适用于第三方子企业的员工签署方。</li>
<li><strong>NOT_CHANNEL</strong>：适用于SaaS平台企业的员工签署方。</li>
<li><strong>PERSON</strong>：适用于个人或自然人签署方。</li>
<li><strong>FOLLOWER</strong>：适用于关注方，目前指合同的抄送方。</li>
<li><strong>RECIPIENT</strong>：根据RecipientId生成对应的签署链接，适用于动态添加签署人的情况。</li></ul>
                     * @return GenerateType 签署链接生成类型，可以选择的类型如下

<ul><li><strong>ALL</strong>：（默认）为所有签署方生成签署链接，但不包括自动签署（静默签署）的签署方。注意：<strong>此中类型不支持多个合同ID（FlowIds）</strong>。</li>
<li><strong>CHANNEL</strong>：适用于第三方子企业的员工签署方。</li>
<li><strong>NOT_CHANNEL</strong>：适用于SaaS平台企业的员工签署方。</li>
<li><strong>PERSON</strong>：适用于个人或自然人签署方。</li>
<li><strong>FOLLOWER</strong>：适用于关注方，目前指合同的抄送方。</li>
<li><strong>RECIPIENT</strong>：根据RecipientId生成对应的签署链接，适用于动态添加签署人的情况。</li></ul>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置签署链接生成类型，可以选择的类型如下

<ul><li><strong>ALL</strong>：（默认）为所有签署方生成签署链接，但不包括自动签署（静默签署）的签署方。注意：<strong>此中类型不支持多个合同ID（FlowIds）</strong>。</li>
<li><strong>CHANNEL</strong>：适用于第三方子企业的员工签署方。</li>
<li><strong>NOT_CHANNEL</strong>：适用于SaaS平台企业的员工签署方。</li>
<li><strong>PERSON</strong>：适用于个人或自然人签署方。</li>
<li><strong>FOLLOWER</strong>：适用于关注方，目前指合同的抄送方。</li>
<li><strong>RECIPIENT</strong>：根据RecipientId生成对应的签署链接，适用于动态添加签署人的情况。</li></ul>
                     * @param _generateType 签署链接生成类型，可以选择的类型如下

<ul><li><strong>ALL</strong>：（默认）为所有签署方生成签署链接，但不包括自动签署（静默签署）的签署方。注意：<strong>此中类型不支持多个合同ID（FlowIds）</strong>。</li>
<li><strong>CHANNEL</strong>：适用于第三方子企业的员工签署方。</li>
<li><strong>NOT_CHANNEL</strong>：适用于SaaS平台企业的员工签署方。</li>
<li><strong>PERSON</strong>：适用于个人或自然人签署方。</li>
<li><strong>FOLLOWER</strong>：适用于关注方，目前指合同的抄送方。</li>
<li><strong>RECIPIENT</strong>：根据RecipientId生成对应的签署链接，适用于动态添加签署人的情况。</li></ul>
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取SaaS平台企业员工签署方的企业名称如果名称中包含英文括号()，请使用中文括号（）代替。  注:  `1.GenerateType为"NOT_CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * @return OrganizationName SaaS平台企业员工签署方的企业名称如果名称中包含英文括号()，请使用中文括号（）代替。  注:  `1.GenerateType为"NOT_CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置SaaS平台企业员工签署方的企业名称如果名称中包含英文括号()，请使用中文括号（）代替。  注:  `1.GenerateType为"NOT_CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * @param _organizationName SaaS平台企业员工签署方的企业名称如果名称中包含英文括号()，请使用中文括号（）代替。  注:  `1.GenerateType为"NOT_CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
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
                     * 获取合同流程里边参与方的姓名。
注: 
1. `GenerateType为"PERSON"(即个人签署方)时必填`。
2. `在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @return Name 合同流程里边参与方的姓名。
注: 
1. `GenerateType为"PERSON"(即个人签署方)时必填`。
2. `在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置合同流程里边参与方的姓名。
注: 
1. `GenerateType为"PERSON"(即个人签署方)时必填`。
2. `在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @param _name 合同流程里边参与方的姓名。
注: 
1. `GenerateType为"PERSON"(即个人签署方)时必填`。
2. `在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
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
                     * 获取合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。
注:  
1. `GenerateType为"PERSON"或"FOLLOWER"时必填。`
2. `在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @return Mobile 合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。
注:  
1. `GenerateType为"PERSON"或"FOLLOWER"时必填。`
2. `在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。
注:  
1. `GenerateType为"PERSON"或"FOLLOWER"时必填。`
2. `在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @param _mobile 合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。
注:  
1. `GenerateType为"PERSON"或"FOLLOWER"时必填。`
2. `在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
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
                     * 获取证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * @return IdCardType 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * @param _idCardType 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
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
<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @return IdCardNumber 证件号码，应符合以下规则
<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置证件号码，应符合以下规则
<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @param _idCardNumber 证件号码，应符合以下规则
<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
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
                     * 获取第三方平台子客企业的企业的标识, 即OrganizationOpenId。 注:  `1.GenerateType为"CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的平台子客企业,预设后只能以该平台子客企业身份去领取合同并完成签署`
                     * @return OrganizationOpenId 第三方平台子客企业的企业的标识, 即OrganizationOpenId。 注:  `1.GenerateType为"CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的平台子客企业,预设后只能以该平台子客企业身份去领取合同并完成签署`
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置第三方平台子客企业的企业的标识, 即OrganizationOpenId。 注:  `1.GenerateType为"CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的平台子客企业,预设后只能以该平台子客企业身份去领取合同并完成签署`
                     * @param _organizationOpenId 第三方平台子客企业的企业的标识, 即OrganizationOpenId。 注:  `1.GenerateType为"CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的平台子客企业,预设后只能以该平台子客企业身份去领取合同并完成签署`
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
                     * 获取第三方平台子客企业员工的标识OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息

注： 
如果传进来的<font color="red">OpenId已经实名并且加入企业， 则忽略Name，IdCardType，IdCardNumber，Mobile这四个入参</font>（会用此OpenId实名的身份证和登录的手机号覆盖）
                     * @return OpenId 第三方平台子客企业员工的标识OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息

注： 
如果传进来的<font color="red">OpenId已经实名并且加入企业， 则忽略Name，IdCardType，IdCardNumber，Mobile这四个入参</font>（会用此OpenId实名的身份证和登录的手机号覆盖）
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方平台子客企业员工的标识OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息

注： 
如果传进来的<font color="red">OpenId已经实名并且加入企业， 则忽略Name，IdCardType，IdCardNumber，Mobile这四个入参</font>（会用此OpenId实名的身份证和登录的手机号覆盖）
                     * @param _openId 第三方平台子客企业员工的标识OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息

注： 
如果传进来的<font color="red">OpenId已经实名并且加入企业， 则忽略Name，IdCardType，IdCardNumber，Mobile这四个入参</font>（会用此OpenId实名的身份证和登录的手机号覆盖）
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
                     * 获取签署完成后是否自动回跳
<ul><li>false：否, 签署完成不会自动跳转回来(默认)</li><li>true：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * @return AutoJumpBack 签署完成后是否自动回跳
<ul><li>false：否, 签署完成不会自动跳转回来(默认)</li><li>true：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * 
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置签署完成后是否自动回跳
<ul><li>false：否, 签署完成不会自动跳转回来(默认)</li><li>true：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * @param _autoJumpBack 签署完成后是否自动回跳
<ul><li>false：否, 签署完成不会自动跳转回来(默认)</li><li>true：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * 
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     * 
                     */
                    bool AutoJumpBackHasBeenSet() const;

                    /**
                     * 获取签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * @return JumpUrl 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * @param _jumpUrl 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * @return Hides 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * 
                     */
                    std::vector<int64_t> GetHides() const;

                    /**
                     * 设置生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * @param _hides 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * 
                     */
                    void SetHides(const std::vector<int64_t>& _hides);

                    /**
                     * 判断参数 Hides 是否已赋值
                     * @return Hides 是否已赋值
                     * 
                     */
                    bool HidesHasBeenSet() const;

                    /**
                     * 获取参与方角色ID，用于生成动态签署人链接完成领取。

注：`使用此参数需要与flow_ids数量一致并且一一对应, 表示在对应同序号的流程中的参与角色ID`，
                     * @return RecipientIds 参与方角色ID，用于生成动态签署人链接完成领取。

注：`使用此参数需要与flow_ids数量一致并且一一对应, 表示在对应同序号的流程中的参与角色ID`，
                     * 
                     */
                    std::vector<std::string> GetRecipientIds() const;

                    /**
                     * 设置参与方角色ID，用于生成动态签署人链接完成领取。

注：`使用此参数需要与flow_ids数量一致并且一一对应, 表示在对应同序号的流程中的参与角色ID`，
                     * @param _recipientIds 参与方角色ID，用于生成动态签署人链接完成领取。

注：`使用此参数需要与flow_ids数量一致并且一一对应, 表示在对应同序号的流程中的参与角色ID`，
                     * 
                     */
                    void SetRecipientIds(const std::vector<std::string>& _recipientIds);

                    /**
                     * 判断参数 RecipientIds 是否已赋值
                     * @return RecipientIds 是否已赋值
                     * 
                     */
                    bool RecipientIdsHasBeenSet() const;

                    /**
                     * 获取合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * @return FlowGroupUrlInfo 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    FlowGroupUrlInfo GetFlowGroupUrlInfo() const;

                    /**
                     * 设置合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * @param _flowGroupUrlInfo 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    void SetFlowGroupUrlInfo(const FlowGroupUrlInfo& _flowGroupUrlInfo);

                    /**
                     * 判断参数 FlowGroupUrlInfo 是否已赋值
                     * @return FlowGroupUrlInfo 是否已赋值
                     * 
                     */
                    bool FlowGroupUrlInfoHasBeenSet() const;

                    /**
                     * 获取<font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * @return UrlUseEnv <font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * 
                     */
                    std::string GetUrlUseEnv() const;

                    /**
                     * 设置<font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * @param _urlUseEnv <font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * 
                     */
                    void SetUrlUseEnv(const std::string& _urlUseEnv);

                    /**
                     * 判断参数 UrlUseEnv 是否已赋值
                     * @return UrlUseEnv 是否已赋值
                     * 
                     */
                    bool UrlUseEnvHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识:  Agent.AppId</li>
<li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li>
<li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li>
</ul>
第三方平台子客企业和员工必须已经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 合同流程ID数组，最多支持100个。

注: 
1. 必须选择提供此参数或合同组编号中的一个。
2. 当生成类型（GenerateType）设为“ALL”时，不可提供多个流程ID。
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * 合同组编号
注：`该参数和合同流程ID数组必须二选一`
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 签署链接类型,可以设置的参数如下
<ul><li> **WEIXINAPP** :(默认)跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型 ，此时返回短链</li>
<li> **CHANNEL** :带有H5引导页的跳转电子签小程序的链接(<b>GenerateType非ALL时候不能设置成CHANNEL</b>)</li>
<li> **APP** :第三方App或小程序跳转电子签小程序的path, App或者小程序跳转适合此类型</li>
<li> **LONGURL2WEIXINAPP** :跳转电子签小程序的链接, H5跳转适合此类型，此时返回长链</li></ul>

**注：**动态签署人场景，如果签署链接类型设置为`APP`，则仅支持跳转到封面页。

详细使用场景可以参考接口描述说明中的 **主要使用场景EndPoint分类**

                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 签署链接生成类型，可以选择的类型如下

<ul><li><strong>ALL</strong>：（默认）为所有签署方生成签署链接，但不包括自动签署（静默签署）的签署方。注意：<strong>此中类型不支持多个合同ID（FlowIds）</strong>。</li>
<li><strong>CHANNEL</strong>：适用于第三方子企业的员工签署方。</li>
<li><strong>NOT_CHANNEL</strong>：适用于SaaS平台企业的员工签署方。</li>
<li><strong>PERSON</strong>：适用于个人或自然人签署方。</li>
<li><strong>FOLLOWER</strong>：适用于关注方，目前指合同的抄送方。</li>
<li><strong>RECIPIENT</strong>：根据RecipientId生成对应的签署链接，适用于动态添加签署人的情况。</li></ul>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * SaaS平台企业员工签署方的企业名称如果名称中包含英文括号()，请使用中文括号（）代替。  注:  `1.GenerateType为"NOT_CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 合同流程里边参与方的姓名。
注: 
1. `GenerateType为"PERSON"(即个人签署方)时必填`。
2. `在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。
注:  
1. `GenerateType为"PERSON"或"FOLLOWER"时必填。`
2. `在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 证件号码，应符合以下规则
<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 第三方平台子客企业的企业的标识, 即OrganizationOpenId。 注:  `1.GenerateType为"CHANNEL"时必填` `2.获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的平台子客企业,预设后只能以该平台子客企业身份去领取合同并完成签署`
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 第三方平台子客企业员工的标识OpenId，GenerateType为"CHANNEL"时可用，指定到具体参与人, 仅展示已经实名的经办人信息

注： 
如果传进来的<font color="red">OpenId已经实名并且加入企业， 则忽略Name，IdCardType，IdCardNumber，Mobile这四个入参</font>（会用此OpenId实名的身份证和登录的手机号覆盖）
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 签署完成后是否自动回跳
<ul><li>false：否, 签署完成不会自动跳转回来(默认)</li><li>true：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     */
                    bool m_autoJumpBack;
                    bool m_autoJumpBackHasBeenSet;

                    /**
                     * 签署完之后的H5页面的跳转链接，针对Endpoint为CHANNEL时有效，最大长度1000个字符。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     */
                    std::vector<int64_t> m_hides;
                    bool m_hidesHasBeenSet;

                    /**
                     * 参与方角色ID，用于生成动态签署人链接完成领取。

注：`使用此参数需要与flow_ids数量一致并且一一对应, 表示在对应同序号的流程中的参与角色ID`，
                     */
                    std::vector<std::string> m_recipientIds;
                    bool m_recipientIdsHasBeenSet;

                    /**
                     * 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     */
                    FlowGroupUrlInfo m_flowGroupUrlInfo;
                    bool m_flowGroupUrlInfoHasBeenSet;

                    /**
                     * <font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     */
                    std::string m_urlUseEnv;
                    bool m_urlUseEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESIGNURLSREQUEST_H_
