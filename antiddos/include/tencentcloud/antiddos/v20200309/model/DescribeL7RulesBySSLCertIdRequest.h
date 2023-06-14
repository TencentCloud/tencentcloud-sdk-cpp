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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEL7RULESBYSSLCERTIDREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEL7RULESBYSSLCERTIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeL7RulesBySSLCertId请求参数结构体
                */
                class DescribeL7RulesBySSLCertIdRequest : public AbstractModel
                {
                public:
                    DescribeL7RulesBySSLCertIdRequest();
                    ~DescribeL7RulesBySSLCertIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名状态，可取bindable, binded, opened, closed, all，all表示全部状态
                     * @return Status 域名状态，可取bindable, binded, opened, closed, all，all表示全部状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名状态，可取bindable, binded, opened, closed, all，all表示全部状态
                     * @param _status 域名状态，可取bindable, binded, opened, closed, all，all表示全部状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书ID列表
                     * @return CertIds 证书ID列表
                     * 
                     */
                    std::vector<std::string> GetCertIds() const;

                    /**
                     * 设置证书ID列表
                     * @param _certIds 证书ID列表
                     * 
                     */
                    void SetCertIds(const std::vector<std::string>& _certIds);

                    /**
                     * 判断参数 CertIds 是否已赋值
                     * @return CertIds 是否已赋值
                     * 
                     */
                    bool CertIdsHasBeenSet() const;

                private:

                    /**
                     * 域名状态，可取bindable, binded, opened, closed, all，all表示全部状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书ID列表
                     */
                    std::vector<std::string> m_certIds;
                    bool m_certIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEL7RULESBYSSLCERTIDREQUEST_H_
