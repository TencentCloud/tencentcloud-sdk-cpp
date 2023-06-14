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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_RESPONSETERMINATECONTRACT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_RESPONSETERMINATECONTRACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 解约数据
                */
                class ResponseTerminateContract : public AbstractModel
                {
                public:
                    ResponseTerminateContract();
                    ~ResponseTerminateContract() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnCode 第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnCode() const;

                    /**
                     * 设置第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnCode 第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnCode(const std::string& _externalReturnCode);

                    /**
                     * 判断参数 ExternalReturnCode 是否已赋值
                     * @return ExternalReturnCode 是否已赋值
                     * 
                     */
                    bool ExternalReturnCodeHasBeenSet() const;

                    /**
                     * 获取第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnMessage 第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnMessage() const;

                    /**
                     * 设置第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnMessage 第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnMessage(const std::string& _externalReturnMessage);

                    /**
                     * 判断参数 ExternalReturnMessage 是否已赋值
                     * @return ExternalReturnMessage 是否已赋值
                     * 
                     */
                    bool ExternalReturnMessageHasBeenSet() const;

                    /**
                     * 获取第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnData 第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnData() const;

                    /**
                     * 设置第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnData 第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnData(const std::string& _externalReturnData);

                    /**
                     * 判断参数 ExternalReturnData 是否已赋值
                     * @return ExternalReturnData 是否已赋值
                     * 
                     */
                    bool ExternalReturnDataHasBeenSet() const;

                private:

                    /**
                     * 第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnCode;
                    bool m_externalReturnCodeHasBeenSet;

                    /**
                     * 第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnMessage;
                    bool m_externalReturnMessageHasBeenSet;

                    /**
                     * 第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnData;
                    bool m_externalReturnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_RESPONSETERMINATECONTRACT_H_
