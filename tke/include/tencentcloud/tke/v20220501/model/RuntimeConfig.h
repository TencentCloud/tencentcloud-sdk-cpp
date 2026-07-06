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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_RUNTIMECONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_RUNTIMECONFIG_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 运行时配置
                */
                class RuntimeConfig : public AbstractModel
                {
                public:
                    RuntimeConfig();
                    ~RuntimeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>运行时类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeType <p>运行时类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntimeType() const;

                    /**
                     * 设置<p>运行时类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeType <p>运行时类型</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>运行时版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeVersion <p>运行时版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置<p>运行时版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeVersion <p>运行时版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取<p>运行时根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuntimeRootDir <p>运行时根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuntimeRootDir() const;

                    /**
                     * 设置<p>运行时根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runtimeRootDir <p>运行时根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuntimeRootDir(const std::string& _runtimeRootDir);

                    /**
                     * 判断参数 RuntimeRootDir 是否已赋值
                     * @return RuntimeRootDir 是否已赋值
                     * 
                     */
                    bool RuntimeRootDirHasBeenSet() const;

                private:

                    /**
                     * <p>运行时类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtimeType;
                    bool m_runtimeTypeHasBeenSet;

                    /**
                     * <p>运行时版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * <p>运行时根目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtimeRootDir;
                    bool m_runtimeRootDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_RUNTIMECONFIG_H_
