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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTEMODELNAMESTRATEGY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTEMODELNAMESTRATEGY_H_

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
                * 模型服务模型名称路由策略
                */
                class CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy();
                    ~CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型服务id
                     * @return ModelServiceId 模型服务id
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置模型服务id
                     * @param _modelServiceId 模型服务id
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
                     * 获取匹配模型服务
                     * @return MatchModelName 匹配模型服务
                     * 
                     */
                    std::string GetMatchModelName() const;

                    /**
                     * 设置匹配模型服务
                     * @param _matchModelName 匹配模型服务
                     * 
                     */
                    void SetMatchModelName(const std::string& _matchModelName);

                    /**
                     * 判断参数 MatchModelName 是否已赋值
                     * @return MatchModelName 是否已赋值
                     * 
                     */
                    bool MatchModelNameHasBeenSet() const;

                    /**
                     * 获取重写模型
                     * @return RewriteModelName 重写模型
                     * 
                     */
                    std::string GetRewriteModelName() const;

                    /**
                     * 设置重写模型
                     * @param _rewriteModelName 重写模型
                     * 
                     */
                    void SetRewriteModelName(const std::string& _rewriteModelName);

                    /**
                     * 判断参数 RewriteModelName 是否已赋值
                     * @return RewriteModelName 是否已赋值
                     * 
                     */
                    bool RewriteModelNameHasBeenSet() const;

                private:

                    /**
                     * 模型服务id
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                    /**
                     * 匹配模型服务
                     */
                    std::string m_matchModelName;
                    bool m_matchModelNameHasBeenSet;

                    /**
                     * 重写模型
                     */
                    std::string m_rewriteModelName;
                    bool m_rewriteModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTEMODELNAMESTRATEGY_H_
