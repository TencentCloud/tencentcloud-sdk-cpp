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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSPACKRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSPACKRELATION_H_

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
                * Anycast高防套餐详情
                */
                class EipAddressPackRelation : public AbstractModel
                {
                public:
                    EipAddressPackRelation();
                    ~EipAddressPackRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐IP数量
                     * @return IpCount 套餐IP数量
                     * 
                     */
                    uint64_t GetIpCount() const;

                    /**
                     * 设置套餐IP数量
                     * @param _ipCount 套餐IP数量
                     * 
                     */
                    void SetIpCount(const uint64_t& _ipCount);

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

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
                     * 获取当前到期时间
                     * @return CurDeadline 当前到期时间
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置当前到期时间
                     * @param _curDeadline 当前到期时间
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
                     * 套餐IP数量
                     */
                    uint64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * 自动续费标记
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 当前到期时间
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_EIPADDRESSPACKRELATION_H_
