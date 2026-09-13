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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFILERESULT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFILERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件删除结果
                */
                class DeleteFileResult : public AbstractModel
                {
                public:
                    DeleteFileResult();
                    ~DeleteFileResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>被删除的文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileId <p>被删除的文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>被删除的文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileId <p>被删除的文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>删除是否成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>删除是否成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>删除是否成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>删除是否成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>被删除的文件 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>删除是否成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETEFILERESULT_H_
