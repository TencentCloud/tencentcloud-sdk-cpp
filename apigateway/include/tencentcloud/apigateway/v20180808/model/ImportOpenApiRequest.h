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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IMPORTOPENAPIREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IMPORTOPENAPIREQUEST_H_

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
                * ImportOpenApi请求参数结构体
                */
                class ImportOpenApiRequest : public AbstractModel
                {
                public:
                    ImportOpenApiRequest();
                    ~ImportOpenApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API所在的服务唯一ID。
                     * @return ServiceId API所在的服务唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置API所在的服务唯一ID。
                     * @param _serviceId API所在的服务唯一ID。
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
                     * 获取openAPI正文内容。
                     * @return Content openAPI正文内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置openAPI正文内容。
                     * @param _content openAPI正文内容。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Content格式，只能是YAML或者JSON，默认是YAML。
                     * @return EncodeType Content格式，只能是YAML或者JSON，默认是YAML。
                     * 
                     */
                    std::string GetEncodeType() const;

                    /**
                     * 设置Content格式，只能是YAML或者JSON，默认是YAML。
                     * @param _encodeType Content格式，只能是YAML或者JSON，默认是YAML。
                     * 
                     */
                    void SetEncodeType(const std::string& _encodeType);

                    /**
                     * 判断参数 EncodeType 是否已赋值
                     * @return EncodeType 是否已赋值
                     * 
                     */
                    bool EncodeTypeHasBeenSet() const;

                    /**
                     * 获取Content版本，默认是openAPI，目前只支持openAPI。
                     * @return ContentVersion Content版本，默认是openAPI，目前只支持openAPI。
                     * 
                     */
                    std::string GetContentVersion() const;

                    /**
                     * 设置Content版本，默认是openAPI，目前只支持openAPI。
                     * @param _contentVersion Content版本，默认是openAPI，目前只支持openAPI。
                     * 
                     */
                    void SetContentVersion(const std::string& _contentVersion);

                    /**
                     * 判断参数 ContentVersion 是否已赋值
                     * @return ContentVersion 是否已赋值
                     * 
                     */
                    bool ContentVersionHasBeenSet() const;

                private:

                    /**
                     * API所在的服务唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * openAPI正文内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Content格式，只能是YAML或者JSON，默认是YAML。
                     */
                    std::string m_encodeType;
                    bool m_encodeTypeHasBeenSet;

                    /**
                     * Content版本，默认是openAPI，目前只支持openAPI。
                     */
                    std::string m_contentVersion;
                    bool m_contentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_IMPORTOPENAPIREQUEST_H_
