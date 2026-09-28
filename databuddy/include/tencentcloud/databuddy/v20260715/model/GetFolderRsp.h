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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFOLDERRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFOLDERRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileNode.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 获取文件夹回包
                */
                class GetFolderRsp : public AbstractModel
                {
                public:
                    GetFolderRsp();
                    ~GetFolderRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件夹信息</p>
                     * @return Folder <p>文件夹信息</p>
                     * 
                     */
                    FileNode GetFolder() const;

                    /**
                     * 设置<p>文件夹信息</p>
                     * @param _folder <p>文件夹信息</p>
                     * 
                     */
                    void SetFolder(const FileNode& _folder);

                    /**
                     * 判断参数 Folder 是否已赋值
                     * @return Folder 是否已赋值
                     * 
                     */
                    bool FolderHasBeenSet() const;

                private:

                    /**
                     * <p>文件夹信息</p>
                     */
                    FileNode m_folder;
                    bool m_folderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETFOLDERRSP_H_
