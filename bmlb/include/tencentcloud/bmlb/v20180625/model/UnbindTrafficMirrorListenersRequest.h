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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORLISTENERSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORLISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UnbindTrafficMirrorListeners请求参数结构体
                */
                class UnbindTrafficMirrorListenersRequest : public AbstractModel
                {
                public:
                    UnbindTrafficMirrorListenersRequest();
                    ~UnbindTrafficMirrorListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID。
                     * @return TrafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例ID。
                     * @param _trafficMirrorId 流量镜像实例ID。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取七层监听器实例ID数组，可通过接口DescribeL7Listeners查询。
                     * @return ListenerIds 七层监听器实例ID数组，可通过接口DescribeL7Listeners查询。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置七层监听器实例ID数组，可通过接口DescribeL7Listeners查询。
                     * @param _listenerIds 七层监听器实例ID数组，可通过接口DescribeL7Listeners查询。
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 七层监听器实例ID数组，可通过接口DescribeL7Listeners查询。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORLISTENERSREQUEST_H_
