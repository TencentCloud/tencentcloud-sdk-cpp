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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEDEPLOYTEMPLATESREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEDEPLOYTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeDeployTemplates请求参数结构体
                */
                class DescribeDeployTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeDeployTemplatesRequest();
                    ~DescribeDeployTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID
                     * @return ModelId 模型ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型ID
                     * @param _modelId 模型ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取可选。传入当前推理服务 ID 时，仅返回与该服务占用兼容的模板：同一 Scene、卡型家族兼容、机数相等、非机密计算。
                     * @return ServiceId 可选。传入当前推理服务 ID 时，仅返回与该服务占用兼容的模板：同一 Scene、卡型家族兼容、机数相等、非机密计算。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置可选。传入当前推理服务 ID 时，仅返回与该服务占用兼容的模板：同一 Scene、卡型家族兼容、机数相等、非机密计算。
                     * @param _serviceId 可选。传入当前推理服务 ID 时，仅返回与该服务占用兼容的模板：同一 Scene、卡型家族兼容、机数相等、非机密计算。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 可选。传入当前推理服务 ID 时，仅返回与该服务占用兼容的模板：同一 Scene、卡型家族兼容、机数相等、非机密计算。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEDEPLOYTEMPLATESREQUEST_H_
