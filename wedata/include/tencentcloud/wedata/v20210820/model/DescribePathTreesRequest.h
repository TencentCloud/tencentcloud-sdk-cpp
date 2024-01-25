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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPATHTREESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPATHTREESREQUEST_H_

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
                * DescribePathTrees请求参数结构体
                */
                class DescribePathTreesRequest : public AbstractModel
                {
                public:
                    DescribePathTreesRequest();
                    ~DescribePathTreesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取关键字
                     * @return Keyword 关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字
                     * @param _keyword 关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取是否包含文件
                     * @return IncludeFile 是否包含文件
                     * 
                     */
                    std::string GetIncludeFile() const;

                    /**
                     * 设置是否包含文件
                     * @param _includeFile 是否包含文件
                     * 
                     */
                    void SetIncludeFile(const std::string& _includeFile);

                    /**
                     * 判断参数 IncludeFile 是否已赋值
                     * @return IncludeFile 是否已赋值
                     * 
                     */
                    bool IncludeFileHasBeenSet() const;

                    /**
                     * 获取最大深度
                     * @return MaxDepth 最大深度
                     * 
                     */
                    uint64_t GetMaxDepth() const;

                    /**
                     * 设置最大深度
                     * @param _maxDepth 最大深度
                     * 
                     */
                    void SetMaxDepth(const uint64_t& _maxDepth);

                    /**
                     * 判断参数 MaxDepth 是否已赋值
                     * @return MaxDepth 是否已赋值
                     * 
                     */
                    bool MaxDepthHasBeenSet() const;

                    /**
                     * 获取文件是否被引用
                     * @return FileNotUsed 文件是否被引用
                     * 
                     */
                    std::string GetFileNotUsed() const;

                    /**
                     * 设置文件是否被引用
                     * @param _fileNotUsed 文件是否被引用
                     * 
                     */
                    void SetFileNotUsed(const std::string& _fileNotUsed);

                    /**
                     * 判断参数 FileNotUsed 是否已赋值
                     * @return FileNotUsed 是否已赋值
                     * 
                     */
                    bool FileNotUsedHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 是否包含文件
                     */
                    std::string m_includeFile;
                    bool m_includeFileHasBeenSet;

                    /**
                     * 最大深度
                     */
                    uint64_t m_maxDepth;
                    bool m_maxDepthHasBeenSet;

                    /**
                     * 文件是否被引用
                     */
                    std::string m_fileNotUsed;
                    bool m_fileNotUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPATHTREESREQUEST_H_
