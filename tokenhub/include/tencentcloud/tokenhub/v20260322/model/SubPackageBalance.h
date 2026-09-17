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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * API Key 额度及用量信息
                */
                class SubPackageBalance : public AbstractModel
                {
                public:
                    SubPackageBalance();
                    ~SubPackageBalance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>独占额度。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return ExclusiveQuota <p>独占额度。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    std::string GetExclusiveQuota() const;

                    /**
                     * 设置<p>独占额度。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _exclusiveQuota <p>独占额度。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetExclusiveQuota(const std::string& _exclusiveQuota);

                    /**
                     * 判断参数 ExclusiveQuota 是否已赋值
                     * @return ExclusiveQuota 是否已赋值
                     * 
                     */
                    bool ExclusiveQuotaHasBeenSet() const;

                    /**
                     * 获取<p>独占额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return ExclusiveUsed <p>独占额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    std::string GetExclusiveUsed() const;

                    /**
                     * 设置<p>独占额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _exclusiveUsed <p>独占额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetExclusiveUsed(const std::string& _exclusiveUsed);

                    /**
                     * 判断参数 ExclusiveUsed 是否已赋值
                     * @return ExclusiveUsed 是否已赋值
                     * 
                     */
                    bool ExclusiveUsedHasBeenSet() const;

                    /**
                     * 获取<p>独占额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return ExclusiveRemain <p>独占额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    std::string GetExclusiveRemain() const;

                    /**
                     * 设置<p>独占额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _exclusiveRemain <p>独占额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetExclusiveRemain(const std::string& _exclusiveRemain);

                    /**
                     * 判断参数 ExclusiveRemain 是否已赋值
                     * @return ExclusiveRemain 是否已赋值
                     * 
                     */
                    bool ExclusiveRemainHasBeenSet() const;

                    /**
                     * 获取<p>共享额度上限，-1 表示不限。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return SharedQuota <p>共享额度上限，-1 表示不限。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    std::string GetSharedQuota() const;

                    /**
                     * 设置<p>共享额度上限，-1 表示不限。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _sharedQuota <p>共享额度上限，-1 表示不限。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetSharedQuota(const std::string& _sharedQuota);

                    /**
                     * 判断参数 SharedQuota 是否已赋值
                     * @return SharedQuota 是否已赋值
                     * 
                     */
                    bool SharedQuotaHasBeenSet() const;

                    /**
                     * 获取<p>共享额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return SharedUsed <p>共享额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    std::string GetSharedUsed() const;

                    /**
                     * 设置<p>共享额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _sharedUsed <p>共享额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetSharedUsed(const std::string& _sharedUsed);

                    /**
                     * 判断参数 SharedUsed 是否已赋值
                     * @return SharedUsed 是否已赋值
                     * 
                     */
                    bool SharedUsedHasBeenSet() const;

                    /**
                     * 获取<p>共享额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @return SharedRemain <p>共享额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    std::string GetSharedRemain() const;

                    /**
                     * 设置<p>共享额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * @param _sharedRemain <p>共享额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     * 
                     */
                    void SetSharedRemain(const std::string& _sharedRemain);

                    /**
                     * 判断参数 SharedRemain 是否已赋值
                     * @return SharedRemain 是否已赋值
                     * 
                     */
                    bool SharedRemainHasBeenSet() const;

                    /**
                     * 获取<p>当前周期已用总量 exclusive_used + shared_used + overflow_used</p>
                     * @return TotalUsed <p>当前周期已用总量 exclusive_used + shared_used + overflow_used</p>
                     * 
                     */
                    std::string GetTotalUsed() const;

                    /**
                     * 设置<p>当前周期已用总量 exclusive_used + shared_used + overflow_used</p>
                     * @param _totalUsed <p>当前周期已用总量 exclusive_used + shared_used + overflow_used</p>
                     * 
                     */
                    void SetTotalUsed(const std::string& _totalUsed);

                    /**
                     * 判断参数 TotalUsed 是否已赋值
                     * @return TotalUsed 是否已赋值
                     * 
                     */
                    bool TotalUsedHasBeenSet() const;

                    /**
                     * 获取<p>API Key 额度包状态。取值：0（正常）、1（耗尽）。</p>
                     * @return Status <p>API Key 额度包状态。取值：0（正常）、1（耗尽）。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>API Key 额度包状态。取值：0（正常）、1（耗尽）。</p>
                     * @param _status <p>API Key 额度包状态。取值：0（正常）、1（耗尽）。</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>独占额度。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    std::string m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * <p>独占额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    std::string m_exclusiveUsed;
                    bool m_exclusiveUsedHasBeenSet;

                    /**
                     * <p>独占额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    std::string m_exclusiveRemain;
                    bool m_exclusiveRemainHasBeenSet;

                    /**
                     * <p>共享额度上限，-1 表示不限。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    std::string m_sharedQuota;
                    bool m_sharedQuotaHasBeenSet;

                    /**
                     * <p>共享额度已用量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    std::string m_sharedUsed;
                    bool m_sharedUsedHasBeenSet;

                    /**
                     * <p>共享额度剩余量。单位说明如下：</p><ul><li>套餐类型为专业套餐，单位取值为积分；</li><li>套餐类型为轻享套餐，单位取值为 token。</li></ul>
                     */
                    std::string m_sharedRemain;
                    bool m_sharedRemainHasBeenSet;

                    /**
                     * <p>当前周期已用总量 exclusive_used + shared_used + overflow_used</p>
                     */
                    std::string m_totalUsed;
                    bool m_totalUsedHasBeenSet;

                    /**
                     * <p>API Key 额度包状态。取值：0（正常）、1（耗尽）。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_
