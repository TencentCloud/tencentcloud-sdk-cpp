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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWCFSSOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWCFSSOURCE_H_

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
                * airflow cfs dag目录源配置
                */
                class AirflowCfsSource : public AbstractModel
                {
                public:
                    AirflowCfsSource();
                    ~AirflowCfsSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cfs实例id</p>
                     * @return FileSystemId <p>cfs实例id</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>cfs实例id</p>
                     * @param _fileSystemId <p>cfs实例id</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>cfs实例挂载目录</p>
                     * @return Directory <p>cfs实例挂载目录</p>
                     * 
                     */
                    std::string GetDirectory() const;

                    /**
                     * 设置<p>cfs实例挂载目录</p>
                     * @param _directory <p>cfs实例挂载目录</p>
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
                     * <p>cfs实例id</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>cfs实例挂载目录</p>
                     */
                    std::string m_directory;
                    bool m_directoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AIRFLOWCFSSOURCE_H_
