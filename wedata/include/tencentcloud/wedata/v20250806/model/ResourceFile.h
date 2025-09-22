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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFILE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 资源文件详情
                */
                class ResourceFile : public AbstractModel
                {
                public:
                    ResourceFile();
                    ~ResourceFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取资源文件ID
                     * @return ResourceId 资源文件ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源文件ID
                     * @param _resourceId 资源文件ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源文件名称
                     * @return ResourceName 资源文件名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源文件名称
                     * @param _resourceName 资源文件名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源文件路径
                     * @return LocalPath 资源文件路径
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置资源文件路径
                     * @param _localPath 资源文件路径
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取资源对象COS存储路径
                     * @return RemotePath 资源对象COS存储路径
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置资源对象COS存储路径
                     * @param _remotePath 资源对象COS存储路径
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtensionType 资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtensionType 资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileExtensionType(const std::string& _fileExtensionType);

                    /**
                     * 判断参数 FileExtensionType 是否已赋值
                     * @return FileExtensionType 是否已赋值
                     * 
                     */
                    bool FileExtensionTypeHasBeenSet() const;

                    /**
                     * 获取资源大小
                     * @return Size 资源大小
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置资源大小
                     * @param _size 资源大小
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取创建用户ID
                     * @return CreatorUserUin 创建用户ID
                     * 
                     */
                    std::string GetCreatorUserUin() const;

                    /**
                     * 设置创建用户ID
                     * @param _creatorUserUin 创建用户ID
                     * 
                     */
                    void SetCreatorUserUin(const std::string& _creatorUserUin);

                    /**
                     * 判断参数 CreatorUserUin 是否已赋值
                     * @return CreatorUserUin 是否已赋值
                     * 
                     */
                    bool CreatorUserUinHasBeenSet() const;

                    /**
                     * 获取创建用户名称
                     * @return CreatorUserName 创建用户名称
                     * 
                     */
                    std::string GetCreatorUserName() const;

                    /**
                     * 设置创建用户名称
                     * @param _creatorUserName 创建用户名称
                     * 
                     */
                    void SetCreatorUserName(const std::string& _creatorUserName);

                    /**
                     * 判断参数 CreatorUserName 是否已赋值
                     * @return CreatorUserName 是否已赋值
                     * 
                     */
                    bool CreatorUserNameHasBeenSet() const;

                    /**
                     * 获取最后更新用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserName 最后更新用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserName() const;

                    /**
                     * 设置最后更新用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserName 最后更新用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserName(const std::string& _updateUserName);

                    /**
                     * 判断参数 UpdateUserName 是否已赋值
                     * @return UpdateUserName 是否已赋值
                     * 
                     */
                    bool UpdateUserNameHasBeenSet() const;

                    /**
                     * 获取最后更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserUin 最后更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置最后更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserUin 最后更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取COS 桶
                     * @return BucketName COS 桶
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置COS 桶
                     * @param _bucketName COS 桶
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取COS 地域
                     * @return CosRegion COS 地域
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置COS 地域
                     * @param _cosRegion COS 地域
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取资源来源模式
                     * @return ResourceSourceMode 资源来源模式
                     * 
                     */
                    std::string GetResourceSourceMode() const;

                    /**
                     * 设置资源来源模式
                     * @param _resourceSourceMode 资源来源模式
                     * 
                     */
                    void SetResourceSourceMode(const std::string& _resourceSourceMode);

                    /**
                     * 判断参数 ResourceSourceMode 是否已赋值
                     * @return ResourceSourceMode 是否已赋值
                     * 
                     */
                    bool ResourceSourceModeHasBeenSet() const;

                    /**
                     * 获取本地工程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId 本地工程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置本地工程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId 本地工程ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取本地工程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo 本地工程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置本地工程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo 本地工程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源文件ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源文件名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源文件路径
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * 资源对象COS存储路径
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * 资源大小
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 创建用户ID
                     */
                    std::string m_creatorUserUin;
                    bool m_creatorUserUinHasBeenSet;

                    /**
                     * 创建用户名称
                     */
                    std::string m_creatorUserName;
                    bool m_creatorUserNameHasBeenSet;

                    /**
                     * 最后更新用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserName;
                    bool m_updateUserNameHasBeenSet;

                    /**
                     * 最后更新用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * COS 桶
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * COS 地域
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 资源来源模式
                     */
                    std::string m_resourceSourceMode;
                    bool m_resourceSourceModeHasBeenSet;

                    /**
                     * 本地工程ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 本地工程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEFILE_H_
