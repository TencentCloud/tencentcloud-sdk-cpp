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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ACCOUNTQUOTAOVERVIEW_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ACCOUNTQUOTAOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/AccountQuota.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 配额详情概览
                */
                class AccountQuotaOverview : public AbstractModel
                {
                public:
                    AccountQuotaOverview();
                    ~AccountQuotaOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取配额数据
                     * @return AccountQuota 配额数据
                     * 
                     */
                    AccountQuota GetAccountQuota() const;

                    /**
                     * 设置配额数据
                     * @param _accountQuota 配额数据
                     * 
                     */
                    void SetAccountQuota(const AccountQuota& _accountQuota);

                    /**
                     * 判断参数 AccountQuota 是否已赋值
                     * @return AccountQuota 是否已赋值
                     * 
                     */
                    bool AccountQuotaHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 配额数据
                     */
                    AccountQuota m_accountQuota;
                    bool m_accountQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ACCOUNTQUOTAOVERVIEW_H_
