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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMCERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MutualTLS.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 用于 EO 节点回源时携带的证书，源站启用双向认证握手时使用，用于源站认证客户端证书是否有效，确保请求来源于受信任的 EO 节点。
                */
                class UpstreamCertInfo : public AbstractModel
                {
                public:
                    UpstreamCertInfo();
                    ~UpstreamCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取在回源双向认证场景下，该字段为 EO 节点回源时携带的证书（包含公钥、私钥即可），部署在 EO 节点，用于源站对 EO 节点进行认证。在作为入参使用时，不填写表示保持原有配置。
                     * @return UpstreamMutualTLS 在回源双向认证场景下，该字段为 EO 节点回源时携带的证书（包含公钥、私钥即可），部署在 EO 节点，用于源站对 EO 节点进行认证。在作为入参使用时，不填写表示保持原有配置。
                     * 
                     */
                    MutualTLS GetUpstreamMutualTLS() const;

                    /**
                     * 设置在回源双向认证场景下，该字段为 EO 节点回源时携带的证书（包含公钥、私钥即可），部署在 EO 节点，用于源站对 EO 节点进行认证。在作为入参使用时，不填写表示保持原有配置。
                     * @param _upstreamMutualTLS 在回源双向认证场景下，该字段为 EO 节点回源时携带的证书（包含公钥、私钥即可），部署在 EO 节点，用于源站对 EO 节点进行认证。在作为入参使用时，不填写表示保持原有配置。
                     * 
                     */
                    void SetUpstreamMutualTLS(const MutualTLS& _upstreamMutualTLS);

                    /**
                     * 判断参数 UpstreamMutualTLS 是否已赋值
                     * @return UpstreamMutualTLS 是否已赋值
                     * 
                     */
                    bool UpstreamMutualTLSHasBeenSet() const;

                private:

                    /**
                     * 在回源双向认证场景下，该字段为 EO 节点回源时携带的证书（包含公钥、私钥即可），部署在 EO 节点，用于源站对 EO 节点进行认证。在作为入参使用时，不填写表示保持原有配置。
                     */
                    MutualTLS m_upstreamMutualTLS;
                    bool m_upstreamMutualTLSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMCERTINFO_H_
