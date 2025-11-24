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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginAuthenticationRequestProperties.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 回源鉴权参数。
                */
                class OriginAuthenticationParameters : public AbstractModel
                {
                public:
                    OriginAuthenticationParameters();
                    ~OriginAuthenticationParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源鉴权请求属性。
                     * @return RequestProperties 回源鉴权请求属性。
                     * 
                     */
                    std::vector<OriginAuthenticationRequestProperties> GetRequestProperties() const;

                    /**
                     * 设置回源鉴权请求属性。
                     * @param _requestProperties 回源鉴权请求属性。
                     * 
                     */
                    void SetRequestProperties(const std::vector<OriginAuthenticationRequestProperties>& _requestProperties);

                    /**
                     * 判断参数 RequestProperties 是否已赋值
                     * @return RequestProperties 是否已赋值
                     * 
                     */
                    bool RequestPropertiesHasBeenSet() const;

                private:

                    /**
                     * 回源鉴权请求属性。
                     */
                    std::vector<OriginAuthenticationRequestProperties> m_requestProperties;
                    bool m_requestPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONPARAMETERS_H_
