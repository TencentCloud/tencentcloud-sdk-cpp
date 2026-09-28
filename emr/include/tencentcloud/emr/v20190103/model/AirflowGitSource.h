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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWGITSOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWGITSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * airflow dag目录git源配置
                */
                class AirflowGitSource : public AbstractModel
                {
                public:
                    AirflowGitSource();
                    ~AirflowGitSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>git仓库URL</p>
                     * @return RepositoryUrl <p>git仓库URL</p>
                     * 
                     */
                    std::string GetRepositoryUrl() const;

                    /**
                     * 设置<p>git仓库URL</p>
                     * @param _repositoryUrl <p>git仓库URL</p>
                     * 
                     */
                    void SetRepositoryUrl(const std::string& _repositoryUrl);

                    /**
                     * 判断参数 RepositoryUrl 是否已赋值
                     * @return RepositoryUrl 是否已赋值
                     * 
                     */
                    bool RepositoryUrlHasBeenSet() const;

                    /**
                     * 获取<p>DAG跟踪分支/TAG</p>
                     * @return Ref <p>DAG跟踪分支/TAG</p>
                     * 
                     */
                    std::string GetRef() const;

                    /**
                     * 设置<p>DAG跟踪分支/TAG</p>
                     * @param _ref <p>DAG跟踪分支/TAG</p>
                     * 
                     */
                    void SetRef(const std::string& _ref);

                    /**
                     * 判断参数 Ref 是否已赋值
                     * @return Ref 是否已赋值
                     * 
                     */
                    bool RefHasBeenSet() const;

                    /**
                     * 获取<p>DAG挂载目录</p>
                     * @return Directory <p>DAG挂载目录</p>
                     * 
                     */
                    std::string GetDirectory() const;

                    /**
                     * 设置<p>DAG挂载目录</p>
                     * @param _directory <p>DAG挂载目录</p>
                     * 
                     */
                    void SetDirectory(const std::string& _directory);

                    /**
                     * 判断参数 Directory 是否已赋值
                     * @return Directory 是否已赋值
                     * 
                     */
                    bool DirectoryHasBeenSet() const;

                private:

                    /**
                     * <p>git仓库URL</p>
                     */
                    std::string m_repositoryUrl;
                    bool m_repositoryUrlHasBeenSet;

                    /**
                     * <p>DAG跟踪分支/TAG</p>
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * <p>DAG挂载目录</p>
                     */
                    std::string m_directory;
                    bool m_directoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWGITSOURCE_H_
