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

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 签署人姓名，最大长度50个字符

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名，最大长度50个字符

注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 签署人姓名，最大长度50个字符

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mobile 签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mobile 签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelievedApproverReceiptId 要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelievedApproverReceiptId() const;

                    /**
                     * 设置要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelievedApproverReceiptId 要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelievedApproverReceiptId(const std::string& _relievedApproverReceiptId);

                    /**
                     * 判断参数 RelievedApproverReceiptId 是否已赋值
                     * @return RelievedApproverReceiptId 是否已赋值
                     */
                    bool RelievedApproverReceiptIdHasBeenSet() const;

                private:

                    /**
                     * 签署人姓名，最大长度50个字符

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 要替换的参与人在原合同参与人列表中的签署人编号,通过DescribeFlowInfo 接口获取（即FlowDetailInfos. FlowApproverInfos 结构中的ReceiptId ）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relievedApproverReceiptId;
                    bool m_relievedApproverReceiptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RELEASEDAPPROVER_H_
