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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKLIFECYCLESCRIPTSSUMMARY_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKLIFECYCLESCRIPTSSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * notebook生命周期脚本实例概览
                */
                class NotebookLifecycleScriptsSummary : public AbstractModel
                {
                public:
                    NotebookLifecycleScriptsSummary();
                    ~NotebookLifecycleScriptsSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取notebook生命周期脚本名称
                     * @return NotebookLifecycleScriptsName notebook生命周期脚本名称
                     * 
                     */
                    std::string GetNotebookLifecycleScriptsName() const;

                    /**
                     * 设置notebook生命周期脚本名称
                     * @param _notebookLifecycleScriptsName notebook生命周期脚本名称
                     * 
                     */
                    void SetNotebookLifecycleScriptsName(const std::string& _notebookLifecycleScriptsName);

                    /**
                     * 判断参数 NotebookLifecycleScriptsName 是否已赋值
                     * @return NotebookLifecycleScriptsName 是否已赋值
                     * 
                     */
                    bool NotebookLifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return LastModifiedTime 修改时间
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 设置修改时间
                     * @param _lastModifiedTime 修改时间
                     * 
                     */
                    void SetLastModifiedTime(const std::string& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * notebook生命周期脚本名称
                     */
                    std::string m_notebookLifecycleScriptsName;
                    bool m_notebookLifecycleScriptsNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKLIFECYCLESCRIPTSSUMMARY_H_
