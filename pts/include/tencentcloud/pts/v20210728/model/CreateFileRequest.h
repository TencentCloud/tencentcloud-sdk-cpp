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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CREATEFILEREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CREATEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * CreateFile请求参数结构体
                */
                class CreateFileRequest : public AbstractModel
                {
                public:
                    CreateFileRequest();
                    ~CreateFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件 ID。其值应为前序步骤上传该文件到 cos 桶后，文件在 cos 桶中的相应目录
                     * @return FileId 文件 ID。其值应为前序步骤上传该文件到 cos 桶后，文件在 cos 桶中的相应目录
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件 ID。其值应为前序步骤上传该文件到 cos 桶后，文件在 cos 桶中的相应目录
                     * @param _fileId 文件 ID。其值应为前序步骤上传该文件到 cos 桶后，文件在 cos 桶中的相应目录
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
                     * 获取文件大小
                     * @return Size 文件大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小
                     * @param _size 文件大小
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
                     * 获取文件类型，文件夹-folder
                     * @return Type 文件类型，文件夹-folder
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型，文件夹-folder
                     * @param _type 文件类型，文件夹-folder
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
                     * 获取行数
                     * @return LineCount 行数
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置行数
                     * @param _lineCount 行数
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
                     * 获取前几行数据
                     * @return HeadLines 前几行数据
                     * 
                     */
                    std::vector<std::string> GetHeadLines() const;

                    /**
                     * 设置前几行数据
                     * @param _headLines 前几行数据
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
                     * 获取后几行数据
                     * @return TailLines 后几行数据
                     * 
                     */
                    std::vector<std::string> GetTailLines() const;

                    /**
                     * 设置后几行数据
                     * @param _tailLines 后几行数据
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
                     * 获取表头是否在文件内
                     * @return HeaderInFile 表头是否在文件内
                     * 
                     */
                    bool GetHeaderInFile() const;

                    /**
                     * 设置表头是否在文件内
                     * @param _headerInFile 表头是否在文件内
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
                     * 获取表头
                     * @return HeaderColumns 表头
                     * 
                     */
                    std::vector<std::string> GetHeaderColumns() const;

                    /**
                     * 设置表头
                     * @param _headerColumns 表头
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
                     * @return FileInfos 文件夹中的文件
                     * 
                     */
                    std::vector<FileInfo> GetFileInfos() const;

                    /**
                     * 设置文件夹中的文件
                     * @param _fileInfos 文件夹中的文件
                     * 
                     */
                    void SetFileInfos(const std::vector<FileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                private:

                    /**
                     * 文件 ID。其值应为前序步骤上传该文件到 cos 桶后，文件在 cos 桶中的相应目录
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * 文件大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件类型，文件夹-folder
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 行数
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * 前几行数据
                     */
                    std::vector<std::string> m_headLines;
                    bool m_headLinesHasBeenSet;

                    /**
                     * 后几行数据
                     */
                    std::vector<std::string> m_tailLines;
                    bool m_tailLinesHasBeenSet;

                    /**
                     * 表头是否在文件内
                     */
                    bool m_headerInFile;
                    bool m_headerInFileHasBeenSet;

                    /**
                     * 表头
                     */
                    std::vector<std::string> m_headerColumns;
                    bool m_headerColumnsHasBeenSet;

                    /**
                     * 文件夹中的文件
                     */
                    std::vector<FileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CREATEFILEREQUEST_H_
