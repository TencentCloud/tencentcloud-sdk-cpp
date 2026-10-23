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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_STICKYCONFIG_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_STICKYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 粘连路由配置
                */
                class StickyConfig : public AbstractModel
                {
                public:
                    StickyConfig();
                    ~StickyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启粘连路由</p>
                     * @return Enabled <p>是否开启粘连路由</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启粘连路由</p>
                     * @param _enabled <p>是否开启粘连路由</p>
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
                     * 获取<p>会话粘性的超时时间（秒），取值范围 1–86400。创建时默认为 1800；修改时若不设置该字段，则保留原有值。</p><p>取值范围：[1, 86400]</p><p>单位：秒</p><p>默认值：1800</p>
                     * @return TimeoutSeconds <p>会话粘性的超时时间（秒），取值范围 1–86400。创建时默认为 1800；修改时若不设置该字段，则保留原有值。</p><p>取值范围：[1, 86400]</p><p>单位：秒</p><p>默认值：1800</p>
                     * 
                     */
                    uint64_t GetTimeoutSeconds() const;

                    /**
                     * 设置<p>会话粘性的超时时间（秒），取值范围 1–86400。创建时默认为 1800；修改时若不设置该字段，则保留原有值。</p><p>取值范围：[1, 86400]</p><p>单位：秒</p><p>默认值：1800</p>
                     * @param _timeoutSeconds <p>会话粘性的超时时间（秒），取值范围 1–86400。创建时默认为 1800；修改时若不设置该字段，则保留原有值。</p><p>取值范围：[1, 86400]</p><p>单位：秒</p><p>默认值：1800</p>
                     * 
                     */
                    void SetTimeoutSeconds(const uint64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启粘连路由</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>会话粘性的超时时间（秒），取值范围 1–86400。创建时默认为 1800；修改时若不设置该字段，则保留原有值。</p><p>取值范围：[1, 86400]</p><p>单位：秒</p><p>默认值：1800</p>
                     */
                    uint64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_STICKYCONFIG_H_
