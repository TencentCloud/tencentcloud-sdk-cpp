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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_ADDCHUNKREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_ADDCHUNKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * AddChunk请求参数结构体
                */
                class AddChunkRequest : public AbstractModel
                {
                public:
                    AddChunkRequest();
                    ~AddChunkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取文件ID
                     * @return FileId 文件ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID
                     * @param _fileId 文件ID
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
                     * 获取新增chunk的后面一个ChunkID。如果是空就是插到队尾。插入位置的下一个 chunkId。如果插到最前面，传入原切片的第一个。
                     * @return BeforeChunkId 新增chunk的后面一个ChunkID。如果是空就是插到队尾。插入位置的下一个 chunkId。如果插到最前面，传入原切片的第一个。
                     * 
                     */
                    std::string GetBeforeChunkId() const;

                    /**
                     * 设置新增chunk的后面一个ChunkID。如果是空就是插到队尾。插入位置的下一个 chunkId。如果插到最前面，传入原切片的第一个。
                     * @param _beforeChunkId 新增chunk的后面一个ChunkID。如果是空就是插到队尾。插入位置的下一个 chunkId。如果插到最前面，传入原切片的第一个。
                     * 
                     */
                    void SetBeforeChunkId(const std::string& _beforeChunkId);

                    /**
                     * 判断参数 BeforeChunkId 是否已赋值
                     * @return BeforeChunkId 是否已赋值
                     * 
                     */
                    bool BeforeChunkIdHasBeenSet() const;

                    /**
                     * 获取显式指定的位置,实际的位置。从 0 开始计算。0 代表插到最前面，chunk total 代表插到最后面。
                     * @return InsertPos 显式指定的位置,实际的位置。从 0 开始计算。0 代表插到最前面，chunk total 代表插到最后面。
                     * 
                     */
                    int64_t GetInsertPos() const;

                    /**
                     * 设置显式指定的位置,实际的位置。从 0 开始计算。0 代表插到最前面，chunk total 代表插到最后面。
                     * @param _insertPos 显式指定的位置,实际的位置。从 0 开始计算。0 代表插到最前面，chunk total 代表插到最后面。
                     * 
                     */
                    void SetInsertPos(const int64_t& _insertPos);

                    /**
                     * 判断参数 InsertPos 是否已赋值
                     * @return InsertPos 是否已赋值
                     * 
                     */
                    bool InsertPosHasBeenSet() const;

                    /**
                     * 获取chunk内容
                     * @return Content chunk内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置chunk内容
                     * @param _content chunk内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取新 Chunk 插入到目标 Chunk ​之后的位置。插入位置的上一个 chunkId
                     * @return AfterChunkId 新 Chunk 插入到目标 Chunk ​之后的位置。插入位置的上一个 chunkId
                     * 
                     */
                    std::string GetAfterChunkId() const;

                    /**
                     * 设置新 Chunk 插入到目标 Chunk ​之后的位置。插入位置的上一个 chunkId
                     * @param _afterChunkId 新 Chunk 插入到目标 Chunk ​之后的位置。插入位置的上一个 chunkId
                     * 
                     */
                    void SetAfterChunkId(const std::string& _afterChunkId);

                    /**
                     * 判断参数 AfterChunkId 是否已赋值
                     * @return AfterChunkId 是否已赋值
                     * 
                     */
                    bool AfterChunkIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 新增chunk的后面一个ChunkID。如果是空就是插到队尾。插入位置的下一个 chunkId。如果插到最前面，传入原切片的第一个。
                     */
                    std::string m_beforeChunkId;
                    bool m_beforeChunkIdHasBeenSet;

                    /**
                     * 显式指定的位置,实际的位置。从 0 开始计算。0 代表插到最前面，chunk total 代表插到最后面。
                     */
                    int64_t m_insertPos;
                    bool m_insertPosHasBeenSet;

                    /**
                     * chunk内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 新 Chunk 插入到目标 Chunk ​之后的位置。插入位置的上一个 chunkId
                     */
                    std::string m_afterChunkId;
                    bool m_afterChunkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_ADDCHUNKREQUEST_H_
