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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINQUICCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINQUICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 域名 QUIC 配置信息
                */
                class DomainQUICConfig : public AbstractModel
                {
                public:
                    DomainQUICConfig();
                    ~DomainQUICConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取QUIC 配置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * @return Status QUIC 配置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置QUIC 配置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * @param _status QUIC 配置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * QUIC 配置状态，可选值：
<li>Enabled: 启用；</li>
<li>Disabled: 禁用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINQUICCONFIG_H_
