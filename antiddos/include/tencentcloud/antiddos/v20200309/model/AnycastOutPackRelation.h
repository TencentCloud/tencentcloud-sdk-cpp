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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ANYCASTOUTPACKRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ANYCASTOUTPACKRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Anycast转外套餐详情
                */
                class AnycastOutPackRelation : public AbstractModel
                {
                public:
                    AnycastOutPackRelation();
                    ~AnycastOutPackRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务带宽(单位M)
                     * @return NormalBandwidth 业务带宽(单位M)
                     * 
                     */
                    uint64_t GetNormalBandwidth() const;

                    /**
                     * 设置业务带宽(单位M)
                     * @param _normalBandwidth 业务带宽(单位M)
                     * 
                     */
                    void SetNormalBandwidth(const uint64_t& _normalBandwidth);

                    /**
                     * 判断参数 NormalBandwidth 是否已赋值
                     * @return NormalBandwidth 是否已赋值
                     * 
                     */
                    bool NormalBandwidthHasBeenSet() const;

                    /**
                     * 获取转发规则数
                     * @return ForwardRulesLimit 转发规则数
                     * 
                     */
                    uint64_t GetForwardRulesLimit() const;

                    /**
                     * 设置转发规则数
                     * @param _forwardRulesLimit 转发规则数
                     * 
                     */
                    void SetForwardRulesLimit(const uint64_t& _forwardRulesLimit);

                    /**
                     * 判断参数 ForwardRulesLimit 是否已赋值
                     * @return ForwardRulesLimit 是否已赋值
                     * 
                     */
                    bool ForwardRulesLimitHasBeenSet() const;

                    /**
                     * 获取自动续费标记
                     * @return AutoRenewFlag 自动续费标记
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记
                     * @param _autoRenewFlag 自动续费标记
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return CurDeadline 到期时间
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置到期时间
                     * @param _curDeadline 到期时间
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                private:

                    /**
                     * 业务带宽(单位M)
                     */
                    uint64_t m_normalBandwidth;
                    bool m_normalBandwidthHasBeenSet;

                    /**
                     * 转发规则数
                     */
                    uint64_t m_forwardRulesLimit;
                    bool m_forwardRulesLimitHasBeenSet;

                    /**
                     * 自动续费标记
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_ANYCASTOUTPACKRELATION_H_
