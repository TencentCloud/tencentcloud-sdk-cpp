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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEDYNAMICAPPROVERDATA_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEDYNAMICAPPROVERDATA_H_

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
                * 动态签署2.0合同参与人信息
                */
                class ArchiveDynamicApproverData : public AbstractModel
                {
                public:
                    ArchiveDynamicApproverData();
                    ~ArchiveDynamicApproverData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署参与人在本流程中的编号ID(每个流程不同)，可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。 注意：不指定该字段时默认为发起方
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignId 签署参与人在本流程中的编号ID(每个流程不同)，可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。 注意：不指定该字段时默认为发起方
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署参与人在本流程中的编号ID(每个流程不同)，可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。 注意：不指定该字段时默认为发起方
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signId 签署参与人在本流程中的编号ID(每个流程不同)，可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。 注意：不指定该字段时默认为发起方
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。 模板发起合同时，该参数为必填项。 文件发起合同是，该参数无需传值。 如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecipientId 签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。 模板发起合同时，该参数为必填项。 文件发起合同是，该参数无需传值。 如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。 模板发起合同时，该参数为必填项。 文件发起合同是，该参数无需传值。 如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recipientId 签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。 模板发起合同时，该参数为必填项。 文件发起合同是，该参数无需传值。 如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                private:

                    /**
                     * 签署参与人在本流程中的编号ID(每个流程不同)，可用此ID来定位签署参与人在本流程的签署节点，也可用于后续创建签署链接等操作。 注意：不指定该字段时默认为发起方
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。 模板发起合同时，该参数为必填项。 文件发起合同是，该参数无需传值。 如果开发者后序用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEDYNAMICAPPROVERDATA_H_
