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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ENGINEVERSION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ENGINEVERSION_H_

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
                * 引擎版本
                */
                class EngineVersion : public AbstractModel
                {
                public:
                    EngineVersion();
                    ~EngineVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取运行镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 运行镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImage() const;

                    /**
                     * 设置运行镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Image 运行镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取是否支持int8量化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportIntEightQuantization 是否支持int8量化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsSupportIntEightQuantization() const;

                    /**
                     * 设置是否支持int8量化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSupportIntEightQuantization 是否支持int8量化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSupportIntEightQuantization(const bool& _isSupportIntEightQuantization);

                    /**
                     * 判断参数 IsSupportIntEightQuantization 是否已赋值
                     * @return IsSupportIntEightQuantization 是否已赋值
                     */
                    bool IsSupportIntEightQuantizationHasBeenSet() const;

                    /**
                     * 获取框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkVersion 框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FrameworkVersion 框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     */
                    bool FrameworkVersionHasBeenSet() const;

                private:

                    /**
                     * 引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 运行镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 是否支持int8量化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isSupportIntEightQuantization;
                    bool m_isSupportIntEightQuantizationHasBeenSet;

                    /**
                     * 框架版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ENGINEVERSION_H_
