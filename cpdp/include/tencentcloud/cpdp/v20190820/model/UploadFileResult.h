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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADFILERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADFILERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 上传文件响应对象
                */
                class UploadFileResult : public AbstractModel
                {
                public:
                    UploadFileResult();
                    ~UploadFileResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Storage 存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorage() const;

                    /**
                     * 设置存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storage 存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorage(const std::string& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePath 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filePath 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                private:

                    /**
                     * 存储区域（0私密区，1公共区），请严格按文件要求，上传到不同的区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADFILERESULT_H_
