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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_UPLOADMEDICALFILERESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_UPLOADMEDICALFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * UploadMedicalFile返回参数结构体
                */
                class UploadMedicalFileResponse : public AbstractModel
                {
                public:
                    UploadMedicalFileResponse();
                    ~UploadMedicalFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件存储的key，可以用来创建结构化任务。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileKey 文件存储的key，可以用来创建结构化任务。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileKey() const;

                    /**
                     * 判断参数 FileKey 是否已赋值
                     * @return FileKey 是否已赋值
                     * 
                     */
                    bool FileKeyHasBeenSet() const;

                private:

                    /**
                     * 文件存储的key，可以用来创建结构化任务。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileKey;
                    bool m_fileKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_UPLOADMEDICALFILERESPONSE_H_
