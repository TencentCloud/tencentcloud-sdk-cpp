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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESETYARNCONFIGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESETYARNCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ResetYarnConfig请求参数结构体
                */
                class ResetYarnConfigRequest : public AbstractModel
                {
                public:
                    ResetYarnConfigRequest();
                    ~ResetYarnConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取emr集群的英文id
                     * @return InstanceId emr集群的英文id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置emr集群的英文id
                     * @param _instanceId emr集群的英文id
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
                     * 获取要重置的配置别名，可选值：

- capacityLabel：重置标签管理的配置
- fair：重置公平调度的配置
- capacity：重置容量调度的配置
                     * @return Key 要重置的配置别名，可选值：

- capacityLabel：重置标签管理的配置
- fair：重置公平调度的配置
- capacity：重置容量调度的配置
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置要重置的配置别名，可选值：

- capacityLabel：重置标签管理的配置
- fair：重置公平调度的配置
- capacity：重置容量调度的配置
                     * @param _key 要重置的配置别名，可选值：

- capacityLabel：重置标签管理的配置
- fair：重置公平调度的配置
- capacity：重置容量调度的配置
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * emr集群的英文id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要重置的配置别名，可选值：

- capacityLabel：重置标签管理的配置
- fair：重置公平调度的配置
- capacity：重置容量调度的配置
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESETYARNCONFIGREQUEST_H_
