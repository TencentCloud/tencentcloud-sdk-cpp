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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 返回的授权关系信息。
                */
                class AuthorizationInfo : public AbstractModel
                {
                public:
                    AuthorizationInfo();
                    ~AuthorizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用唯一ID。
                     * @return AppId 应用唯一ID。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用唯一ID。
                     * @param _appId 应用唯一ID。
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取类型名称。
                     * @return EntityName 类型名称。
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置类型名称。
                     * @param _entityName 类型名称。
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取类型唯一ID。
                     * @return EntityId 类型唯一ID。
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置类型唯一ID。
                     * @param _entityId 类型唯一ID。
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取上次更新时间，符合 ISO8601 标准。
                     * @return LastModifiedDate 上次更新时间，符合 ISO8601 标准。
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置上次更新时间，符合 ISO8601 标准。
                     * @param _lastModifiedDate 上次更新时间，符合 ISO8601 标准。
                     * 
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取授权类型唯一ID。
                     * @return AuthorizationId 授权类型唯一ID。
                     * 
                     */
                    std::string GetAuthorizationId() const;

                    /**
                     * 设置授权类型唯一ID。
                     * @param _authorizationId 授权类型唯一ID。
                     * 
                     */
                    void SetAuthorizationId(const std::string& _authorizationId);

                    /**
                     * 判断参数 AuthorizationId 是否已赋值
                     * @return AuthorizationId 是否已赋值
                     * 
                     */
                    bool AuthorizationIdHasBeenSet() const;

                private:

                    /**
                     * 应用唯一ID。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 类型名称。
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * 类型唯一ID。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 上次更新时间，符合 ISO8601 标准。
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * 授权类型唯一ID。
                     */
                    std::string m_authorizationId;
                    bool m_authorizationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONINFO_H_
