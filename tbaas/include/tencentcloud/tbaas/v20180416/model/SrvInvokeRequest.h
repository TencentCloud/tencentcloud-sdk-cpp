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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_SRVINVOKEREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_SRVINVOKEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * SrvInvoke请求参数结构体
                */
                class SrvInvokeRequest : public AbstractModel
                {
                public:
                    SrvInvokeRequest();
                    ~SrvInvokeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务类型，iss或者dam
                     * @return Service 服务类型，iss或者dam
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务类型，iss或者dam
                     * @param _service 服务类型，iss或者dam
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取服务接口，要调用的方法函数名
                     * @return Method 服务接口，要调用的方法函数名
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置服务接口，要调用的方法函数名
                     * @param _method 服务接口，要调用的方法函数名
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
                     * 获取用户自定义json字符串
                     * @return Param 用户自定义json字符串
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置用户自定义json字符串
                     * @param _param 用户自定义json字符串
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                private:

                    /**
                     * 服务类型，iss或者dam
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 服务接口，要调用的方法函数名
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 用户自定义json字符串
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_SRVINVOKEREQUEST_H_
