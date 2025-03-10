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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYREGISTERINSTANCEREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYREGISTERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyRegisterInstance请求参数结构体
                */
                class ModifyRegisterInstanceRequest : public AbstractModel
                {
                public:
                    ModifyRegisterInstanceRequest();
                    ~ModifyRegisterInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取托管实例ID。

可通过 [DescribeRegisterInstances(查询托管实例)](https://cloud.tencent.com/document/api/1340/96924) 接口获取。
                     * @return InstanceId 托管实例ID。

可通过 [DescribeRegisterInstances(查询托管实例)](https://cloud.tencent.com/document/api/1340/96924) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置托管实例ID。

可通过 [DescribeRegisterInstances(查询托管实例)](https://cloud.tencent.com/document/api/1340/96924) 接口获取。
                     * @param _instanceId 托管实例ID。

可通过 [DescribeRegisterInstances(查询托管实例)](https://cloud.tencent.com/document/api/1340/96924) 接口获取。
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
                     * 获取实例名称。有效长度为 1～60 字符。
                     * @return InstanceName 实例名称。有效长度为 1～60 字符。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。有效长度为 1～60 字符。
                     * @param _instanceName 实例名称。有效长度为 1～60 字符。
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
                     * 托管实例ID。

可通过 [DescribeRegisterInstances(查询托管实例)](https://cloud.tencent.com/document/api/1340/96924) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称。有效长度为 1～60 字符。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYREGISTERINSTANCEREQUEST_H_
