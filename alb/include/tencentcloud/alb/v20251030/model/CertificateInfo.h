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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 证书信息
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书绑定时间。
                     * @return AssociatedTime 证书绑定时间。
                     * 
                     */
                    std::string GetAssociatedTime() const;

                    /**
                     * 设置证书绑定时间。
                     * @param _associatedTime 证书绑定时间。
                     * 
                     */
                    void SetAssociatedTime(const std::string& _associatedTime);

                    /**
                     * 判断参数 AssociatedTime 是否已赋值
                     * @return AssociatedTime 是否已赋值
                     * 
                     */
                    bool AssociatedTimeHasBeenSet() const;

                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certificateId 证书 ID。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书类型。取值：CA或SVR（服务器证书）。
                     * @return CertificateType 证书类型。取值：CA或SVR（服务器证书）。
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型。取值：CA或SVR（服务器证书）。
                     * @param _certificateType 证书类型。取值：CA或SVR（服务器证书）。
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取是否为监听器默认证书。取值：
true：默认证书。
false：扩展证书。
                     * @return IsDefault 是否为监听器默认证书。取值：
true：默认证书。
false：扩展证书。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为监听器默认证书。取值：
true：默认证书。
false：扩展证书。
                     * @param _isDefault 是否为监听器默认证书。取值：
true：默认证书。
false：扩展证书。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取证书与监听器的绑定状态。取值：Associated（已关联）、Associating（关联中）、Disassociating（解除关联中）、Error（异常）。
                     * @return Status 证书与监听器的绑定状态。取值：Associated（已关联）、Associating（关联中）、Disassociating（解除关联中）、Error（异常）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置证书与监听器的绑定状态。取值：Associated（已关联）、Associating（关联中）、Disassociating（解除关联中）、Error（异常）。
                     * @param _status 证书与监听器的绑定状态。取值：Associated（已关联）、Associating（关联中）、Disassociating（解除关联中）、Error（异常）。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 证书绑定时间。
                     */
                    std::string m_associatedTime;
                    bool m_associatedTimeHasBeenSet;

                    /**
                     * 证书 ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 证书类型。取值：CA或SVR（服务器证书）。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 是否为监听器默认证书。取值：
true：默认证书。
false：扩展证书。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 证书与监听器的绑定状态。取值：Associated（已关联）、Associating（关联中）、Disassociating（解除关联中）、Error（异常）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CERTIFICATEINFO_H_
