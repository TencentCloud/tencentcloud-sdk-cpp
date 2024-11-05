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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADMESSAGEATTACHMENTOBJECT_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADMESSAGEATTACHMENTOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 会话消息附件
                */
                class ThreadMessageAttachmentObject : public AbstractModel
                {
                public:
                    ThreadMessageAttachmentObject();
                    ~ThreadMessageAttachmentObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileID 文件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileID() const;

                    /**
                     * 设置文件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileID 文件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileID(const std::string& _fileID);

                    /**
                     * 判断参数 FileID 是否已赋值
                     * @return FileID 是否已赋值
                     * 
                     */
                    bool FileIDHasBeenSet() const;

                private:

                    /**
                     * 文件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileID;
                    bool m_fileIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADMESSAGEATTACHMENTOBJECT_H_
