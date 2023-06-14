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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_DELETECONTAINERINSTANCEREQUEST_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_DELETECONTAINERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DeleteContainerInstance请求参数结构体
                */
                class DeleteContainerInstanceRequest : public AbstractModel
                {
                public:
                    DeleteContainerInstanceRequest();
                    ~DeleteContainerInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取容器实例名称
                     * @return InstanceName 容器实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置容器实例名称
                     * @param _instanceName 容器实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 容器实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_DELETECONTAINERINSTANCEREQUEST_H_
