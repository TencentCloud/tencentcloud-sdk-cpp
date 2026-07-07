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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RUNTIMELIB_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RUNTIMELIB_H_

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
                * 预制镜像中的运行库详情
                */
                class RuntimeLib : public AbstractModel
                {
                public:
                    RuntimeLib();
                    ~RuntimeLib() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>运行库名称</p>
                     * @return Name <p>运行库名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>运行库名称</p>
                     * @param _name <p>运行库名称</p>
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
                     * 获取<p>运行库版本号</p>
                     * @return Version <p>运行库版本号</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>运行库版本号</p>
                     * @param _version <p>运行库版本号</p>
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
                     * <p>运行库名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>运行库版本号</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RUNTIMELIB_H_
