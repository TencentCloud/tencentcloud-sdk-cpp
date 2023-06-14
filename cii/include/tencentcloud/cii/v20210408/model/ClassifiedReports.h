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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_CLASSIFIEDREPORTS_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_CLASSIFIEDREPORTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 报告分类结果
                */
                class ClassifiedReports : public AbstractModel
                {
                public:
                    ClassifiedReports();
                    ~ClassifiedReports() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取报告类型
                     * @return ReportType 报告类型
                     * 
                     */
                    std::string GetReportType() const;

                    /**
                     * 设置报告类型
                     * @param _reportType 报告类型
                     * 
                     */
                    void SetReportType(const std::string& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取文件列表
                     * @return FileList 文件列表
                     * 
                     */
                    std::vector<std::string> GetFileList() const;

                    /**
                     * 设置文件列表
                     * @param _fileList 文件列表
                     * 
                     */
                    void SetFileList(const std::vector<std::string>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                private:

                    /**
                     * 报告类型
                     */
                    std::string m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 文件列表
                     */
                    std::vector<std::string> m_fileList;
                    bool m_fileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_CLASSIFIEDREPORTS_H_
