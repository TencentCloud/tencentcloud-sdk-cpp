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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEUSERFILEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEUSERFILEDTO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 脚本实体类数组
                */
                class DeleteUserFileDTO : public AbstractModel
                {
                public:
                    DeleteUserFileDTO();
                    ~DeleteUserFileDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源ID
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
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取拓展类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtensionType 拓展类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置拓展类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtensionType 拓展类型
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
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5Value md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5Value() const;

                    /**
                     * 设置md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5Value md5值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5Value(const std::string& _md5Value);

                    /**
                     * 判断参数 Md5Value 是否已赋值
                     * @return Md5Value 是否已赋值
                     * 
                     */
                    bool Md5ValueHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取上传时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 上传时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置上传时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 上传时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

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
                     * 获取cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemotePath cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remotePath cos路径
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
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 责任人
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
                     * 获取责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathDepth 路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPathDepth() const;

                    /**
                     * 设置路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathDepth 路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathDepth(const uint64_t& _pathDepth);

                    /**
                     * 判断参数 PathDepth 是否已赋值
                     * @return PathDepth 是否已赋值
                     * 
                     */
                    bool PathDepthHasBeenSet() const;

                    /**
                     * 获取项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取拓展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 拓展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置拓展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 拓展信息
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
                     * 获取本地临时路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalTempPath 本地临时路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalTempPath() const;

                    /**
                     * 设置本地临时路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localTempPath 本地临时路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalTempPath(const std::string& _localTempPath);

                    /**
                     * 判断参数 LocalTempPath 是否已赋值
                     * @return LocalTempPath 是否已赋值
                     * 
                     */
                    bool LocalTempPathHasBeenSet() const;

                    /**
                     * 获取zip路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZipPath zip路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZipPath() const;

                    /**
                     * 设置zip路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zipPath zip路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZipPath(const std::string& _zipPath);

                    /**
                     * 判断参数 ZipPath 是否已赋值
                     * @return ZipPath 是否已赋值
                     * 
                     */
                    bool ZipPathHasBeenSet() const;

                    /**
                     * 获取cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket cos桶
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
                     * 获取cos地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region cos地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region cos地域
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
                     * 获取删除人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteName 删除人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeleteName() const;

                    /**
                     * 设置删除人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteName 删除人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteName(const std::string& _deleteName);

                    /**
                     * 判断参数 DeleteName 是否已赋值
                     * @return DeleteName 是否已赋值
                     * 
                     */
                    bool DeleteNameHasBeenSet() const;

                    /**
                     * 获取删除人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteOwner 删除人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeleteOwner() const;

                    /**
                     * 设置删除人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteOwner 删除人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleteOwner(const std::string& _deleteOwner);

                    /**
                     * 判断参数 DeleteOwner 是否已赋值
                     * @return DeleteOwner 是否已赋值
                     * 
                     */
                    bool DeleteOwnerHasBeenSet() const;

                    /**
                     * 获取操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorName 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorName 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                private:

                    /**
                     * 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 拓展类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * md5值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5Value;
                    bool m_md5ValueHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 上传时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 本地路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pathDepth;
                    bool m_pathDepthHasBeenSet;

                    /**
                     * 项目Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 拓展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 本地临时路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localTempPath;
                    bool m_localTempPathHasBeenSet;

                    /**
                     * zip路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zipPath;
                    bool m_zipPathHasBeenSet;

                    /**
                     * cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cos地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 删除人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleteName;
                    bool m_deleteNameHasBeenSet;

                    /**
                     * 删除人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleteOwner;
                    bool m_deleteOwnerHasBeenSet;

                    /**
                     * 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEUSERFILEDTO_H_
