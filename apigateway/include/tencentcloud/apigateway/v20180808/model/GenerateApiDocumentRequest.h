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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_GENERATEAPIDOCUMENTREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_GENERATEAPIDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GenerateApiDocument请求参数结构体
                */
                class GenerateApiDocumentRequest : public AbstractModel
                {
                public:
                    GenerateApiDocumentRequest();
                    ~GenerateApiDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待创建文档的服务唯一 ID。
                     * @return ServiceId 待创建文档的服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待创建文档的服务唯一 ID。
                     * @param _serviceId 待创建文档的服务唯一 ID。
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
                     * 获取待创建 SDK 的服务所在环境。
                     * @return GenEnvironment 待创建 SDK 的服务所在环境。
                     * 
                     */
                    std::string GetGenEnvironment() const;

                    /**
                     * 设置待创建 SDK 的服务所在环境。
                     * @param _genEnvironment 待创建 SDK 的服务所在环境。
                     * 
                     */
                    void SetGenEnvironment(const std::string& _genEnvironment);

                    /**
                     * 判断参数 GenEnvironment 是否已赋值
                     * @return GenEnvironment 是否已赋值
                     * 
                     */
                    bool GenEnvironmentHasBeenSet() const;

                    /**
                     * 获取待创建 SDK 的语言。当前只支持 Python 和 JavaScript。
                     * @return GenLanguage 待创建 SDK 的语言。当前只支持 Python 和 JavaScript。
                     * 
                     */
                    std::string GetGenLanguage() const;

                    /**
                     * 设置待创建 SDK 的语言。当前只支持 Python 和 JavaScript。
                     * @param _genLanguage 待创建 SDK 的语言。当前只支持 Python 和 JavaScript。
                     * 
                     */
                    void SetGenLanguage(const std::string& _genLanguage);

                    /**
                     * 判断参数 GenLanguage 是否已赋值
                     * @return GenLanguage 是否已赋值
                     * 
                     */
                    bool GenLanguageHasBeenSet() const;

                private:

                    /**
                     * 待创建文档的服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待创建 SDK 的服务所在环境。
                     */
                    std::string m_genEnvironment;
                    bool m_genEnvironmentHasBeenSet;

                    /**
                     * 待创建 SDK 的语言。当前只支持 Python 和 JavaScript。
                     */
                    std::string m_genLanguage;
                    bool m_genLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_GENERATEAPIDOCUMENTREQUEST_H_
