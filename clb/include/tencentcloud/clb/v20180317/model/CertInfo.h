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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 证书信息
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书 ID，如果不填写此项则必须上传证书内容，包括CertName, CertContent，若为服务端证书必须包含CertKey。
                     * @return CertId 证书 ID，如果不填写此项则必须上传证书内容，包括CertName, CertContent，若为服务端证书必须包含CertKey。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书 ID，如果不填写此项则必须上传证书内容，包括CertName, CertContent，若为服务端证书必须包含CertKey。
                     * @param _certId 证书 ID，如果不填写此项则必须上传证书内容，包括CertName, CertContent，若为服务端证书必须包含CertKey。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取上传证书的名称，如果没有 CertId，则此项必传。
                     * @return CertName 上传证书的名称，如果没有 CertId，则此项必传。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置上传证书的名称，如果没有 CertId，则此项必传。
                     * @param _certName 上传证书的名称，如果没有 CertId，则此项必传。
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取上传证书的公钥；如果没有 CertId，则此项必传。
                     * @return CertContent 上传证书的公钥；如果没有 CertId，则此项必传。
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置上传证书的公钥；如果没有 CertId，则此项必传。
                     * @param _certContent 上传证书的公钥；如果没有 CertId，则此项必传。
                     * 
                     */
                    void SetCertContent(const std::string& _certContent);

                    /**
                     * 判断参数 CertContent 是否已赋值
                     * @return CertContent 是否已赋值
                     * 
                     */
                    bool CertContentHasBeenSet() const;

                    /**
                     * 获取上传服务端证书的私钥；如果没有 CertId，则此项必传。
                     * @return CertKey 上传服务端证书的私钥；如果没有 CertId，则此项必传。
                     * 
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置上传服务端证书的私钥；如果没有 CertId，则此项必传。
                     * @param _certKey 上传服务端证书的私钥；如果没有 CertId，则此项必传。
                     * 
                     */
                    void SetCertKey(const std::string& _certKey);

                    /**
                     * 判断参数 CertKey 是否已赋值
                     * @return CertKey 是否已赋值
                     * 
                     */
                    bool CertKeyHasBeenSet() const;

                private:

                    /**
                     * 证书 ID，如果不填写此项则必须上传证书内容，包括CertName, CertContent，若为服务端证书必须包含CertKey。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 上传证书的名称，如果没有 CertId，则此项必传。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 上传证书的公钥；如果没有 CertId，则此项必传。
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * 上传服务端证书的私钥；如果没有 CertId，则此项必传。
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTINFO_H_
