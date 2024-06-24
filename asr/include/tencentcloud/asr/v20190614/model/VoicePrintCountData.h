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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOUNTDATA_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOUNTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintBaseData.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 统计返回[说话人注册数量](https://cloud.tencent.com/document/product/1093/96061#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)
                */
                class VoicePrintCountData : public AbstractModel
                {
                public:
                    VoicePrintCountData();
                    ~VoicePrintCountData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取说话人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoicePrintList 说话人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VoicePrintBaseData> GetVoicePrintList() const;

                    /**
                     * 设置说话人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voicePrintList 说话人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoicePrintList(const std::vector<VoicePrintBaseData>& _voicePrintList);

                    /**
                     * 判断参数 VoicePrintList 是否已赋值
                     * @return VoicePrintList 是否已赋值
                     * 
                     */
                    bool VoicePrintListHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 说话人id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VoicePrintBaseData> m_voicePrintList;
                    bool m_voicePrintListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOUNTDATA_H_
