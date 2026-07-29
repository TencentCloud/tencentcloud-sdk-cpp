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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSTEP_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSTEP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 构建步骤
                */
                class BuildStep : public AbstractModel
                {
                public:
                    BuildStep();
                    ~BuildStep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>步骤名（建议 kebab-case，如 build-image），出现在 DescribeCloudAppVersion.Steps[].Name</p>
                     * @return Name <p>步骤名（建议 kebab-case，如 build-image），出现在 DescribeCloudAppVersion.Steps[].Name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>步骤名（建议 kebab-case，如 build-image），出现在 DescribeCloudAppVersion.Steps[].Name</p>
                     * @param _name <p>步骤名（建议 kebab-case，如 build-image），出现在 DescribeCloudAppVersion.Steps[].Name</p>
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
                     * 获取<p>shell 脚本，支持单行或多行</p>
                     * @return Command <p>shell 脚本，支持单行或多行</p>
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置<p>shell 脚本，支持单行或多行</p>
                     * @param _command <p>shell 脚本，支持单行或多行</p>
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                private:

                    /**
                     * <p>步骤名（建议 kebab-case，如 build-image），出现在 DescribeCloudAppVersion.Steps[].Name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>shell 脚本，支持单行或多行</p>
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSTEP_H_
