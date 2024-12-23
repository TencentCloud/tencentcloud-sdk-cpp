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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYREMOTEURLSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYREMOTEURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/RemoteWrite.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyRemoteURLs请求参数结构体
                */
                class ModifyRemoteURLsRequest : public AbstractModel
                {
                public:
                    ModifyRemoteURLsRequest();
                    ~ModifyRemoteURLsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取多写配置
                     * @return RemoteWrites 多写配置
                     * 
                     */
                    std::vector<RemoteWrite> GetRemoteWrites() const;

                    /**
                     * 设置多写配置
                     * @param _remoteWrites 多写配置
                     * 
                     */
                    void SetRemoteWrites(const std::vector<RemoteWrite>& _remoteWrites);

                    /**
                     * 判断参数 RemoteWrites 是否已赋值
                     * @return RemoteWrites 是否已赋值
                     * 
                     */
                    bool RemoteWritesHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 多写配置
                     */
                    std::vector<RemoteWrite> m_remoteWrites;
                    bool m_remoteWritesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYREMOTEURLSREQUEST_H_
