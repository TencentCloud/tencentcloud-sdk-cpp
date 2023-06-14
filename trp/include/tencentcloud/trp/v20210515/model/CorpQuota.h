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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CORPQUOTA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CORPQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/Quota.h>
#include <tencentcloud/trp/v20210515/model/UsageQuota.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 渠道商的子企业额度使用情况
                */
                class CorpQuota : public AbstractModel
                {
                public:
                    CorpQuota();
                    ~CorpQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return CorpName 企业名称
                     * 
                     */
                    std::string GetCorpName() const;

                    /**
                     * 设置企业名称
                     * @param _corpName 企业名称
                     * 
                     */
                    void SetCorpName(const std::string& _corpName);

                    /**
                     * 判断参数 CorpName 是否已赋值
                     * @return CorpName 是否已赋值
                     * 
                     */
                    bool CorpNameHasBeenSet() const;

                    /**
                     * 获取额度
                     * @return Quota 额度
                     * 
                     */
                    Quota GetQuota() const;

                    /**
                     * 设置额度
                     * @param _quota 额度
                     * 
                     */
                    void SetQuota(const Quota& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取额度使用量
                     * @return UsageQuota 额度使用量
                     * 
                     */
                    UsageQuota GetUsageQuota() const;

                    /**
                     * 设置额度使用量
                     * @param _usageQuota 额度使用量
                     * 
                     */
                    void SetUsageQuota(const UsageQuota& _usageQuota);

                    /**
                     * 判断参数 UsageQuota 是否已赋值
                     * @return UsageQuota 是否已赋值
                     * 
                     */
                    bool UsageQuotaHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_corpName;
                    bool m_corpNameHasBeenSet;

                    /**
                     * 额度
                     */
                    Quota m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * 额度使用量
                     */
                    UsageQuota m_usageQuota;
                    bool m_usageQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CORPQUOTA_H_
