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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WXIOTDEVICEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WXIOTDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 微信物联网硬件信息
                */
                class WXIoTDeviceInfo : public AbstractModel
                {
                public:
                    WXIoTDeviceInfo();
                    ~WXIoTDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sn信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SN sn信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置sn信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sN sn信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取票据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SNTicket 票据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSNTicket() const;

                    /**
                     * 设置票据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sNTicket 票据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSNTicket(const std::string& _sNTicket);

                    /**
                     * 判断参数 SNTicket 是否已赋值
                     * @return SNTicket 是否已赋值
                     * 
                     */
                    bool SNTicketHasBeenSet() const;

                    /**
                     * 获取模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                private:

                    /**
                     * sn信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 票据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sNTicket;
                    bool m_sNTicketHasBeenSet;

                    /**
                     * 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_WXIOTDEVICEINFO_H_
