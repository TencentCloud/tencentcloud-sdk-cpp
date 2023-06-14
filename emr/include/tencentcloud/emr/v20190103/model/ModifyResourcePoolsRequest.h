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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCEPOOLSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCEPOOLSREQUEST_H_

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
                * ModifyResourcePools请求参数结构体
                */
                class ModifyResourcePoolsRequest : public AbstractModel
                {
                public:
                    ModifyResourcePoolsRequest();
                    ~ModifyResourcePoolsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取emr集群id
                     * @return InstanceId emr集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置emr集群id
                     * @param _instanceId emr集群id
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
                     * 获取取值范围：
<li>fair:代表公平调度标识</li>
<li>capacity:代表容量调度标识</li>
                     * @return Key 取值范围：
<li>fair:代表公平调度标识</li>
<li>capacity:代表容量调度标识</li>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置取值范围：
<li>fair:代表公平调度标识</li>
<li>capacity:代表容量调度标识</li>
                     * @param _key 取值范围：
<li>fair:代表公平调度标识</li>
<li>capacity:代表容量调度标识</li>
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
                     * emr集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 取值范围：
<li>fair:代表公平调度标识</li>
<li>capacity:代表容量调度标识</li>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCEPOOLSREQUEST_H_
