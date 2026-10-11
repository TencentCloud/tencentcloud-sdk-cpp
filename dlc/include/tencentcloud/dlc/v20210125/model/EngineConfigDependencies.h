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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENGINECONFIGDEPENDENCIES_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENGINECONFIGDEPENDENCIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 引擎依赖管理，对应 Spark 的 --jars / --files / --archives / --py-files 四类资源。每条 JAR 要么 COS 路径（cos:///cosn://），要么 Maven GAV（group:artifact:version）；files/archives/pyFiles 是 COS 路径列表（pyFiles 支持 .py/.zip/.egg/.whl）。
                */
                class EngineConfigDependencies : public AbstractModel
                {
                public:
                    EngineConfigDependencies();
                    ~EngineConfigDependencies() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>JAR 列表：每行一个 COS 路径或 Maven GAV。</p>
                     * @return Jars <p>JAR 列表：每行一个 COS 路径或 Maven GAV。</p>
                     * 
                     */
                    std::vector<std::string> GetJars() const;

                    /**
                     * 设置<p>JAR 列表：每行一个 COS 路径或 Maven GAV。</p>
                     * @param _jars <p>JAR 列表：每行一个 COS 路径或 Maven GAV。</p>
                     * 
                     */
                    void SetJars(const std::vector<std::string>& _jars);

                    /**
                     * 判断参数 Jars 是否已赋值
                     * @return Jars 是否已赋值
                     * 
                     */
                    bool JarsHasBeenSet() const;

                    /**
                     * 获取<p>files 列表：COS 路径，下载到 executor 工作目录（不解压）。</p>
                     * @return Files <p>files 列表：COS 路径，下载到 executor 工作目录（不解压）。</p>
                     * 
                     */
                    std::vector<std::string> GetFiles() const;

                    /**
                     * 设置<p>files 列表：COS 路径，下载到 executor 工作目录（不解压）。</p>
                     * @param _files <p>files 列表：COS 路径，下载到 executor 工作目录（不解压）。</p>
                     * 
                     */
                    void SetFiles(const std::vector<std::string>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取<p>archives 列表：COS 路径，下载并解压到 executor 工作目录。</p>
                     * @return Archives <p>archives 列表：COS 路径，下载并解压到 executor 工作目录。</p>
                     * 
                     */
                    std::vector<std::string> GetArchives() const;

                    /**
                     * 设置<p>archives 列表：COS 路径，下载并解压到 executor 工作目录。</p>
                     * @param _archives <p>archives 列表：COS 路径，下载并解压到 executor 工作目录。</p>
                     * 
                     */
                    void SetArchives(const std::vector<std::string>& _archives);

                    /**
                     * 判断参数 Archives 是否已赋值
                     * @return Archives 是否已赋值
                     * 
                     */
                    bool ArchivesHasBeenSet() const;

                    /**
                     * 获取<p>pyFiles 列表：COS 路径（.py/.zip/.egg/.whl），等价 Spark --py-files。</p>
                     * @return PyFiles <p>pyFiles 列表：COS 路径（.py/.zip/.egg/.whl），等价 Spark --py-files。</p>
                     * 
                     */
                    std::vector<std::string> GetPyFiles() const;

                    /**
                     * 设置<p>pyFiles 列表：COS 路径（.py/.zip/.egg/.whl），等价 Spark --py-files。</p>
                     * @param _pyFiles <p>pyFiles 列表：COS 路径（.py/.zip/.egg/.whl），等价 Spark --py-files。</p>
                     * 
                     */
                    void SetPyFiles(const std::vector<std::string>& _pyFiles);

                    /**
                     * 判断参数 PyFiles 是否已赋值
                     * @return PyFiles 是否已赋值
                     * 
                     */
                    bool PyFilesHasBeenSet() const;

                private:

                    /**
                     * <p>JAR 列表：每行一个 COS 路径或 Maven GAV。</p>
                     */
                    std::vector<std::string> m_jars;
                    bool m_jarsHasBeenSet;

                    /**
                     * <p>files 列表：COS 路径，下载到 executor 工作目录（不解压）。</p>
                     */
                    std::vector<std::string> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * <p>archives 列表：COS 路径，下载并解压到 executor 工作目录。</p>
                     */
                    std::vector<std::string> m_archives;
                    bool m_archivesHasBeenSet;

                    /**
                     * <p>pyFiles 列表：COS 路径（.py/.zip/.egg/.whl），等价 Spark --py-files。</p>
                     */
                    std::vector<std::string> m_pyFiles;
                    bool m_pyFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENGINECONFIGDEPENDENCIES_H_
