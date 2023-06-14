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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETYAMLERRORREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETYAMLERRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeSecretYamlError请求参数结构体
                */
                class DescribeSecretYamlErrorRequest : public AbstractModel
                {
                public:
                    DescribeSecretYamlErrorRequest();
                    ~DescribeSecretYamlErrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取yaml文件
                     * @return Yaml yaml文件
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置yaml文件
                     * @param _yaml yaml文件
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                private:

                    /**
                     * yaml文件
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETYAMLERRORREQUEST_H_
