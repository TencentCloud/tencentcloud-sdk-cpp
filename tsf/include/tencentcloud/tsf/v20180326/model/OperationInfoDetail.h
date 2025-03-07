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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_OPERATIONINFODETAIL_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_OPERATIONINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 提供给前端控制按钮显示逻辑的字段
                */
                class OperationInfoDetail : public AbstractModel
                {
                public:
                    OperationInfoDetail();
                    ~OperationInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不显示的原因
                     * @return DisabledReason 不显示的原因
                     * 
                     */
                    std::string GetDisabledReason() const;

                    /**
                     * 设置不显示的原因
                     * @param _disabledReason 不显示的原因
                     * 
                     */
                    void SetDisabledReason(const std::string& _disabledReason);

                    /**
                     * 判断参数 DisabledReason 是否已赋值
                     * @return DisabledReason 是否已赋值
                     * 
                     */
                    bool DisabledReasonHasBeenSet() const;

                    /**
                     * 获取该按钮是否可点击
                     * @return Enabled 该按钮是否可点击
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置该按钮是否可点击
                     * @param _enabled 该按钮是否可点击
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取是否显示该按钮
                     * @return Supported 是否显示该按钮
                     * 
                     */
                    bool GetSupported() const;

                    /**
                     * 设置是否显示该按钮
                     * @param _supported 是否显示该按钮
                     * 
                     */
                    void SetSupported(const bool& _supported);

                    /**
                     * 判断参数 Supported 是否已赋值
                     * @return Supported 是否已赋值
                     * 
                     */
                    bool SupportedHasBeenSet() const;

                private:

                    /**
                     * 不显示的原因
                     */
                    std::string m_disabledReason;
                    bool m_disabledReasonHasBeenSet;

                    /**
                     * 该按钮是否可点击
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 是否显示该按钮
                     */
                    bool m_supported;
                    bool m_supportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_OPERATIONINFODETAIL_H_
