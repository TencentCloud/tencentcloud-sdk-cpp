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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSUBMERCHANTSIGNONLINERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSUBMERCHANTSIGNONLINERESULT_H_

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
                * 子商户在线签约返回结果
                */
                class ApplyOpenBankSubMerchantSignOnlineResult : public AbstractModel
                {
                public:
                    ApplyOpenBankSubMerchantSignOnlineResult();
                    ~ApplyOpenBankSubMerchantSignOnlineResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理状态
  SUCCESS：签约成功
  FAILED：签约失败
  PROCESSING：签约中
                     * @return SignStatus 处理状态
  SUCCESS：签约成功
  FAILED：签约失败
  PROCESSING：签约中
                     * 
                     */
                    std::string GetSignStatus() const;

                    /**
                     * 设置处理状态
  SUCCESS：签约成功
  FAILED：签约失败
  PROCESSING：签约中
                     * @param _signStatus 处理状态
  SUCCESS：签约成功
  FAILED：签约失败
  PROCESSING：签约中
                     * 
                     */
                    void SetSignStatus(const std::string& _signStatus);

                    /**
                     * 判断参数 SignStatus 是否已赋值
                     * @return SignStatus 是否已赋值
                     * 
                     */
                    bool SignStatusHasBeenSet() const;

                    /**
                     * 获取上传返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignMessage 上传返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignMessage() const;

                    /**
                     * 设置上传返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signMessage 上传返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignMessage(const std::string& _signMessage);

                    /**
                     * 判断参数 SignMessage 是否已赋值
                     * @return SignMessage 是否已赋值
                     * 
                     */
                    bool SignMessageHasBeenSet() const;

                    /**
                     * 获取第三方渠道返回信息，见渠道特殊说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnData 第三方渠道返回信息，见渠道特殊说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnData() const;

                    /**
                     * 设置第三方渠道返回信息，见渠道特殊说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnData 第三方渠道返回信息，见渠道特殊说明
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
                     * 处理状态
  SUCCESS：签约成功
  FAILED：签约失败
  PROCESSING：签约中
                     */
                    std::string m_signStatus;
                    bool m_signStatusHasBeenSet;

                    /**
                     * 上传返回描述，例如失败原因等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signMessage;
                    bool m_signMessageHasBeenSet;

                    /**
                     * 第三方渠道返回信息，见渠道特殊说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnData;
                    bool m_externalReturnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKSUBMERCHANTSIGNONLINERESULT_H_
