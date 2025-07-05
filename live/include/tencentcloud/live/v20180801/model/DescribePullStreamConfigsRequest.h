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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLSTREAMCONFIGSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLSTREAMCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePullStreamConfigs请求参数结构体
                */
                class DescribePullStreamConfigsRequest : public AbstractModel
                {
                public:
                    DescribePullStreamConfigsRequest();
                    ~DescribePullStreamConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置 ID。
获取途径：从 CreatePullStreamConfig 接口返回值获取。
                     * @return ConfigId 配置 ID。
获取途径：从 CreatePullStreamConfig 接口返回值获取。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置 ID。
获取途径：从 CreatePullStreamConfig 接口返回值获取。
                     * @param _configId 配置 ID。
获取途径：从 CreatePullStreamConfig 接口返回值获取。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * 配置 ID。
获取途径：从 CreatePullStreamConfig 接口返回值获取。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLSTREAMCONFIGSREQUEST_H_
