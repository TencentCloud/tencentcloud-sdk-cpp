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
                * 解除协议的签署人，如不指定，默认使用待解除流程（即原流程）中的签署人。
注意：不支持更换C端（个人身份类型）签署人，如果原流程中含有C端签署人，默认使用原流程中的该C端签署人。
注意：目前不支持替换C端（个人身份类型）签署人，但是可以指定C端签署人的签署方自定义控件别名，具体见参数ApproverSignRole描述。
注意：当指定C端签署人的签署方自定义控件别名不空时，除RelievedApproverReceiptId参数外，可以只参数ApproverSignRole。
                */
                class ReleasedApprover : public AbstractModel
                {
                public:
                    ReleasedApprover();
                    ~ReleasedApprover() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人姓名，最大长度50个字符

                     * @return Name 签署人姓名，最大长度50个字符

                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名，最大长度50个字符

                     * @param _name 签署人姓名，最大长度50个字符

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
                     * 获取签署人手机号
                     * @return Mobile 签署人手机号
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号
                     * @param _mobile 签署人手机号
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
                     * 获取要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
                     * @return RelievedApproverReceiptId 要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
                     * 
                     */
                    std::string GetRelievedApproverReceiptId() const;

                    /**
                     * 设置要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
                     * @param _relievedApproverReceiptId 要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
                     * 
                     */
                    void SetRelievedApproverReceiptId(const std::string& _relievedApproverReceiptId);

                    /**
                     * 判断参数 RelievedApproverReceiptId 是否已赋值
                     * @return RelievedApproverReceiptId 是否已赋值
                     * 
                     */
                    bool RelievedApproverReceiptIdHasBeenSet() const;

                    /**
                     * 获取指定签署人类型，目前仅支持
ORGANIZATION-企业
ENTERPRISESERVER-企业静默签
                     * @return ApproverType 指定签署人类型，目前仅支持
ORGANIZATION-企业
ENTERPRISESERVER-企业静默签
                     * 
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置指定签署人类型，目前仅支持
ORGANIZATION-企业
ENTERPRISESERVER-企业静默签
                     * @param _approverType 指定签署人类型，目前仅支持
ORGANIZATION-企业
ENTERPRISESERVER-企业静默签
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
                     * 获取签署控件类型，支持自定义企业签署方的签署控件为“印章”或“签名”
- SIGN_SEAL-默认为印章控件类型
- SIGN_SIGNATURE-手写签名控件类型
                     * @return ApproverSignComponentType 签署控件类型，支持自定义企业签署方的签署控件为“印章”或“签名”
- SIGN_SEAL-默认为印章控件类型
- SIGN_SIGNATURE-手写签名控件类型
                     * 
                     */
                    std::string GetApproverSignComponentType() const;

                    /**
                     * 设置签署控件类型，支持自定义企业签署方的签署控件为“印章”或“签名”
- SIGN_SEAL-默认为印章控件类型
- SIGN_SIGNATURE-手写签名控件类型
                     * @param _approverSignComponentType 签署控件类型，支持自定义企业签署方的签署控件为“印章”或“签名”
- SIGN_SEAL-默认为印章控件类型
- SIGN_SIGNATURE-手写签名控件类型
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
                     * 获取参与方在合同中的角色是按照创建合同的时候来排序的; 解除协议会将第一个参与人叫甲方, 第二个叫乙方,第三个叫丙方, 依次类推.  如果想改动参与人的角色名字, 可以设置此签署方自定义控件别名字段，最大20个字符
                     * @return ApproverSignRole 参与方在合同中的角色是按照创建合同的时候来排序的; 解除协议会将第一个参与人叫甲方, 第二个叫乙方,第三个叫丙方, 依次类推.  如果想改动参与人的角色名字, 可以设置此签署方自定义控件别名字段，最大20个字符
                     * 
                     */
                    std::string GetApproverSignRole() const;

                    /**
                     * 设置参与方在合同中的角色是按照创建合同的时候来排序的; 解除协议会将第一个参与人叫甲方, 第二个叫乙方,第三个叫丙方, 依次类推.  如果想改动参与人的角色名字, 可以设置此签署方自定义控件别名字段，最大20个字符
                     * @param _approverSignRole 参与方在合同中的角色是按照创建合同的时候来排序的; 解除协议会将第一个参与人叫甲方, 第二个叫乙方,第三个叫丙方, 依次类推.  如果想改动参与人的角色名字, 可以设置此签署方自定义控件别名字段，最大20个字符
                     * 
                     */
                    void SetApproverSignRole(const std::string& _approverSignRole);

                    /**
                     * 判断参数 ApproverSignRole 是否已赋值
                     * @return ApproverSignRole 是否已赋值
                     * 
                     */
                    bool ApproverSignRoleHasBeenSet() const;

                private:

                    /**
                     * 签署人姓名，最大长度50个字符

                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署人手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
                     */
                    std::string m_relievedApproverReceiptId;
                    bool m_relievedApproverReceiptIdHasBeenSet;

                    /**
                     * 指定签署人类型，目前仅支持
ORGANIZATION-企业
ENTERPRISESERVER-企业静默签
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署控件类型，支持自定义企业签署方的签署控件为“印章”或“签名”
- SIGN_SEAL-默认为印章控件类型
- SIGN_SIGNATURE-手写签名控件类型
                     */
                    std::string m_approverSignComponentType;
                    bool m_approverSignComponentTypeHasBeenSet;

                    /**
                     * 参与方在合同中的角色是按照创建合同的时候来排序的; 解除协议会将第一个参与人叫甲方, 第二个叫乙方,第三个叫丙方, 依次类推.  如果想改动参与人的角色名字, 可以设置此签署方自定义控件别名字段，最大20个字符
                     */
                    std::string m_approverSignRole;
                    bool m_approverSignRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RELEASEDAPPROVER_H_
