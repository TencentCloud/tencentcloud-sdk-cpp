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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * MoveFile请求参数结构体
                */
                class MoveFileRequest : public AbstractModel
                {
                public:
                    MoveFileRequest();
                    ~MoveFileRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取来源路径
                     * @return SourceFilePath 来源路径
                     * 
                     */
                    std::string GetSourceFilePath() const;

                    /**
                     * 设置来源路径
                     * @param _sourceFilePath 来源路径
                     * 
                     */
                    void SetSourceFilePath(const std::string& _sourceFilePath);

                    /**
                     * 判断参数 SourceFilePath 是否已赋值
                     * @return SourceFilePath 是否已赋值
                     * 
                     */
                    bool SourceFilePathHasBeenSet() const;

                    /**
                     * 获取目标路径
                     * @return TargetDirPath 目标路径
                     * 
                     */
                    std::string GetTargetDirPath() const;

                    /**
                     * 设置目标路径
                     * @param _targetDirPath 目标路径
                     * 
                     */
                    void SetTargetDirPath(const std::string& _targetDirPath);

                    /**
                     * 判断参数 TargetDirPath 是否已赋值
                     * @return TargetDirPath 是否已赋值
                     * 
                     */
                    bool TargetDirPathHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 来源路径
                     */
                    std::string m_sourceFilePath;
                    bool m_sourceFilePathHasBeenSet;

                    /**
                     * 目标路径
                     */
                    std::string m_targetDirPath;
                    bool m_targetDirPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MOVEFILEREQUEST_H_
