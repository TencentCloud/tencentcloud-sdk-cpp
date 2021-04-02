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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODPARAMETER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * POD自定义权限和自定义参数
                */
                class PodParameter : public AbstractModel
                {
                public:
                    PodParameter();
                    ~PodParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TKE或EKS集群ID
                     * @return ClusterId TKE或EKS集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置TKE或EKS集群ID
                     * @param ClusterId TKE或EKS集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取自定义权限
                     * @return Config 自定义权限
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置自定义权限
                     * @param Config 自定义权限
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取自定义参数
                     * @return Parameter 自定义参数
                     */
                    std::string GetParameter() const;

                    /**
                     * 设置自定义参数
                     * @param Parameter 自定义参数
                     */
                    void SetParameter(const std::string& _parameter);

                    /**
                     * 判断参数 Parameter 是否已赋值
                     * @return Parameter 是否已赋值
                     */
                    bool ParameterHasBeenSet() const;

                private:

                    /**
                     * TKE或EKS集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 自定义权限
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 自定义参数
                     */
                    std::string m_parameter;
                    bool m_parameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODPARAMETER_H_
