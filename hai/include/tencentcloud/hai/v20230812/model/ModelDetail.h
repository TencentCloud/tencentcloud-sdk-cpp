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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_MODELDETAIL_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_MODELDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 模型详情
                */
                class ModelDetail : public AbstractModel
                {
                public:
                    ModelDetail();
                    ~ModelDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

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
                     * 获取应用描述	
                     * @return Description 应用描述	
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用描述	
                     * @param _description 应用描述	
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取官方社区链接	
                     * @return CommunityUrl 官方社区链接	
                     * 
                     */
                    std::string GetCommunityUrl() const;

                    /**
                     * 设置官方社区链接	
                     * @param _communityUrl 官方社区链接	
                     * 
                     */
                    void SetCommunityUrl(const std::string& _communityUrl);

                    /**
                     * 判断参数 CommunityUrl 是否已赋值
                     * @return CommunityUrl 是否已赋值
                     * 
                     */
                    bool CommunityUrlHasBeenSet() const;

                    /**
                     * 获取最佳实践链接
                     * @return GuideUrl 最佳实践链接
                     * 
                     */
                    std::string GetGuideUrl() const;

                    /**
                     * 设置最佳实践链接
                     * @param _guideUrl 最佳实践链接
                     * 
                     */
                    void SetGuideUrl(const std::string& _guideUrl);

                    /**
                     * 判断参数 GuideUrl 是否已赋值
                     * @return GuideUrl 是否已赋值
                     * 
                     */
                    bool GuideUrlHasBeenSet() const;

                    /**
                     * 获取模型状态
                     * @return ModelState 模型状态
                     * 
                     */
                    std::string GetModelState() const;

                    /**
                     * 设置模型状态
                     * @param _modelState 模型状态
                     * 
                     */
                    void SetModelState(const std::string& _modelState);

                    /**
                     * 判断参数 ModelState 是否已赋值
                     * @return ModelState 是否已赋值
                     * 
                     */
                    bool ModelStateHasBeenSet() const;

                    /**
                     * 获取应用对应的标签，如机器学习
                     * @return Tags 应用对应的标签，如机器学习
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置应用对应的标签，如机器学习
                     * @param _tags 应用对应的标签，如机器学习
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取配置环境
                     * @return ConfigEnvironment 配置环境
                     * 
                     */
                    std::string GetConfigEnvironment() const;

                    /**
                     * 设置配置环境
                     * @param _configEnvironment 配置环境
                     * 
                     */
                    void SetConfigEnvironment(const std::string& _configEnvironment);

                    /**
                     * 判断参数 ConfigEnvironment 是否已赋值
                     * @return ConfigEnvironment 是否已赋值
                     * 
                     */
                    bool ConfigEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 应用描述	
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 官方社区链接	
                     */
                    std::string m_communityUrl;
                    bool m_communityUrlHasBeenSet;

                    /**
                     * 最佳实践链接
                     */
                    std::string m_guideUrl;
                    bool m_guideUrlHasBeenSet;

                    /**
                     * 模型状态
                     */
                    std::string m_modelState;
                    bool m_modelStateHasBeenSet;

                    /**
                     * 应用对应的标签，如机器学习
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 配置环境
                     */
                    std::string m_configEnvironment;
                    bool m_configEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_MODELDETAIL_H_
