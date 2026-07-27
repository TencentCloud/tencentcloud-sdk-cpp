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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/OwnershipVerificationDnsInfo.h>
#include <tencentcloud/tcb/v20180608/model/OwnershipVerificationFileInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 域名归属权验证指引信息
                */
                class OwnershipVerificationInfo : public AbstractModel
                {
                public:
                    OwnershipVerificationInfo();
                    ~OwnershipVerificationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>归属权校验的域名</p>
                     * @return Domain <p>归属权校验的域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>归属权校验的域名</p>
                     * @param _domain <p>归属权校验的域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>归属权校验dns校验信息</p>
                     * @return DnsVerification <p>归属权校验dns校验信息</p>
                     * 
                     */
                    std::vector<OwnershipVerificationDnsInfo> GetDnsVerification() const;

                    /**
                     * 设置<p>归属权校验dns校验信息</p>
                     * @param _dnsVerification <p>归属权校验dns校验信息</p>
                     * 
                     */
                    void SetDnsVerification(const std::vector<OwnershipVerificationDnsInfo>& _dnsVerification);

                    /**
                     * 判断参数 DnsVerification 是否已赋值
                     * @return DnsVerification 是否已赋值
                     * 
                     */
                    bool DnsVerificationHasBeenSet() const;

                    /**
                     * 获取<p>归属权校验文件校验信息</p>
                     * @return FileVerification <p>归属权校验文件校验信息</p>
                     * 
                     */
                    std::vector<OwnershipVerificationFileInfo> GetFileVerification() const;

                    /**
                     * 设置<p>归属权校验文件校验信息</p>
                     * @param _fileVerification <p>归属权校验文件校验信息</p>
                     * 
                     */
                    void SetFileVerification(const std::vector<OwnershipVerificationFileInfo>& _fileVerification);

                    /**
                     * 判断参数 FileVerification 是否已赋值
                     * @return FileVerification 是否已赋值
                     * 
                     */
                    bool FileVerificationHasBeenSet() const;

                private:

                    /**
                     * <p>归属权校验的域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>归属权校验dns校验信息</p>
                     */
                    std::vector<OwnershipVerificationDnsInfo> m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * <p>归属权校验文件校验信息</p>
                     */
                    std::vector<OwnershipVerificationFileInfo> m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_OWNERSHIPVERIFICATIONINFO_H_
