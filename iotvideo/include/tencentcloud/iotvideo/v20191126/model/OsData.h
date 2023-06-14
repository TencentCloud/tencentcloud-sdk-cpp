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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_OSDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_OSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 操作系统信息
                */
                class OsData : public AbstractModel
                {
                public:
                    OsData();
                    ~OsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChipId 芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChipId() const;

                    /**
                     * 设置芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chipId 芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChipId(const std::string& _chipId);

                    /**
                     * 判断参数 ChipId 是否已赋值
                     * @return ChipId 是否已赋值
                     * 
                     */
                    bool ChipIdHasBeenSet() const;

                    /**
                     * 获取芯片厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChipManufacture 芯片厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChipManufacture() const;

                    /**
                     * 设置芯片厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chipManufacture 芯片厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChipManufacture(const std::string& _chipManufacture);

                    /**
                     * 判断参数 ChipManufacture 是否已赋值
                     * @return ChipManufacture 是否已赋值
                     * 
                     */
                    bool ChipManufactureHasBeenSet() const;

                private:

                    /**
                     * 芯片型号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chipId;
                    bool m_chipIdHasBeenSet;

                    /**
                     * 芯片厂商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chipManufacture;
                    bool m_chipManufactureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_OSDATA_H_
