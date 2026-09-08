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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_OSWORLDCONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_OSWORLDCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * OSWorld 内置版本配置
                */
                class OSWorldConfiguration : public AbstractModel
                {
                public:
                    OSWorldConfiguration();
                    ~OSWorldConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指定内置 OSWorld 版本</p><p>枚举值：</p><ul><li>osworld1： osworld v1</li><li>osworld2： osworld v2</li></ul><p>默认值：osworld1</p>
                     * @return Version <p>指定内置 OSWorld 版本</p><p>枚举值：</p><ul><li>osworld1： osworld v1</li><li>osworld2： osworld v2</li></ul><p>默认值：osworld1</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>指定内置 OSWorld 版本</p><p>枚举值：</p><ul><li>osworld1： osworld v1</li><li>osworld2： osworld v2</li></ul><p>默认值：osworld1</p>
                     * @param _version <p>指定内置 OSWorld 版本</p><p>枚举值：</p><ul><li>osworld1： osworld v1</li><li>osworld2： osworld v2</li></ul><p>默认值：osworld1</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * <p>指定内置 OSWorld 版本</p><p>枚举值：</p><ul><li>osworld1： osworld v1</li><li>osworld2： osworld v2</li></ul><p>默认值：osworld1</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_OSWORLDCONFIGURATION_H_
