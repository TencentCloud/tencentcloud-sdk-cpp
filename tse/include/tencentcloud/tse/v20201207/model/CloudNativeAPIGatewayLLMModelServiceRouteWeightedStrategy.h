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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTEWEIGHTEDSTRATEGY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTEWEIGHTEDSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 权重路由配置
                */
                class CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy();
                    ~CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型服务id</p>
                     * @return ModelServiceId <p>模型服务id</p>
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置<p>模型服务id</p>
                     * @param _modelServiceId <p>模型服务id</p>
                     * 
                     */
                    void SetModelServiceId(const std::string& _modelServiceId);

                    /**
                     * 判断参数 ModelServiceId 是否已赋值
                     * @return ModelServiceId 是否已赋值
                     * 
                     */
                    bool ModelServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>权重值</p>
                     * @return Weight <p>权重值</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>权重值</p>
                     * @param _weight <p>权重值</p>
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * <p>模型服务id</p>
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                    /**
                     * <p>权重值</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTEWEIGHTEDSTRATEGY_H_
