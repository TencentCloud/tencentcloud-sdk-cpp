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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * TCB访问服务实例
                */
                class TCBAccessInstance : public AbstractModel
                {
                public:
                    TCBAccessInstance();
                    ~TCBAccessInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取统一域名状态

                     * @return UnionStatus 统一域名状态

                     * 
                     */
                    int64_t GetUnionStatus() const;

                    /**
                     * 设置统一域名状态

                     * @param _unionStatus 统一域名状态

                     * 
                     */
                    void SetUnionStatus(const int64_t& _unionStatus);

                    /**
                     * 判断参数 UnionStatus 是否已赋值
                     * @return UnionStatus 是否已赋值
                     * 
                     */
                    bool UnionStatusHasBeenSet() const;

                    /**
                     * 获取是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。

                     * @return IsPreempted 是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。

                     * 
                     */
                    bool GetIsPreempted() const;

                    /**
                     * 设置是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。

                     * @param _isPreempted 是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。

                     * 
                     */
                    void SetIsPreempted(const bool& _isPreempted);

                    /**
                     * 判断参数 IsPreempted 是否已赋值
                     * @return IsPreempted 是否已赋值
                     * 
                     */
                    bool IsPreemptedHasBeenSet() const;

                    /**
                     * 获取icp黑名单封禁状态，0-未封禁，1-封禁

                     * @return ICPStatus icp黑名单封禁状态，0-未封禁，1-封禁

                     * 
                     */
                    int64_t GetICPStatus() const;

                    /**
                     * 设置icp黑名单封禁状态，0-未封禁，1-封禁

                     * @param _iCPStatus icp黑名单封禁状态，0-未封禁，1-封禁

                     * 
                     */
                    void SetICPStatus(const int64_t& _iCPStatus);

                    /**
                     * 判断参数 ICPStatus 是否已赋值
                     * @return ICPStatus 是否已赋值
                     * 
                     */
                    bool ICPStatusHasBeenSet() const;

                    /**
                     * 获取已绑定证书ID
                     * @return OldCertificateId 已绑定证书ID
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置已绑定证书ID
                     * @param _oldCertificateId 已绑定证书ID
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 统一域名状态

                     */
                    int64_t m_unionStatus;
                    bool m_unionStatusHasBeenSet;

                    /**
                     * 是否被抢占, 被抢占表示域名被其他环境绑定了，需要解绑或者重新绑定。

                     */
                    bool m_isPreempted;
                    bool m_isPreemptedHasBeenSet;

                    /**
                     * icp黑名单封禁状态，0-未封禁，1-封禁

                     */
                    int64_t m_iCPStatus;
                    bool m_iCPStatusHasBeenSet;

                    /**
                     * 已绑定证书ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBACCESSINSTANCE_H_
