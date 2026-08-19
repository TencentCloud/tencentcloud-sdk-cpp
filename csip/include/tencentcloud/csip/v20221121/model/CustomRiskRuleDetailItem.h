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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEDETAILITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 指定策略详情配置
                */
                class CustomRiskRuleDetailItem : public AbstractModel
                {
                public:
                    CustomRiskRuleDetailItem();
                    ~CustomRiskRuleDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则开启状态
                     * @return Status 规则开启状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则开启状态
                     * @param _status 规则开启状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return AppID 租户ID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置租户ID
                     * @param _appID 租户ID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * 规则开启状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 租户ID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CUSTOMRISKRULEDETAILITEM_H_
