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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALRESPONSE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ApplyEmbedTokenInfo.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ApplyEmbedInterval返回参数结构体
                */
                class ApplyEmbedIntervalResponse : public AbstractModel
                {
                public:
                    ApplyEmbedIntervalResponse();
                    ~ApplyEmbedIntervalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplyEmbedTokenInfo GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 结果数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApplyEmbedTokenInfo m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALRESPONSE_H_
