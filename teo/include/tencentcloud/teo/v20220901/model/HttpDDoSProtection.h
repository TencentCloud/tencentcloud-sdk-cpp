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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPDDOSPROTECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPDDOSPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdaptiveFrequencyControl.h>
#include <tencentcloud/teo/v20220901/model/ClientFiltering.h>
#include <tencentcloud/teo/v20220901/model/BandwidthAbuseDefense.h>
#include <tencentcloud/teo/v20220901/model/SlowAttackDefense.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HTTP DDOS防护配置。
                */
                class HttpDDoSProtection : public AbstractModel
                {
                public:
                    HttpDDoSProtection();
                    ~HttpDDoSProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自适应频控的具体配置。
                     * @return AdaptiveFrequencyControl 自适应频控的具体配置。
                     * 
                     */
                    AdaptiveFrequencyControl GetAdaptiveFrequencyControl() const;

                    /**
                     * 设置自适应频控的具体配置。
                     * @param _adaptiveFrequencyControl 自适应频控的具体配置。
                     * 
                     */
                    void SetAdaptiveFrequencyControl(const AdaptiveFrequencyControl& _adaptiveFrequencyControl);

                    /**
                     * 判断参数 AdaptiveFrequencyControl 是否已赋值
                     * @return AdaptiveFrequencyControl 是否已赋值
                     * 
                     */
                    bool AdaptiveFrequencyControlHasBeenSet() const;

                    /**
                     * 获取智能客户端过滤的具体配置。
                     * @return ClientFiltering 智能客户端过滤的具体配置。
                     * 
                     */
                    ClientFiltering GetClientFiltering() const;

                    /**
                     * 设置智能客户端过滤的具体配置。
                     * @param _clientFiltering 智能客户端过滤的具体配置。
                     * 
                     */
                    void SetClientFiltering(const ClientFiltering& _clientFiltering);

                    /**
                     * 判断参数 ClientFiltering 是否已赋值
                     * @return ClientFiltering 是否已赋值
                     * 
                     */
                    bool ClientFilteringHasBeenSet() const;

                    /**
                     * 获取流量防盗刷的具体配置。
                     * @return BandwidthAbuseDefense 流量防盗刷的具体配置。
                     * 
                     */
                    BandwidthAbuseDefense GetBandwidthAbuseDefense() const;

                    /**
                     * 设置流量防盗刷的具体配置。
                     * @param _bandwidthAbuseDefense 流量防盗刷的具体配置。
                     * 
                     */
                    void SetBandwidthAbuseDefense(const BandwidthAbuseDefense& _bandwidthAbuseDefense);

                    /**
                     * 判断参数 BandwidthAbuseDefense 是否已赋值
                     * @return BandwidthAbuseDefense 是否已赋值
                     * 
                     */
                    bool BandwidthAbuseDefenseHasBeenSet() const;

                    /**
                     * 获取慢速攻击防护的具体配置。
                     * @return SlowAttackDefense 慢速攻击防护的具体配置。
                     * 
                     */
                    SlowAttackDefense GetSlowAttackDefense() const;

                    /**
                     * 设置慢速攻击防护的具体配置。
                     * @param _slowAttackDefense 慢速攻击防护的具体配置。
                     * 
                     */
                    void SetSlowAttackDefense(const SlowAttackDefense& _slowAttackDefense);

                    /**
                     * 判断参数 SlowAttackDefense 是否已赋值
                     * @return SlowAttackDefense 是否已赋值
                     * 
                     */
                    bool SlowAttackDefenseHasBeenSet() const;

                private:

                    /**
                     * 自适应频控的具体配置。
                     */
                    AdaptiveFrequencyControl m_adaptiveFrequencyControl;
                    bool m_adaptiveFrequencyControlHasBeenSet;

                    /**
                     * 智能客户端过滤的具体配置。
                     */
                    ClientFiltering m_clientFiltering;
                    bool m_clientFilteringHasBeenSet;

                    /**
                     * 流量防盗刷的具体配置。
                     */
                    BandwidthAbuseDefense m_bandwidthAbuseDefense;
                    bool m_bandwidthAbuseDefenseHasBeenSet;

                    /**
                     * 慢速攻击防护的具体配置。
                     */
                    SlowAttackDefense m_slowAttackDefense;
                    bool m_slowAttackDefenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPDDOSPROTECTION_H_
