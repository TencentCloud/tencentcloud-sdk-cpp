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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEVOLUMEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEVOLUMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateVolume请求参数结构体
                */
                class CreateVolumeRequest : public AbstractModel
                {
                public:
                    CreateVolumeRequest();
                    ~CreateVolumeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取catalog 信息
                     * @return CatalogName catalog 信息
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog 信息
                     * @param _catalogName catalog 信息
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取schema 信息
                     * @return SchemaName schema 信息
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema 信息
                     * @param _schemaName schema 信息
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取数据卷名称
                     * @return VolumeName 数据卷名称
                     * 
                     */
                    std::string GetVolumeName() const;

                    /**
                     * 设置数据卷名称
                     * @param _volumeName 数据卷名称
                     * 
                     */
                    void SetVolumeName(const std::string& _volumeName);

                    /**
                     * 判断参数 VolumeName 是否已赋值
                     * @return VolumeName 是否已赋值
                     * 
                     */
                    bool VolumeNameHasBeenSet() const;

                    /**
                     * 获取调用时所在workspace唯一id
                     * @return WorkspaceId 调用时所在workspace唯一id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置调用时所在workspace唯一id
                     * @param _workspaceId 调用时所在workspace唯一id
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Comment 描述信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述信息
                     * @param _comment 描述信息
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取扩展参数
                     * @return Properties 扩展参数
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置扩展参数
                     * @param _properties 扩展参数
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取存储位置
                     * @return StorageLocation 存储位置
                     * 
                     */
                    std::string GetStorageLocation() const;

                    /**
                     * 设置存储位置
                     * @param _storageLocation 存储位置
                     * 
                     */
                    void SetStorageLocation(const std::string& _storageLocation);

                    /**
                     * 判断参数 StorageLocation 是否已赋值
                     * @return StorageLocation 是否已赋值
                     * 
                     */
                    bool StorageLocationHasBeenSet() const;

                    /**
                     * 获取数据卷类型
                     * @return Type 数据卷类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据卷类型
                     * @param _type 数据卷类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * catalog 信息
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * schema 信息
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 数据卷名称
                     */
                    std::string m_volumeName;
                    bool m_volumeNameHasBeenSet;

                    /**
                     * 调用时所在workspace唯一id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 扩展参数
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 存储位置
                     */
                    std::string m_storageLocation;
                    bool m_storageLocationHasBeenSet;

                    /**
                     * 数据卷类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEVOLUMEREQUEST_H_
