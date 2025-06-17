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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AddBlindWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/RemoveBlindWatermarkConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 盲水印配置
                */
                class BlindWatermarkConfig : public AbstractModel
                {
                public:
                    BlindWatermarkConfig();
                    ~BlindWatermarkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取增加盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddBlindWatermark 增加盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AddBlindWatermarkConfig GetAddBlindWatermark() const;

                    /**
                     * 设置增加盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addBlindWatermark 增加盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddBlindWatermark(const AddBlindWatermarkConfig& _addBlindWatermark);

                    /**
                     * 判断参数 AddBlindWatermark 是否已赋值
                     * @return AddBlindWatermark 是否已赋值
                     * 
                     */
                    bool AddBlindWatermarkHasBeenSet() const;

                    /**
                     * 获取提取盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractBlindWatermark 提取盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ExtractBlindWatermarkConfig GetExtractBlindWatermark() const;

                    /**
                     * 设置提取盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extractBlindWatermark 提取盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtractBlindWatermark(const ExtractBlindWatermarkConfig& _extractBlindWatermark);

                    /**
                     * 判断参数 ExtractBlindWatermark 是否已赋值
                     * @return ExtractBlindWatermark 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkHasBeenSet() const;

                    /**
                     * 获取移除盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoveBlindWatermark 移除盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RemoveBlindWatermarkConfig GetRemoveBlindWatermark() const;

                    /**
                     * 设置移除盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _removeBlindWatermark 移除盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoveBlindWatermark(const RemoveBlindWatermarkConfig& _removeBlindWatermark);

                    /**
                     * 判断参数 RemoveBlindWatermark 是否已赋值
                     * @return RemoveBlindWatermark 是否已赋值
                     * 
                     */
                    bool RemoveBlindWatermarkHasBeenSet() const;

                private:

                    /**
                     * 增加盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AddBlindWatermarkConfig m_addBlindWatermark;
                    bool m_addBlindWatermarkHasBeenSet;

                    /**
                     * 提取盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractBlindWatermarkConfig m_extractBlindWatermark;
                    bool m_extractBlindWatermarkHasBeenSet;

                    /**
                     * 移除盲水印
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RemoveBlindWatermarkConfig m_removeBlindWatermark;
                    bool m_removeBlindWatermarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BLINDWATERMARKCONFIG_H_
