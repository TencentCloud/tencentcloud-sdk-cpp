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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERQUOTAINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERQUOTAINFO_H_

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
                * 订单配额信息
                */
                class OrderQuotaInfo : public AbstractModel
                {
                public:
                    OrderQuotaInfo();
                    ~OrderQuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配额键</p>
                     * @return QuotaKey <p>配额键</p>
                     * 
                     */
                    std::string GetQuotaKey() const;

                    /**
                     * 设置<p>配额键</p>
                     * @param _quotaKey <p>配额键</p>
                     * 
                     */
                    void SetQuotaKey(const std::string& _quotaKey);

                    /**
                     * 判断参数 QuotaKey 是否已赋值
                     * @return QuotaKey 是否已赋值
                     * 
                     */
                    bool QuotaKeyHasBeenSet() const;

                    /**
                     * 获取<p>配额总量</p>
                     * @return QuotaNum <p>配额总量</p>
                     * 
                     */
                    int64_t GetQuotaNum() const;

                    /**
                     * 设置<p>配额总量</p>
                     * @param _quotaNum <p>配额总量</p>
                     * 
                     */
                    void SetQuotaNum(const int64_t& _quotaNum);

                    /**
                     * 判断参数 QuotaNum 是否已赋值
                     * @return QuotaNum 是否已赋值
                     * 
                     */
                    bool QuotaNumHasBeenSet() const;

                    /**
                     * 获取<p>配额已使用量（含共享给其他账号的消耗）。仅请求参数 NeedQuotaUsed 为 true 时采集；未传或为 false 时恒为 0；用量查询失败时恒为 0，错误提示见响应 QuotaUsedError 字段</p>
                     * @return QuotaUsed <p>配额已使用量（含共享给其他账号的消耗）。仅请求参数 NeedQuotaUsed 为 true 时采集；未传或为 false 时恒为 0；用量查询失败时恒为 0，错误提示见响应 QuotaUsedError 字段</p>
                     * 
                     */
                    int64_t GetQuotaUsed() const;

                    /**
                     * 设置<p>配额已使用量（含共享给其他账号的消耗）。仅请求参数 NeedQuotaUsed 为 true 时采集；未传或为 false 时恒为 0；用量查询失败时恒为 0，错误提示见响应 QuotaUsedError 字段</p>
                     * @param _quotaUsed <p>配额已使用量（含共享给其他账号的消耗）。仅请求参数 NeedQuotaUsed 为 true 时采集；未传或为 false 时恒为 0；用量查询失败时恒为 0，错误提示见响应 QuotaUsedError 字段</p>
                     * 
                     */
                    void SetQuotaUsed(const int64_t& _quotaUsed);

                    /**
                     * 判断参数 QuotaUsed 是否已赋值
                     * @return QuotaUsed 是否已赋值
                     * 
                     */
                    bool QuotaUsedHasBeenSet() const;

                    /**
                     * 获取<p>赠送配额。仅 CSPM 存在赠送额度，其余计费项为 0</p>
                     * @return QuotaGranted <p>赠送配额。仅 CSPM 存在赠送额度，其余计费项为 0</p>
                     * 
                     */
                    int64_t GetQuotaGranted() const;

                    /**
                     * 设置<p>赠送配额。仅 CSPM 存在赠送额度，其余计费项为 0</p>
                     * @param _quotaGranted <p>赠送配额。仅 CSPM 存在赠送额度，其余计费项为 0</p>
                     * 
                     */
                    void SetQuotaGranted(const int64_t& _quotaGranted);

                    /**
                     * 判断参数 QuotaGranted 是否已赋值
                     * @return QuotaGranted 是否已赋值
                     * 
                     */
                    bool QuotaGrantedHasBeenSet() const;

                private:

                    /**
                     * <p>配额键</p>
                     */
                    std::string m_quotaKey;
                    bool m_quotaKeyHasBeenSet;

                    /**
                     * <p>配额总量</p>
                     */
                    int64_t m_quotaNum;
                    bool m_quotaNumHasBeenSet;

                    /**
                     * <p>配额已使用量（含共享给其他账号的消耗）。仅请求参数 NeedQuotaUsed 为 true 时采集；未传或为 false 时恒为 0；用量查询失败时恒为 0，错误提示见响应 QuotaUsedError 字段</p>
                     */
                    int64_t m_quotaUsed;
                    bool m_quotaUsedHasBeenSet;

                    /**
                     * <p>赠送配额。仅 CSPM 存在赠送额度，其余计费项为 0</p>
                     */
                    int64_t m_quotaGranted;
                    bool m_quotaGrantedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ORDERQUOTAINFO_H_
