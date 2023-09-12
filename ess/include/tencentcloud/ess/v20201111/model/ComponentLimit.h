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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_COMPONENTLIMIT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_COMPONENTLIMIT_H_

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
                * 签署控件的类型和范围限制条件，用于控制文件发起后签署人拖拽签署区时可使用的控件类型和具体的印章或签名方式。
                */
                class ComponentLimit : public AbstractModel
                {
                public:
                    ComponentLimit();
                    ~ComponentLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控件类型，支持以下类型
<ul><li>SIGN_SEAL : 印章控件</li>
<li>SIGN_PAGING_SEAL : 骑缝章控件</li>
<li>SIGN_LEGAL_PERSON_SEAL : 企业法定代表人控件</li>
<li>SIGN_SIGNATURE : 用户签名控件</li></ul>
                     * @return ComponentType 控件类型，支持以下类型
<ul><li>SIGN_SEAL : 印章控件</li>
<li>SIGN_PAGING_SEAL : 骑缝章控件</li>
<li>SIGN_LEGAL_PERSON_SEAL : 企业法定代表人控件</li>
<li>SIGN_SIGNATURE : 用户签名控件</li></ul>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置控件类型，支持以下类型
<ul><li>SIGN_SEAL : 印章控件</li>
<li>SIGN_PAGING_SEAL : 骑缝章控件</li>
<li>SIGN_LEGAL_PERSON_SEAL : 企业法定代表人控件</li>
<li>SIGN_SIGNATURE : 用户签名控件</li></ul>
                     * @param _componentType 控件类型，支持以下类型
<ul><li>SIGN_SEAL : 印章控件</li>
<li>SIGN_PAGING_SEAL : 骑缝章控件</li>
<li>SIGN_LEGAL_PERSON_SEAL : 企业法定代表人控件</li>
<li>SIGN_SIGNATURE : 用户签名控件</li></ul>
                     * 
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     * 
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取签署控件类型的值(可选)，用与限制签署时印章或者签名的选择范围

1.当ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时可传入企业印章Id（支持多个）

2.当ComponentType 是 SIGN_SIGNATURE 时可传入以下类型（支持多个）

<ul><li>HANDWRITE : 手写签名</li>
<li>OCR_ESIGN : OCR印章（智慧手写签名）</li>
<li>ESIGN : 个人印章</li>
<li>SYSTEM_ESIGN : 系统印章</li></ul>

3.当ComponentType 是 SIGN_LEGAL_PERSON_SEAL 时无需传递此参数。
                     * @return ComponentValue 签署控件类型的值(可选)，用与限制签署时印章或者签名的选择范围

1.当ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时可传入企业印章Id（支持多个）

2.当ComponentType 是 SIGN_SIGNATURE 时可传入以下类型（支持多个）

<ul><li>HANDWRITE : 手写签名</li>
<li>OCR_ESIGN : OCR印章（智慧手写签名）</li>
<li>ESIGN : 个人印章</li>
<li>SYSTEM_ESIGN : 系统印章</li></ul>

3.当ComponentType 是 SIGN_LEGAL_PERSON_SEAL 时无需传递此参数。
                     * 
                     */
                    std::vector<std::string> GetComponentValue() const;

                    /**
                     * 设置签署控件类型的值(可选)，用与限制签署时印章或者签名的选择范围

1.当ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时可传入企业印章Id（支持多个）

2.当ComponentType 是 SIGN_SIGNATURE 时可传入以下类型（支持多个）

<ul><li>HANDWRITE : 手写签名</li>
<li>OCR_ESIGN : OCR印章（智慧手写签名）</li>
<li>ESIGN : 个人印章</li>
<li>SYSTEM_ESIGN : 系统印章</li></ul>

3.当ComponentType 是 SIGN_LEGAL_PERSON_SEAL 时无需传递此参数。
                     * @param _componentValue 签署控件类型的值(可选)，用与限制签署时印章或者签名的选择范围

1.当ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时可传入企业印章Id（支持多个）

2.当ComponentType 是 SIGN_SIGNATURE 时可传入以下类型（支持多个）

<ul><li>HANDWRITE : 手写签名</li>
<li>OCR_ESIGN : OCR印章（智慧手写签名）</li>
<li>ESIGN : 个人印章</li>
<li>SYSTEM_ESIGN : 系统印章</li></ul>

3.当ComponentType 是 SIGN_LEGAL_PERSON_SEAL 时无需传递此参数。
                     * 
                     */
                    void SetComponentValue(const std::vector<std::string>& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     * 
                     */
                    bool ComponentValueHasBeenSet() const;

                private:

                    /**
                     * 控件类型，支持以下类型
<ul><li>SIGN_SEAL : 印章控件</li>
<li>SIGN_PAGING_SEAL : 骑缝章控件</li>
<li>SIGN_LEGAL_PERSON_SEAL : 企业法定代表人控件</li>
<li>SIGN_SIGNATURE : 用户签名控件</li></ul>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * 签署控件类型的值(可选)，用与限制签署时印章或者签名的选择范围

1.当ComponentType 是 SIGN_SEAL 或者 SIGN_PAGING_SEAL 时可传入企业印章Id（支持多个）

2.当ComponentType 是 SIGN_SIGNATURE 时可传入以下类型（支持多个）

<ul><li>HANDWRITE : 手写签名</li>
<li>OCR_ESIGN : OCR印章（智慧手写签名）</li>
<li>ESIGN : 个人印章</li>
<li>SYSTEM_ESIGN : 系统印章</li></ul>

3.当ComponentType 是 SIGN_LEGAL_PERSON_SEAL 时无需传递此参数。
                     */
                    std::vector<std::string> m_componentValue;
                    bool m_componentValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_COMPONENTLIMIT_H_
