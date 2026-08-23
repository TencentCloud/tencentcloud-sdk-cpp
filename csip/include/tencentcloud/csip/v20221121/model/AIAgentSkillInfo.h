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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTSKILLINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTSKILLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * AI Agent 的 skill 详情
                */
                class AIAgentSkillInfo : public AbstractModel
                {
                public:
                    AIAgentSkillInfo();
                    ~AIAgentSkillInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取skill 名称
                     * @return Name skill 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置skill 名称
                     * @param _name skill 名称
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
                     * 获取skill 路径
                     * @return Path skill 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置skill 路径
                     * @param _path skill 路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取skill 版本
                     * @return Version skill 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置skill 版本
                     * @param _version skill 版本
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
                     * 获取skill 描述
                     * @return Description skill 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置skill 描述
                     * @param _description skill 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * skill 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * skill 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * skill 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * skill 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AIAGENTSKILLINFO_H_
