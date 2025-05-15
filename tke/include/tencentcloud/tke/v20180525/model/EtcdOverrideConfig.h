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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ETCDOVERRIDECONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ETCDOVERRIDECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 元数据拆分存储Etcd配置
                */
                class EtcdOverrideConfig : public AbstractModel
                {
                public:
                    EtcdOverrideConfig();
                    ~EtcdOverrideConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取k8s资源，支持核心资源，控制类资源，配置及敏感资源
                     * @return Resources k8s资源，支持核心资源，控制类资源，配置及敏感资源
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置k8s资源，支持核心资源，控制类资源，配置及敏感资源
                     * @param _resources k8s资源，支持核心资源，控制类资源，配置及敏感资源
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * k8s资源，支持核心资源，控制类资源，配置及敏感资源
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ETCDOVERRIDECONFIG_H_
