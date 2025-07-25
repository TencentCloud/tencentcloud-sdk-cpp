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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_PUBLISHCONFIGFILESRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_PUBLISHCONFIGFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * PublishConfigFiles返回参数结构体
                */
                class PublishConfigFilesResponse : public AbstractModel
                {
                public:
                    PublishConfigFilesResponse();
                    ~PublishConfigFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置文件发布是否成功
                     * @return Result 配置文件发布是否成功
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取配置文件发布Id
                     * @return ConfigFileReleaseId 配置文件发布Id
                     * 
                     */
                    std::string GetConfigFileReleaseId() const;

                    /**
                     * 判断参数 ConfigFileReleaseId 是否已赋值
                     * @return ConfigFileReleaseId 是否已赋值
                     * 
                     */
                    bool ConfigFileReleaseIdHasBeenSet() const;

                private:

                    /**
                     * 配置文件发布是否成功
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 配置文件发布Id
                     */
                    std::string m_configFileReleaseId;
                    bool m_configFileReleaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_PUBLISHCONFIGFILESRESPONSE_H_
