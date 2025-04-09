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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongCertificatesPreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关证书
                */
                class KongCertificate : public AbstractModel
                {
                public:
                    KongCertificate();
                    ~KongCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取无
                     * @return Cert 无
                     * 
                     */
                    KongCertificatesPreview GetCert() const;

                    /**
                     * 设置无
                     * @param _cert 无
                     * 
                     */
                    void SetCert(const KongCertificatesPreview& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    KongCertificatesPreview m_cert;
                    bool m_certHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATE_H_
