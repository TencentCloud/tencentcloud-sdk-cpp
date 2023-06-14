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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEENGINEINTERNETACCESSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEENGINEINTERNETACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * UpdateEngineInternetAccess请求参数结构体
                */
                class UpdateEngineInternetAccessRequest : public AbstractModel
                {
                public:
                    UpdateEngineInternetAccessRequest();
                    ~UpdateEngineInternetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎ID
                     * @return InstanceId 引擎ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置引擎ID
                     * @param _instanceId 引擎ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取引擎类型
                     * @return EngineType 引擎类型
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型
                     * @param _engineType 引擎类型
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取是否开启客户端公网访问，true开 false关
                     * @return EnableClientInternetAccess 是否开启客户端公网访问，true开 false关
                     * 
                     */
                    bool GetEnableClientInternetAccess() const;

                    /**
                     * 设置是否开启客户端公网访问，true开 false关
                     * @param _enableClientInternetAccess 是否开启客户端公网访问，true开 false关
                     * 
                     */
                    void SetEnableClientInternetAccess(const bool& _enableClientInternetAccess);

                    /**
                     * 判断参数 EnableClientInternetAccess 是否已赋值
                     * @return EnableClientInternetAccess 是否已赋值
                     * 
                     */
                    bool EnableClientInternetAccessHasBeenSet() const;

                private:

                    /**
                     * 引擎ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 引擎类型
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 是否开启客户端公网访问，true开 false关
                     */
                    bool m_enableClientInternetAccess;
                    bool m_enableClientInternetAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEENGINEINTERNETACCESSREQUEST_H_
