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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RENAMEFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RENAMEFILEREQUEST_H_

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
                * RenameFile请求参数结构体
                */
                class RenameFileRequest : public AbstractModel
                {
                public:
                    RenameFileRequest();
                    ~RenameFileRequest() = default;
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
                     * 获取文件路径
                     * @return FilePath 文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
                     * @param _filePath 文件路径
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
                     * 获取新文件名
                     * @return File 新文件名
                     * 
                     */
                    std::string GetFile() const;

                    /**
                     * 设置新文件名
                     * @param _file 新文件名
                     * 
                     */
                    void SetFile(const std::string& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取来源任务（集成使用）
                     * @return FromTask 来源任务（集成使用）
                     * 
                     */
                    std::string GetFromTask() const;

                    /**
                     * 设置来源任务（集成使用）
                     * @param _fromTask 来源任务（集成使用）
                     * 
                     */
                    void SetFromTask(const std::string& _fromTask);

                    /**
                     * 判断参数 FromTask 是否已赋值
                     * @return FromTask 是否已赋值
                     * 
                     */
                    bool FromTaskHasBeenSet() const;

                    /**
                     * 获取目标任务（集成使用）
                     * @return ToTask 目标任务（集成使用）
                     * 
                     */
                    std::string GetToTask() const;

                    /**
                     * 设置目标任务（集成使用）
                     * @param _toTask 目标任务（集成使用）
                     * 
                     */
                    void SetToTask(const std::string& _toTask);

                    /**
                     * 判断参数 ToTask 是否已赋值
                     * @return ToTask 是否已赋值
                     * 
                     */
                    bool ToTaskHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 新文件名
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * 来源任务（集成使用）
                     */
                    std::string m_fromTask;
                    bool m_fromTaskHasBeenSet;

                    /**
                     * 目标任务（集成使用）
                     */
                    std::string m_toTask;
                    bool m_toTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RENAMEFILEREQUEST_H_
