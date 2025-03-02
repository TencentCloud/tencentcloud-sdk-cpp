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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENTCOMPONENTINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENTCOMPONENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FilledComponent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 参与方填写控件信息
                */
                class RecipientComponentInfo : public AbstractModel
                {
                public:
                    RecipientComponentInfo();
                    ~RecipientComponentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署方经办人在合同流程中的参与方ID，与控件绑定，是控件的归属方
                     * @return RecipientId 签署方经办人在合同流程中的参与方ID，与控件绑定，是控件的归属方
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署方经办人在合同流程中的参与方ID，与控件绑定，是控件的归属方
                     * @param _recipientId 签署方经办人在合同流程中的参与方ID，与控件绑定，是控件的归属方
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取参与方填写状态
<ul>
<li>**空值** : 此参与方没有填写控件</li>
<li>**0**:  未填写, 表示此参与方还没有填写合同的填写控件</li>
<li>**1**:  已填写, 表示此参与方已经填写所有的填写控件</li></ul>

                     * @return RecipientFillStatus 参与方填写状态
<ul>
<li>**空值** : 此参与方没有填写控件</li>
<li>**0**:  未填写, 表示此参与方还没有填写合同的填写控件</li>
<li>**1**:  已填写, 表示此参与方已经填写所有的填写控件</li></ul>

                     * 
                     */
                    std::string GetRecipientFillStatus() const;

                    /**
                     * 设置参与方填写状态
<ul>
<li>**空值** : 此参与方没有填写控件</li>
<li>**0**:  未填写, 表示此参与方还没有填写合同的填写控件</li>
<li>**1**:  已填写, 表示此参与方已经填写所有的填写控件</li></ul>

                     * @param _recipientFillStatus 参与方填写状态
<ul>
<li>**空值** : 此参与方没有填写控件</li>
<li>**0**:  未填写, 表示此参与方还没有填写合同的填写控件</li>
<li>**1**:  已填写, 表示此参与方已经填写所有的填写控件</li></ul>

                     * 
                     */
                    void SetRecipientFillStatus(const std::string& _recipientFillStatus);

                    /**
                     * 判断参数 RecipientFillStatus 是否已赋值
                     * @return RecipientFillStatus 是否已赋值
                     * 
                     */
                    bool RecipientFillStatusHasBeenSet() const;

                    /**
                     * 获取是否为发起方
<ul><li>true-发起方</li>
<li>false-参与方</li></ul>
                     * @return IsPromoter 是否为发起方
<ul><li>true-发起方</li>
<li>false-参与方</li></ul>
                     * 
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置是否为发起方
<ul><li>true-发起方</li>
<li>false-参与方</li></ul>
                     * @param _isPromoter 是否为发起方
<ul><li>true-发起方</li>
<li>false-参与方</li></ul>
                     * 
                     */
                    void SetIsPromoter(const bool& _isPromoter);

                    /**
                     * 判断参数 IsPromoter 是否已赋值
                     * @return IsPromoter 是否已赋值
                     * 
                     */
                    bool IsPromoterHasBeenSet() const;

                    /**
                     * 获取改参与方填写控件信息列表
                     * @return Components 改参与方填写控件信息列表
                     * 
                     */
                    std::vector<FilledComponent> GetComponents() const;

                    /**
                     * 设置改参与方填写控件信息列表
                     * @param _components 改参与方填写控件信息列表
                     * 
                     */
                    void SetComponents(const std::vector<FilledComponent>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                private:

                    /**
                     * 签署方经办人在合同流程中的参与方ID，与控件绑定，是控件的归属方
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 参与方填写状态
<ul>
<li>**空值** : 此参与方没有填写控件</li>
<li>**0**:  未填写, 表示此参与方还没有填写合同的填写控件</li>
<li>**1**:  已填写, 表示此参与方已经填写所有的填写控件</li></ul>

                     */
                    std::string m_recipientFillStatus;
                    bool m_recipientFillStatusHasBeenSet;

                    /**
                     * 是否为发起方
<ul><li>true-发起方</li>
<li>false-参与方</li></ul>
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

                    /**
                     * 改参与方填写控件信息列表
                     */
                    std::vector<FilledComponent> m_components;
                    bool m_componentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENTCOMPONENTINFO_H_
