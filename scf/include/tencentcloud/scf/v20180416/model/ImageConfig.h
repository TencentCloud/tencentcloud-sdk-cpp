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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_IMAGECONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_IMAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * TCR镜像信息描述
                */
                class ImageConfig : public AbstractModel
                {
                public:
                    ImageConfig();
                    ~ImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像仓库类型，个人版或者企业版：personal/enterprise
                     * @return ImageType 镜像仓库类型，个人版或者企业版：personal/enterprise
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置镜像仓库类型，个人版或者企业版：personal/enterprise
                     * @param ImageType 镜像仓库类型，个人版或者企业版：personal/enterprise
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取{domain}/{namespace}/{imageName}:{tag}@{digest}
                     * @return ImageUri {domain}/{namespace}/{imageName}:{tag}@{digest}
                     */
                    std::string GetImageUri() const;

                    /**
                     * 设置{domain}/{namespace}/{imageName}:{tag}@{digest}
                     * @param ImageUri {domain}/{namespace}/{imageName}:{tag}@{digest}
                     */
                    void SetImageUri(const std::string& _imageUri);

                    /**
                     * 判断参数 ImageUri 是否已赋值
                     * @return ImageUri 是否已赋值
                     */
                    bool ImageUriHasBeenSet() const;

                    /**
                     * 获取用于企业版TCR获取镜像拉取临时凭证，ImageType为"enterprise"时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistryId 用于企业版TCR获取镜像拉取临时凭证，ImageType为"enterprise"时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置用于企业版TCR获取镜像拉取临时凭证，ImageType为"enterprise"时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegistryId 用于企业版TCR获取镜像拉取临时凭证，ImageType为"enterprise"时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取应用的ENTRYPOINT
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntryPoint 应用的ENTRYPOINT
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEntryPoint() const;

                    /**
                     * 设置应用的ENTRYPOINT
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EntryPoint 应用的ENTRYPOINT
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEntryPoint(const std::string& _entryPoint);

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取entrypoint执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command entrypoint执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置entrypoint执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Command entrypoint执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Args 命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Args 命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetArgs(const std::string& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 镜像仓库类型，个人版或者企业版：personal/enterprise
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * {domain}/{namespace}/{imageName}:{tag}@{digest}
                     */
                    std::string m_imageUri;
                    bool m_imageUriHasBeenSet;

                    /**
                     * 用于企业版TCR获取镜像拉取临时凭证，ImageType为"enterprise"时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 应用的ENTRYPOINT
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * entrypoint执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 命令参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_IMAGECONFIG_H_
