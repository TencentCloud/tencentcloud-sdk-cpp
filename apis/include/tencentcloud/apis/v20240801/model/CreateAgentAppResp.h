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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPRESP_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 创建Agent应用的返回值，根据创建的AuthType，返回ApiKey或者SecretKey
                */
                class CreateAgentAppResp : public AbstractModel
                {
                public:
                    CreateAgentAppResp();
                    ~CreateAgentAppResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取app id 
                     * @return ID app id 
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置app id 
                     * @param _iD app id 
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取如果authType为apiKey时，返回该字段
                     * @return ApiKey 如果authType为apiKey时，返回该字段
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置如果authType为apiKey时，返回该字段
                     * @param _apiKey 如果authType为apiKey时，返回该字段
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取如果authType为secretKey时，返回该字段
                     * @return SecretKey 如果authType为secretKey时，返回该字段
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置如果authType为secretKey时，返回该字段
                     * @param _secretKey 如果authType为secretKey时，返回该字段
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取如果authType为secretKey时，返回该字段
                     * @return SecretID 如果authType为secretKey时，返回该字段
                     * 
                     */
                    std::string GetSecretID() const;

                    /**
                     * 设置如果authType为secretKey时，返回该字段
                     * @param _secretID 如果authType为secretKey时，返回该字段
                     * 
                     */
                    void SetSecretID(const std::string& _secretID);

                    /**
                     * 判断参数 SecretID 是否已赋值
                     * @return SecretID 是否已赋值
                     * 
                     */
                    bool SecretIDHasBeenSet() const;

                private:

                    /**
                     * app id 
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 如果authType为apiKey时，返回该字段
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * 如果authType为secretKey时，返回该字段
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 如果authType为secretKey时，返回该字段
                     */
                    std::string m_secretID;
                    bool m_secretIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPRESP_H_
