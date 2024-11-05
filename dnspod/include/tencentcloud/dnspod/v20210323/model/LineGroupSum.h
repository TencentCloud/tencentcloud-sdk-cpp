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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPSUM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPSUM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 自定义线路数量信息
                */
                class LineGroupSum : public AbstractModel
                {
                public:
                    LineGroupSum();
                    ~LineGroupSum() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本次请求返回自定义线路分组个数
                     * @return NowTotal 本次请求返回自定义线路分组个数
                     * 
                     */
                    uint64_t GetNowTotal() const;

                    /**
                     * 设置本次请求返回自定义线路分组个数
                     * @param _nowTotal 本次请求返回自定义线路分组个数
                     * 
                     */
                    void SetNowTotal(const uint64_t& _nowTotal);

                    /**
                     * 判断参数 NowTotal 是否已赋值
                     * @return NowTotal 是否已赋值
                     * 
                     */
                    bool NowTotalHasBeenSet() const;

                    /**
                     * 获取自定义线路分组总数
                     * @return Total 自定义线路分组总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置自定义线路分组总数
                     * @param _total 自定义线路分组总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取还可允许添加的自定义线路分组个数
                     * @return AvailableCount 还可允许添加的自定义线路分组个数
                     * 
                     */
                    uint64_t GetAvailableCount() const;

                    /**
                     * 设置还可允许添加的自定义线路分组个数
                     * @param _availableCount 还可允许添加的自定义线路分组个数
                     * 
                     */
                    void SetAvailableCount(const uint64_t& _availableCount);

                    /**
                     * 判断参数 AvailableCount 是否已赋值
                     * @return AvailableCount 是否已赋值
                     * 
                     */
                    bool AvailableCountHasBeenSet() const;

                private:

                    /**
                     * 本次请求返回自定义线路分组个数
                     */
                    uint64_t m_nowTotal;
                    bool m_nowTotalHasBeenSet;

                    /**
                     * 自定义线路分组总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 还可允许添加的自定义线路分组个数
                     */
                    uint64_t m_availableCount;
                    bool m_availableCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEGROUPSUM_H_
