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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMSTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleDimCnt.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则维度数统计
                */
                class RuleDimStat : public AbstractModel
                {
                public:
                    RuleDimStat();
                    ~RuleDimStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCnt 总数
                     * 
                     */
                    uint64_t GetTotalCnt() const;

                    /**
                     * 设置总数
                     * @param _totalCnt 总数
                     * 
                     */
                    void SetTotalCnt(const uint64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取维度统计数
                     * @return DimCntList 维度统计数
                     * 
                     */
                    std::vector<RuleDimCnt> GetDimCntList() const;

                    /**
                     * 设置维度统计数
                     * @param _dimCntList 维度统计数
                     * 
                     */
                    void SetDimCntList(const std::vector<RuleDimCnt>& _dimCntList);

                    /**
                     * 判断参数 DimCntList 是否已赋值
                     * @return DimCntList 是否已赋值
                     * 
                     */
                    bool DimCntListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 维度统计数
                     */
                    std::vector<RuleDimCnt> m_dimCntList;
                    bool m_dimCntListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMSTAT_H_
