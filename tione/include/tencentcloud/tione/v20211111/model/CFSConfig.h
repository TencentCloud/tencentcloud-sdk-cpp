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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_

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
                * CFS存储的配置
                */
                class CFSConfig : public AbstractModel
                {
                public:
                    CFSConfig();
                    ~CFSConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cfs的实例的ID
                     * @return Id cfs的实例的ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置cfs的实例的ID
                     * @param _id cfs的实例的ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取存储的路径
                     * @return Path 存储的路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置存储的路径
                     * @param _path 存储的路径
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
                     * 获取cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountType cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountType() const;

                    /**
                     * 设置cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountType cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountType(const std::string& _mountType);

                    /**
                     * 判断参数 MountType 是否已赋值
                     * @return MountType 是否已赋值
                     * 
                     */
                    bool MountTypeHasBeenSet() const;

                    /**
                     * 获取协议 1: NFS, 2: TURBO
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 协议 1: NFS, 2: TURBO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议 1: NFS, 2: TURBO
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 协议 1: NFS, 2: TURBO
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * cfs的实例的ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 存储的路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountType;
                    bool m_mountTypeHasBeenSet;

                    /**
                     * 协议 1: NFS, 2: TURBO
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_
