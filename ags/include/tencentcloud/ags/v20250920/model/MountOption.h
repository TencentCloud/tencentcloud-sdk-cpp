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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_MOUNTOPTION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_MOUNTOPTION_H_

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
                * 沙箱实例存储挂载配置可选项，用于覆盖沙箱工具的存储配置的部分选项，并提供子路径挂载配置。
                */
                class MountOption : public AbstractModel
                {
                public:
                    MountOption();
                    ~MountOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定沙箱工具中的存储配置名称
                     * @return Name 指定沙箱工具中的存储配置名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置指定沙箱工具中的存储配置名称
                     * @param _name 指定沙箱工具中的存储配置名称
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
                     * 获取沙箱实例本地挂载路径（可选），默认继承工具中的存储配置
                     * @return MountPath 沙箱实例本地挂载路径（可选），默认继承工具中的存储配置
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置沙箱实例本地挂载路径（可选），默认继承工具中的存储配置
                     * @param _mountPath 沙箱实例本地挂载路径（可选），默认继承工具中的存储配置
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取沙箱实例存储挂载子路径（可选）
                     * @return SubPath 沙箱实例存储挂载子路径（可选）
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置沙箱实例存储挂载子路径（可选）
                     * @param _subPath 沙箱实例存储挂载子路径（可选）
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取沙箱实例存储挂载读写权限（可选），默认继承工具存储配置
                     * @return ReadOnly 沙箱实例存储挂载读写权限（可选），默认继承工具存储配置
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置沙箱实例存储挂载读写权限（可选），默认继承工具存储配置
                     * @param _readOnly 沙箱实例存储挂载读写权限（可选），默认继承工具存储配置
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * 指定沙箱工具中的存储配置名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 沙箱实例本地挂载路径（可选），默认继承工具中的存储配置
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * 沙箱实例存储挂载子路径（可选）
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * 沙箱实例存储挂载读写权限（可选），默认继承工具存储配置
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_MOUNTOPTION_H_
