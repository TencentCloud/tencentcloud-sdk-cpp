/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RELEASEDAPPROVER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RELEASEDAPPROVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 解除协议的签署人，如不指定，默认使用原流程中的签署人。<br/>
`注意：不支持更换C端（个人身份类型）签署人，如果原流程中含有C端签署人，默认使用原流程中的该C端签署人。`<br/>
`注意：目前不支持替换C端（个人身份类型）签署人，但是可以指定C端签署人的签署方自定义控件别名，具体见参数ApproverSignRole描述。`<br/>
`注意：当指定C端签署人的签署方自定义控件别名不空时，除RelievedApproverReceiptId参数外，可以只参数ApproverSignRole。`<br/>
                */
                class ReleasedApprover : public AbstractModel
                {
                public:
                    ReleasedApprover();
                    ~ReleasedApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签署人姓名，最大长度50个字。</p>
                     * @return Name <p>签署人姓名，最大长度50个字。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>签署人姓名，最大长度50个字。</p>
                     * @param _name <p>签署人姓名，最大长度50个字。</p>
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
                     * 获取<p>签署人手机号。</p>
                     * @return Mobile <p>签署人手机号。</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>签署人手机号。</p>
                     * @param _mobile <p>签署人手机号。</p>
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
                     * 获取<p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * @return RelievedApproverReceiptId <p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * @deprecated
                     */
                    std::string GetRelievedApproverReceiptId() const;

                    /**
                     * 设置<p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * @param _relievedApproverReceiptId <p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * @deprecated
                     */
                    void SetRelievedApproverReceiptId(const std::string& _relievedApproverReceiptId);

                    /**
                     * 判断参数 RelievedApproverReceiptId 是否已赋值
                     * @return RelievedApproverReceiptId 是否已赋值
                     * @deprecated
                     */
                    bool RelievedApproverReceiptIdHasBeenSet() const;

                    /**
                     * 获取<p>指定签署人类型，目前仅支持<ul><li> <strong>ORGANIZATION</strong>：企业（默认值）</li><li> <strong>ENTERPRISESERVER</strong>：企业“授权签”</li></ul></p>
                     * @return ApproverType <p>指定签署人类型，目前仅支持<ul><li> <strong>ORGANIZATION</strong>：企业（默认值）</li><li> <strong>ENTERPRISESERVER</strong>：企业“授权签”</li></ul></p>
                     * 
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置<p>指定签署人类型，目前仅支持<ul><li> <strong>ORGANIZATION</strong>：企业（默认值）</li><li> <strong>ENTERPRISESERVER</strong>：企业“授权签”</li></ul></p>
                     * @param _approverType <p>指定签署人类型，目前仅支持<ul><li> <strong>ORGANIZATION</strong>：企业（默认值）</li><li> <strong>ENTERPRISESERVER</strong>：企业“授权签”</li></ul></p>
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
                     * 获取<p>签署控件类型，支持自定义企业签署方的签署控件类型</p><ul><li> **SIGN_SEAL**：默认为印章控件类型（默认值）</li><li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * @return ApproverSignComponentType <p>签署控件类型，支持自定义企业签署方的签署控件类型</p><ul><li> **SIGN_SEAL**：默认为印章控件类型（默认值）</li><li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * 
                     */
                    std::string GetApproverSignComponentType() const;

                    /**
                     * 设置<p>签署控件类型，支持自定义企业签署方的签署控件类型</p><ul><li> **SIGN_SEAL**：默认为印章控件类型（默认值）</li><li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     * @param _approverSignComponentType <p>签署控件类型，支持自定义企业签署方的签署控件类型</p><ul><li> **SIGN_SEAL**：默认为印章控件类型（默认值）</li><li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
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
                     * 获取<p>参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫<code>甲方</code>,第二个叫<code>乙方</code>,  第三个叫<code>丙方</code>，以此类推。</p><p>如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png" alt="image"></p>
                     * @return ApproverSignRole <p>参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫<code>甲方</code>,第二个叫<code>乙方</code>,  第三个叫<code>丙方</code>，以此类推。</p><p>如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png" alt="image"></p>
                     * 
                     */
                    std::string GetApproverSignRole() const;

                    /**
                     * 设置<p>参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫<code>甲方</code>,第二个叫<code>乙方</code>,  第三个叫<code>丙方</code>，以此类推。</p><p>如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png" alt="image"></p>
                     * @param _approverSignRole <p>参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫<code>甲方</code>,第二个叫<code>乙方</code>,  第三个叫<code>丙方</code>，以此类推。</p><p>如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png" alt="image"></p>
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
                     * 获取<p>印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署</p>
                     * @return ApproverSignSealId <p>印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署</p>
                     * 
                     */
                    std::string GetApproverSignSealId() const;

                    /**
                     * 设置<p>印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署</p>
                     * @param _approverSignSealId <p>印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署</p>
                     * 
                     */
                    void SetApproverSignSealId(const std::string& _approverSignSealId);

                    /**
                     * 判断参数 ApproverSignSealId 是否已赋值
                     * @return ApproverSignSealId 是否已赋值
                     * 
                     */
                    bool ApproverSignSealIdHasBeenSet() const;

                    /**
                     * 获取<p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * @return RelievedApproverRecipientId <p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * 
                     */
                    std::string GetRelievedApproverRecipientId() const;

                    /**
                     * 设置<p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * @param _relievedApproverRecipientId <p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     * 
                     */
                    void SetRelievedApproverRecipientId(const std::string& _relievedApproverRecipientId);

                    /**
                     * 判断参数 RelievedApproverRecipientId 是否已赋值
                     * @return RelievedApproverRecipientId 是否已赋值
                     * 
                     */
                    bool RelievedApproverRecipientIdHasBeenSet() const;

                private:

                    /**
                     * <p>签署人姓名，最大长度50个字。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>签署人手机号。</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     */
                    std::string m_relievedApproverReceiptId;
                    bool m_relievedApproverReceiptIdHasBeenSet;

                    /**
                     * <p>指定签署人类型，目前仅支持<ul><li> <strong>ORGANIZATION</strong>：企业（默认值）</li><li> <strong>ENTERPRISESERVER</strong>：企业“授权签”</li></ul></p>
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * <p>签署控件类型，支持自定义企业签署方的签署控件类型</p><ul><li> **SIGN_SEAL**：默认为印章控件类型（默认值）</li><li> **SIGN_SIGNATURE**：手写签名控件类型</li></ul>
                     */
                    std::string m_approverSignComponentType;
                    bool m_approverSignComponentTypeHasBeenSet;

                    /**
                     * <p>参与方在合同中的角色是按照创建合同的时候来排序的，解除协议默认会将第一个参与人叫<code>甲方</code>,第二个叫<code>乙方</code>,  第三个叫<code>丙方</code>，以此类推。</p><p>如果需改动此参与人的角色名字，可用此字段指定，由汉字,英文字符,数字组成，最大20个字。</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/973a820ab66d1ce57082c160c2b2d44a.png" alt="image"></p>
                     */
                    std::string m_approverSignRole;
                    bool m_approverSignRoleHasBeenSet;

                    /**
                     * <p>印章Id，签署控件类型为印章时，用于指定本企业签署方在解除协议中使用那个印章进行签署</p>
                     */
                    std::string m_approverSignSealId;
                    bool m_approverSignSealIdHasBeenSet;

                    /**
                     * <p>要更换的原合同参与人RecipientId编号。(可通过接口<a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a>查询签署人的RecipientId编号)<br></p>
                     */
                    std::string m_relievedApproverRecipientId;
                    bool m_relievedApproverRecipientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RELEASEDAPPROVER_H_
