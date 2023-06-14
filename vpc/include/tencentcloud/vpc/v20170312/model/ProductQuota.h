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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRODUCTQUOTA_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRODUCTQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述网络中心每个产品的配额信息
                */
                class ProductQuota : public AbstractModel
                {
                public:
                    ProductQuota();
                    ~ProductQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品配额ID
                     * @return QuotaId 产品配额ID
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置产品配额ID
                     * @param _quotaId 产品配额ID
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取产品配额名称
                     * @return QuotaName 产品配额名称
                     * 
                     */
                    std::string GetQuotaName() const;

                    /**
                     * 设置产品配额名称
                     * @param _quotaName 产品配额名称
                     * 
                     */
                    void SetQuotaName(const std::string& _quotaName);

                    /**
                     * 判断参数 QuotaName 是否已赋值
                     * @return QuotaName 是否已赋值
                     * 
                     */
                    bool QuotaNameHasBeenSet() const;

                    /**
                     * 获取产品当前配额
                     * @return QuotaCurrent 产品当前配额
                     * 
                     */
                    int64_t GetQuotaCurrent() const;

                    /**
                     * 设置产品当前配额
                     * @param _quotaCurrent 产品当前配额
                     * 
                     */
                    void SetQuotaCurrent(const int64_t& _quotaCurrent);

                    /**
                     * 判断参数 QuotaCurrent 是否已赋值
                     * @return QuotaCurrent 是否已赋值
                     * 
                     */
                    bool QuotaCurrentHasBeenSet() const;

                    /**
                     * 获取产品配额上限
                     * @return QuotaLimit 产品配额上限
                     * 
                     */
                    int64_t GetQuotaLimit() const;

                    /**
                     * 设置产品配额上限
                     * @param _quotaLimit 产品配额上限
                     * 
                     */
                    void SetQuotaLimit(const int64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                    /**
                     * 获取产品配额是否有地域属性
                     * @return QuotaRegion 产品配额是否有地域属性
                     * 
                     */
                    bool GetQuotaRegion() const;

                    /**
                     * 设置产品配额是否有地域属性
                     * @param _quotaRegion 产品配额是否有地域属性
                     * 
                     */
                    void SetQuotaRegion(const bool& _quotaRegion);

                    /**
                     * 判断参数 QuotaRegion 是否已赋值
                     * @return QuotaRegion 是否已赋值
                     * 
                     */
                    bool QuotaRegionHasBeenSet() const;

                private:

                    /**
                     * 产品配额ID
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 产品配额名称
                     */
                    std::string m_quotaName;
                    bool m_quotaNameHasBeenSet;

                    /**
                     * 产品当前配额
                     */
                    int64_t m_quotaCurrent;
                    bool m_quotaCurrentHasBeenSet;

                    /**
                     * 产品配额上限
                     */
                    int64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                    /**
                     * 产品配额是否有地域属性
                     */
                    bool m_quotaRegion;
                    bool m_quotaRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRODUCTQUOTA_H_
