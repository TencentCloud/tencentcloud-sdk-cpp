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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_GRANTRESOURCEOPERATIONBYACCOUNTS_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_GRANTRESOURCEOPERATIONBYACCOUNTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 授权操作
                */
                class GrantResourceOperationByAccounts : public AbstractModel
                {
                public:
                    GrantResourceOperationByAccounts();
                    ~GrantResourceOperationByAccounts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型: 1-增加授权 2-删除授权;
                     * @return OperationType 操作类型: 1-增加授权 2-删除授权;
                     * 
                     */
                    uint64_t GetOperationType() const;

                    /**
                     * 设置操作类型: 1-增加授权 2-删除授权;
                     * @param _operationType 操作类型: 1-增加授权 2-删除授权;
                     * 
                     */
                    void SetOperationType(const uint64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取资源或资源组Id
                     * @return ResourceId 资源或资源组Id
                     * 
                     */
                    uint64_t GetResourceId() const;

                    /**
                     * 设置资源或资源组Id
                     * @param _resourceId 资源或资源组Id
                     * 
                     */
                    void SetResourceId(const uint64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型 ,1:资源 2:资源组
                     * @return ResourceType 资源类型 ,1:资源 2:资源组
                     * 
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置资源类型 ,1:资源 2:资源组
                     * @param _resourceType 资源类型 ,1:资源 2:资源组
                     * 
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取过期时间,时间戳(秒)
                     * @return ExpireTime 过期时间,时间戳(秒)
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置过期时间,时间戳(秒)
                     * @param _expireTime 过期时间,时间戳(秒)
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取账号userid
                     * @return AccountUserId 账号userid
                     * 
                     */
                    std::string GetAccountUserId() const;

                    /**
                     * 设置账号userid
                     * @param _accountUserId 账号userid
                     * 
                     */
                    void SetAccountUserId(const std::string& _accountUserId);

                    /**
                     * 判断参数 AccountUserId 是否已赋值
                     * @return AccountUserId 是否已赋值
                     * 
                     */
                    bool AccountUserIdHasBeenSet() const;

                    /**
                     * 获取账号目录ID
                     * @return MenuId 账号目录ID
                     * 
                     */
                    uint64_t GetMenuId() const;

                    /**
                     * 设置账号目录ID
                     * @param _menuId 账号目录ID
                     * 
                     */
                    void SetMenuId(const uint64_t& _menuId);

                    /**
                     * 判断参数 MenuId 是否已赋值
                     * @return MenuId 是否已赋值
                     * 
                     */
                    bool MenuIdHasBeenSet() const;

                private:

                    /**
                     * 操作类型: 1-增加授权 2-删除授权;
                     */
                    uint64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 资源或资源组Id
                     */
                    uint64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型 ,1:资源 2:资源组
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 过期时间,时间戳(秒)
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 账号userid
                     */
                    std::string m_accountUserId;
                    bool m_accountUserIdHasBeenSet;

                    /**
                     * 账号目录ID
                     */
                    uint64_t m_menuId;
                    bool m_menuIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_GRANTRESOURCEOPERATIONBYACCOUNTS_H_
