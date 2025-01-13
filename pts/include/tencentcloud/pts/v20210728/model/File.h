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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_FILE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_FILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/Scenario.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 文件列表
                */
                class File : public AbstractModel
                {
                public:
                    File();
                    ~File() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件 ID
                     * @return FileId 文件 ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件 ID
                     * @param _fileId 文件 ID
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件种类，参数文件-1，协议文件-2，请求文件-3
                     * @return Kind 文件种类，参数文件-1，协议文件-2，请求文件-3
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置文件种类，参数文件-1，协议文件-2，请求文件-3
                     * @param _kind 文件种类，参数文件-1，协议文件-2，请求文件-3
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return Name 文件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件名
                     * @param _name 文件名
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
                     * 获取文件字节数
                     * @return Size 文件字节数
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件字节数
                     * @param _size 文件字节数
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
                     * 获取文件类型
                     * @return Type 文件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型
                     * @param _type 文件类型
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
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取文件行数
                     * @return LineCount 文件行数
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置文件行数
                     * @param _lineCount 文件行数
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadLines 头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeadLines() const;

                    /**
                     * 设置头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headLines 头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeadLines(const std::vector<std::string>& _headLines);

                    /**
                     * 判断参数 HeadLines 是否已赋值
                     * @return HeadLines 是否已赋值
                     * 
                     */
                    bool HeadLinesHasBeenSet() const;

                    /**
                     * 获取尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TailLines 尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTailLines() const;

                    /**
                     * 设置尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tailLines 尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTailLines(const std::vector<std::string>& _tailLines);

                    /**
                     * 判断参数 TailLines 是否已赋值
                     * @return TailLines 是否已赋值
                     * 
                     */
                    bool TailLinesHasBeenSet() const;

                    /**
                     * 获取首行是否为参数名
                     * @return HeaderInFile 首行是否为参数名
                     * 
                     */
                    bool GetHeaderInFile() const;

                    /**
                     * 设置首行是否为参数名
                     * @param _headerInFile 首行是否为参数名
                     * 
                     */
                    void SetHeaderInFile(const bool& _headerInFile);

                    /**
                     * 判断参数 HeaderInFile 是否已赋值
                     * @return HeaderInFile 是否已赋值
                     * 
                     */
                    bool HeaderInFileHasBeenSet() const;

                    /**
                     * 获取参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderColumns 参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHeaderColumns() const;

                    /**
                     * 设置参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerColumns 参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderColumns(const std::vector<std::string>& _headerColumns);

                    /**
                     * 判断参数 HeaderColumns 是否已赋值
                     * @return HeaderColumns 是否已赋值
                     * 
                     */
                    bool HeaderColumnsHasBeenSet() const;

                    /**
                     * 获取文件夹中的文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileInfos 文件夹中的文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置文件夹中的文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileInfos 文件夹中的文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取关联场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScenarioSet 关联场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Scenario> GetScenarioSet() const;

                    /**
                     * 设置关联场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scenarioSet 关联场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScenarioSet(const std::vector<Scenario>& _scenarioSet);

                    /**
                     * 判断参数 ScenarioSet 是否已赋值
                     * @return ScenarioSet 是否已赋值
                     * 
                     */
                    bool ScenarioSetHasBeenSet() const;

                    /**
                     * 获取文件状态
                     * @return Status 文件状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置文件状态
                     * @param _status 文件状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
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
                     * 获取此字段不再使用
                     * @return AppID 此字段不再使用
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置此字段不再使用
                     * @param _appID 此字段不再使用
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取用户主账号
                     * @return Uin 用户主账号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户主账号
                     * @param _uin 用户主账号
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用户子账号
                     * @return SubAccountUin 用户子账号
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置用户子账号
                     * @param _subAccountUin 用户子账号
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取用户账号的 App ID
                     * @return AppId 用户账号的 App ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户账号的 App ID
                     * @param _appId 用户账号的 App ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 文件 ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件种类，参数文件-1，协议文件-2，请求文件-3
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件字节数
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 文件行数
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * 头部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * 尾部数据行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tailLines;
                    bool m_tailLinesHasBeenSet;

                    /**
                     * 首行是否为参数名
                     */
                    bool m_headerInFile;
                    bool m_headerInFileHasBeenSet;

                    /**
                     * 参数名数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_headerColumns;
                    bool m_headerColumnsHasBeenSet;

                    /**
                     * 文件夹中的文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 关联场景
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Scenario> m_scenarioSet;
                    bool m_scenarioSetHasBeenSet;

                    /**
                     * 文件状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 此字段不再使用
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 用户主账号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户子账号
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 用户账号的 App ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_FILE_H_
