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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERWEBSERVICEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERWEBSERVICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器Web服务信息
                */
                class ContainerWebServiceItem : public AbstractModel
                {
                public:
                    ContainerWebServiceItem();
                    ~ContainerWebServiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Web服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type Web服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Web服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type Web服务类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 服务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置服务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 服务版本号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunAs 服务启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置服务启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runAs 服务启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     * 
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExePath 可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExePath() const;

                    /**
                     * 设置可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exePath 可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExePath(const std::string& _exePath);

                    /**
                     * 判断参数 ExePath 是否已赋值
                     * @return ExePath 是否已赋值
                     * 
                     */
                    bool ExePathHasBeenSet() const;

                    /**
                     * 获取配置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigPath 配置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigPath() const;

                    /**
                     * 设置配置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configPath 配置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigPath(const std::string& _configPath);

                    /**
                     * 判断参数 ConfigPath 是否已赋值
                     * @return ConfigPath 是否已赋值
                     * 
                     */
                    bool ConfigPathHasBeenSet() const;

                private:

                    /**
                     * Web服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 服务版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 服务启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 可执行文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exePath;
                    bool m_exePathHasBeenSet;

                    /**
                     * 配置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configPath;
                    bool m_configPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERWEBSERVICEITEM_H_
