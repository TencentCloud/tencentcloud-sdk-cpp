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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIDOCREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIDOCREQUEST_H_

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
                * ModifyAPIDoc请求参数结构体
                */
                class ModifyAPIDocRequest : public AbstractModel
                {
                public:
                    ModifyAPIDocRequest();
                    ~ModifyAPIDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API文档名称
                     * @return ApiDocName API文档名称
                     * 
                     */
                    std::string GetApiDocName() const;

                    /**
                     * 设置API文档名称
                     * @param _apiDocName API文档名称
                     * 
                     */
                    void SetApiDocName(const std::string& _apiDocName);

                    /**
                     * 判断参数 ApiDocName 是否已赋值
                     * @return ApiDocName 是否已赋值
                     * 
                     */
                    bool ApiDocNameHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceId 服务名称
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务名称
                     * @param _serviceId 服务名称
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
                     * 获取环境名称
                     * @return Environment 环境名称
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境名称
                     * @param _environment 环境名称
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
                     * 获取生成文档的API列表
                     * @return ApiIds 生成文档的API列表
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置生成文档的API列表
                     * @param _apiIds 生成文档的API列表
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                    /**
                     * 获取API文档ID
                     * @return ApiDocId API文档ID
                     * 
                     */
                    std::string GetApiDocId() const;

                    /**
                     * 设置API文档ID
                     * @param _apiDocId API文档ID
                     * 
                     */
                    void SetApiDocId(const std::string& _apiDocId);

                    /**
                     * 判断参数 ApiDocId 是否已赋值
                     * @return ApiDocId 是否已赋值
                     * 
                     */
                    bool ApiDocIdHasBeenSet() const;

                private:

                    /**
                     * API文档名称
                     */
                    std::string m_apiDocName;
                    bool m_apiDocNameHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 环境名称
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 生成文档的API列表
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                    /**
                     * API文档ID
                     */
                    std::string m_apiDocId;
                    bool m_apiDocIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIDOCREQUEST_H_
