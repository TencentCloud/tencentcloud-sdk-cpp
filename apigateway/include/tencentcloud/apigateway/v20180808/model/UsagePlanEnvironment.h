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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANENVIRONMENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANENVIRONMENT_H_

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
                * 使用计划绑定环境详情。
                */
                class UsagePlanEnvironment : public AbstractModel
                {
                public:
                    UsagePlanEnvironment();
                    ~UsagePlanEnvironment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取绑定的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 绑定的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置绑定的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 绑定的服务唯一 ID。
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
                     * 获取API 的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId API 的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API 的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId API 的唯一ID。
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
                     * 获取API 的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName API 的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API 的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName API 的名称。
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
                     * 获取API 的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path API 的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API 的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path API 的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API 的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method API 的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API 的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method API 的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取已经绑定的环境名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environment 已经绑定的环境名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置已经绑定的环境名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environment 已经绑定的环境名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取已经使用的配额。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InUseRequestNum 已经使用的配额。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInUseRequestNum() const;

                    /**
                     * 设置已经使用的配额。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inUseRequestNum 已经使用的配额。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInUseRequestNum(const int64_t& _inUseRequestNum);

                    /**
                     * 判断参数 InUseRequestNum 是否已赋值
                     * @return InUseRequestNum 是否已赋值
                     * 
                     */
                    bool InUseRequestNumHasBeenSet() const;

                    /**
                     * 获取最大请求量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestNum 最大请求量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置最大请求量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRequestNum 最大请求量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRequestNum(const int64_t& _maxRequestNum);

                    /**
                     * 判断参数 MaxRequestNum 是否已赋值
                     * @return MaxRequestNum 是否已赋值
                     * 
                     */
                    bool MaxRequestNumHasBeenSet() const;

                    /**
                     * 获取每秒最大请求次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestNumPreSec 每秒最大请求次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置每秒最大请求次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRequestNumPreSec 每秒最大请求次数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec);

                    /**
                     * 判断参数 MaxRequestNumPreSec 是否已赋值
                     * @return MaxRequestNumPreSec 是否已赋值
                     * 
                     */
                    bool MaxRequestNumPreSecHasBeenSet() const;

                    /**
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 绑定的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API 的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API 的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API 的路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API 的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 已经绑定的环境名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 已经使用的配额。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_inUseRequestNum;
                    bool m_inUseRequestNumHasBeenSet;

                    /**
                     * 最大请求量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * 每秒最大请求次数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 服务名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANENVIRONMENT_H_
