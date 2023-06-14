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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DELETENOTEBOOKLIFECYCLESCRIPTREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DELETENOTEBOOKLIFECYCLESCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteNotebookLifecycleScript请求参数结构体
                */
                class DeleteNotebookLifecycleScriptRequest : public AbstractModel
                {
                public:
                    DeleteNotebookLifecycleScriptRequest();
                    ~DeleteNotebookLifecycleScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生命周期脚本名称
                     * @return NotebookLifecycleScriptsName 生命周期脚本名称
                     * 
                     */
                    std::string GetNotebookLifecycleScriptsName() const;

                    /**
                     * 设置生命周期脚本名称
                     * @param _notebookLifecycleScriptsName 生命周期脚本名称
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
                     * 获取是否忽略已关联的 notebook 实例强行删除生命周期脚本，默认 false
                     * @return Forcible 是否忽略已关联的 notebook 实例强行删除生命周期脚本，默认 false
                     * 
                     */
                    bool GetForcible() const;

                    /**
                     * 设置是否忽略已关联的 notebook 实例强行删除生命周期脚本，默认 false
                     * @param _forcible 是否忽略已关联的 notebook 实例强行删除生命周期脚本，默认 false
                     * 
                     */
                    void SetForcible(const bool& _forcible);

                    /**
                     * 判断参数 Forcible 是否已赋值
                     * @return Forcible 是否已赋值
                     * 
                     */
                    bool ForcibleHasBeenSet() const;

                private:

                    /**
                     * 生命周期脚本名称
                     */
                    std::string m_notebookLifecycleScriptsName;
                    bool m_notebookLifecycleScriptsNameHasBeenSet;

                    /**
                     * 是否忽略已关联的 notebook 实例强行删除生命周期脚本，默认 false
                     */
                    bool m_forcible;
                    bool m_forcibleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DELETENOTEBOOKLIFECYCLESCRIPTREQUEST_H_
