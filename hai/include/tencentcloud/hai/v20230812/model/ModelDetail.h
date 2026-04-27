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
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
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
                     * 获取<p>模型ID</p>
                     * @return ModelId <p>模型ID</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型ID</p>
                     * @param _modelId <p>模型ID</p>
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
                     * 获取<p>应用描述</p>
                     * @return Description <p>应用描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>应用描述</p>
                     * @param _description <p>应用描述</p>
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
                     * 获取<p>官方社区链接</p>
                     * @return CommunityUrl <p>官方社区链接</p>
                     * 
                     */
                    std::string GetCommunityUrl() const;

                    /**
                     * 设置<p>官方社区链接</p>
                     * @param _communityUrl <p>官方社区链接</p>
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
                     * 获取<p>最佳实践链接</p>
                     * @return GuideUrl <p>最佳实践链接</p>
                     * 
                     */
                    std::string GetGuideUrl() const;

                    /**
                     * 设置<p>最佳实践链接</p>
                     * @param _guideUrl <p>最佳实践链接</p>
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
                     * 获取<p>模型状态</p>
                     * @return ModelState <p>模型状态</p>
                     * 
                     */
                    std::string GetModelState() const;

                    /**
                     * 设置<p>模型状态</p>
                     * @param _modelState <p>模型状态</p>
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
                     * 获取<p>应用对应的标签，如机器学习</p>
                     * @return Tags <p>应用对应的标签，如机器学习</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>应用对应的标签，如机器学习</p>
                     * @param _tags <p>应用对应的标签，如机器学习</p>
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
                     * 获取<p>配置环境</p>
                     * @return ConfigEnvironment <p>配置环境</p>
                     * 
                     */
                    std::string GetConfigEnvironment() const;

                    /**
                     * 设置<p>配置环境</p>
                     * @param _configEnvironment <p>配置环境</p>
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
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>应用描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>官方社区链接</p>
                     */
                    std::string m_communityUrl;
                    bool m_communityUrlHasBeenSet;

                    /**
                     * <p>最佳实践链接</p>
                     */
                    std::string m_guideUrl;
                    bool m_guideUrlHasBeenSet;

                    /**
                     * <p>模型状态</p>
                     */
                    std::string m_modelState;
                    bool m_modelStateHasBeenSet;

                    /**
                     * <p>应用对应的标签，如机器学习</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>配置环境</p>
                     */
                    std::string m_configEnvironment;
                    bool m_configEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_MODELDETAIL_H_
