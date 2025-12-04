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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_AUTHMODESETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_AUTHMODESETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 认证方式设置
                */
                class AuthModeSetting : public AbstractModel
                {
                public:
                    AuthModeSetting();
                    ~AuthModeSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取双因子认证，0-不开启，1-OTP，2-短信
                     * @return AuthMode 双因子认证，0-不开启，1-OTP，2-短信
                     * 
                     */
                    uint64_t GetAuthMode() const;

                    /**
                     * 设置双因子认证，0-不开启，1-OTP，2-短信
                     * @param _authMode 双因子认证，0-不开启，1-OTP，2-短信
                     * 
                     */
                    void SetAuthMode(const uint64_t& _authMode);

                    /**
                     * 判断参数 AuthMode 是否已赋值
                     * @return AuthMode 是否已赋值
                     * 
                     */
                    bool AuthModeHasBeenSet() const;

                private:

                    /**
                     * 双因子认证，0-不开启，1-OTP，2-短信
                     */
                    uint64_t m_authMode;
                    bool m_authModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_AUTHMODESETTING_H_
