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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTINFORESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTINFORESPONSE_H_

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
                * 开发空间-脚本相关响应
                */
                class ScriptInfoResponse : public AbstractModel
                {
                public:
                    ScriptInfoResponse();
                    ~ScriptInfoResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源id
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
                     * 获取脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 脚本名称
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const double& _size);

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
                     * 获取用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 用户名称
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
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 用户id
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
                    int64_t GetPathDepth() const;

                    /**
                     * 设置路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathDepth 路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathDepth(const int64_t& _pathDepth);

                    /**
                     * 判断参数 PathDepth 是否已赋值
                     * @return PathDepth 是否已赋值
                     * 
                     */
                    bool PathDepthHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
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
                     * 获取附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 附加信息
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
                     * 获取本地临时文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalTempPath 本地临时文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalTempPath() const;

                    /**
                     * 设置本地临时文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localTempPath 本地临时文件路径
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
                     * 获取本地压缩文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZipPath 本地压缩文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZipPath() const;

                    /**
                     * 设置本地压缩文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zipPath 本地压缩文件路径
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
                     * 获取cos桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket cos桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket cos桶名
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
                     * 获取cos地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region cos地区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos地区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region cos地区
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

                private:

                    /**
                     * 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 脚本名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件扩展名类型
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
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

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
                     * 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 路径深度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pathDepth;
                    bool m_pathDepthHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 附加信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 本地临时文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localTempPath;
                    bool m_localTempPathHasBeenSet;

                    /**
                     * 本地压缩文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zipPath;
                    bool m_zipPathHasBeenSet;

                    /**
                     * cos桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cos地区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTINFORESPONSE_H_
