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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMAGEOSLIST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMAGEOSLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 支持的操作系统类型，根据windows和Linux分类。
                */
                class ImageOsList : public AbstractModel
                {
                public:
                    ImageOsList();
                    ~ImageOsList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的windows操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Windows 支持的windows操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetWindows() const;

                    /**
                     * 设置支持的windows操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _windows 支持的windows操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWindows(const std::vector<std::string>& _windows);

                    /**
                     * 判断参数 Windows 是否已赋值
                     * @return Windows 是否已赋值
                     * 
                     */
                    bool WindowsHasBeenSet() const;

                    /**
                     * 获取支持的linux操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Linux 支持的linux操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLinux() const;

                    /**
                     * 设置支持的linux操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linux 支持的linux操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinux(const std::vector<std::string>& _linux);

                    /**
                     * 判断参数 Linux 是否已赋值
                     * @return Linux 是否已赋值
                     * 
                     */
                    bool LinuxHasBeenSet() const;

                private:

                    /**
                     * 支持的windows操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_windows;
                    bool m_windowsHasBeenSet;

                    /**
                     * 支持的linux操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_linux;
                    bool m_linuxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMAGEOSLIST_H_
