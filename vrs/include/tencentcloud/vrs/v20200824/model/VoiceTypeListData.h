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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_VOICETYPELISTDATA_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_VOICETYPELISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vrs/v20200824/model/VoiceTypeInfo.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * 音色信息列表
                */
                class VoiceTypeListData : public AbstractModel
                {
                public:
                    VoiceTypeListData();
                    ~VoiceTypeListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音色信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceTypeList 音色信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VoiceTypeInfo> GetVoiceTypeList() const;

                    /**
                     * 设置音色信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _voiceTypeList 音色信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVoiceTypeList(const std::vector<VoiceTypeInfo>& _voiceTypeList);

                    /**
                     * 判断参数 VoiceTypeList 是否已赋值
                     * @return VoiceTypeList 是否已赋值
                     * 
                     */
                    bool VoiceTypeListHasBeenSet() const;

                private:

                    /**
                     * 音色信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VoiceTypeInfo> m_voiceTypeList;
                    bool m_voiceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_VOICETYPELISTDATA_H_
