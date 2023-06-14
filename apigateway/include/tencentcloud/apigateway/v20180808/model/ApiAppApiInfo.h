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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 应用绑定的Api信息
                */
                class ApiAppApiInfo : public AbstractModel
                {
                public:
                    ApiAppApiInfo();
                    ~ApiAppApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiAppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiAppName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiAppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiAppName(const std::string& _apiAppName);

                    /**
                     * 判断参数 ApiAppName 是否已赋值
                     * @return ApiAppName 是否已赋值
                     * 
                     */
                    bool ApiAppNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApiAppId 应用ID
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置应用ID
                     * @param _apiAppId 应用ID
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取Api的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId Api的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Api的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId Api的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Api名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName Api名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置Api名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName Api名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取授权绑定时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizedTime 授权绑定时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthorizedTime() const;

                    /**
                     * 设置授权绑定时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorizedTime 授权绑定时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorizedTime(const std::string& _authorizedTime);

                    /**
                     * 判断参数 AuthorizedTime 是否已赋值
                     * @return AuthorizedTime 是否已赋值
                     * 
                     */
                    bool AuthorizedTimeHasBeenSet() const;

                    /**
                     * 获取Api所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiRegion Api所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiRegion() const;

                    /**
                     * 设置Api所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiRegion Api所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiRegion(const std::string& _apiRegion);

                    /**
                     * 判断参数 ApiRegion 是否已赋值
                     * @return ApiRegion 是否已赋值
                     * 
                     */
                    bool ApiRegionHasBeenSet() const;

                    /**
                     * 获取授权绑定的环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentName 授权绑定的环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置授权绑定的环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentName 授权绑定的环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                private:

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiAppName;
                    bool m_apiAppNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * Api的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Api名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 授权绑定时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authorizedTime;
                    bool m_authorizedTimeHasBeenSet;

                    /**
                     * Api所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiRegion;
                    bool m_apiRegionHasBeenSet;

                    /**
                     * 授权绑定的环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFO_H_
