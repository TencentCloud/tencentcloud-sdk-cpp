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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORUPDATECONFIGFILEANDRELEASERESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORUPDATECONFIGFILEANDRELEASERESPONSE_H_

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
                * CreateOrUpdateConfigFileAndRelease返回参数结构体
                */
                class CreateOrUpdateConfigFileAndReleaseResponse : public AbstractModel
                {
                public:
                    CreateOrUpdateConfigFileAndReleaseResponse();
                    ~CreateOrUpdateConfigFileAndReleaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作是否成功
                     * @return Result 操作是否成功
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
                     * 获取配置发布Id
                     * @return ConfigFileReleaseId 配置发布Id
                     * 
                     */
                    std::string GetConfigFileReleaseId() const;

                    /**
                     * 判断参数 ConfigFileReleaseId 是否已赋值
                     * @return ConfigFileReleaseId 是否已赋值
                     * 
                     */
                    bool ConfigFileReleaseIdHasBeenSet() const;

                    /**
                     * 获取配置文件Id
                     * @return ConfigFileId 配置文件Id
                     * 
                     */
                    std::string GetConfigFileId() const;

                    /**
                     * 判断参数 ConfigFileId 是否已赋值
                     * @return ConfigFileId 是否已赋值
                     * 
                     */
                    bool ConfigFileIdHasBeenSet() const;

                private:

                    /**
                     * 操作是否成功
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 配置发布Id
                     */
                    std::string m_configFileReleaseId;
                    bool m_configFileReleaseIdHasBeenSet;

                    /**
                     * 配置文件Id
                     */
                    std::string m_configFileId;
                    bool m_configFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORUPDATECONFIGFILEANDRELEASERESPONSE_H_
