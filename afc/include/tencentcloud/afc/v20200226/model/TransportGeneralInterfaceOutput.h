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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEOUTPUT_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 天御信鸽取数平台接口出参
                */
                class TransportGeneralInterfaceOutput : public AbstractModel
                {
                public:
                    TransportGeneralInterfaceOutput();
                    ~TransportGeneralInterfaceOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取回包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 回包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置回包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 回包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取公证处业务回包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotarizationData 公证处业务回包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNotarizationData() const;

                    /**
                     * 设置公证处业务回包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notarizationData 公证处业务回包
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotarizationData(const std::string& _notarizationData);

                    /**
                     * 判断参数 NotarizationData 是否已赋值
                     * @return NotarizationData 是否已赋值
                     * 
                     */
                    bool NotarizationDataHasBeenSet() const;

                private:

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 回包信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 公证处业务回包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notarizationData;
                    bool m_notarizationDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEOUTPUT_H_
