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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SYSTEMTYPE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SYSTEMTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/OsData.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 系统类型
                */
                class SystemType : public AbstractModel
                {
                public:
                    SystemType();
                    ~SystemType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安卓系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Android 安卓系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OsData> GetAndroid() const;

                    /**
                     * 设置安卓系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _android 安卓系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAndroid(const std::vector<OsData>& _android);

                    /**
                     * 判断参数 Android 是否已赋值
                     * @return Android 是否已赋值
                     * 
                     */
                    bool AndroidHasBeenSet() const;

                    /**
                     * 获取linux系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Linux linux系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OsData> GetLinux() const;

                    /**
                     * 设置linux系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linux linux系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinux(const std::vector<OsData>& _linux);

                    /**
                     * 判断参数 Linux 是否已赋值
                     * @return Linux 是否已赋值
                     * 
                     */
                    bool LinuxHasBeenSet() const;

                    /**
                     * 获取LiteOs系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiteOs LiteOs系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OsData> GetLiteOs() const;

                    /**
                     * 设置LiteOs系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liteOs LiteOs系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiteOs(const std::vector<OsData>& _liteOs);

                    /**
                     * 判断参数 LiteOs 是否已赋值
                     * @return LiteOs 是否已赋值
                     * 
                     */
                    bool LiteOsHasBeenSet() const;

                private:

                    /**
                     * 安卓系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OsData> m_android;
                    bool m_androidHasBeenSet;

                    /**
                     * linux系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OsData> m_linux;
                    bool m_linuxHasBeenSet;

                    /**
                     * LiteOs系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OsData> m_liteOs;
                    bool m_liteOsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_SYSTEMTYPE_H_
