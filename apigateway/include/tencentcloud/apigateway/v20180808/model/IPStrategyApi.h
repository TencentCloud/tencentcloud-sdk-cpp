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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGYAPI_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGYAPI_H_

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
                * 策略绑定api列表
                */
                class IPStrategyApi : public AbstractModel
                {
                public:
                    IPStrategyApi();
                    ~IPStrategyApi() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 唯一 ID。
                     * @return ApiId API 唯一 ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API 唯一 ID。
                     * @param _apiId API 唯一 ID。
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
                     * 获取用户自定义的 API 名称。
                     * @return ApiName 用户自定义的 API 名称。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置用户自定义的 API 名称。
                     * @param _apiName 用户自定义的 API 名称。
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
                     * 获取API 类型。取值为NORMAL（普通API）和TSF （微服务API）。
                     * @return ApiType API 类型。取值为NORMAL（普通API）和TSF （微服务API）。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API 类型。取值为NORMAL（普通API）和TSF （微服务API）。
                     * @param _apiType API 类型。取值为NORMAL（普通API）和TSF （微服务API）。
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API 的路径。如 /path。
                     * @return Path API 的路径。如 /path。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API 的路径。如 /path。
                     * @param _path API 的路径。如 /path。
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
                     * 获取API 的请求方法。如 GET。
                     * @return Method API 的请求方法。如 GET。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API 的请求方法。如 GET。
                     * @param _method API 的请求方法。如 GET。
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
                     * 获取API 已经绑定的其他策略唯一ID。
                     * @return OtherIPStrategyId API 已经绑定的其他策略唯一ID。
                     * 
                     */
                    std::string GetOtherIPStrategyId() const;

                    /**
                     * 设置API 已经绑定的其他策略唯一ID。
                     * @param _otherIPStrategyId API 已经绑定的其他策略唯一ID。
                     * 
                     */
                    void SetOtherIPStrategyId(const std::string& _otherIPStrategyId);

                    /**
                     * 判断参数 OtherIPStrategyId 是否已赋值
                     * @return OtherIPStrategyId 是否已赋值
                     * 
                     */
                    bool OtherIPStrategyIdHasBeenSet() const;

                    /**
                     * 获取API 已经绑定的环境。
                     * @return OtherEnvironmentName API 已经绑定的环境。
                     * 
                     */
                    std::string GetOtherEnvironmentName() const;

                    /**
                     * 设置API 已经绑定的环境。
                     * @param _otherEnvironmentName API 已经绑定的环境。
                     * 
                     */
                    void SetOtherEnvironmentName(const std::string& _otherEnvironmentName);

                    /**
                     * 判断参数 OtherEnvironmentName 是否已赋值
                     * @return OtherEnvironmentName 是否已赋值
                     * 
                     */
                    bool OtherEnvironmentNameHasBeenSet() const;

                private:

                    /**
                     * API 唯一 ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 用户自定义的 API 名称。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API 类型。取值为NORMAL（普通API）和TSF （微服务API）。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API 的路径。如 /path。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API 的请求方法。如 GET。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * API 已经绑定的其他策略唯一ID。
                     */
                    std::string m_otherIPStrategyId;
                    bool m_otherIPStrategyIdHasBeenSet;

                    /**
                     * API 已经绑定的环境。
                     */
                    std::string m_otherEnvironmentName;
                    bool m_otherEnvironmentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IPSTRATEGYAPI_H_
