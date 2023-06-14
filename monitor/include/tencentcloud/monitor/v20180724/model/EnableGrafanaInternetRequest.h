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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANAINTERNETREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANAINTERNETREQUEST_H_

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
                * EnableGrafanaInternet请求参数结构体
                */
                class EnableGrafanaInternetRequest : public AbstractModel
                {
                public:
                    EnableGrafanaInternetRequest();
                    ~EnableGrafanaInternetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Grafana 实例 ID，例如：grafana-kleu3gt0
                     * @return InstanceID Grafana 实例 ID，例如：grafana-kleu3gt0
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Grafana 实例 ID，例如：grafana-kleu3gt0
                     * @param _instanceID Grafana 实例 ID，例如：grafana-kleu3gt0
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取开启或关闭公网访问，true为开启，false 为不开启
                     * @return EnableInternet 开启或关闭公网访问，true为开启，false 为不开启
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置开启或关闭公网访问，true为开启，false 为不开启
                     * @param _enableInternet 开启或关闭公网访问，true为开启，false 为不开启
                     * 
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     * 
                     */
                    bool EnableInternetHasBeenSet() const;

                private:

                    /**
                     * Grafana 实例 ID，例如：grafana-kleu3gt0
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 开启或关闭公网访问，true为开启，false 为不开启
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ENABLEGRAFANAINTERNETREQUEST_H_
