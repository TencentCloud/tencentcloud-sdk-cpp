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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUSINFO_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 设置凭证状态信息
                */
                class CredentialStatusInfo : public AbstractModel
                {
                public:
                    CredentialStatusInfo();
                    ~CredentialStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭证唯一id
                     * @return Id 凭证唯一id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置凭证唯一id
                     * @param _id 凭证唯一id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取凭证状态（0：吊销；1：有效）
                     * @return Issuer 凭证状态（0：吊销；1：有效）
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置凭证状态（0：吊销；1：有效）
                     * @param _issuer 凭证状态（0：吊销；1：有效）
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取凭证颁发者Did
                     * @return Status 凭证颁发者Did
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置凭证颁发者Did
                     * @param _status 凭证颁发者Did
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 凭证唯一id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 凭证状态（0：吊销；1：有效）
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 凭证颁发者Did
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREDENTIALSTATUSINFO_H_
