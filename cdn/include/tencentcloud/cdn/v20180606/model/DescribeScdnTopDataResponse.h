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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNTOPDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNTOPDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTypeData.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTopData.h>
#include <tencentcloud/cdn/v20180606/model/ScdnTopUrlData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeScdnTopData返回参数结构体
                */
                class DescribeScdnTopDataResponse : public AbstractModel
                {
                public:
                    DescribeScdnTopDataResponse();
                    ~DescribeScdnTopDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取WAF 攻击类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopTypeData WAF 攻击类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnTypeData> GetTopTypeData() const;

                    /**
                     * 判断参数 TopTypeData 是否已赋值
                     * @return TopTypeData 是否已赋值
                     * 
                     */
                    bool TopTypeDataHasBeenSet() const;

                    /**
                     * 获取TOP 攻击源 IP 统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopIpData TOP 攻击源 IP 统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnTopData> GetTopIpData() const;

                    /**
                     * 判断参数 TopIpData 是否已赋值
                     * @return TopIpData 是否已赋值
                     * 
                     */
                    bool TopIpDataHasBeenSet() const;

                    /**
                     * 获取查询的SCDN类型，当前仅支持 waf
                     * @return Mode 查询的SCDN类型，当前仅支持 waf
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取TOP URL 统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopUrlData TOP URL 统计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnTopUrlData> GetTopUrlData() const;

                    /**
                     * 判断参数 TopUrlData 是否已赋值
                     * @return TopUrlData 是否已赋值
                     * 
                     */
                    bool TopUrlDataHasBeenSet() const;

                private:

                    /**
                     * WAF 攻击类型统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnTypeData> m_topTypeData;
                    bool m_topTypeDataHasBeenSet;

                    /**
                     * TOP 攻击源 IP 统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnTopData> m_topIpData;
                    bool m_topIpDataHasBeenSet;

                    /**
                     * 查询的SCDN类型，当前仅支持 waf
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * TOP URL 统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnTopUrlData> m_topUrlData;
                    bool m_topUrlDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNTOPDATARESPONSE_H_
