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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETERESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaDeleteItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 文件删除结果信息
                */
                class FileDeleteResultItem : public AbstractModel
                {
                public:
                    FileDeleteResultItem();
                    ~FileDeleteResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除的文件 ID 。
                     * @return FileId 删除的文件 ID 。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置删除的文件 ID 。
                     * @param _fileId 删除的文件 ID 。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取本次删除的文件部分。
                     * @return DeleteParts 本次删除的文件部分。
                     * 
                     */
                    std::vector<MediaDeleteItem> GetDeleteParts() const;

                    /**
                     * 设置本次删除的文件部分。
                     * @param _deleteParts 本次删除的文件部分。
                     * 
                     */
                    void SetDeleteParts(const std::vector<MediaDeleteItem>& _deleteParts);

                    /**
                     * 判断参数 DeleteParts 是否已赋值
                     * @return DeleteParts 是否已赋值
                     * 
                     */
                    bool DeletePartsHasBeenSet() const;

                private:

                    /**
                     * 删除的文件 ID 。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 本次删除的文件部分。
                     */
                    std::vector<MediaDeleteItem> m_deleteParts;
                    bool m_deletePartsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEDELETERESULTITEM_H_
