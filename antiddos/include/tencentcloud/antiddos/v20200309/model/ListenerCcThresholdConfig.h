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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LISTENERCCTHRESHOLDCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LISTENERCCTHRESHOLDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 域名与协议纬度的CC防护阈值
                */
                class ListenerCcThresholdConfig : public AbstractModel
                {
                public:
                    ListenerCcThresholdConfig();
                    ~ListenerCcThresholdConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取协议（可取值https）
                     * @return Protocol 协议（可取值https）
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议（可取值https）
                     * @param _protocol 协议（可取值https）
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取开关状态（0：关闭，1：开启）
                     * @return CCEnable 开关状态（0：关闭，1：开启）
                     * 
                     */
                    int64_t GetCCEnable() const;

                    /**
                     * 设置开关状态（0：关闭，1：开启）
                     * @param _cCEnable 开关状态（0：关闭，1：开启）
                     * 
                     */
                    void SetCCEnable(const int64_t& _cCEnable);

                    /**
                     * 判断参数 CCEnable 是否已赋值
                     * @return CCEnable 是否已赋值
                     * 
                     */
                    bool CCEnableHasBeenSet() const;

                    /**
                     * 获取cc防护阈值
                     * @return CCThreshold cc防护阈值
                     * 
                     */
                    int64_t GetCCThreshold() const;

                    /**
                     * 设置cc防护阈值
                     * @param _cCThreshold cc防护阈值
                     * 
                     */
                    void SetCCThreshold(const int64_t& _cCThreshold);

                    /**
                     * 判断参数 CCThreshold 是否已赋值
                     * @return CCThreshold 是否已赋值
                     * 
                     */
                    bool CCThresholdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 协议（可取值https）
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 开关状态（0：关闭，1：开启）
                     */
                    int64_t m_cCEnable;
                    bool m_cCEnableHasBeenSet;

                    /**
                     * cc防护阈值
                     */
                    int64_t m_cCThreshold;
                    bool m_cCThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_LISTENERCCTHRESHOLDCONFIG_H_
