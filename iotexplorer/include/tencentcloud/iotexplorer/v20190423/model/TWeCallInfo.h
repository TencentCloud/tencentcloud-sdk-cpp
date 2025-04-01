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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLINFO_H_

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
                * TWeCall信息
                */
                class TWeCallInfo : public AbstractModel
                {
                public:
                    TWeCallInfo();
                    ~TWeCallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sn信息，SN格式：产品ID_设备名
                     * @return Sn Sn信息，SN格式：产品ID_设备名
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置Sn信息，SN格式：产品ID_设备名
                     * @param _sn Sn信息，SN格式：产品ID_设备名
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取小程序ID，参数已弃用，不用传参
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 小程序ID，参数已弃用，不用传参
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置小程序ID，参数已弃用，不用传参
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 小程序ID，参数已弃用，不用传参
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * @deprecated
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取激活数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveNum 激活数
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetActiveNum() const;

                    /**
                     * 设置激活数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeNum 激活数
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetActiveNum(const int64_t& _activeNum);

                    /**
                     * 判断参数 ActiveNum 是否已赋值
                     * @return ActiveNum 是否已赋值
                     * @deprecated
                     */
                    bool ActiveNumHasBeenSet() const;

                private:

                    /**
                     * Sn信息，SN格式：产品ID_设备名
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 小程序ID，参数已弃用，不用传参
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 激活数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_activeNum;
                    bool m_activeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLINFO_H_
