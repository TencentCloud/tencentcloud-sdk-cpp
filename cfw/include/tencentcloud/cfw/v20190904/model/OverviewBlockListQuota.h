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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWBLOCKLISTQUOTA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWBLOCKLISTQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览封禁列表配额
                */
                class OverviewBlockListQuota : public AbstractModel
                {
                public:
                    OverviewBlockListQuota();
                    ~OverviewBlockListQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>封禁列表总配额数量。</p>
                     * @return TotalCnt <p>封禁列表总配额数量。</p>
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 设置<p>封禁列表总配额数量。</p>
                     * @param _totalCnt <p>封禁列表总配额数量。</p>
                     * 
                     */
                    void SetTotalCnt(const int64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取<p>封禁列表已使用数量。</p>
                     * @return UsedCnt <p>封禁列表已使用数量。</p>
                     * 
                     */
                    int64_t GetUsedCnt() const;

                    /**
                     * 设置<p>封禁列表已使用数量。</p>
                     * @param _usedCnt <p>封禁列表已使用数量。</p>
                     * 
                     */
                    void SetUsedCnt(const int64_t& _usedCnt);

                    /**
                     * 判断参数 UsedCnt 是否已赋值
                     * @return UsedCnt 是否已赋值
                     * 
                     */
                    bool UsedCntHasBeenSet() const;

                    /**
                     * 获取<p>入站方向已使用的封禁列表记录。</p>
                     * @return InUsedCnt <p>入站方向已使用的封禁列表记录。</p>
                     * 
                     */
                    int64_t GetInUsedCnt() const;

                    /**
                     * 设置<p>入站方向已使用的封禁列表记录。</p>
                     * @param _inUsedCnt <p>入站方向已使用的封禁列表记录。</p>
                     * 
                     */
                    void SetInUsedCnt(const int64_t& _inUsedCnt);

                    /**
                     * 判断参数 InUsedCnt 是否已赋值
                     * @return InUsedCnt 是否已赋值
                     * 
                     */
                    bool InUsedCntHasBeenSet() const;

                    /**
                     * 获取<p>出方向封禁列表已使用数量。</p>
                     * @return OutUsedCnt <p>出方向封禁列表已使用数量。</p>
                     * 
                     */
                    int64_t GetOutUsedCnt() const;

                    /**
                     * 设置<p>出方向封禁列表已使用数量。</p>
                     * @param _outUsedCnt <p>出方向封禁列表已使用数量。</p>
                     * 
                     */
                    void SetOutUsedCnt(const int64_t& _outUsedCnt);

                    /**
                     * 判断参数 OutUsedCnt 是否已赋值
                     * @return OutUsedCnt 是否已赋值
                     * 
                     */
                    bool OutUsedCntHasBeenSet() const;

                private:

                    /**
                     * <p>封禁列表总配额数量。</p>
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * <p>封禁列表已使用数量。</p>
                     */
                    int64_t m_usedCnt;
                    bool m_usedCntHasBeenSet;

                    /**
                     * <p>入站方向已使用的封禁列表记录。</p>
                     */
                    int64_t m_inUsedCnt;
                    bool m_inUsedCntHasBeenSet;

                    /**
                     * <p>出方向封禁列表已使用数量。</p>
                     */
                    int64_t m_outUsedCnt;
                    bool m_outUsedCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWBLOCKLISTQUOTA_H_
