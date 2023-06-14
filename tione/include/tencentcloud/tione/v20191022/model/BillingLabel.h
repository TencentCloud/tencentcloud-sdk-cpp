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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_BILLINGLABEL_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_BILLINGLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 计费标签
                */
                class BillingLabel : public AbstractModel
                {
                public:
                    BillingLabel();
                    ~BillingLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 计费项标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置计费项标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 计费项标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取存储大小
                     * @return VolumeSize 存储大小
                     * 
                     */
                    int64_t GetVolumeSize() const;

                    /**
                     * 设置存储大小
                     * @param _volumeSize 存储大小
                     * 
                     */
                    void SetVolumeSize(const int64_t& _volumeSize);

                    /**
                     * 判断参数 VolumeSize 是否已赋值
                     * @return VolumeSize 是否已赋值
                     * 
                     */
                    bool VolumeSizeHasBeenSet() const;

                    /**
                     * 获取计费状态
None: 不计费
StorageOnly: 仅存储计费
Computing: 计算和存储都计费
                     * @return Status 计费状态
None: 不计费
StorageOnly: 仅存储计费
Computing: 计算和存储都计费
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置计费状态
None: 不计费
StorageOnly: 仅存储计费
Computing: 计算和存储都计费
                     * @param _status 计费状态
None: 不计费
StorageOnly: 仅存储计费
Computing: 计算和存储都计费
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 计费项标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 存储大小
                     */
                    int64_t m_volumeSize;
                    bool m_volumeSizeHasBeenSet;

                    /**
                     * 计费状态
None: 不计费
StorageOnly: 仅存储计费
Computing: 计算和存储都计费
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_BILLINGLABEL_H_
