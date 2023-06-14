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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEACCREDITQUERYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEACCREDITQUERYRESULT_H_

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
                * 分账授权申请查询响应对象
                */
                class DistributeAccreditQueryResult : public AbstractModel
                {
                public:
                    DistributeAccreditQueryResult();
                    ~DistributeAccreditQueryResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态（0-未开通，1-已开通，2-商户主动关闭，3-待审核，4-冻结，5-注销，6-待签合同）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态（0-未开通，1-已开通，2-商户主动关闭，3-待审核，4-冻结，5-注销，6-待签合同）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态（0-未开通，1-已开通，2-商户主动关闭，3-待审核，4-冻结，5-注销，6-待签合同）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态（0-未开通，1-已开通，2-商户主动关闭，3-待审核，4-冻结，5-注销，6-待签合同）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取合同h5地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractUrl 合同h5地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractUrl() const;

                    /**
                     * 设置合同h5地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractUrl 合同h5地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractUrl(const std::string& _contractUrl);

                    /**
                     * 判断参数 ContractUrl 是否已赋值
                     * @return ContractUrl 是否已赋值
                     * 
                     */
                    bool ContractUrlHasBeenSet() const;

                    /**
                     * 获取说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 状态（0-未开通，1-已开通，2-商户主动关闭，3-待审核，4-冻结，5-注销，6-待签合同）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 合同h5地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractUrl;
                    bool m_contractUrlHasBeenSet;

                    /**
                     * 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEACCREDITQUERYRESULT_H_
