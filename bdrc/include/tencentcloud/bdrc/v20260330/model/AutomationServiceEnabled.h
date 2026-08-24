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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOMATIONSERVICEENABLED_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOMATIONSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 描述了 “tat-agent” 相关的信息
                */
                class AutomationServiceEnabled : public AbstractModel
                {
                public:
                    AutomationServiceEnabled();
                    ~AutomationServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启该服务。取值范围：TRUE（开启）/FALSE（不开启）。默认取值：TRUE。
                     * @return Enabled 是否开启该服务。取值范围：TRUE（开启）/FALSE（不开启）。默认取值：TRUE。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启该服务。取值范围：TRUE（开启）/FALSE（不开启）。默认取值：TRUE。
                     * @param _enabled 是否开启该服务。取值范围：TRUE（开启）/FALSE（不开启）。默认取值：TRUE。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 是否开启该服务。取值范围：TRUE（开启）/FALSE（不开启）。默认取值：TRUE。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_AUTOMATIONSERVICEENABLED_H_
