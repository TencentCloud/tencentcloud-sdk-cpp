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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateAccessCert请求参数结构体
                */
                class CreateAccessCertRequest : public AbstractModel
                {
                public:
                    CreateAccessCertRequest();
                    ~CreateAccessCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书描述，不超过64字符
                     * @return CertDesc 证书描述，不超过64字符
                     * 
                     */
                    std::string GetCertDesc() const;

                    /**
                     * 设置证书描述，不超过64字符
                     * @param _certDesc 证书描述，不超过64字符
                     * 
                     */
                    void SetCertDesc(const std::string& _certDesc);

                    /**
                     * 判断参数 CertDesc 是否已赋值
                     * @return CertDesc 是否已赋值
                     * 
                     */
                    bool CertDescHasBeenSet() const;

                private:

                    /**
                     * 证书描述，不超过64字符
                     */
                    std::string m_certDesc;
                    bool m_certDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTREQUEST_H_
