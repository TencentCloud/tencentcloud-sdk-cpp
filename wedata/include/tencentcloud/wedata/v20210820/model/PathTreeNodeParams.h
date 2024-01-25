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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHTREENODEPARAMS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHTREENODEPARAMS_H_

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
                * 目录树节点参数
                */
                class PathTreeNodeParams : public AbstractModel
                {
                public:
                    PathTreeNodeParams();
                    ~PathTreeNodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId 更新用户id
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
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtensionType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtensionType 文件类型
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
                     * 获取更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser 更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser 更新用户名
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

                private:

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
                     * 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                    /**
                     * 更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHTREENODEPARAMS_H_
