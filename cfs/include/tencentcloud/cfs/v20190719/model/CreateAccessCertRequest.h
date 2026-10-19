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
                     * 获取<p>证书描述，不超过64字符</p>
                     * @return CertDesc <p>证书描述，不超过64字符</p>
                     * 
                     */
                    std::string GetCertDesc() const;

                    /**
                     * 设置<p>证书描述，不超过64字符</p>
                     * @param _certDesc <p>证书描述，不超过64字符</p>
                     * 
                     */
                    void SetCertDesc(const std::string& _certDesc);

                    /**
                     * 判断参数 CertDesc 是否已赋值
                     * @return CertDesc 是否已赋值
                     * 
                     */
                    bool CertDescHasBeenSet() const;

                    /**
                     * 获取<p>凭证类型</p><p>枚举值：</p><ul><li>ssh： 通用系列文件系统凭证</li><li>gss： Turbo系列文件系统凭证</li></ul><p>默认值：ssh</p>
                     * @return Type <p>凭证类型</p><p>枚举值：</p><ul><li>ssh： 通用系列文件系统凭证</li><li>gss： Turbo系列文件系统凭证</li></ul><p>默认值：ssh</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>凭证类型</p><p>枚举值：</p><ul><li>ssh： 通用系列文件系统凭证</li><li>gss： Turbo系列文件系统凭证</li></ul><p>默认值：ssh</p>
                     * @param _type <p>凭证类型</p><p>枚举值：</p><ul><li>ssh： 通用系列文件系统凭证</li><li>gss： Turbo系列文件系统凭证</li></ul><p>默认值：ssh</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>证书描述，不超过64字符</p>
                     */
                    std::string m_certDesc;
                    bool m_certDescHasBeenSet;

                    /**
                     * <p>凭证类型</p><p>枚举值：</p><ul><li>ssh： 通用系列文件系统凭证</li><li>gss： Turbo系列文件系统凭证</li></ul><p>默认值：ssh</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEACCESSCERTREQUEST_H_
