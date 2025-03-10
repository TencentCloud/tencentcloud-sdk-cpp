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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OPTIONALRUNTIMES_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OPTIONALRUNTIMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 可选运行时
                */
                class OptionalRuntimes : public AbstractModel
                {
                public:
                    OptionalRuntimes();
                    ~OptionalRuntimes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行时类型
                     * @return RuntimeType 运行时类型
                     * 
                     */
                    std::string GetRuntimeType() const;

                    /**
                     * 设置运行时类型
                     * @param _runtimeType 运行时类型
                     * 
                     */
                    void SetRuntimeType(const std::string& _runtimeType);

                    /**
                     * 判断参数 RuntimeType 是否已赋值
                     * @return RuntimeType 是否已赋值
                     * 
                     */
                    bool RuntimeTypeHasBeenSet() const;

                    /**
                     * 获取运行时版本列表
                     * @return RuntimeVersions 运行时版本列表
                     * 
                     */
                    std::vector<std::string> GetRuntimeVersions() const;

                    /**
                     * 设置运行时版本列表
                     * @param _runtimeVersions 运行时版本列表
                     * 
                     */
                    void SetRuntimeVersions(const std::vector<std::string>& _runtimeVersions);

                    /**
                     * 判断参数 RuntimeVersions 是否已赋值
                     * @return RuntimeVersions 是否已赋值
                     * 
                     */
                    bool RuntimeVersionsHasBeenSet() const;

                    /**
                     * 获取该类型的默认运行时版本
                     * @return DefaultVersion 该类型的默认运行时版本
                     * 
                     */
                    std::string GetDefaultVersion() const;

                    /**
                     * 设置该类型的默认运行时版本
                     * @param _defaultVersion 该类型的默认运行时版本
                     * 
                     */
                    void SetDefaultVersion(const std::string& _defaultVersion);

                    /**
                     * 判断参数 DefaultVersion 是否已赋值
                     * @return DefaultVersion 是否已赋值
                     * 
                     */
                    bool DefaultVersionHasBeenSet() const;

                private:

                    /**
                     * 运行时类型
                     */
                    std::string m_runtimeType;
                    bool m_runtimeTypeHasBeenSet;

                    /**
                     * 运行时版本列表
                     */
                    std::vector<std::string> m_runtimeVersions;
                    bool m_runtimeVersionsHasBeenSet;

                    /**
                     * 该类型的默认运行时版本
                     */
                    std::string m_defaultVersion;
                    bool m_defaultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OPTIONALRUNTIMES_H_
