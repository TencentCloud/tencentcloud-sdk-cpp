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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateMetricConfig返回参数结构体
                */
                class CreateMetricConfigResponse : public AbstractModel
                {
                public:
                    CreateMetricConfigResponse();
                    ~CreateMetricConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标采集配置id列表。
                     * @return ConfigIds 指标采集配置id列表。
                     * 
                     */
                    std::vector<std::string> GetConfigIds() const;

                    /**
                     * 判断参数 ConfigIds 是否已赋值
                     * @return ConfigIds 是否已赋值
                     * 
                     */
                    bool ConfigIdsHasBeenSet() const;

                private:

                    /**
                     * 指标采集配置id列表。
                     */
                    std::vector<std::string> m_configIds;
                    bool m_configIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGRESPONSE_H_
