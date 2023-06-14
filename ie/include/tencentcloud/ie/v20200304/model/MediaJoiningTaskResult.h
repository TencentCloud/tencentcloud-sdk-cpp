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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIAJOININGTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIAJOININGTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TaskResultFile.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/拼接任务/处理结果
                */
                class MediaJoiningTaskResult : public AbstractModel
                {
                public:
                    MediaJoiningTaskResult();
                    ~MediaJoiningTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拼接结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return File 拼接结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskResultFile GetFile() const;

                    /**
                     * 设置拼接结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _file 拼接结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFile(const TaskResultFile& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * 拼接结果文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskResultFile m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIAJOININGTASKRESULT_H_
