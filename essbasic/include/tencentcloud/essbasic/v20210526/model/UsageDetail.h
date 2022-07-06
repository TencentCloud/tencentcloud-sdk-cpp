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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 用量明细
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道侧合作企业唯一标识
                     * @return ProxyOrganizationOpenId 渠道侧合作企业唯一标识
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 设置渠道侧合作企业唯一标识
                     * @param ProxyOrganizationOpenId 渠道侧合作企业唯一标识
                     */
                    void SetProxyOrganizationOpenId(const std::string& _proxyOrganizationOpenId);

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取渠道侧合作企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyOrganizationName 渠道侧合作企业名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置渠道侧合作企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyOrganizationName 渠道侧合作企业名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取日期，当需要汇总数据时日期为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 日期，当需要汇总数据时日期为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期，当需要汇总数据时日期为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Date 日期，当需要汇总数据时日期为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取消耗数量
                     * @return Usage 消耗数量
                     */
                    uint64_t GetUsage() const;

                    /**
                     * 设置消耗数量
                     * @param Usage 消耗数量
                     */
                    void SetUsage(const uint64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取撤回数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cancel 撤回数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCancel() const;

                    /**
                     * 设置撤回数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cancel 撤回数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCancel(const uint64_t& _cancel);

                    /**
                     * 判断参数 Cancel 是否已赋值
                     * @return Cancel 是否已赋值
                     */
                    bool CancelHasBeenSet() const;

                private:

                    /**
                     * 渠道侧合作企业唯一标识
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 渠道侧合作企业名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 日期，当需要汇总数据时日期为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 消耗数量
                     */
                    uint64_t m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 撤回数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cancel;
                    bool m_cancelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USAGEDETAIL_H_
