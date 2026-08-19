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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDEREXTRAPARAM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDEREXTRAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 订单额外参数
                */
                class CWPOrderExtraParam : public AbstractModel
                {
                public:
                    CWPOrderExtraParam();
                    ~CWPOrderExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PrePay 包年包月
PostPay 按量计费
Disposable 一次性交付
                     * @return Mode PrePay 包年包月
PostPay 按量计费
Disposable 一次性交付
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置PrePay 包年包月
PostPay 按量计费
Disposable 一次性交付
                     * @param _mode PrePay 包年包月
PostPay 按量计费
Disposable 一次性交付
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取一次性服务交付状态,仅一次性资源订单才有该值
false 未验收
true 已验收
                     * @return DisposableStatus 一次性服务交付状态,仅一次性资源订单才有该值
false 未验收
true 已验收
                     * 
                     */
                    bool GetDisposableStatus() const;

                    /**
                     * 设置一次性服务交付状态,仅一次性资源订单才有该值
false 未验收
true 已验收
                     * @param _disposableStatus 一次性服务交付状态,仅一次性资源订单才有该值
false 未验收
true 已验收
                     * 
                     */
                    void SetDisposableStatus(const bool& _disposableStatus);

                    /**
                     * 判断参数 DisposableStatus 是否已赋值
                     * @return DisposableStatus 是否已赋值
                     * 
                     */
                    bool DisposableStatusHasBeenSet() const;

                private:

                    /**
                     * PrePay 包年包月
PostPay 按量计费
Disposable 一次性交付
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 一次性服务交付状态,仅一次性资源订单才有该值
false 未验收
true 已验收
                     */
                    bool m_disposableStatus;
                    bool m_disposableStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDEREXTRAPARAM_H_
