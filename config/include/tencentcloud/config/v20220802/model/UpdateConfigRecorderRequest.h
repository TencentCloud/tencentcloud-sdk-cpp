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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRECORDERREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRECORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateConfigRecorder请求参数结构体
                */
                class UpdateConfigRecorderRequest : public AbstractModel
                {
                public:
                    UpdateConfigRecorderRequest();
                    ~UpdateConfigRecorderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源类型列表
                     * @return ResourceTypes 资源类型列表
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置资源类型列表
                     * @param _resourceTypes 资源类型列表
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                private:

                    /**
                     * 资源类型列表
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRECORDERREQUEST_H_
