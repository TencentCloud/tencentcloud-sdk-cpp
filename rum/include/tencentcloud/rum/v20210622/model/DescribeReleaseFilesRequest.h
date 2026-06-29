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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeReleaseFiles请求参数结构体
                */
                class DescribeReleaseFilesRequest : public AbstractModel
                {
                public:
                    DescribeReleaseFilesRequest();
                    ~DescribeReleaseFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目 id</p>
                     * @return ProjectID <p>项目 id</p>
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置<p>项目 id</p>
                     * @param _projectID <p>项目 id</p>
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取<p>文件版本</p>
                     * @return FileVersion <p>文件版本</p>
                     * 
                     */
                    std::string GetFileVersion() const;

                    /**
                     * 设置<p>文件版本</p>
                     * @param _fileVersion <p>文件版本</p>
                     * 
                     */
                    void SetFileVersion(const std::string& _fileVersion);

                    /**
                     * 判断参数 FileVersion 是否已赋值
                     * @return FileVersion 是否已赋值
                     * 
                     */
                    bool FileVersionHasBeenSet() const;

                    /**
                     * 获取<p>查询过滤条件（根据sourcemap的文件名模糊匹配）</p>
                     * @return FileName <p>查询过滤条件（根据sourcemap的文件名模糊匹配）</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>查询过滤条件（根据sourcemap的文件名模糊匹配）</p>
                     * @param _fileName <p>查询过滤条件（根据sourcemap的文件名模糊匹配）</p>
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
                     * 获取<p>false/不传=保留「最近 3 个月」约束（旧行为）；true=绕过时间窗口</p>
                     * @return IgnoreDefaultTimeRange <p>false/不传=保留「最近 3 个月」约束（旧行为）；true=绕过时间窗口</p>
                     * 
                     */
                    bool GetIgnoreDefaultTimeRange() const;

                    /**
                     * 设置<p>false/不传=保留「最近 3 个月」约束（旧行为）；true=绕过时间窗口</p>
                     * @param _ignoreDefaultTimeRange <p>false/不传=保留「最近 3 个月」约束（旧行为）；true=绕过时间窗口</p>
                     * 
                     */
                    void SetIgnoreDefaultTimeRange(const bool& _ignoreDefaultTimeRange);

                    /**
                     * 判断参数 IgnoreDefaultTimeRange 是否已赋值
                     * @return IgnoreDefaultTimeRange 是否已赋值
                     * 
                     */
                    bool IgnoreDefaultTimeRangeHasBeenSet() const;

                private:

                    /**
                     * <p>项目 id</p>
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * <p>文件版本</p>
                     */
                    std::string m_fileVersion;
                    bool m_fileVersionHasBeenSet;

                    /**
                     * <p>查询过滤条件（根据sourcemap的文件名模糊匹配）</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>false/不传=保留「最近 3 个月」约束（旧行为）；true=绕过时间窗口</p>
                     */
                    bool m_ignoreDefaultTimeRange;
                    bool m_ignoreDefaultTimeRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_
