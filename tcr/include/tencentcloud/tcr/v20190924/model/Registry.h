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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例信息结构体
                */
                class Registry : public AbstractModel
                {
                public:
                    Registry();
                    ~Registry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param RegistryId 实例ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return RegistryName 实例名称
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置实例名称
                     * @param RegistryName 实例名称
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取实例规格
                     * @return RegistryType 实例规格
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置实例规格
                     * @param RegistryType 实例规格
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param Status 实例状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例的公共访问地址
                     * @return PublicDomain 实例的公共访问地址
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置实例的公共访问地址
                     * @param PublicDomain 实例的公共访问地址
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreatedAt 实例创建时间
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置实例创建时间
                     * @param CreatedAt 实例创建时间
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param RegionName 地域名称
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地域Id
                     * @return RegionId 地域Id
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域Id
                     * @param RegionId 地域Id
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取是否支持匿名
                     * @return EnableAnonymous 是否支持匿名
                     */
                    bool GetEnableAnonymous() const;

                    /**
                     * 设置是否支持匿名
                     * @param EnableAnonymous 是否支持匿名
                     */
                    void SetEnableAnonymous(const bool& _enableAnonymous);

                    /**
                     * 判断参数 EnableAnonymous 是否已赋值
                     * @return EnableAnonymous 是否已赋值
                     */
                    bool EnableAnonymousHasBeenSet() const;

                    /**
                     * 获取Token有效时间
                     * @return TokenValidTime Token有效时间
                     */
                    uint64_t GetTokenValidTime() const;

                    /**
                     * 设置Token有效时间
                     * @param TokenValidTime Token有效时间
                     */
                    void SetTokenValidTime(const uint64_t& _tokenValidTime);

                    /**
                     * 判断参数 TokenValidTime 是否已赋值
                     * @return TokenValidTime 是否已赋值
                     */
                    bool TokenValidTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * 实例规格
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例的公共访问地址
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域Id
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 是否支持匿名
                     */
                    bool m_enableAnonymous;
                    bool m_enableAnonymousHasBeenSet;

                    /**
                     * Token有效时间
                     */
                    uint64_t m_tokenValidTime;
                    bool m_tokenValidTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
