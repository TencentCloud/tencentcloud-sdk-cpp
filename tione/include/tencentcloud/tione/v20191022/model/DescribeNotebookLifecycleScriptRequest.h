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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTREQUEST_H_

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
                * DescribeNotebookLifecycleScript请求参数结构体
                */
                class DescribeNotebookLifecycleScriptRequest : public AbstractModel
                {
                public:
                    DescribeNotebookLifecycleScriptRequest();
                    ~DescribeNotebookLifecycleScriptRequest() = default;
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

                private:

                    /**
                     * 生命周期脚本名称
                     */
                    std::string m_notebookLifecycleScriptsName;
                    bool m_notebookLifecycleScriptsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTREQUEST_H_
