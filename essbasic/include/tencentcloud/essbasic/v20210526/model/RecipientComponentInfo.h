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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENTCOMPONENTINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENTCOMPONENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FilledComponent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
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
                     * 获取参与方的角色ID
                     * @return RecipientId 参与方的角色ID
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置参与方的角色ID
                     * @param _recipientId 参与方的角色ID
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

<ul><li> **0** : 还没有填写</li>
<li> **1** : 已经填写</li></ul>
                     * @return RecipientFillStatus 参与方填写状态

<ul><li> **0** : 还没有填写</li>
<li> **1** : 已经填写</li></ul>
                     * 
                     */
                    std::string GetRecipientFillStatus() const;

                    /**
                     * 设置参与方填写状态

<ul><li> **0** : 还没有填写</li>
<li> **1** : 已经填写</li></ul>
                     * @param _recipientFillStatus 参与方填写状态

<ul><li> **0** : 还没有填写</li>
<li> **1** : 已经填写</li></ul>
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
                     * 获取此角色是否是发起方角色

<ul><li> **true** : 是发起方角色</li>
<li> **false** : 不是发起方角色</li></ul>
                     * @return IsPromoter 此角色是否是发起方角色

<ul><li> **true** : 是发起方角色</li>
<li> **false** : 不是发起方角色</li></ul>
                     * 
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置此角色是否是发起方角色

<ul><li> **true** : 是发起方角色</li>
<li> **false** : 不是发起方角色</li></ul>
                     * @param _isPromoter 此角色是否是发起方角色

<ul><li> **true** : 是发起方角色</li>
<li> **false** : 不是发起方角色</li></ul>
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
                     * 获取此角色的填写控件列表
                     * @return Components 此角色的填写控件列表
                     * 
                     */
                    std::vector<FilledComponent> GetComponents() const;

                    /**
                     * 设置此角色的填写控件列表
                     * @param _components 此角色的填写控件列表
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
                     * 参与方的角色ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 参与方填写状态

<ul><li> **0** : 还没有填写</li>
<li> **1** : 已经填写</li></ul>
                     */
                    std::string m_recipientFillStatus;
                    bool m_recipientFillStatusHasBeenSet;

                    /**
                     * 此角色是否是发起方角色

<ul><li> **true** : 是发起方角色</li>
<li> **false** : 不是发起方角色</li></ul>
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

                    /**
                     * 此角色的填写控件列表
                     */
                    std::vector<FilledComponent> m_components;
                    bool m_componentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENTCOMPONENTINFO_H_
