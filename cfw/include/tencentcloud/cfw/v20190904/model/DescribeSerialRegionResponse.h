/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESERIALREGIONRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESERIALREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SerialRegionInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSerialRegion返回参数结构体
                */
                class DescribeSerialRegionResponse : public AbstractModel
                {
                public:
                    DescribeSerialRegionResponse();
                    ~DescribeSerialRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取串行地域带宽分配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialRegionLst 串行地域带宽分配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SerialRegionInfo> GetSerialRegionLst() const;

                    /**
                     * 判断参数 SerialRegionLst 是否已赋值
                     * @return SerialRegionLst 是否已赋值
                     * 
                     */
                    bool SerialRegionLstHasBeenSet() const;

                    /**
                     * 获取剩余可分配通用带宽 单位M
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnUsedWidth 剩余可分配通用带宽 单位M
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnUsedWidth() const;

                    /**
                     * 判断参数 UnUsedWidth 是否已赋值
                     * @return UnUsedWidth 是否已赋值
                     * 
                     */
                    bool UnUsedWidthHasBeenSet() const;

                    /**
                     * 获取可配置实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnUsedQuota 可配置实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnUsedQuota() const;

                    /**
                     * 判断参数 UnUsedQuota 是否已赋值
                     * @return UnUsedQuota 是否已赋值
                     * 
                     */
                    bool UnUsedQuotaHasBeenSet() const;

                    /**
                     * 获取旁路带宽数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BypassWidth 旁路带宽数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBypassWidth() const;

                    /**
                     * 判断参数 BypassWidth 是否已赋值
                     * @return BypassWidth 是否已赋值
                     * 
                     */
                    bool BypassWidthHasBeenSet() const;

                    /**
                     * 获取赠送的旁路带宽数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendBypassWidth 赠送的旁路带宽数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSendBypassWidth() const;

                    /**
                     * 判断参数 SendBypassWidth 是否已赋值
                     * @return SendBypassWidth 是否已赋值
                     * 
                     */
                    bool SendBypassWidthHasBeenSet() const;

                private:

                    /**
                     * 串行地域带宽分配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SerialRegionInfo> m_serialRegionLst;
                    bool m_serialRegionLstHasBeenSet;

                    /**
                     * 剩余可分配通用带宽 单位M
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unUsedWidth;
                    bool m_unUsedWidthHasBeenSet;

                    /**
                     * 可配置实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unUsedQuota;
                    bool m_unUsedQuotaHasBeenSet;

                    /**
                     * 旁路带宽数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bypassWidth;
                    bool m_bypassWidthHasBeenSet;

                    /**
                     * 赠送的旁路带宽数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sendBypassWidth;
                    bool m_sendBypassWidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESERIALREGIONRESPONSE_H_
