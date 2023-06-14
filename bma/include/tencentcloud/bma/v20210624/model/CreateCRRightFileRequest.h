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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTFILEREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20210624/model/File.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateCRRightFile请求参数结构体
                */
                class CreateCRRightFileRequest : public AbstractModel
                {
                public:
                    CreateCRRightFileRequest();
                    ~CreateCRRightFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID
                     * @param _workId 作品ID
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取权属文件列表
                     * @return FileList 权属文件列表
                     * 
                     */
                    std::vector<File> GetFileList() const;

                    /**
                     * 设置权属文件列表
                     * @param _fileList 权属文件列表
                     * 
                     */
                    void SetFileList(const std::vector<File>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                private:

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 权属文件列表
                     */
                    std::vector<File> m_fileList;
                    bool m_fileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTFILEREQUEST_H_
