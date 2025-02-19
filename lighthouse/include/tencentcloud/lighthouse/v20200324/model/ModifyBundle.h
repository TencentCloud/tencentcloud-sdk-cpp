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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBUNDLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBUNDLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Price.h>
#include <tencentcloud/lighthouse/v20200324/model/Bundle.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述了实例可变更的套餐。
                */
                class ModifyBundle : public AbstractModel
                {
                public:
                    ModifyBundle();
                    ~ModifyBundle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取更改实例套餐后需要补的差价。
                     * @return ModifyPrice 更改实例套餐后需要补的差价。
                     * 
                     */
                    Price GetModifyPrice() const;

                    /**
                     * 设置更改实例套餐后需要补的差价。
                     * @param _modifyPrice 更改实例套餐后需要补的差价。
                     * 
                     */
                    void SetModifyPrice(const Price& _modifyPrice);

                    /**
                     * 判断参数 ModifyPrice 是否已赋值
                     * @return ModifyPrice 是否已赋值
                     * 
                     */
                    bool ModifyPriceHasBeenSet() const;

                    /**
                     * 获取变更套餐状态。取值：
<li>SOLD_OUT：套餐售罄</li>
<li>AVAILABLE：支持套餐变更</li>
<li>UNAVAILABLE：暂不支持套餐变更</li>
                     * @return ModifyBundleState 变更套餐状态。取值：
<li>SOLD_OUT：套餐售罄</li>
<li>AVAILABLE：支持套餐变更</li>
<li>UNAVAILABLE：暂不支持套餐变更</li>
                     * 
                     */
                    std::string GetModifyBundleState() const;

                    /**
                     * 设置变更套餐状态。取值：
<li>SOLD_OUT：套餐售罄</li>
<li>AVAILABLE：支持套餐变更</li>
<li>UNAVAILABLE：暂不支持套餐变更</li>
                     * @param _modifyBundleState 变更套餐状态。取值：
<li>SOLD_OUT：套餐售罄</li>
<li>AVAILABLE：支持套餐变更</li>
<li>UNAVAILABLE：暂不支持套餐变更</li>
                     * 
                     */
                    void SetModifyBundleState(const std::string& _modifyBundleState);

                    /**
                     * 判断参数 ModifyBundleState 是否已赋值
                     * @return ModifyBundleState 是否已赋值
                     * 
                     */
                    bool ModifyBundleStateHasBeenSet() const;

                    /**
                     * 获取套餐信息。
                     * @return Bundle 套餐信息。
                     * 
                     */
                    Bundle GetBundle() const;

                    /**
                     * 设置套餐信息。
                     * @param _bundle 套餐信息。
                     * 
                     */
                    void SetBundle(const Bundle& _bundle);

                    /**
                     * 判断参数 Bundle 是否已赋值
                     * @return Bundle 是否已赋值
                     * 
                     */
                    bool BundleHasBeenSet() const;

                    /**
                     * 获取不支持套餐变更原因信息。变更套餐状态为"AVAILABLE"时, 该信息为空
                     * @return NotSupportModifyMessage 不支持套餐变更原因信息。变更套餐状态为"AVAILABLE"时, 该信息为空
                     * 
                     */
                    std::string GetNotSupportModifyMessage() const;

                    /**
                     * 设置不支持套餐变更原因信息。变更套餐状态为"AVAILABLE"时, 该信息为空
                     * @param _notSupportModifyMessage 不支持套餐变更原因信息。变更套餐状态为"AVAILABLE"时, 该信息为空
                     * 
                     */
                    void SetNotSupportModifyMessage(const std::string& _notSupportModifyMessage);

                    /**
                     * 判断参数 NotSupportModifyMessage 是否已赋值
                     * @return NotSupportModifyMessage 是否已赋值
                     * 
                     */
                    bool NotSupportModifyMessageHasBeenSet() const;

                private:

                    /**
                     * 更改实例套餐后需要补的差价。
                     */
                    Price m_modifyPrice;
                    bool m_modifyPriceHasBeenSet;

                    /**
                     * 变更套餐状态。取值：
<li>SOLD_OUT：套餐售罄</li>
<li>AVAILABLE：支持套餐变更</li>
<li>UNAVAILABLE：暂不支持套餐变更</li>
                     */
                    std::string m_modifyBundleState;
                    bool m_modifyBundleStateHasBeenSet;

                    /**
                     * 套餐信息。
                     */
                    Bundle m_bundle;
                    bool m_bundleHasBeenSet;

                    /**
                     * 不支持套餐变更原因信息。变更套餐状态为"AVAILABLE"时, 该信息为空
                     */
                    std::string m_notSupportModifyMessage;
                    bool m_notSupportModifyMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYBUNDLE_H_
