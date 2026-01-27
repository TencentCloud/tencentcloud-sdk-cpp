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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORCONFIGINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 采集器配置项
                */
                class CollectorConfigInfo : public AbstractModel
                {
                public:
                    CollectorConfigInfo();
                    ~CollectorConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采集器的主配置文件名，如filebeat.yml，metricbeat.yml等
                     * @return FileName 采集器的主配置文件名，如filebeat.yml，metricbeat.yml等
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置采集器的主配置文件名，如filebeat.yml，metricbeat.yml等
                     * @param _fileName 采集器的主配置文件名，如filebeat.yml，metricbeat.yml等
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
                     * 获取采集器的主配置文件内容
                     * @return FileContent 采集器的主配置文件内容
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置采集器的主配置文件内容
                     * @param _fileContent 采集器的主配置文件内容
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * 采集器的主配置文件名，如filebeat.yml，metricbeat.yml等
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 采集器的主配置文件内容
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORCONFIGINFO_H_
