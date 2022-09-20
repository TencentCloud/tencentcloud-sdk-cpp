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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSSECRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSSECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnssecInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDnssec返回参数结构体
                */
                class DescribeDnssecResponse : public AbstractModel
                {
                public:
                    DescribeDnssecResponse();
                    ~DescribeDnssecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DNSSEC状态信息，取值有：
<li>enabled：开启；</li>
<li>disabled：关闭。</li>
                     * @return Status DNSSEC状态信息，取值有：
<li>enabled：开启；</li>
<li>disabled：关闭。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DNSSEC相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DnssecInfo DNSSEC相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DnssecInfo GetDnssecInfo() const;

                    /**
                     * 判断参数 DnssecInfo 是否已赋值
                     * @return DnssecInfo 是否已赋值
                     */
                    bool DnssecInfoHasBeenSet() const;

                    /**
                     * 获取站点信息更新时间。
                     * @return ModifiedOn 站点信息更新时间。
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * DNSSEC状态信息，取值有：
<li>enabled：开启；</li>
<li>disabled：关闭。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DNSSEC相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DnssecInfo m_dnssecInfo;
                    bool m_dnssecInfoHasBeenSet;

                    /**
                     * 站点信息更新时间。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDNSSECRESPONSE_H_
