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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKRESOURCEGROUPRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKRESOURCEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BatchTaskOperateNew.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateBatchTaskResourceGroup返回参数结构体
                */
                class UpdateBatchTaskResourceGroupResponse : public AbstractModel
                {
                public:
                    UpdateBatchTaskResourceGroupResponse();
                    ~UpdateBatchTaskResourceGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalNumber 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalNumber() const;

                    /**
                     * 判断参数 TotalNumber 是否已赋值
                     * @return TotalNumber 是否已赋值
                     * 
                     */
                    bool TotalNumberHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessNumber 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessNumber() const;

                    /**
                     * 判断参数 SuccessNumber 是否已赋值
                     * @return SuccessNumber 是否已赋值
                     * 
                     */
                    bool SuccessNumberHasBeenSet() const;

                    /**
                     * 获取1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailNumber 1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailNumber() const;

                    /**
                     * 判断参数 FailNumber 是否已赋值
                     * @return FailNumber 是否已赋值
                     * 
                     */
                    bool FailNumberHasBeenSet() const;

                    /**
                     * 获取批量操作返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 批量操作返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BatchTaskOperateNew GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalNumber;
                    bool m_totalNumberHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successNumber;
                    bool m_successNumberHasBeenSet;

                    /**
                     * 1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failNumber;
                    bool m_failNumberHasBeenSet;

                    /**
                     * 批量操作返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BatchTaskOperateNew m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKRESOURCEGROUPRESPONSE_H_
