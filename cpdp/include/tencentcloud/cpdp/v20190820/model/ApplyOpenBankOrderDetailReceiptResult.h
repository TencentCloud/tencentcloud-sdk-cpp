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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKORDERDETAILRECEIPTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKORDERDETAILRECEIPTRESULT_H_

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
                * 申请单笔交易回单结果
                */
                class ApplyOpenBankOrderDetailReceiptResult : public AbstractModel
                {
                public:
                    ApplyOpenBankOrderDetailReceiptResult();
                    ~ApplyOpenBankOrderDetailReceiptResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道回单申请ID
                     * @return ChannelApplyId 渠道回单申请ID
                     * 
                     */
                    std::string GetChannelApplyId() const;

                    /**
                     * 设置渠道回单申请ID
                     * @param _channelApplyId 渠道回单申请ID
                     * 
                     */
                    void SetChannelApplyId(const std::string& _channelApplyId);

                    /**
                     * 判断参数 ChannelApplyId 是否已赋值
                     * @return ChannelApplyId 是否已赋值
                     * 
                     */
                    bool ChannelApplyIdHasBeenSet() const;

                    /**
                     * 获取申请状态。
SUCCESS：申请成功；
FAILED：申请失败；
PROCESSING：申请中。
注意：若返回申请中，需要再次调用回单申请结果查询接口，查询结果。
                     * @return ReceiptStatus 申请状态。
SUCCESS：申请成功；
FAILED：申请失败；
PROCESSING：申请中。
注意：若返回申请中，需要再次调用回单申请结果查询接口，查询结果。
                     * 
                     */
                    std::string GetReceiptStatus() const;

                    /**
                     * 设置申请状态。
SUCCESS：申请成功；
FAILED：申请失败；
PROCESSING：申请中。
注意：若返回申请中，需要再次调用回单申请结果查询接口，查询结果。
                     * @param _receiptStatus 申请状态。
SUCCESS：申请成功；
FAILED：申请失败；
PROCESSING：申请中。
注意：若返回申请中，需要再次调用回单申请结果查询接口，查询结果。
                     * 
                     */
                    void SetReceiptStatus(const std::string& _receiptStatus);

                    /**
                     * 判断参数 ReceiptStatus 是否已赋值
                     * @return ReceiptStatus 是否已赋值
                     * 
                     */
                    bool ReceiptStatusHasBeenSet() const;

                    /**
                     * 获取申请返回描述，例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiptMessage 申请返回描述，例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReceiptMessage() const;

                    /**
                     * 设置申请返回描述，例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiptMessage 申请返回描述，例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiptMessage(const std::string& _receiptMessage);

                    /**
                     * 判断参数 ReceiptMessage 是否已赋值
                     * @return ReceiptMessage 是否已赋值
                     * 
                     */
                    bool ReceiptMessageHasBeenSet() const;

                    /**
                     * 获取回单下载链接，申请成功时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadUrl 回单下载链接，申请成功时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置回单下载链接，申请成功时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadUrl 回单下载链接，申请成功时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取过期时间，yyyy-MM-dd HH:mm:ss格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间，yyyy-MM-dd HH:mm:ss格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间，yyyy-MM-dd HH:mm:ss格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间，yyyy-MM-dd HH:mm:ss格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 渠道回单申请ID
                     */
                    std::string m_channelApplyId;
                    bool m_channelApplyIdHasBeenSet;

                    /**
                     * 申请状态。
SUCCESS：申请成功；
FAILED：申请失败；
PROCESSING：申请中。
注意：若返回申请中，需要再次调用回单申请结果查询接口，查询结果。
                     */
                    std::string m_receiptStatus;
                    bool m_receiptStatusHasBeenSet;

                    /**
                     * 申请返回描述，例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_receiptMessage;
                    bool m_receiptMessageHasBeenSet;

                    /**
                     * 回单下载链接，申请成功时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 过期时间，yyyy-MM-dd HH:mm:ss格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYOPENBANKORDERDETAILRECEIPTRESULT_H_
