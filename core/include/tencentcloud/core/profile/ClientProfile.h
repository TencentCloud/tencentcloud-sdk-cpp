/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CORE_CLIENTPROFILE_H_
#define TENCENTCLOUD_CORE_CLIENTPROFILE_H_

#include "HttpProfile.h"
#include "RegionBreakerProfile.h"

namespace TencentCloud
{

    class ClientProfile
    {
    public:
        enum SignMethod
        {
            TC3_HMAC_SHA256,
        };

        ClientProfile() :
            ClientProfile(SignMethod::TC3_HMAC_SHA256)
        {
        }

        ClientProfile(const SignMethod &signMethod) :
            ClientProfile(signMethod, HttpProfile())
        {
        }

        ClientProfile(const SignMethod &signMethod, const HttpProfile &httpProfile) :
            m_httpProfile(httpProfile),
            m_unsignedPayload(false),
            m_signMethod(signMethod),
            m_disableRegionBreaker(false),
            m_regionBreakerProfile()
        {
        }

        ClientProfile(const HttpProfile &httpProfile) :
            ClientProfile(SignMethod::TC3_HMAC_SHA256, httpProfile)
        {
        }

        void SetSignMethod(const SignMethod &signMethod);
        void SetHttpProfile(const HttpProfile &httpProfile);
        HttpProfile GetHttpProfile() const;

        /// Region-level failover control.
        /// Enabled by default. Call SetDisableRegionBreaker(true)
        /// to explicitly disable region failover.
        void SetDisableRegionBreaker(bool disabled);
        bool GetDisableRegionBreaker() const;

        void SetRegionBreakerProfile(const RegionBreakerProfile &profile);
        RegionBreakerProfile GetRegionBreakerProfile() const;

    protected:
        void SetUnsignedPayload(bool flag);
        bool IsUnsignedPayload();

    private:
        HttpProfile m_httpProfile;
        bool m_unsignedPayload;
        SignMethod m_signMethod;
        bool m_disableRegionBreaker;
        RegionBreakerProfile m_regionBreakerProfile;
    };
}

#endif // !TENCENTCLOUD_CORE_CLIENTPROFILE_H_
