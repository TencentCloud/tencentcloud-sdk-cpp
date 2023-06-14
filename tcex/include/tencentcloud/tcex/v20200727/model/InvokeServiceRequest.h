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

#ifndef TENCENTCLOUD_TCEX_V20200727_MODEL_INVOKESERVICEREQUEST_H_
#define TENCENTCLOUD_TCEX_V20200727_MODEL_INVOKESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcex
    {
        namespace V20200727
        {
            namespace Model
            {
                /**
                * InvokeService请求参数结构体
                */
                class InvokeServiceRequest : public AbstractModel
                {
                public:
                    InvokeServiceRequest();
                    ~InvokeServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待调用的服务ID。
                     * @return ServiceId 待调用的服务ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待调用的服务ID。
                     * @param _serviceId 待调用的服务ID。
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
                     * 获取要调用服务的状态：0表示调试版本，1表示上线版本
                     * @return ServiceStatus 要调用服务的状态：0表示调试版本，1表示上线版本
                     * 
                     */
                    int64_t GetServiceStatus() const;

                    /**
                     * 设置要调用服务的状态：0表示调试版本，1表示上线版本
                     * @param _serviceStatus 要调用服务的状态：0表示调试版本，1表示上线版本
                     * 
                     */
                    void SetServiceStatus(const int64_t& _serviceStatus);

                    /**
                     * 判断参数 ServiceStatus 是否已赋值
                     * @return ServiceStatus 是否已赋值
                     * 
                     */
                    bool ServiceStatusHasBeenSet() const;

                    /**
                     * 获取用于测试的文档的URL。
                     * @return FileUrl 用于测试的文档的URL。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置用于测试的文档的URL。
                     * @param _fileUrl 用于测试的文档的URL。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取用于测试的文本，当此值不为空时，调用内容以此参数的值为准。
                     * @return Input 用于测试的文本，当此值不为空时，调用内容以此参数的值为准。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置用于测试的文本，当此值不为空时，调用内容以此参数的值为准。
                     * @param _input 用于测试的文本，当此值不为空时，调用内容以此参数的值为准。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * 待调用的服务ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 要调用服务的状态：0表示调试版本，1表示上线版本
                     */
                    int64_t m_serviceStatus;
                    bool m_serviceStatusHasBeenSet;

                    /**
                     * 用于测试的文档的URL。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 用于测试的文本，当此值不为空时，调用内容以此参数的值为准。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCEX_V20200727_MODEL_INVOKESERVICEREQUEST_H_
