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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_NEWPATHDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_NEWPATHDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/NewPathDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资管管理-路径返回键值对
                */
                class NewPathDTO : public AbstractModel
                {
                public:
                    NewPathDTO();
                    ~NewPathDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
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
                     * 获取是否为叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLeaf 是否为叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否为叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLeaf 是否为叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取资源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源 id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取本地路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalPath 本地路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置本地路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localPath 本地路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取远程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemotePath 远程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置远程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remotePath 远程路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文件扩展名类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtensionType 文件扩展名类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置文件扩展名类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtensionType 文件扩展名类型
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
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取MD5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MD5Value MD5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMD5Value() const;

                    /**
                     * 设置MD5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mD5Value MD5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMD5Value(const std::string& _mD5Value);

                    /**
                     * 判断参数 MD5Value 是否已赋值
                     * @return MD5Value 是否已赋值
                     * 
                     */
                    bool MD5ValueHasBeenSet() const;

                    /**
                     * 获取所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取更新用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser 更新用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置更新用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser 更新用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取更新用户 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 更新用户 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置更新用户 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId 更新用户 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取创建日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取cos 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region cos 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region cos 地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取子节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 子节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NewPathDTO> GetChildren() const;

                    /**
                     * 设置子节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children 子节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<NewPathDTO>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取cos 全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullPath cos 全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置cos 全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullPath cos 全路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否为叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 资源 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 本地路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * 远程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 文件扩展名类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * MD5值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mD5Value;
                    bool m_mD5ValueHasBeenSet;

                    /**
                     * 所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 更新用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * 更新用户 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 创建日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cos 地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 子节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NewPathDTO> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * cos 全路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_NEWPATHDTO_H_
