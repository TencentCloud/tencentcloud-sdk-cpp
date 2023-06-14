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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentBatchData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateBatchPayment接口返回响应
                */
                class CreateBatchPaymentData : public AbstractModel
                {
                public:
                    CreateBatchPaymentData();
                    ~CreateBatchPaymentData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次号
                     * @return BatchId 批次号
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次号
                     * @param _batchId 批次号
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取批次列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchInfoList 批次列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CreateBatchPaymentBatchData> GetBatchInfoList() const;

                    /**
                     * 设置批次列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchInfoList 批次列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchInfoList(const std::vector<CreateBatchPaymentBatchData>& _batchInfoList);

                    /**
                     * 判断参数 BatchInfoList 是否已赋值
                     * @return BatchInfoList 是否已赋值
                     * 
                     */
                    bool BatchInfoListHasBeenSet() const;

                private:

                    /**
                     * 批次号
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 批次列表详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CreateBatchPaymentBatchData> m_batchInfoList;
                    bool m_batchInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTDATA_H_
