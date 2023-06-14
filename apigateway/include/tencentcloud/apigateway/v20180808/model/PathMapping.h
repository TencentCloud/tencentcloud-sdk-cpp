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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PATHMAPPING_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PATHMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 自定义域名的路径映射。
                */
                class PathMapping : public AbstractModel
                {
                public:
                    PathMapping();
                    ~PathMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路径。
                     * @return Path 路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径。
                     * @param _path 路径。
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
                     * 获取发布环境，可选值为“test”、 ”prepub“、”release“。
                     * @return Environment 发布环境，可选值为“test”、 ”prepub“、”release“。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置发布环境，可选值为“test”、 ”prepub“、”release“。
                     * @param _environment 发布环境，可选值为“test”、 ”prepub“、”release“。
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
                     * 路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 发布环境，可选值为“test”、 ”prepub“、”release“。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PATHMAPPING_H_
