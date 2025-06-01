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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLICACCESSRULE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLICACCESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 公网访问安全规则
                */
                class PublicAccessRule : public AbstractModel
                {
                public:
                    PublicAccessRule();
                    ~PublicAccessRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip网段信息
                     * @return IpRule ip网段信息
                     * 
                     */
                    std::string GetIpRule() const;

                    /**
                     * 设置ip网段信息
                     * @param _ipRule ip网段信息
                     * 
                     */
                    void SetIpRule(const std::string& _ipRule);

                    /**
                     * 判断参数 IpRule 是否已赋值
                     * @return IpRule 是否已赋值
                     * 
                     */
                    bool IpRuleHasBeenSet() const;

                    /**
                     * 获取当前仅支持允许，默认允许（allow）
                     * @return Allow 当前仅支持允许，默认允许（allow）
                     * 
                     */
                    bool GetAllow() const;

                    /**
                     * 设置当前仅支持允许，默认允许（allow）
                     * @param _allow 当前仅支持允许，默认允许（allow）
                     * 
                     */
                    void SetAllow(const bool& _allow);

                    /**
                     * 判断参数 Allow 是否已赋值
                     * @return Allow 是否已赋值
                     * 
                     */
                    bool AllowHasBeenSet() const;

                    /**
                     * 获取备注信息，最多64个字符。
                     * @return Remark 备注信息，最多64个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息，最多64个字符。
                     * @param _remark 备注信息，最多64个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * ip网段信息
                     */
                    std::string m_ipRule;
                    bool m_ipRuleHasBeenSet;

                    /**
                     * 当前仅支持允许，默认允许（allow）
                     */
                    bool m_allow;
                    bool m_allowHasBeenSet;

                    /**
                     * 备注信息，最多64个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PUBLICACCESSRULE_H_
