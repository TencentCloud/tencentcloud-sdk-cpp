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
                     * 获取<p>cfs的实例的ID</p>
                     * @return Id <p>cfs的实例的ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>cfs的实例的ID</p>
                     * @param _id <p>cfs的实例的ID</p>
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
                     * 获取<p>存储的路径</p>
                     * @return Path <p>存储的路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>存储的路径</p>
                     * @param _path <p>存储的路径</p>
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
                     * 获取<p>cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountType <p>cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountType() const;

                    /**
                     * 设置<p>cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountType <p>cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE</p>
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
                     * 获取<p>协议 1: NFS, 2: TURBO</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol <p>协议 1: NFS, 2: TURBO</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议 1: NFS, 2: TURBO</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol <p>协议 1: NFS, 2: TURBO</p>
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

                    /**
                     * 获取<p>是否平台预置存储</p>
                     * @return IsPresetStorage <p>是否平台预置存储</p>
                     * 
                     */
                    bool GetIsPresetStorage() const;

                    /**
                     * 设置<p>是否平台预置存储</p>
                     * @param _isPresetStorage <p>是否平台预置存储</p>
                     * 
                     */
                    void SetIsPresetStorage(const bool& _isPresetStorage);

                    /**
                     * 判断参数 IsPresetStorage 是否已赋值
                     * @return IsPresetStorage 是否已赋值
                     * 
                     */
                    bool IsPresetStorageHasBeenSet() const;

                private:

                    /**
                     * <p>cfs的实例的ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>存储的路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>cfs的挂载类型，可选值为：STORAGE、SOURCE 分别表示存储拓展模式和数据源模式，默认为 STORAGE</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountType;
                    bool m_mountTypeHasBeenSet;

                    /**
                     * <p>协议 1: NFS, 2: TURBO</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>是否平台预置存储</p>
                     */
                    bool m_isPresetStorage;
                    bool m_isPresetStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CFSCONFIG_H_
