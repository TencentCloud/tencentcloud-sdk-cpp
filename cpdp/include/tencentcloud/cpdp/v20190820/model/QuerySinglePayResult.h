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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySinglePayItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 银企直连-查询单笔支付状态结果
                */
                class QuerySinglePayResult : public AbstractModel
                {
                public:
                    QuerySinglePayResult();
                    ~QuerySinglePayResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取受理状态（S：处理成功；F：处理失败）
                     * @return HandleStatus 受理状态（S：处理成功；F：处理失败）
                     */
                    std::string GetHandleStatus() const;

                    /**
                     * 设置受理状态（S：处理成功；F：处理失败）
                     * @param HandleStatus 受理状态（S：处理成功；F：处理失败）
                     */
                    void SetHandleStatus(const std::string& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取受理状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HandleMsg 受理状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHandleMsg() const;

                    /**
                     * 设置受理状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HandleMsg 受理状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHandleMsg(const std::string& _handleMsg);

                    /**
                     * 判断参数 HandleMsg 是否已赋值
                     * @return HandleMsg 是否已赋值
                     */
                    bool HandleMsgHasBeenSet() const;

                    /**
                     * 获取业务流水号
                     * @return SerialNo 业务流水号
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置业务流水号
                     * @param SerialNo 业务流水号
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取支付明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 支付明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuerySinglePayItem> GetItems() const;

                    /**
                     * 设置支付明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Items 支付明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetItems(const std::vector<QuerySinglePayItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 受理状态（S：处理成功；F：处理失败）
                     */
                    std::string m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * 受理状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_handleMsg;
                    bool m_handleMsgHasBeenSet;

                    /**
                     * 业务流水号
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 支付明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuerySinglePayItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYRESULT_H_
