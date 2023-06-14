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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeApplication请求参数结构体
                */
                class DescribeApplicationRequest : public AbstractModel
                {
                public:
                    DescribeApplicationRequest();
                    ~DescribeApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id，是应用的全局唯一标识，与ClientId参数不能同时为空。
                     * @return ApplicationId 应用id，是应用的全局唯一标识，与ClientId参数不能同时为空。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用id，是应用的全局唯一标识，与ClientId参数不能同时为空。
                     * @param _applicationId 应用id，是应用的全局唯一标识，与ClientId参数不能同时为空。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取客户端id，与ApplicationId参数不能同时为空。
                     * @return ClientId 客户端id，与ApplicationId参数不能同时为空。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端id，与ApplicationId参数不能同时为空。
                     * @param _clientId 客户端id，与ApplicationId参数不能同时为空。
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                private:

                    /**
                     * 应用id，是应用的全局唯一标识，与ClientId参数不能同时为空。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 客户端id，与ApplicationId参数不能同时为空。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONREQUEST_H_
