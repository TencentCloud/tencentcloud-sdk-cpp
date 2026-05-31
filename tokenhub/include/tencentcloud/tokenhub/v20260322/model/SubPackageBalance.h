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
                     * 获取独占额度。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return ExclusiveQuota 独占额度。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    std::string GetExclusiveQuota() const;

                    /**
                     * 设置独占额度。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _exclusiveQuota 独占额度。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
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
                     * 获取独占额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return ExclusiveUsed 独占额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    std::string GetExclusiveUsed() const;

                    /**
                     * 设置独占额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _exclusiveUsed 独占额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
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
                     * 获取独占额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return ExclusiveRemain 独占额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    std::string GetExclusiveRemain() const;

                    /**
                     * 设置独占额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _exclusiveRemain 独占额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
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
                     * 获取共享额度上限，-1 表示不限。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return SharedQuota 共享额度上限，-1 表示不限。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    std::string GetSharedQuota() const;

                    /**
                     * 设置共享额度上限，-1 表示不限。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _sharedQuota 共享额度上限，-1 表示不限。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
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
                     * 获取共享额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return SharedUsed 共享额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    std::string GetSharedUsed() const;

                    /**
                     * 设置共享额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _sharedUsed 共享额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
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
                     * 获取共享额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @return SharedRemain 共享额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * 
                     */
                    std::string GetSharedRemain() const;

                    /**
                     * 设置共享额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     * @param _sharedRemain 共享额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
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
                     * 获取API Key 额度包状态。取值：0（正常）、1（耗尽）。
                     * @return Status API Key 额度包状态。取值：0（正常）、1（耗尽）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置API Key 额度包状态。取值：0（正常）、1（耗尽）。
                     * @param _status API Key 额度包状态。取值：0（正常）、1（耗尽）。
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
                     * 独占额度。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    std::string m_exclusiveQuota;
                    bool m_exclusiveQuotaHasBeenSet;

                    /**
                     * 独占额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    std::string m_exclusiveUsed;
                    bool m_exclusiveUsedHasBeenSet;

                    /**
                     * 独占额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    std::string m_exclusiveRemain;
                    bool m_exclusiveRemainHasBeenSet;

                    /**
                     * 共享额度上限，-1 表示不限。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    std::string m_sharedQuota;
                    bool m_sharedQuotaHasBeenSet;

                    /**
                     * 共享额度已用量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    std::string m_sharedUsed;
                    bool m_sharedUsedHasBeenSet;

                    /**
                     * 共享额度剩余量。单位说明如下：
- 套餐类型为专业套餐，单位取值为积分；
- 套餐类型为轻享套餐，单位取值为 token。
                     */
                    std::string m_sharedRemain;
                    bool m_sharedRemainHasBeenSet;

                    /**
                     * API Key 额度包状态。取值：0（正常）、1（耗尽）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_SUBPACKAGEBALANCE_H_
