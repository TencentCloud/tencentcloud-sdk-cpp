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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 组件信息
                */
                class ComponentsInfo : public AbstractModel
                {
                public:
                    ComponentsInfo();
                    ~ComponentsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名称
                     * @return Component 组件名称
                     * @deprecated
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件名称
                     * @param _component 组件名称
                     * @deprecated
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * @deprecated
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取组件版本信息
                     * @return Version 组件版本信息
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置组件版本信息
                     * @param _version 组件版本信息
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
                     * 获取可修复版本
                     * @return FixedVersion 可修复版本
                     * 
                     */
                    std::string GetFixedVersion() const;

                    /**
                     * 设置可修复版本
                     * @param _fixedVersion 可修复版本
                     * 
                     */
                    void SetFixedVersion(const std::string& _fixedVersion);

                    /**
                     * 判断参数 FixedVersion 是否已赋值
                     * @return FixedVersion 是否已赋值
                     * 
                     */
                    bool FixedVersionHasBeenSet() const;

                    /**
                     * 获取路径
                     * @return Path 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
                     * @param _path 路径
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
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return Name 组件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置组件名称
                     * @param _name 组件名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 组件名称
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 组件版本信息
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 可修复版本
                     */
                    std::string m_fixedVersion;
                    bool m_fixedVersionHasBeenSet;

                    /**
                     * 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPONENTSINFO_H_
