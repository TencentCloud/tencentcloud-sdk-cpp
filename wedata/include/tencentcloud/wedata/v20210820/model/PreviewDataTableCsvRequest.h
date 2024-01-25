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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PREVIEWDATATABLECSVREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PREVIEWDATATABLECSVREQUEST_H_

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
                * PreviewDataTableCsv请求参数结构体
                */
                class PreviewDataTableCsvRequest : public AbstractModel
                {
                public:
                    PreviewDataTableCsvRequest();
                    ~PreviewDataTableCsvRequest() = default;
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
                     * 获取Cos 存储桶名称
                     * @return BucketName Cos 存储桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Cos 存储桶名称
                     * @param _bucketName Cos 存储桶名称
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
                     * 获取文件在cos上的存储路径，该路径有固定前缀，/datastudio/data_manage/import/项目ID，example: /datastudio/data_manage/import/1460947878944567296/demo_2.csv
                     * @return FilePath 文件在cos上的存储路径，该路径有固定前缀，/datastudio/data_manage/import/项目ID，example: /datastudio/data_manage/import/1460947878944567296/demo_2.csv
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件在cos上的存储路径，该路径有固定前缀，/datastudio/data_manage/import/项目ID，example: /datastudio/data_manage/import/1460947878944567296/demo_2.csv
                     * @param _filePath 文件在cos上的存储路径，该路径有固定前缀，/datastudio/data_manage/import/项目ID，example: /datastudio/data_manage/import/1460947878944567296/demo_2.csv
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
                     * 获取首行是否为字段名，默认为 false，如果选择 true，会将首行解析成列名，且在数据中会跳过第一行
                     * @return HeaderLine 首行是否为字段名，默认为 false，如果选择 true，会将首行解析成列名，且在数据中会跳过第一行
                     * 
                     */
                    bool GetHeaderLine() const;

                    /**
                     * 设置首行是否为字段名，默认为 false，如果选择 true，会将首行解析成列名，且在数据中会跳过第一行
                     * @param _headerLine 首行是否为字段名，默认为 false，如果选择 true，会将首行解析成列名，且在数据中会跳过第一行
                     * 
                     */
                    void SetHeaderLine(const bool& _headerLine);

                    /**
                     * 判断参数 HeaderLine 是否已赋值
                     * @return HeaderLine 是否已赋值
                     * 
                     */
                    bool HeaderLineHasBeenSet() const;

                    /**
                     * 获取字段分隔符，取值为 0,1,2,3,4,5，各值含义为0: \u0001(hive默认)，1: 竖线 （ | ） ，2: 空格，3: 分号，4: 英文逗号，5: 制表符 \t，如果没填或填错，默认为英文逗号
                     * @return ColumnDelimiter 字段分隔符，取值为 0,1,2,3,4,5，各值含义为0: \u0001(hive默认)，1: 竖线 （ | ） ，2: 空格，3: 分号，4: 英文逗号，5: 制表符 \t，如果没填或填错，默认为英文逗号
                     * 
                     */
                    std::string GetColumnDelimiter() const;

                    /**
                     * 设置字段分隔符，取值为 0,1,2,3,4,5，各值含义为0: \u0001(hive默认)，1: 竖线 （ | ） ，2: 空格，3: 分号，4: 英文逗号，5: 制表符 \t，如果没填或填错，默认为英文逗号
                     * @param _columnDelimiter 字段分隔符，取值为 0,1,2,3,4,5，各值含义为0: \u0001(hive默认)，1: 竖线 （ | ） ，2: 空格，3: 分号，4: 英文逗号，5: 制表符 \t，如果没填或填错，默认为英文逗号
                     * 
                     */
                    void SetColumnDelimiter(const std::string& _columnDelimiter);

                    /**
                     * 判断参数 ColumnDelimiter 是否已赋值
                     * @return ColumnDelimiter 是否已赋值
                     * 
                     */
                    bool ColumnDelimiterHasBeenSet() const;

                    /**
                     * 获取转义符，char 类型，只取当前参数的第一个字符，如果不传，默认为 \
                     * @return Escape 转义符，char 类型，只取当前参数的第一个字符，如果不传，默认为 \
                     * 
                     */
                    std::string GetEscape() const;

                    /**
                     * 设置转义符，char 类型，只取当前参数的第一个字符，如果不传，默认为 \
                     * @param _escape 转义符，char 类型，只取当前参数的第一个字符，如果不传，默认为 \
                     * 
                     */
                    void SetEscape(const std::string& _escape);

                    /**
                     * 判断参数 Escape 是否已赋值
                     * @return Escape 是否已赋值
                     * 
                     */
                    bool EscapeHasBeenSet() const;

                    /**
                     * 获取引号符，取值为 0、1，各个值的含义为 0: 英文单引号，1: 英文双引号，如果没填或填错，默认为英文双引号
                     * @return Quote 引号符，取值为 0、1，各个值的含义为 0: 英文单引号，1: 英文双引号，如果没填或填错，默认为英文双引号
                     * 
                     */
                    std::string GetQuote() const;

                    /**
                     * 设置引号符，取值为 0、1，各个值的含义为 0: 英文单引号，1: 英文双引号，如果没填或填错，默认为英文双引号
                     * @param _quote 引号符，取值为 0、1，各个值的含义为 0: 英文单引号，1: 英文双引号，如果没填或填错，默认为英文双引号
                     * 
                     */
                    void SetQuote(const std::string& _quote);

                    /**
                     * 判断参数 Quote 是否已赋值
                     * @return Quote 是否已赋值
                     * 
                     */
                    bool QuoteHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cos 存储桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 文件在cos上的存储路径，该路径有固定前缀，/datastudio/data_manage/import/项目ID，example: /datastudio/data_manage/import/1460947878944567296/demo_2.csv
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 首行是否为字段名，默认为 false，如果选择 true，会将首行解析成列名，且在数据中会跳过第一行
                     */
                    bool m_headerLine;
                    bool m_headerLineHasBeenSet;

                    /**
                     * 字段分隔符，取值为 0,1,2,3,4,5，各值含义为0: \u0001(hive默认)，1: 竖线 （ | ） ，2: 空格，3: 分号，4: 英文逗号，5: 制表符 \t，如果没填或填错，默认为英文逗号
                     */
                    std::string m_columnDelimiter;
                    bool m_columnDelimiterHasBeenSet;

                    /**
                     * 转义符，char 类型，只取当前参数的第一个字符，如果不传，默认为 \
                     */
                    std::string m_escape;
                    bool m_escapeHasBeenSet;

                    /**
                     * 引号符，取值为 0、1，各个值的含义为 0: 英文单引号，1: 英文双引号，如果没填或填错，默认为英文双引号
                     */
                    std::string m_quote;
                    bool m_quoteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PREVIEWDATATABLECSVREQUEST_H_
