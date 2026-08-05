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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_INFERENCEENGINEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_INFERENCEENGINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/EngineCapabilities.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 推理引擎具体信息
                */
                class InferenceEngineInfo : public AbstractModel
                {
                public:
                    InferenceEngineInfo();
                    ~InferenceEngineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>引擎标识符</p>
                     * @return EngineId <p>引擎标识符</p>
                     * 
                     */
                    std::string GetEngineId() const;

                    /**
                     * 设置<p>引擎标识符</p>
                     * @param _engineId <p>引擎标识符</p>
                     * 
                     */
                    void SetEngineId(const std::string& _engineId);

                    /**
                     * 判断参数 EngineId 是否已赋值
                     * @return EngineId 是否已赋值
                     * 
                     */
                    bool EngineIdHasBeenSet() const;

                    /**
                     * 获取<p>引擎名称</p>
                     * @return Name <p>引擎名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>引擎名称</p>
                     * @param _name <p>引擎名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>引擎版本</p>
                     * @return Version <p>引擎版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>引擎版本</p>
                     * @param _version <p>引擎版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>引擎描述</p>
                     * @return Description <p>引擎描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>引擎描述</p>
                     * @param _description <p>引擎描述</p>
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
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>支持的模型类型</p>
                     * @return ModelTypes <p>支持的模型类型</p>
                     * 
                     */
                    std::vector<std::string> GetModelTypes() const;

                    /**
                     * 设置<p>支持的模型类型</p>
                     * @param _modelTypes <p>支持的模型类型</p>
                     * 
                     */
                    void SetModelTypes(const std::vector<std::string>& _modelTypes);

                    /**
                     * 判断参数 ModelTypes 是否已赋值
                     * @return ModelTypes 是否已赋值
                     * 
                     */
                    bool ModelTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否独占，如果为 true，表示自定义模型看不到这个推理引擎，通常用于自研内置模型</p>
                     * @return Exclusive <p>是否独占，如果为 true，表示自定义模型看不到这个推理引擎，通常用于自研内置模型</p>
                     * 
                     */
                    bool GetExclusive() const;

                    /**
                     * 设置<p>是否独占，如果为 true，表示自定义模型看不到这个推理引擎，通常用于自研内置模型</p>
                     * @param _exclusive <p>是否独占，如果为 true，表示自定义模型看不到这个推理引擎，通常用于自研内置模型</p>
                     * 
                     */
                    void SetExclusive(const bool& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
                     * @return Enabled <p>是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用</p>
                     * @param _enabled <p>是否启用</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>引擎能力声明</p>
                     * @return Capabilities <p>引擎能力声明</p>
                     * 
                     */
                    EngineCapabilities GetCapabilities() const;

                    /**
                     * 设置<p>引擎能力声明</p>
                     * @param _capabilities <p>引擎能力声明</p>
                     * 
                     */
                    void SetCapabilities(const EngineCapabilities& _capabilities);

                    /**
                     * 判断参数 Capabilities 是否已赋值
                     * @return Capabilities 是否已赋值
                     * 
                     */
                    bool CapabilitiesHasBeenSet() const;

                private:

                    /**
                     * <p>引擎标识符</p>
                     */
                    std::string m_engineId;
                    bool m_engineIdHasBeenSet;

                    /**
                     * <p>引擎名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>引擎版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>引擎描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>支持的模型类型</p>
                     */
                    std::vector<std::string> m_modelTypes;
                    bool m_modelTypesHasBeenSet;

                    /**
                     * <p>是否独占，如果为 true，表示自定义模型看不到这个推理引擎，通常用于自研内置模型</p>
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>引擎能力声明</p>
                     */
                    EngineCapabilities m_capabilities;
                    bool m_capabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_INFERENCEENGINEINFO_H_
