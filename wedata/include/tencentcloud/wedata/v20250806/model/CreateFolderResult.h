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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEFOLDERRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEFOLDERRESULT_H_

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
                * 创建文件夹结果
                */
                class CreateFolderResult : public AbstractModel
                {
                public:
                    CreateFolderResult();
                    ~CreateFolderResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建成功的文件夹ID。如果创建失败则报错。
                     * @return FolderId 创建成功的文件夹ID。如果创建失败则报错。
                     * 
                     */
                    std::string GetFolderId() const;

                    /**
                     * 设置创建成功的文件夹ID。如果创建失败则报错。
                     * @param _folderId 创建成功的文件夹ID。如果创建失败则报错。
                     * 
                     */
                    void SetFolderId(const std::string& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                private:

                    /**
                     * 创建成功的文件夹ID。如果创建失败则报错。
                     */
                    std::string m_folderId;
                    bool m_folderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEFOLDERRESULT_H_
