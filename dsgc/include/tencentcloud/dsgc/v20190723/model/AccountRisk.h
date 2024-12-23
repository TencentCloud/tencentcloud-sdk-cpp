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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ACCOUNTRISK_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ACCOUNTRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 账户风险
                */
                class AccountRisk : public AbstractModel
                {
                public:
                    AccountRisk();
                    ~AccountRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id（可不参考）
                     * @return Id id（可不参考）
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置id（可不参考）
                     * @param _id id（可不参考）
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取风险账户
                     * @return RiskAccount 风险账户
                     * 
                     */
                    std::string GetRiskAccount() const;

                    /**
                     * 设置风险账户
                     * @param _riskAccount 风险账户
                     * 
                     */
                    void SetRiskAccount(const std::string& _riskAccount);

                    /**
                     * 判断参数 RiskAccount 是否已赋值
                     * @return RiskAccount 是否已赋值
                     * 
                     */
                    bool RiskAccountHasBeenSet() const;

                private:

                    /**
                     * id（可不参考）
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 风险账户
                     */
                    std::string m_riskAccount;
                    bool m_riskAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ACCOUNTRISK_H_
