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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_COMMONSERVICEAPIREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_COMMONSERVICEAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CommonServiceAPI请求参数结构体
                */
                class CommonServiceAPIRequest : public AbstractModel
                {
                public:
                    CommonServiceAPIRequest();
                    ~CommonServiceAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service名，需要转发访问的接口名
                     * @return Service Service名，需要转发访问的接口名
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Service名，需要转发访问的接口名
                     * @param _service Service名，需要转发访问的接口名
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
                     * 获取需要转发的云API参数，要转成JSON格式
                     * @return JSONData 需要转发的云API参数，要转成JSON格式
                     * 
                     */
                    std::string GetJSONData() const;

                    /**
                     * 设置需要转发的云API参数，要转成JSON格式
                     * @param _jSONData 需要转发的云API参数，要转成JSON格式
                     * 
                     */
                    void SetJSONData(const std::string& _jSONData);

                    /**
                     * 判断参数 JSONData 是否已赋值
                     * @return JSONData 是否已赋值
                     * 
                     */
                    bool JSONDataHasBeenSet() const;

                    /**
                     * 获取指定角色
                     * @return ApiRole 指定角色
                     * 
                     */
                    std::string GetApiRole() const;

                    /**
                     * 设置指定角色
                     * @param _apiRole 指定角色
                     * 
                     */
                    void SetApiRole(const std::string& _apiRole);

                    /**
                     * 判断参数 ApiRole 是否已赋值
                     * @return ApiRole 是否已赋值
                     * 
                     */
                    bool ApiRoleHasBeenSet() const;

                private:

                    /**
                     * Service名，需要转发访问的接口名
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 需要转发的云API参数，要转成JSON格式
                     */
                    std::string m_jSONData;
                    bool m_jSONDataHasBeenSet;

                    /**
                     * 指定角色
                     */
                    std::string m_apiRole;
                    bool m_apiRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_COMMONSERVICEAPIREQUEST_H_
