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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_BGPPEER_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_BGPPEER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * bgp参数，包括CloudAsn，Asn，AuthKey
                */
                class BgpPeer : public AbstractModel
                {
                public:
                    BgpPeer();
                    ~BgpPeer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯侧BGP ASN
                     * @return CloudAsn 腾讯侧BGP ASN
                     * 
                     */
                    int64_t GetCloudAsn() const;

                    /**
                     * 设置腾讯侧BGP ASN
                     * @param _cloudAsn 腾讯侧BGP ASN
                     * 
                     */
                    void SetCloudAsn(const int64_t& _cloudAsn);

                    /**
                     * 判断参数 CloudAsn 是否已赋值
                     * @return CloudAsn 是否已赋值
                     * 
                     */
                    bool CloudAsnHasBeenSet() const;

                    /**
                     * 获取用户侧BGP ASN
                     * @return Asn 用户侧BGP ASN
                     * 
                     */
                    int64_t GetAsn() const;

                    /**
                     * 设置用户侧BGP ASN
                     * @param _asn 用户侧BGP ASN
                     * 
                     */
                    void SetAsn(const int64_t& _asn);

                    /**
                     * 判断参数 Asn 是否已赋值
                     * @return Asn 是否已赋值
                     * 
                     */
                    bool AsnHasBeenSet() const;

                    /**
                     * 获取用户侧BGP密钥
                     * @return AuthKey 用户侧BGP密钥
                     * 
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置用户侧BGP密钥
                     * @param _authKey 用户侧BGP密钥
                     * 
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     * 
                     */
                    bool AuthKeyHasBeenSet() const;

                private:

                    /**
                     * 腾讯侧BGP ASN
                     */
                    int64_t m_cloudAsn;
                    bool m_cloudAsnHasBeenSet;

                    /**
                     * 用户侧BGP ASN
                     */
                    int64_t m_asn;
                    bool m_asnHasBeenSet;

                    /**
                     * 用户侧BGP密钥
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_BGPPEER_H_
