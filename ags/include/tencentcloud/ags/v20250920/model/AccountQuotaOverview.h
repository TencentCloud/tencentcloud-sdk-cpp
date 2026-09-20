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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_ACCOUNTQUOTAOVERVIEW_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_ACCOUNTQUOTAOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/QuotaResourceInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 主账号配额总览
                */
                class AccountQuotaOverview : public AbstractModel
                {
                public:
                    AccountQuotaOverview();
                    ~AccountQuotaOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主账号各资源维度的配额上限</p>
                     * @return Quota <p>主账号各资源维度的配额上限</p>
                     * 
                     */
                    QuotaResourceInfo GetQuota() const;

                    /**
                     * 设置<p>主账号各资源维度的配额上限</p>
                     * @param _quota <p>主账号各资源维度的配额上限</p>
                     * 
                     */
                    void SetQuota(const QuotaResourceInfo& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取<p>主账号各资源维度的当前用量</p>
                     * @return Usage <p>主账号各资源维度的当前用量</p>
                     * 
                     */
                    QuotaResourceInfo GetUsage() const;

                    /**
                     * 设置<p>主账号各资源维度的当前用量</p>
                     * @param _usage <p>主账号各资源维度的当前用量</p>
                     * 
                     */
                    void SetUsage(const QuotaResourceInfo& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>主账号各资源维度的配额上限</p>
                     */
                    QuotaResourceInfo m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * <p>主账号各资源维度的当前用量</p>
                     */
                    QuotaResourceInfo m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_ACCOUNTQUOTAOVERVIEW_H_
