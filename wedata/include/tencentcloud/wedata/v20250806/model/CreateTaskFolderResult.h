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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKFOLDERRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKFOLDERRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 创建任务文件夹结果
                */
                class CreateTaskFolderResult : public AbstractModel
                {
                public:
                    CreateTaskFolderResult();
                    ~CreateTaskFolderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建成功的文件夹ID。如果创建失败则报错。
                     * @return TaskFolderId 创建成功的文件夹ID。如果创建失败则报错。
                     * 
                     */
                    std::string GetTaskFolderId() const;

                    /**
                     * 设置创建成功的文件夹ID。如果创建失败则报错。
                     * @param _taskFolderId 创建成功的文件夹ID。如果创建失败则报错。
                     * 
                     */
                    void SetTaskFolderId(const std::string& _taskFolderId);

                    /**
                     * 判断参数 TaskFolderId 是否已赋值
                     * @return TaskFolderId 是否已赋值
                     * 
                     */
                    bool TaskFolderIdHasBeenSet() const;

                private:

                    /**
                     * 创建成功的文件夹ID。如果创建失败则报错。
                     */
                    std::string m_taskFolderId;
                    bool m_taskFolderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETASKFOLDERRESULT_H_
