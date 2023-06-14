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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEAPIREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEAPIREQUEST_H_

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
                * DeleteApi请求参数结构体
                */
                class DeleteApiRequest : public AbstractModel
                {
                public:
                    DeleteApiRequest();
                    ~DeleteApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API 所在的服务唯一 ID。
                     * @return ServiceId API 所在的服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置API 所在的服务唯一 ID。
                     * @param _serviceId API 所在的服务唯一 ID。
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
                     * 获取API 接口唯一 ID。
                     * @return ApiId API 接口唯一 ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API 接口唯一 ID。
                     * @param _apiId API 接口唯一 ID。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                private:

                    /**
                     * API 所在的服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API 接口唯一 ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DELETEAPIREQUEST_H_
