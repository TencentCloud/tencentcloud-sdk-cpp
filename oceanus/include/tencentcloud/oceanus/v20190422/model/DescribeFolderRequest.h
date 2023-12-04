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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEFOLDERREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEFOLDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeFolder请求参数结构体
                */
                class DescribeFolderRequest : public AbstractModel
                {
                public:
                    DescribeFolderRequest();
                    ~DescribeFolderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取folder id
                     * @return FolderId folder id
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置folder id
                     * @param _folderId folder id
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取workspace id
                     * @return WorkSpaceId workspace id
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置workspace id
                     * @param _workSpaceId workspace id
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取1:资源文件夹
其他:作业文件夹
                     * @return FolderType 1:资源文件夹
其他:作业文件夹
                     * 
                     */
                    int64_t GetFolderType() const;

                    /**
                     * 设置1:资源文件夹
其他:作业文件夹
                     * @param _folderType 1:资源文件夹
其他:作业文件夹
                     * 
                     */
                    void SetFolderType(const int64_t& _folderType);

                    /**
                     * 判断参数 FolderType 是否已赋值
                     * @return FolderType 是否已赋值
                     * 
                     */
                    bool FolderTypeHasBeenSet() const;

                private:

                    /**
                     * folder id
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * workspace id
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 1:资源文件夹
其他:作业文件夹
                     */
                    int64_t m_folderType;
                    bool m_folderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEFOLDERREQUEST_H_
