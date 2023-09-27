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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_APPROVEROPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_APPROVEROPTION_H_

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
                * 签署人个性化能力信息
                */
                class ApproverOption : public AbstractModel
                {
                public:
                    ApproverOption();
                    ~ApproverOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否隐藏一键签署 默认false-不隐藏true-隐藏
                     * @return HideOneKeySign 是否隐藏一键签署 默认false-不隐藏true-隐藏
                     * 
                     */
                    bool GetHideOneKeySign() const;

                    /**
                     * 设置是否隐藏一键签署 默认false-不隐藏true-隐藏
                     * @param _hideOneKeySign 是否隐藏一键签署 默认false-不隐藏true-隐藏
                     * 
                     */
                    void SetHideOneKeySign(const bool& _hideOneKeySign);

                    /**
                     * 判断参数 HideOneKeySign 是否已赋值
                     * @return HideOneKeySign 是否已赋值
                     * 
                     */
                    bool HideOneKeySignHasBeenSet() const;

                    /**
                     * 获取签署人信息补充类型，默认无需补充。

<ul><li> **1** : ( 动态签署人（可发起合同后再补充签署人信息）</li>
</ul>
                     * @return FillType 签署人信息补充类型，默认无需补充。

<ul><li> **1** : ( 动态签署人（可发起合同后再补充签署人信息）</li>
</ul>
                     * 
                     */
                    int64_t GetFillType() const;

                    /**
                     * 设置签署人信息补充类型，默认无需补充。

<ul><li> **1** : ( 动态签署人（可发起合同后再补充签署人信息）</li>
</ul>
                     * @param _fillType 签署人信息补充类型，默认无需补充。

<ul><li> **1** : ( 动态签署人（可发起合同后再补充签署人信息）</li>
</ul>
                     * 
                     */
                    void SetFillType(const int64_t& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                private:

                    /**
                     * 是否隐藏一键签署 默认false-不隐藏true-隐藏
                     */
                    bool m_hideOneKeySign;
                    bool m_hideOneKeySignHasBeenSet;

                    /**
                     * 签署人信息补充类型，默认无需补充。

<ul><li> **1** : ( 动态签署人（可发起合同后再补充签署人信息）</li>
</ul>
                     */
                    int64_t m_fillType;
                    bool m_fillTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_APPROVEROPTION_H_
