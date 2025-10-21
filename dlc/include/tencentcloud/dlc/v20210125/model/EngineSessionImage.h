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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENGINESESSIONIMAGE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENGINESESSIONIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * TensorFlow、Pytorch、SK-learn镜像信息列表
                */
                class EngineSessionImage : public AbstractModel
                {
                public:
                    EngineSessionImage();
                    ~EngineSessionImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Spark镜像唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkImageId Spark镜像唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkImageId() const;

                    /**
                     * 设置Spark镜像唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkImageId Spark镜像唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkImageId(const std::string& _sparkImageId);

                    /**
                     * 判断参数 SparkImageId 是否已赋值
                     * @return SparkImageId 是否已赋值
                     * 
                     */
                    bool SparkImageIdHasBeenSet() const;

                    /**
                     * 获取Spark镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkImageVersion Spark镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkImageVersion() const;

                    /**
                     * 设置Spark镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkImageVersion Spark镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkImageVersion(const std::string& _sparkImageVersion);

                    /**
                     * 判断参数 SparkImageVersion 是否已赋值
                     * @return SparkImageVersion 是否已赋值
                     * 
                     */
                    bool SparkImageVersionHasBeenSet() const;

                    /**
                     * 获取小版本镜像类型.1:TensorFlow、2:Pytorch、3:SK-learn

注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkImageType 小版本镜像类型.1:TensorFlow、2:Pytorch、3:SK-learn

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSparkImageType() const;

                    /**
                     * 设置小版本镜像类型.1:TensorFlow、2:Pytorch、3:SK-learn

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkImageType 小版本镜像类型.1:TensorFlow、2:Pytorch、3:SK-learn

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkImageType(const int64_t& _sparkImageType);

                    /**
                     * 判断参数 SparkImageType 是否已赋值
                     * @return SparkImageType 是否已赋值
                     * 
                     */
                    bool SparkImageTypeHasBeenSet() const;

                    /**
                     * 获取镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SparkImageTag 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSparkImageTag() const;

                    /**
                     * 设置镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sparkImageTag 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSparkImageTag(const std::string& _sparkImageTag);

                    /**
                     * 判断参数 SparkImageTag 是否已赋值
                     * @return SparkImageTag 是否已赋值
                     * 
                     */
                    bool SparkImageTagHasBeenSet() const;

                private:

                    /**
                     * Spark镜像唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkImageId;
                    bool m_sparkImageIdHasBeenSet;

                    /**
                     * Spark镜像版本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkImageVersion;
                    bool m_sparkImageVersionHasBeenSet;

                    /**
                     * 小版本镜像类型.1:TensorFlow、2:Pytorch、3:SK-learn

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sparkImageType;
                    bool m_sparkImageTypeHasBeenSet;

                    /**
                     * 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sparkImageTag;
                    bool m_sparkImageTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENGINESESSIONIMAGE_H_
