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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERPREAUDITDOMAIN_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERPREAUDITDOMAIN_H_

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
                * 管理人预审核的域名列表
                */
                class ManagerPreAuditDomain : public AbstractModel
                {
                public:
                    ManagerPreAuditDomain();
                    ~ManagerPreAuditDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预审核域名信息
                     * @return Domain 预审核域名信息
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置预审核域名信息
                     * @param _domain 预审核域名信息
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
                     * 获取预审核域名创建时间
                     * @return CreateTime 预审核域名创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置预审核域名创建时间
                     * @param _createTime 预审核域名创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取预审核域名过期时间
                     * @return ExpireTime 预审核域名过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置预审核域名过期时间
                     * @param _expireTime 预审核域名过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 预审核域名信息
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 预审核域名创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 预审核域名过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERPREAUDITDOMAIN_H_
