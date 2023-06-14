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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DELETENOTEBOOKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DELETENOTEBOOKINSTANCEREQUEST_H_

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
                * DeleteNotebookInstance请求参数结构体
                */
                class DeleteNotebookInstanceRequest : public AbstractModel
                {
                public:
                    DeleteNotebookInstanceRequest();
                    ~DeleteNotebookInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
                     * @return NotebookInstanceName Notebook实例名称
                     * 
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称
                     * @param _notebookInstanceName Notebook实例名称
                     * 
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     * 
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DELETENOTEBOOKINSTANCEREQUEST_H_
