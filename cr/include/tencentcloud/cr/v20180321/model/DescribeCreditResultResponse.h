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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBECREDITRESULTRESPONSE_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBECREDITRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeCreditResult返回参数结构体
                */
                class DescribeCreditResultResponse : public AbstractModel
                {
                public:
                    DescribeCreditResultResponse();
                    ~DescribeCreditResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取<p>呼叫结果，取值范围：</p><ul style="margin-bottom:0px;"><li>NON：接通</li><li>DBU：号码忙</li><li>DRF：不在服务区</li><li>ANA：欠费未接听</li><li>REJ：拒接</li><li>SHU：关机</li><li>NAN：空号</li><li>HAL：停机</li><li>DAD：未接听</li><li>EXE：其他异常</li></ul>
                     * @return ResultCode <p>呼叫结果，取值范围：</p><ul style="margin-bottom:0px;"><li>NON：接通</li><li>DBU：号码忙</li><li>DRF：不在服务区</li><li>ANA：欠费未接听</li><li>REJ：拒接</li><li>SHU：关机</li><li>NAN：空号</li><li>HAL：停机</li><li>DAD：未接听</li><li>EXE：其他异常</li></ul>
                     */
                    std::string GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取客户标识代码，多个标识码以英文逗号分隔，ResultCode为NON时才有。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCode 客户标识代码，多个标识码以英文逗号分隔，ResultCode为NON时才有。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientCode() const;

                    /**
                     * 判断参数 ClientCode 是否已赋值
                     * @return ClientCode 是否已赋值
                     */
                    bool ClientCodeHasBeenSet() const;

                    /**
                     * 获取开始振铃时间，ResultCode为NON或DAD时才有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RingStartTime 开始振铃时间，ResultCode为NON或DAD时才有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRingStartTime() const;

                    /**
                     * 判断参数 RingStartTime 是否已赋值
                     * @return RingStartTime 是否已赋值
                     */
                    bool RingStartTimeHasBeenSet() const;

                    /**
                     * 获取振铃时长
                     * @return RingDuration 振铃时长
                     */
                    int64_t GetRingDuration() const;

                    /**
                     * 判断参数 RingDuration 是否已赋值
                     * @return RingDuration 是否已赋值
                     */
                    bool RingDurationHasBeenSet() const;

                    /**
                     * 获取接通时长
                     * @return AnswerDuration 接通时长
                     */
                    int64_t GetAnswerDuration() const;

                    /**
                     * 判断参数 AnswerDuration 是否已赋值
                     * @return AnswerDuration 是否已赋值
                     */
                    bool AnswerDurationHasBeenSet() const;

                    /**
                     * 获取JSON格式的扩展信息字段，ResultCode为NON时才有。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextValue JSON格式的扩展信息字段，ResultCode为NON时才有。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContextValue() const;

                    /**
                     * 判断参数 ContextValue 是否已赋值
                     * @return ContextValue 是否已赋值
                     */
                    bool ContextValueHasBeenSet() const;

                private:

                    /**
                     * <p>呼叫结果，取值范围：</p><ul style="margin-bottom:0px;"><li>NON：接通</li><li>DBU：号码忙</li><li>DRF：不在服务区</li><li>ANA：欠费未接听</li><li>REJ：拒接</li><li>SHU：关机</li><li>NAN：空号</li><li>HAL：停机</li><li>DAD：未接听</li><li>EXE：其他异常</li></ul>
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 客户标识代码，多个标识码以英文逗号分隔，ResultCode为NON时才有。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientCode;
                    bool m_clientCodeHasBeenSet;

                    /**
                     * 开始振铃时间，ResultCode为NON或DAD时才有此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ringStartTime;
                    bool m_ringStartTimeHasBeenSet;

                    /**
                     * 振铃时长
                     */
                    int64_t m_ringDuration;
                    bool m_ringDurationHasBeenSet;

                    /**
                     * 接通时长
                     */
                    int64_t m_answerDuration;
                    bool m_answerDurationHasBeenSet;

                    /**
                     * JSON格式的扩展信息字段，ResultCode为NON时才有。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contextValue;
                    bool m_contextValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBECREDITRESULTRESPONSE_H_
