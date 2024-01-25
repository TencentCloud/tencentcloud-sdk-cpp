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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETESPARTAPROTECTIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETESPARTAPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteSpartaProtection请求参数结构体
                */
                class DeleteSpartaProtectionRequest : public AbstractModel
                {
                public:
                    DeleteSpartaProtectionRequest();
                    ~DeleteSpartaProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名列表
                     * @return Domains 域名列表
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名列表
                     * @param _domains 域名列表
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return Edition 实例类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置实例类型
                     * @param _edition 实例类型
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取必填项。域名所属实例ID
                     * @return InstanceID 必填项。域名所属实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置必填项。域名所属实例ID
                     * @param _instanceID 必填项。域名所属实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 域名列表
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 必填项。域名所属实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETESPARTAPROTECTIONREQUEST_H_
