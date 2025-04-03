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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFile.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeConfigFile返回参数结构体
                */
                class DescribeConfigFileResponse : public AbstractModel
                {
                public:
                    DescribeConfigFileResponse();
                    ~DescribeConfigFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置文件
                     * @return ConfigFile 配置文件
                     * 
                     */
                    ConfigFile GetConfigFile() const;

                    /**
                     * 判断参数 ConfigFile 是否已赋值
                     * @return ConfigFile 是否已赋值
                     * 
                     */
                    bool ConfigFileHasBeenSet() const;

                private:

                    /**
                     * 配置文件
                     */
                    ConfigFile m_configFile;
                    bool m_configFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERESPONSE_H_
