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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_PROMOTEDBINSTANCETOACTIVEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_PROMOTEDBINSTANCETOACTIVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * PromoteDBInstanceToActive请求参数结构体
                */
                class PromoteDBInstanceToActiveRequest : public AbstractModel
                {
                public:
                    PromoteDBInstanceToActiveRequest();
                    ~PromoteDBInstanceToActiveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定需转为普通实例的灾备或只读实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制灾备或只读实例 ID。</p>
                     * @return InstanceId <p>指定需转为普通实例的灾备或只读实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制灾备或只读实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定需转为普通实例的灾备或只读实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制灾备或只读实例 ID。</p>
                     * @param _instanceId <p>指定需转为普通实例的灾备或只读实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制灾备或只读实例 ID。</p>
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
                     * 获取<p>指定灾备或只读实例所属的主实例。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return MasterId <p>指定灾备或只读实例所属的主实例。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetMasterId() const;

                    /**
                     * 设置<p>指定灾备或只读实例所属的主实例。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _masterId <p>指定灾备或只读实例所属的主实例。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetMasterId(const std::string& _masterId);

                    /**
                     * 判断参数 MasterId 是否已赋值
                     * @return MasterId 是否已赋值
                     * 
                     */
                    bool MasterIdHasBeenSet() const;

                private:

                    /**
                     * <p>指定需转为普通实例的灾备或只读实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制灾备或只读实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定灾备或只读实例所属的主实例。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_masterId;
                    bool m_masterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_PROMOTEDBINSTANCETOACTIVEREQUEST_H_
