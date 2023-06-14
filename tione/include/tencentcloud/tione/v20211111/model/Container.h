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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINER_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ContainerStatus.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 容器信息
                */
                class Container : public AbstractModel
                {
                public:
                    Container();
                    ~Container() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名字
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerId id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerId id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContainerStatus GetStatus() const;

                    /**
                     * 设置容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const ContainerStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 镜像地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerStatus m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CONTAINER_H_
