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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDAPIINFO_H_

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
                * 插件绑定的API信息
                */
                class AttachedApiInfo : public AbstractModel
                {
                public:
                    AttachedApiInfo();
                    ~AttachedApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API所在服务ID。
                     * @return ServiceId API所在服务ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置API所在服务ID。
                     * @param _serviceId API所在服务ID。
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
                     * 获取API所在服务名称。
                     * @return ServiceName API所在服务名称。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置API所在服务名称。
                     * @param _serviceName API所在服务名称。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取API所在服务描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDesc API所在服务描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置API所在服务描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDesc API所在服务描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取API ID。
                     * @return ApiId API ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID。
                     * @param _apiId API ID。
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
                     * 获取API名称。
                     * @return ApiName API名称。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API名称。
                     * @param _apiName API名称。
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
                     * 获取API描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiDesc API描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiDesc API描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取插件绑定API的环境。
                     * @return Environment 插件绑定API的环境。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置插件绑定API的环境。
                     * @param _environment 插件绑定API的环境。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取插件和API绑定时间。
                     * @return AttachedTime 插件和API绑定时间。
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置插件和API绑定时间。
                     * @param _attachedTime 插件和API绑定时间。
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                private:

                    /**
                     * API所在服务ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API所在服务名称。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * API所在服务描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * API ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API名称。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * 插件绑定API的环境。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 插件和API绑定时间。
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDAPIINFO_H_
