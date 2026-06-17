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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESSOACCOUNTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESSOACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeSSOAccount请求参数结构体
                */
                class DescribeSSOAccountRequest : public AbstractModel
                {
                public:
                    DescribeSSOAccountRequest();
                    ~DescribeSSOAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @return InstanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @param _instanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
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
                     * 获取<p>填写对应的账号 ID，将会按账号 ID 进行过滤，例如：10000</p>
                     * @return UserId <p>填写对应的账号 ID，将会按账号 ID 进行过滤，例如：10000</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>填写对应的账号 ID，将会按账号 ID 进行过滤，例如：10000</p>
                     * @param _userId <p>填写对应的账号 ID，将会按账号 ID 进行过滤，例如：10000</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>填写对应的账号 ID，将会按账号 ID 进行过滤，例如：10000</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBESSOACCOUNTREQUEST_H_
