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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CLEANUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CLEANUPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * CleanUpInstance请求参数结构体
                */
                class CleanUpInstanceRequest : public AbstractModel
                {
                public:
                    CleanUpInstanceRequest();
                    ~CleanUpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，如：kee-6ubh****。
                     * @return InstanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，如：kee-6ubh****。
                     * @param _instanceId 实例 ID，如：kee-6ubh****。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，如：kee-6ubh****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CLEANUPINSTANCEREQUEST_H_
