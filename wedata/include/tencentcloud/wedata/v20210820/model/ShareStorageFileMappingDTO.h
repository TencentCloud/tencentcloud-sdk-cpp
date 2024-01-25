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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SHARESTORAGEFILEMAPPINGDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SHARESTORAGEFILEMAPPINGDTO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 当申请导入临时文件时，需要传入文件名来获取访问秘钥，传入文件名的目的是临时文件名字可能出现冲突，后端会进行检测，如果检测到文件名已经存在了，会基于传入的文件名生成新的文件名，并提供最终在 Cos 中的最终存储绝对路径
                */
                class ShareStorageFileMappingDTO : public AbstractModel
                {
                public:
                    ShareStorageFileMappingDTO();
                    ~ShareStorageFileMappingDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginFileName 源文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置源文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originFileName 源文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取共享存储文件名，即在共享存储文件中的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetFileName 共享存储文件名，即在共享存储文件中的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetFileName() const;

                    /**
                     * 设置共享存储文件名，即在共享存储文件中的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetFileName 共享存储文件名，即在共享存储文件中的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetFileName(const std::string& _targetFileName);

                    /**
                     * 判断参数 TargetFileName 是否已赋值
                     * @return TargetFileName 是否已赋值
                     * 
                     */
                    bool TargetFileNameHasBeenSet() const;

                    /**
                     * 获取共享存储最终存储绝对路径，
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AbsoluteTargetFilePath 共享存储最终存储绝对路径，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAbsoluteTargetFilePath() const;

                    /**
                     * 设置共享存储最终存储绝对路径，
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _absoluteTargetFilePath 共享存储最终存储绝对路径，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbsoluteTargetFilePath(const std::string& _absoluteTargetFilePath);

                    /**
                     * 判断参数 AbsoluteTargetFilePath 是否已赋值
                     * @return AbsoluteTargetFilePath 是否已赋值
                     * 
                     */
                    bool AbsoluteTargetFilePathHasBeenSet() const;

                private:

                    /**
                     * 源文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * 共享存储文件名，即在共享存储文件中的名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetFileName;
                    bool m_targetFileNameHasBeenSet;

                    /**
                     * 共享存储最终存储绝对路径，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_absoluteTargetFilePath;
                    bool m_absoluteTargetFilePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SHARESTORAGEFILEMAPPINGDTO_H_
