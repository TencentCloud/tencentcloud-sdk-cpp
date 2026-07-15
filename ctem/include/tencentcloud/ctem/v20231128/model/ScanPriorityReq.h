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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_SCANPRIORITYREQ_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_SCANPRIORITYREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 优先级入参
                */
                class ScanPriorityReq : public AbstractModel
                {
                public:
                    ScanPriorityReq();
                    ~ScanPriorityReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>只对新增资产进行漏洞扫描</p>
                     * @return OnlyScanNewAsset <p>只对新增资产进行漏洞扫描</p>
                     * 
                     */
                    bool GetOnlyScanNewAsset() const;

                    /**
                     * 设置<p>只对新增资产进行漏洞扫描</p>
                     * @param _onlyScanNewAsset <p>只对新增资产进行漏洞扫描</p>
                     * 
                     */
                    void SetOnlyScanNewAsset(const bool& _onlyScanNewAsset);

                    /**
                     * 判断参数 OnlyScanNewAsset 是否已赋值
                     * @return OnlyScanNewAsset 是否已赋值
                     * 
                     */
                    bool OnlyScanNewAssetHasBeenSet() const;

                    /**
                     * 获取<p>启用的优先级规则(有序):new_asset,high_risk_port,admin_panel,high_risk_fingerprint</p>
                     * @return PriorityRules <p>启用的优先级规则(有序):new_asset,high_risk_port,admin_panel,high_risk_fingerprint</p>
                     * 
                     */
                    std::vector<std::string> GetPriorityRules() const;

                    /**
                     * 设置<p>启用的优先级规则(有序):new_asset,high_risk_port,admin_panel,high_risk_fingerprint</p>
                     * @param _priorityRules <p>启用的优先级规则(有序):new_asset,high_risk_port,admin_panel,high_risk_fingerprint</p>
                     * 
                     */
                    void SetPriorityRules(const std::vector<std::string>& _priorityRules);

                    /**
                     * 判断参数 PriorityRules 是否已赋值
                     * @return PriorityRules 是否已赋值
                     * 
                     */
                    bool PriorityRulesHasBeenSet() const;

                private:

                    /**
                     * <p>只对新增资产进行漏洞扫描</p>
                     */
                    bool m_onlyScanNewAsset;
                    bool m_onlyScanNewAssetHasBeenSet;

                    /**
                     * <p>启用的优先级规则(有序):new_asset,high_risk_port,admin_panel,high_risk_fingerprint</p>
                     */
                    std::vector<std::string> m_priorityRules;
                    bool m_priorityRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_SCANPRIORITYREQ_H_
