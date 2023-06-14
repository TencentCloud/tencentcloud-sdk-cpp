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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_QUOTA_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 刷新用量及刷新配额
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单次批量提交配额上限。
                     * @return Batch 单次批量提交配额上限。
                     * 
                     */
                    int64_t GetBatch() const;

                    /**
                     * 设置单次批量提交配额上限。
                     * @param _batch 单次批量提交配额上限。
                     * 
                     */
                    void SetBatch(const int64_t& _batch);

                    /**
                     * 判断参数 Batch 是否已赋值
                     * @return Batch 是否已赋值
                     * 
                     */
                    bool BatchHasBeenSet() const;

                    /**
                     * 获取每日提交配额上限。
                     * @return Total 每日提交配额上限。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置每日提交配额上限。
                     * @param _total 每日提交配额上限。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取每日剩余的可提交配额。
                     * @return Available 每日剩余的可提交配额。
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置每日剩余的可提交配额。
                     * @param _available 每日剩余的可提交配额。
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * 单次批量提交配额上限。
                     */
                    int64_t m_batch;
                    bool m_batchHasBeenSet;

                    /**
                     * 每日提交配额上限。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 每日剩余的可提交配额。
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_QUOTA_H_
