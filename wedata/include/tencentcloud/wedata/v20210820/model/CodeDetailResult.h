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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODEDETAILRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODEDETAILRESULT_H_

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
                * 文件或任务详情响应信息
                */
                class CodeDetailResult : public AbstractModel
                {
                public:
                    CodeDetailResult();
                    ~CodeDetailResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件或任务ID
                     * @return Id 文件或任务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置文件或任务ID
                     * @param _id 文件或任务ID
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
                     * 获取文件或任务名称
                     * @return Name 文件或任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件或任务名称
                     * @param _name 文件或任务名称
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
                     * 获取文件或任务类型
                     * @return Type 文件或任务类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件或任务类型
                     * @param _type 文件或任务类型
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
                     * 获取文件扩展类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtensionType 文件扩展类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置文件扩展类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtensionType 文件扩展类型
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
                     * 获取桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket 桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket 桶
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
                     * 获取区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 区域
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
                     * 获取扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 扩展信息
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

                private:

                    /**
                     * 文件或任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件或任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件或任务类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 文件扩展类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * 桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 远程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 本地路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODEDETAILRESULT_H_
