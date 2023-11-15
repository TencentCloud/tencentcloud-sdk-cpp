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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLAN_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * api或service绑定使用计划详情
                */
                class ApiUsagePlan : public AbstractModel
                {
                public:
                    ApiUsagePlan();
                    ~ApiUsagePlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 服务唯一ID。
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
                     * 获取API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId API 唯一 ID。
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
                     * 获取API 名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName API 名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API 名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName API 名称。
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
                     * 获取API 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path API 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path API 路径。
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
                     * 获取API 方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method API 方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API 方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method API 方法。
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
                     * 获取使用计划的唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanId 使用计划的唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置使用计划的唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanId 使用计划的唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取使用计划的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanName 使用计划的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanName() const;

                    /**
                     * 设置使用计划的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanName 使用计划的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePlanName(const std::string& _usagePlanName);

                    /**
                     * 判断参数 UsagePlanName 是否已赋值
                     * @return UsagePlanName 是否已赋值
                     * 
                     */
                    bool UsagePlanNameHasBeenSet() const;

                    /**
                     * 获取使用计划的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsagePlanDesc 使用计划的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsagePlanDesc() const;

                    /**
                     * 设置使用计划的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usagePlanDesc 使用计划的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsagePlanDesc(const std::string& _usagePlanDesc);

                    /**
                     * 判断参数 UsagePlanDesc 是否已赋值
                     * @return UsagePlanDesc 是否已赋值
                     * 
                     */
                    bool UsagePlanDescHasBeenSet() const;

                    /**
                     * 获取使用计划绑定的服务环境。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environment 使用计划绑定的服务环境。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置使用计划绑定的服务环境。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environment 使用计划绑定的服务环境。
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
                     * 获取请求配额总量，-1表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestNum 请求配额总量，-1表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRequestNum() const;

                    /**
                     * 设置请求配额总量，-1表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRequestNum 请求配额总量，-1表示没有限制。
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
                     * 获取请求 QPS 上限，-1 表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRequestNumPreSec 请求 QPS 上限，-1 表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRequestNumPreSec() const;

                    /**
                     * 设置请求 QPS 上限，-1 表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRequestNumPreSec 请求 QPS 上限，-1 表示没有限制。
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
                     * 获取使用计划创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 使用计划创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置使用计划创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 使用计划创建时间。
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
                     * 获取使用计划最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 使用计划最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置使用计划最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 使用计划最后修改时间。
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

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API 名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API 路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API 方法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 使用计划的唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * 使用计划的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanName;
                    bool m_usagePlanNameHasBeenSet;

                    /**
                     * 使用计划的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usagePlanDesc;
                    bool m_usagePlanDescHasBeenSet;

                    /**
                     * 使用计划绑定的服务环境。
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
                     * 请求配额总量，-1表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestNum;
                    bool m_maxRequestNumHasBeenSet;

                    /**
                     * 请求 QPS 上限，-1 表示没有限制。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRequestNumPreSec;
                    bool m_maxRequestNumPreSecHasBeenSet;

                    /**
                     * 使用计划创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 使用计划最后修改时间。
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

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLAN_H_
