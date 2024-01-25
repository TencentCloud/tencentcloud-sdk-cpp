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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADNEWSQLRESULTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADNEWSQLRESULTREQUEST_H_

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
                * DownloadNewSqlResult请求参数结构体
                */
                class DownloadNewSqlResultRequest : public AbstractModel
                {
                public:
                    DownloadNewSqlResultRequest();
                    ~DownloadNewSqlResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SQL任务Id
                     * @return DetailId SQL任务Id
                     * 
                     */
                    uint64_t GetDetailId() const;

                    /**
                     * 设置SQL任务Id
                     * @param _detailId SQL任务Id
                     * 
                     */
                    void SetDetailId(const uint64_t& _detailId);

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取下载文件名
                     * @return FileName 下载文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置下载文件名
                     * @param _fileName 下载文件名
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
                     * 获取字段分隔符
                     * @return SeparatorChar 字段分隔符
                     * 
                     */
                    std::string GetSeparatorChar() const;

                    /**
                     * 设置字段分隔符
                     * @param _separatorChar 字段分隔符
                     * 
                     */
                    void SetSeparatorChar(const std::string& _separatorChar);

                    /**
                     * 判断参数 SeparatorChar 是否已赋值
                     * @return SeparatorChar 是否已赋值
                     * 
                     */
                    bool SeparatorCharHasBeenSet() const;

                    /**
                     * 获取必填，否则报错，项目ID
                     * @return ProjectId 必填，否则报错，项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置必填，否则报错，项目ID
                     * @param _projectId 必填，否则报错，项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * SQL任务Id
                     */
                    uint64_t m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * 下载文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 字段分隔符
                     */
                    std::string m_separatorChar;
                    bool m_separatorCharHasBeenSet;

                    /**
                     * 必填，否则报错，项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DOWNLOADNEWSQLRESULTREQUEST_H_
