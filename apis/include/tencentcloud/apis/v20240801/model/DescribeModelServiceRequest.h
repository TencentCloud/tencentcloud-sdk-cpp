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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICEREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeModelService请求参数结构体
                */
                class DescribeModelServiceRequest : public AbstractModel
                {
                public:
                    DescribeModelServiceRequest();
                    ~DescribeModelServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例
                     * @return InstanceID 实例
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例
                     * @param _instanceID 实例
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取模型服务ID
                     * @return ID 模型服务ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置模型服务ID
                     * @param _iD 模型服务ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 实例
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 模型服务ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSERVICEREQUEST_H_
