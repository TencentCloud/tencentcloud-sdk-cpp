/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_FRAMEWORKVERSION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_FRAMEWORKVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 框架版本以及对应的训练模式
                */
                class FrameworkVersion : public AbstractModel
                {
                public:
                    FrameworkVersion();
                    ~FrameworkVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取框架版本
                     * @return Version 框架版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置框架版本
                     * @param _version 框架版本
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
                     * 获取训练模式
                     * @return TrainingModes 训练模式
                     * 
                     */
                    std::vector<std::string> GetTrainingModes() const;

                    /**
                     * 设置训练模式
                     * @param _trainingModes 训练模式
                     * 
                     */
                    void SetTrainingModes(const std::vector<std::string>& _trainingModes);

                    /**
                     * 判断参数 TrainingModes 是否已赋值
                     * @return TrainingModes 是否已赋值
                     * 
                     */
                    bool TrainingModesHasBeenSet() const;

                    /**
                     * 获取框架运行环境
                     * @return Environment 框架运行环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置框架运行环境
                     * @param _environment 框架运行环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 框架版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 训练模式
                     */
                    std::vector<std::string> m_trainingModes;
                    bool m_trainingModesHasBeenSet;

                    /**
                     * 框架运行环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_FRAMEWORKVERSION_H_
