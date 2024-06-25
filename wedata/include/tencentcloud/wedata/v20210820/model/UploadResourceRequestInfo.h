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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADRESOURCEREQUESTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADRESOURCEREQUESTINFO_H_

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
                * 资管管理-上传资源请求
                */
                class UploadResourceRequestInfo : public AbstractModel
                {
                public:
                    UploadResourceRequestInfo();
                    ~UploadResourceRequestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取资源路径
                     * @return FilePath 资源路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置资源路径
                     * @param _filePath 资源路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取桶名称
                     * @return BucketName 桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名称
                     * @param _bucketName 桶名称
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
                     * 获取所属地区
                     * @return Region 所属地区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地区
                     * @param _region 所属地区
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
                     * 获取是否为新资源
                     * @return NewFile 是否为新资源
                     * 
                     */
                    bool GetNewFile() const;

                    /**
                     * 设置是否为新资源
                     * @param _newFile 是否为新资源
                     * 
                     */
                    void SetNewFile(const bool& _newFile);

                    /**
                     * 判断参数 NewFile 是否已赋值
                     * @return NewFile 是否已赋值
                     * 
                     */
                    bool NewFileHasBeenSet() const;

                    /**
                     * 获取资源列表
                     * @return FileList 资源列表
                     * 
                     */
                    std::vector<std::string> GetFileList() const;

                    /**
                     * 设置资源列表
                     * @param _fileList 资源列表
                     * 
                     */
                    void SetFileList(const std::vector<std::string>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                    /**
                     * 获取资源大小列表
                     * @return FileSizeList 资源大小列表
                     * 
                     */
                    std::vector<std::string> GetFileSizeList() const;

                    /**
                     * 设置资源大小列表
                     * @param _fileSizeList 资源大小列表
                     * 
                     */
                    void SetFileSizeList(const std::vector<std::string>& _fileSizeList);

                    /**
                     * 判断参数 FileSizeList 是否已赋值
                     * @return FileSizeList 是否已赋值
                     * 
                     */
                    bool FileSizeListHasBeenSet() const;

                    /**
                     * 获取File Md5（适配私有化，公有云可以不传）
                     * @return FileMd5 File Md5（适配私有化，公有云可以不传）
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置File Md5（适配私有化，公有云可以不传）
                     * @param _fileMd5 File Md5（适配私有化，公有云可以不传）
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 所属地区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 是否为新资源
                     */
                    bool m_newFile;
                    bool m_newFileHasBeenSet;

                    /**
                     * 资源列表
                     */
                    std::vector<std::string> m_fileList;
                    bool m_fileListHasBeenSet;

                    /**
                     * 资源大小列表
                     */
                    std::vector<std::string> m_fileSizeList;
                    bool m_fileSizeListHasBeenSet;

                    /**
                     * File Md5（适配私有化，公有云可以不传）
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPLOADRESOURCEREQUESTINFO_H_
