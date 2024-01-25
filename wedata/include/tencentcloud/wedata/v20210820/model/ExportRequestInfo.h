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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTREQUESTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTREQUESTINFO_H_

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
                * 导出请求相关信息
                */
                class ExportRequestInfo : public AbstractModel
                {
                public:
                    ExportRequestInfo();
                    ~ExportRequestInfo() = default;
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
                     * 获取需要导出的文件列表
                     * @return FileList 需要导出的文件列表
                     * 
                     */
                    std::vector<std::string> GetFileList() const;

                    /**
                     * 设置需要导出的文件列表
                     * @param _fileList 需要导出的文件列表
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
                     * 获取cos桶名
                     * @return BucketName cos桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置cos桶名
                     * @param _bucketName cos桶名
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
                     * 获取cos地域
                     * @return Region cos地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos地域
                     * @param _region cos地域
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
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 需要导出的文件列表
                     */
                    std::vector<std::string> m_fileList;
                    bool m_fileListHasBeenSet;

                    /**
                     * cos桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * cos地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXPORTREQUESTINFO_H_
