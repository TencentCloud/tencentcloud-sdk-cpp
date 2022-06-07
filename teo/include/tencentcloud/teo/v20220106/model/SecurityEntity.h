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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYENTITY_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 安全防护实例
                */
                class SecurityEntity : public AbstractModel
                {
                public:
                    SecurityEntity();
                    ~SecurityEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param AppId 用户appid
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取一级域名
                     * @return ZoneId 一级域名
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置一级域名
                     * @param ZoneId 一级域名
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取二级域名
                     * @return Entity 二级域名
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置二级域名
                     * @param Entity 二级域名
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取类型 domain/application
                     * @return EntityType 类型 domain/application
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置类型 domain/application
                     * @param EntityType 类型 domain/application
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                private:

                    /**
                     * 用户appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 一级域名
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 二级域名
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 类型 domain/application
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SECURITYENTITY_H_
