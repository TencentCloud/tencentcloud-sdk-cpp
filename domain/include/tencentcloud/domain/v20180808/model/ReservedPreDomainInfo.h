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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAININFO_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 预约预释放域名详情信息
                */
                class ReservedPreDomainInfo : public AbstractModel
                {
                public:
                    ReservedPreDomainInfo();
                    ~ReservedPreDomainInfo() = default;
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
                     * 获取1. 预定成功 2. 预定失败（预定失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成
                     * @return ReservedStatus 1. 预定成功 2. 预定失败（预定失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成
                     * 
                     */
                    int64_t GetReservedStatus() const;

                    /**
                     * 设置1. 预定成功 2. 预定失败（预定失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成
                     * @param _reservedStatus 1. 预定成功 2. 预定失败（预定失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成
                     * 
                     */
                    void SetReservedStatus(const int64_t& _reservedStatus);

                    /**
                     * 判断参数 ReservedStatus 是否已赋值
                     * @return ReservedStatus 是否已赋值
                     * 
                     */
                    bool ReservedStatusHasBeenSet() const;

                    /**
                     * 获取域名预定失败原因
                     * @return FailReason 域名预定失败原因
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置域名预定失败原因
                     * @param _failReason 域名预定失败原因
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取预计变更所有权时间（仅用于参考，实际时间会存在误差）
                     * @return ChangeOwnerTime 预计变更所有权时间（仅用于参考，实际时间会存在误差）
                     * 
                     */
                    std::string GetChangeOwnerTime() const;

                    /**
                     * 设置预计变更所有权时间（仅用于参考，实际时间会存在误差）
                     * @param _changeOwnerTime 预计变更所有权时间（仅用于参考，实际时间会存在误差）
                     * 
                     */
                    void SetChangeOwnerTime(const std::string& _changeOwnerTime);

                    /**
                     * 判断参数 ChangeOwnerTime 是否已赋值
                     * @return ChangeOwnerTime 是否已赋值
                     * 
                     */
                    bool ChangeOwnerTimeHasBeenSet() const;

                    /**
                     * 获取注册时间
                     * @return RegTime 注册时间
                     * 
                     */
                    std::string GetRegTime() const;

                    /**
                     * 设置注册时间
                     * @param _regTime 注册时间
                     * 
                     */
                    void SetRegTime(const std::string& _regTime);

                    /**
                     * 判断参数 RegTime 是否已赋值
                     * @return RegTime 是否已赋值
                     * 
                     */
                    bool RegTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireTime 到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
                     * @param _expireTime 到期时间
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
                     * 获取资源ID，用于删除资源信息
                     * @return ResourceId 资源ID，用于删除资源信息
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，用于删除资源信息
                     * @param _resourceId 资源ID，用于删除资源信息
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取业务ID
                     * @return BusinessId 业务ID
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务ID
                     * @param _businessId 业务ID
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 1. 预定成功 2. 预定失败（预定失败Reason字段将会被赋值）3. 域名交割中 4. 域名交割完成
                     */
                    int64_t m_reservedStatus;
                    bool m_reservedStatusHasBeenSet;

                    /**
                     * 域名预定失败原因
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * 预计变更所有权时间（仅用于参考，实际时间会存在误差）
                     */
                    std::string m_changeOwnerTime;
                    bool m_changeOwnerTimeHasBeenSet;

                    /**
                     * 注册时间
                     */
                    std::string m_regTime;
                    bool m_regTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源ID，用于删除资源信息
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 业务ID
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAININFO_H_
