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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTBODYTRANSFERTIMEOUT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTBODYTRANSFERTIMEOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 正文传输超时时长的具体配置。
                */
                class RequestBodyTransferTimeout : public AbstractModel
                {
                public:
                    RequestBodyTransferTimeout();
                    ~RequestBodyTransferTimeout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正文传输超时时长，取值 5 ~ 120，单位仅支持秒（s）。
                     * @return IdleTimeout 正文传输超时时长，取值 5 ~ 120，单位仅支持秒（s）。
                     * 
                     */
                    std::string GetIdleTimeout() const;

                    /**
                     * 设置正文传输超时时长，取值 5 ~ 120，单位仅支持秒（s）。
                     * @param _idleTimeout 正文传输超时时长，取值 5 ~ 120，单位仅支持秒（s）。
                     * 
                     */
                    void SetIdleTimeout(const std::string& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取正文传输超时时长是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled 正文传输超时时长是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置正文传输超时时长是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled 正文传输超时时长是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 正文传输超时时长，取值 5 ~ 120，单位仅支持秒（s）。
                     */
                    std::string m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * 正文传输超时时长是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_REQUESTBODYTRANSFERTIMEOUT_H_
