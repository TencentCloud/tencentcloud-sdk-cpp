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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CONTAINERSTATUS_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CONTAINERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 容器状态
                */
                class ContainerStatus : public AbstractModel
                {
                public:
                    ContainerStatus();
                    ~ContainerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 容器名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置容器名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 容器名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetID() const;

                    /**
                     * 设置容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ID 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Image 镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param Status 状态
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 容器名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CONTAINERSTATUS_H_
