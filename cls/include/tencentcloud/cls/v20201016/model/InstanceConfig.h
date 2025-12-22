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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCECONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Instance.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 实例配置信息
                */
                class InstanceConfig : public AbstractModel
                {
                public:
                    InstanceConfig();
                    ~InstanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例维度
                     * @return InstanceDimension 实例维度
                     * 
                     */
                    std::vector<std::string> GetInstanceDimension() const;

                    /**
                     * 设置实例维度
                     * @param _instanceDimension 实例维度
                     * 
                     */
                    void SetInstanceDimension(const std::vector<std::string>& _instanceDimension);

                    /**
                     * 判断参数 InstanceDimension 是否已赋值
                     * @return InstanceDimension 是否已赋值
                     * 
                     */
                    bool InstanceDimensionHasBeenSet() const;

                    /**
                     * 获取实例值
                     * @return Instances 实例值
                     * 
                     */
                    std::vector<Instance> GetInstances() const;

                    /**
                     * 设置实例值
                     * @param _instances 实例值
                     * 
                     */
                    void SetInstances(const std::vector<Instance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 实例维度
                     */
                    std::vector<std::string> m_instanceDimension;
                    bool m_instanceDimensionHasBeenSet;

                    /**
                     * 实例值
                     */
                    std::vector<Instance> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCECONFIG_H_
