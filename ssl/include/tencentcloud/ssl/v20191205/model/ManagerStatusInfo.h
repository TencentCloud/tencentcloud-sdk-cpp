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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERSTATUSINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ManagerPreAuditDomain.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 管理人的四种审核状态
                */
                class ManagerStatusInfo : public AbstractModel
                {
                public:
                    ManagerStatusInfo();
                    ~ManagerStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审核类型，枚举值：ov,ev
                     * @return Type 审核类型，枚举值：ov,ev
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置审核类型，枚举值：ov,ev
                     * @param _type 审核类型，枚举值：ov,ev
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取审核状态，枚举值：pending,completed,invalid,submitted,expiring,expired
                     * @return Status 审核状态，枚举值：pending,completed,invalid,submitted,expiring,expired
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置审核状态，枚举值：pending,completed,invalid,submitted,expiring,expired
                     * @param _status 审核状态，枚举值：pending,completed,invalid,submitted,expiring,expired
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取管理人预审核的域名列表
                     * @return ManagerPreAuditDomains 管理人预审核的域名列表
                     * 
                     */
                    std::vector<ManagerPreAuditDomain> GetManagerPreAuditDomains() const;

                    /**
                     * 设置管理人预审核的域名列表
                     * @param _managerPreAuditDomains 管理人预审核的域名列表
                     * 
                     */
                    void SetManagerPreAuditDomains(const std::vector<ManagerPreAuditDomain>& _managerPreAuditDomains);

                    /**
                     * 判断参数 ManagerPreAuditDomains 是否已赋值
                     * @return ManagerPreAuditDomains 是否已赋值
                     * 
                     */
                    bool ManagerPreAuditDomainsHasBeenSet() const;

                private:

                    /**
                     * 审核类型，枚举值：ov,ev
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 审核状态，枚举值：pending,completed,invalid,submitted,expiring,expired
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 管理人预审核的域名列表
                     */
                    std::vector<ManagerPreAuditDomain> m_managerPreAuditDomains;
                    bool m_managerPreAuditDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_MANAGERSTATUSINFO_H_
