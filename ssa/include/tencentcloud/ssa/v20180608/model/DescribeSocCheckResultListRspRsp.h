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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKRESULTLISTRSPRSP_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKRESULTLISTRSPRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SocCheckResult.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 检查项结果详情列表
                */
                class DescribeSocCheckResultListRspRsp : public AbstractModel
                {
                public:
                    DescribeSocCheckResultListRspRsp();
                    ~DescribeSocCheckResultListRspRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取具体检查项详情
                     * @return List 具体检查项详情
                     * 
                     */
                    std::vector<SocCheckResult> GetList() const;

                    /**
                     * 设置具体检查项详情
                     * @param _list 具体检查项详情
                     * 
                     */
                    void SetList(const std::vector<SocCheckResult>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取检查结果总数
                     * @return Total 检查结果总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置检查结果总数
                     * @param _total 检查结果总数
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
                     * 获取低危个数
                     * @return LowTotal 低危个数
                     * 
                     */
                    int64_t GetLowTotal() const;

                    /**
                     * 设置低危个数
                     * @param _lowTotal 低危个数
                     * 
                     */
                    void SetLowTotal(const int64_t& _lowTotal);

                    /**
                     * 判断参数 LowTotal 是否已赋值
                     * @return LowTotal 是否已赋值
                     * 
                     */
                    bool LowTotalHasBeenSet() const;

                    /**
                     * 获取中危个数
                     * @return MiddleTotal 中危个数
                     * 
                     */
                    int64_t GetMiddleTotal() const;

                    /**
                     * 设置中危个数
                     * @param _middleTotal 中危个数
                     * 
                     */
                    void SetMiddleTotal(const int64_t& _middleTotal);

                    /**
                     * 判断参数 MiddleTotal 是否已赋值
                     * @return MiddleTotal 是否已赋值
                     * 
                     */
                    bool MiddleTotalHasBeenSet() const;

                    /**
                     * 获取高危个数
                     * @return HighTotal 高危个数
                     * 
                     */
                    int64_t GetHighTotal() const;

                    /**
                     * 设置高危个数
                     * @param _highTotal 高危个数
                     * 
                     */
                    void SetHighTotal(const int64_t& _highTotal);

                    /**
                     * 判断参数 HighTotal 是否已赋值
                     * @return HighTotal 是否已赋值
                     * 
                     */
                    bool HighTotalHasBeenSet() const;

                    /**
                     * 获取正常个数
                     * @return NormalTotal 正常个数
                     * 
                     */
                    int64_t GetNormalTotal() const;

                    /**
                     * 设置正常个数
                     * @param _normalTotal 正常个数
                     * 
                     */
                    void SetNormalTotal(const int64_t& _normalTotal);

                    /**
                     * 判断参数 NormalTotal 是否已赋值
                     * @return NormalTotal 是否已赋值
                     * 
                     */
                    bool NormalTotalHasBeenSet() const;

                private:

                    /**
                     * 具体检查项详情
                     */
                    std::vector<SocCheckResult> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 检查结果总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 低危个数
                     */
                    int64_t m_lowTotal;
                    bool m_lowTotalHasBeenSet;

                    /**
                     * 中危个数
                     */
                    int64_t m_middleTotal;
                    bool m_middleTotalHasBeenSet;

                    /**
                     * 高危个数
                     */
                    int64_t m_highTotal;
                    bool m_highTotalHasBeenSet;

                    /**
                     * 正常个数
                     */
                    int64_t m_normalTotal;
                    bool m_normalTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESOCCHECKRESULTLISTRSPRSP_H_
