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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPReputationGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP 情报库（原客户端画像分析）配置。
                */
                class IPReputation : public AbstractModel
                {
                public:
                    IPReputation();
                    ~IPReputation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP 情报库（原客户端画像分析）。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @return Enabled IP 情报库（原客户端画像分析）。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置IP 情报库（原客户端画像分析）。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * @param _enabled IP 情报库（原客户端画像分析）。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取IP 情报库（原客户端画像分析）的具体配置内容。
                     * @return IPReputationGroup IP 情报库（原客户端画像分析）的具体配置内容。
                     * 
                     */
                    IPReputationGroup GetIPReputationGroup() const;

                    /**
                     * 设置IP 情报库（原客户端画像分析）的具体配置内容。
                     * @param _iPReputationGroup IP 情报库（原客户端画像分析）的具体配置内容。
                     * 
                     */
                    void SetIPReputationGroup(const IPReputationGroup& _iPReputationGroup);

                    /**
                     * 判断参数 IPReputationGroup 是否已赋值
                     * @return IPReputationGroup 是否已赋值
                     * 
                     */
                    bool IPReputationGroupHasBeenSet() const;

                private:

                    /**
                     * IP 情报库（原客户端画像分析）。取值有：<li>on：开启；</li><li>off：关闭。</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * IP 情报库（原客户端画像分析）的具体配置内容。
                     */
                    IPReputationGroup m_iPReputationGroup;
                    bool m_iPReputationGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPREPUTATION_H_
