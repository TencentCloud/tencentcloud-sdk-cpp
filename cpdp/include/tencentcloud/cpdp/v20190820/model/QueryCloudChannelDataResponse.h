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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDCHANNELDATARESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDCHANNELDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalChannelData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryCloudChannelData返回参数结构体
                */
                class QueryCloudChannelDataResponse : public AbstractModel
                {
                public:
                    QueryCloudChannelDataResponse();
                    ~QueryCloudChannelDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutOrderNo 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutOrderNo() const;

                    /**
                     * 判断参数 OutOrderNo 是否已赋值
                     * @return OutOrderNo 是否已赋值
                     * 
                     */
                    bool OutOrderNoHasBeenSet() const;

                    /**
                     * 获取渠道订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelOrderId 渠道订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelOrderId() const;

                    /**
                     * 判断参数 ChannelOrderId 是否已赋值
                     * @return ChannelOrderId 是否已赋值
                     * 
                     */
                    bool ChannelOrderIdHasBeenSet() const;

                    /**
                     * 获取第三方渠道数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalChannelDataType 第三方渠道数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalChannelDataType() const;

                    /**
                     * 判断参数 ExternalChannelDataType 是否已赋值
                     * @return ExternalChannelDataType 是否已赋值
                     * 
                     */
                    bool ExternalChannelDataTypeHasBeenSet() const;

                    /**
                     * 获取渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel 渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取第三方渠道数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalChannelDataList 第三方渠道数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudExternalChannelData> GetExternalChannelDataList() const;

                    /**
                     * 判断参数 ExternalChannelDataList 是否已赋值
                     * @return ExternalChannelDataList 是否已赋值
                     * 
                     */
                    bool ExternalChannelDataListHasBeenSet() const;

                    /**
                     * 获取子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAppId 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取米大师分配的支付主MidasAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 米大师分配的支付主MidasAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 外部订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outOrderNo;
                    bool m_outOrderNoHasBeenSet;

                    /**
                     * 渠道订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelOrderId;
                    bool m_channelOrderIdHasBeenSet;

                    /**
                     * 第三方渠道数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalChannelDataType;
                    bool m_externalChannelDataTypeHasBeenSet;

                    /**
                     * 渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 第三方渠道数据列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudExternalChannelData> m_externalChannelDataList;
                    bool m_externalChannelDataListHasBeenSet;

                    /**
                     * 子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 米大师分配的支付主MidasAppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCLOUDCHANNELDATARESPONSE_H_
