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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DOMAIN_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 网络域
                */
                class Domain : public AbstractModel
                {
                public:
                    Domain();
                    ~Domain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自增id
                     * @return Id 自增id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置自增id
                     * @param _id 自增id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取网络域id
                     * @return DomainId 网络域id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域id
                     * @param _domainId 网络域id
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取网络域名称
                     * @return DomainName 网络域名称
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置网络域名称
                     * @param _domainName 网络域名称
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取堡垒机id
                     * @return ResourceId 堡垒机id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机id
                     * @param _resourceId 堡垒机id
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
                     * 获取ip，网段
                     * @return WhiteIpSet ip，网段
                     * 
                     */
                    std::vector<std::string> GetWhiteIpSet() const;

                    /**
                     * 设置ip，网段
                     * @param _whiteIpSet ip，网段
                     * 
                     */
                    void SetWhiteIpSet(const std::vector<std::string>& _whiteIpSet);

                    /**
                     * 判断参数 WhiteIpSet 是否已赋值
                     * @return WhiteIpSet 是否已赋值
                     * 
                     */
                    bool WhiteIpSetHasBeenSet() const;

                    /**
                     * 获取是否启用  默认 1启用 0禁用
                     * @return Enabled 是否启用  默认 1启用 0禁用
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置是否启用  默认 1启用 0禁用
                     * @param _enabled 是否启用  默认 1启用 0禁用
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取状态 0-已断开  1-已连接
                     * @return Status 状态 0-已断开  1-已连接
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态 0-已断开  1-已连接
                     * @param _status 状态 0-已断开  1-已连接
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网络域创建时间
                     * @return CreateTime 网络域创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置网络域创建时间
                     * @param _createTime 网络域创建时间
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
                     * 获取是否资源默认网络域 1-资源默认网络域 0-用户添加网络域
                     * @return Default 是否资源默认网络域 1-资源默认网络域 0-用户添加网络域
                     * 
                     */
                    uint64_t GetDefault() const;

                    /**
                     * 设置是否资源默认网络域 1-资源默认网络域 0-用户添加网络域
                     * @param _default 是否资源默认网络域 1-资源默认网络域 0-用户添加网络域
                     * 
                     */
                    void SetDefault(const uint64_t& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * 自增id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 网络域id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 网络域名称
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 堡垒机id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * ip，网段
                     */
                    std::vector<std::string> m_whiteIpSet;
                    bool m_whiteIpSetHasBeenSet;

                    /**
                     * 是否启用  默认 1启用 0禁用
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 状态 0-已断开  1-已连接
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网络域创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否资源默认网络域 1-资源默认网络域 0-用户添加网络域
                     */
                    uint64_t m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DOMAIN_H_
