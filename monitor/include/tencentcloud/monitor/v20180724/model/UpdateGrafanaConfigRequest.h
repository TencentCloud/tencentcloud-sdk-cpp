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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANACONFIGREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANACONFIGREQUEST_H_

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
                * UpdateGrafanaConfig请求参数结构体
                */
                class UpdateGrafanaConfigRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaConfigRequest();
                    ~UpdateGrafanaConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>JSON 编码后的字符串，如 &quot;{&quot;server&quot;:{&quot;root_url&quot;:&quot;http://custom.domain&quot;}}&quot;</p>
                     * @return Config <p>JSON 编码后的字符串，如 &quot;{&quot;server&quot;:{&quot;root_url&quot;:&quot;http://custom.domain&quot;}}&quot;</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>JSON 编码后的字符串，如 &quot;{&quot;server&quot;:{&quot;root_url&quot;:&quot;http://custom.domain&quot;}}&quot;</p>
                     * @param _config <p>JSON 编码后的字符串，如 &quot;{&quot;server&quot;:{&quot;root_url&quot;:&quot;http://custom.domain&quot;}}&quot;</p>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>JSON 编码后的字符串，如 &quot;{&quot;server&quot;:{&quot;root_url&quot;:&quot;http://custom.domain&quot;}}&quot;</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANACONFIGREQUEST_H_
