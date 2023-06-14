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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的实例id
                     * @return InstanceId 要修改的实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置要修改的实例id
                     * @param _instanceId 要修改的实例id
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
                     * 获取新的实例名称(长度最大不超过255)
                     * @return InstanceName 新的实例名称(长度最大不超过255)
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置新的实例名称(长度最大不超过255)
                     * @param _instanceName 新的实例名称(长度最大不超过255)
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取新的实例描述(长度最大不超过1024)
                     * @return InstanceDesc 新的实例描述(长度最大不超过1024)
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置新的实例描述(长度最大不超过1024)
                     * @param _instanceDesc 新的实例描述(长度最大不超过1024)
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                private:

                    /**
                     * 要修改的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 新的实例名称(长度最大不超过255)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 新的实例描述(长度最大不超过1024)
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYINSTANCEREQUEST_H_
