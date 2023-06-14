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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FileDeleteResultItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 文件删除任务
                */
                class FileDeleteTask : public AbstractModel
                {
                public:
                    FileDeleteTask();
                    ~FileDeleteTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除文件 ID 列表。
                     * @return FileIdSet 删除文件 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetFileIdSet() const;

                    /**
                     * 设置删除文件 ID 列表。
                     * @param _fileIdSet 删除文件 ID 列表。
                     * 
                     */
                    void SetFileIdSet(const std::vector<std::string>& _fileIdSet);

                    /**
                     * 判断参数 FileIdSet 是否已赋值
                     * @return FileIdSet 是否已赋值
                     * 
                     */
                    bool FileIdSetHasBeenSet() const;

                    /**
                     * 获取删除文件结果信息列表。
                     * @return FileDeleteResultInfo 删除文件结果信息列表。
                     * 
                     */
                    std::vector<FileDeleteResultItem> GetFileDeleteResultInfo() const;

                    /**
                     * 设置删除文件结果信息列表。
                     * @param _fileDeleteResultInfo 删除文件结果信息列表。
                     * 
                     */
                    void SetFileDeleteResultInfo(const std::vector<FileDeleteResultItem>& _fileDeleteResultInfo);

                    /**
                     * 判断参数 FileDeleteResultInfo 是否已赋值
                     * @return FileDeleteResultInfo 是否已赋值
                     * 
                     */
                    bool FileDeleteResultInfoHasBeenSet() const;

                private:

                    /**
                     * 删除文件 ID 列表。
                     */
                    std::vector<std::string> m_fileIdSet;
                    bool m_fileIdSetHasBeenSet;

                    /**
                     * 删除文件结果信息列表。
                     */
                    std::vector<FileDeleteResultItem> m_fileDeleteResultInfo;
                    bool m_fileDeleteResultInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETETASK_H_
