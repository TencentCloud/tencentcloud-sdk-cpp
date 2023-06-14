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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_FILEITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_FILEITEM_H_

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
                * 对账文件信息
                */
                class FileItem : public AbstractModel
                {
                public:
                    FileItem();
                    ~FileItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取STRING(256)，文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName STRING(256)，文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置STRING(256)，文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName STRING(256)，文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取STRING(120)，随机密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RandomPassword STRING(120)，随机密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRandomPassword() const;

                    /**
                     * 设置STRING(120)，随机密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _randomPassword STRING(120)，随机密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRandomPassword(const std::string& _randomPassword);

                    /**
                     * 判断参数 RandomPassword 是否已赋值
                     * @return RandomPassword 是否已赋值
                     * 
                     */
                    bool RandomPasswordHasBeenSet() const;

                    /**
                     * 获取STRING(512)，文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePath STRING(512)，文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置STRING(512)，文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filePath STRING(512)，文件路径
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

                    /**
                     * 获取STRING(64)，提取码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrawCode STRING(64)，提取码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDrawCode() const;

                    /**
                     * 设置STRING(64)，提取码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drawCode STRING(64)，提取码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrawCode(const std::string& _drawCode);

                    /**
                     * 判断参数 DrawCode 是否已赋值
                     * @return DrawCode 是否已赋值
                     * 
                     */
                    bool DrawCodeHasBeenSet() const;

                private:

                    /**
                     * STRING(256)，文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * STRING(120)，随机密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_randomPassword;
                    bool m_randomPasswordHasBeenSet;

                    /**
                     * STRING(512)，文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * STRING(64)，提取码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_drawCode;
                    bool m_drawCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_FILEITEM_H_
