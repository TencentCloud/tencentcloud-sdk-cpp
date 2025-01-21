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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_

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
                * 对象存储源站私有鉴权参数。
                */
                class OriginPrivateParameters : public AbstractModel
                {
                public:
                    OriginPrivateParameters();
                    ~OriginPrivateParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴权参数 Access Key ID。
                     * @return AccessKeyId 鉴权参数 Access Key ID。
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置鉴权参数 Access Key ID。
                     * @param _accessKeyId 鉴权参数 Access Key ID。
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取鉴权参数 Secret Access Key。
                     * @return SecretAccessKey 鉴权参数 Secret Access Key。
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置鉴权参数 Secret Access Key。
                     * @param _secretAccessKey 鉴权参数 Secret Access Key。
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取鉴权版本。取值有：
<li>v2：v2版本；</li>
<li>v4：v4版本。</li>
                     * @return SignatureVersion 鉴权版本。取值有：
<li>v2：v2版本；</li>
<li>v4：v4版本。</li>
                     * 
                     */
                    std::string GetSignatureVersion() const;

                    /**
                     * 设置鉴权版本。取值有：
<li>v2：v2版本；</li>
<li>v4：v4版本。</li>
                     * @param _signatureVersion 鉴权版本。取值有：
<li>v2：v2版本；</li>
<li>v4：v4版本。</li>
                     * 
                     */
                    void SetSignatureVersion(const std::string& _signatureVersion);

                    /**
                     * 判断参数 SignatureVersion 是否已赋值
                     * @return SignatureVersion 是否已赋值
                     * 
                     */
                    bool SignatureVersionHasBeenSet() const;

                    /**
                     * 获取存储桶地域。
                     * @return Region 存储桶地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置存储桶地域。
                     * @param _region 存储桶地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 鉴权参数 Access Key ID。
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 鉴权参数 Secret Access Key。
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * 鉴权版本。取值有：
<li>v2：v2版本；</li>
<li>v4：v4版本。</li>
                     */
                    std::string m_signatureVersion;
                    bool m_signatureVersionHasBeenSet;

                    /**
                     * 存储桶地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_
