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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SQLFILEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SQLFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/UploadInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * sql文件信息
                */
                class SqlFileInfo : public AbstractModel
                {
                public:
                    SqlFileInfo();
                    ~SqlFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上传时间
                     * @return UploadTime 上传时间
                     * 
                     */
                    std::string GetUploadTime() const;

                    /**
                     * 设置上传时间
                     * @param _uploadTime 上传时间
                     * 
                     */
                    void SetUploadTime(const std::string& _uploadTime);

                    /**
                     * 判断参数 UploadTime 是否已赋值
                     * @return UploadTime 是否已赋值
                     * 
                     */
                    bool UploadTimeHasBeenSet() const;

                    /**
                     * 获取上传进度
                     * @return UploadInfo 上传进度
                     * 
                     */
                    UploadInfo GetUploadInfo() const;

                    /**
                     * 设置上传进度
                     * @param _uploadInfo 上传进度
                     * 
                     */
                    void SetUploadInfo(const UploadInfo& _uploadInfo);

                    /**
                     * 判断参数 UploadInfo 是否已赋值
                     * @return UploadInfo 是否已赋值
                     * 
                     */
                    bool UploadInfoHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
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
                     * 获取文件大小，单位为Bytes
                     * @return FileSize 文件大小，单位为Bytes
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位为Bytes
                     * @param _fileSize 文件大小，单位为Bytes
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取上传是否完成标志，可选值：0 - 未完成，1 - 已完成
                     * @return IsUploadFinished 上传是否完成标志，可选值：0 - 未完成，1 - 已完成
                     * 
                     */
                    int64_t GetIsUploadFinished() const;

                    /**
                     * 设置上传是否完成标志，可选值：0 - 未完成，1 - 已完成
                     * @param _isUploadFinished 上传是否完成标志，可选值：0 - 未完成，1 - 已完成
                     * 
                     */
                    void SetIsUploadFinished(const int64_t& _isUploadFinished);

                    /**
                     * 判断参数 IsUploadFinished 是否已赋值
                     * @return IsUploadFinished 是否已赋值
                     * 
                     */
                    bool IsUploadFinishedHasBeenSet() const;

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

                private:

                    /**
                     * 上传时间
                     */
                    std::string m_uploadTime;
                    bool m_uploadTimeHasBeenSet;

                    /**
                     * 上传进度
                     */
                    UploadInfo m_uploadInfo;
                    bool m_uploadInfoHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小，单位为Bytes
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 上传是否完成标志，可选值：0 - 未完成，1 - 已完成
                     */
                    int64_t m_isUploadFinished;
                    bool m_isUploadFinishedHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SQLFILEINFO_H_
