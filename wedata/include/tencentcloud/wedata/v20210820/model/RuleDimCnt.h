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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMCNT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMCNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * RuleDimCnt 规则维度统计
                */
                class RuleDimCnt : public AbstractModel
                {
                public:
                    RuleDimCnt();
                    ~RuleDimCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * @return Dim 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * 
                     */
                    uint64_t GetDim() const;

                    /**
                     * 设置1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * @param _dim 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * 
                     */
                    void SetDim(const uint64_t& _dim);

                    /**
                     * 判断参数 Dim 是否已赋值
                     * @return Dim 是否已赋值
                     * 
                     */
                    bool DimHasBeenSet() const;

                    /**
                     * 获取count 数
                     * @return Cnt count 数
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置count 数
                     * @param _cnt count 数
                     * 
                     */
                    void SetCnt(const uint64_t& _cnt);

                    /**
                     * 判断参数 Cnt 是否已赋值
                     * @return Cnt 是否已赋值
                     * 
                     */
                    bool CntHasBeenSet() const;

                private:

                    /**
                     * 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     */
                    uint64_t m_dim;
                    bool m_dimHasBeenSet;

                    /**
                     * count 数
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEDIMCNT_H_
