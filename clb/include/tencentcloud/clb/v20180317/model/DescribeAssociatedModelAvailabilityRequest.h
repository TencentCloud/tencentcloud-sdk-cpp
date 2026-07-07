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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEASSOCIATEDMODELAVAILABILITYREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEASSOCIATEDMODELAVAILABILITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeAssociatedModelAvailability请求参数结构体
                */
                class DescribeAssociatedModelAvailabilityRequest : public AbstractModel
                {
                public:
                    DescribeAssociatedModelAvailabilityRequest();
                    ~DescribeAssociatedModelAvailabilityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由ID</p>
                     * @return ModelRouterId <p>模型路由ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由ID</p>
                     * @param _modelRouterId <p>模型路由ID</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>模型列表</p>
                     * @return Models <p>模型列表</p>
                     * 
                     */
                    std::vector<std::string> GetModels() const;

                    /**
                     * 设置<p>模型列表</p>
                     * @param _models <p>模型列表</p>
                     * 
                     */
                    void SetModels(const std::vector<std::string>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>模型列表</p>
                     */
                    std::vector<std::string> m_models;
                    bool m_modelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEASSOCIATEDMODELAVAILABILITYREQUEST_H_
