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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMACCESSTOPOLOGYSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMACCESSTOPOLOGYSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDspmAccessTopologySummary返回参数结构体
                */
                class DescribeDspmAccessTopologySummaryResponse : public AbstractModel
                {
                public:
                    DescribeDspmAccessTopologySummaryResponse();
                    ~DescribeDspmAccessTopologySummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取来源IP数
                     * @return SourceIpCount 来源IP数
                     * 
                     */
                    int64_t GetSourceIpCount() const;

                    /**
                     * 判断参数 SourceIpCount 是否已赋值
                     * @return SourceIpCount 是否已赋值
                     * 
                     */
                    bool SourceIpCountHasBeenSet() const;

                    /**
                     * 获取访问账号数
                     * @return AccountCount 访问账号数
                     * 
                     */
                    int64_t GetAccountCount() const;

                    /**
                     * 判断参数 AccountCount 是否已赋值
                     * @return AccountCount 是否已赋值
                     * 
                     */
                    bool AccountCountHasBeenSet() const;

                    /**
                     * 获取被访问的库数
                     * @return DbCount 被访问的库数
                     * 
                     */
                    int64_t GetDbCount() const;

                    /**
                     * 判断参数 DbCount 是否已赋值
                     * @return DbCount 是否已赋值
                     * 
                     */
                    bool DbCountHasBeenSet() const;

                    /**
                     * 获取被访问的表数
                     * @return TableCount 被访问的表数
                     * 
                     */
                    int64_t GetTableCount() const;

                    /**
                     * 判断参数 TableCount 是否已赋值
                     * @return TableCount 是否已赋值
                     * 
                     */
                    bool TableCountHasBeenSet() const;

                    /**
                     * 获取近7天访问次数
                     * @return AccessCountLast7Days 近7天访问次数
                     * 
                     */
                    int64_t GetAccessCountLast7Days() const;

                    /**
                     * 判断参数 AccessCountLast7Days 是否已赋值
                     * @return AccessCountLast7Days 是否已赋值
                     * 
                     */
                    bool AccessCountLast7DaysHasBeenSet() const;

                    /**
                     * 获取近30天访问次数
                     * @return AccessCountLast30Days 近30天访问次数
                     * 
                     */
                    int64_t GetAccessCountLast30Days() const;

                    /**
                     * 判断参数 AccessCountLast30Days 是否已赋值
                     * @return AccessCountLast30Days 是否已赋值
                     * 
                     */
                    bool AccessCountLast30DaysHasBeenSet() const;

                    /**
                     * 获取表级访问组合数（实例+账号+来源IP+库+schema+表 的去重组合数）
                     * @return TableCombinationCount 表级访问组合数（实例+账号+来源IP+库+schema+表 的去重组合数）
                     * 
                     */
                    int64_t GetTableCombinationCount() const;

                    /**
                     * 判断参数 TableCombinationCount 是否已赋值
                     * @return TableCombinationCount 是否已赋值
                     * 
                     */
                    bool TableCombinationCountHasBeenSet() const;

                    /**
                     * 获取表级访问组合数是否已达上限。为 true 时表级拓扑数据不完整：达上限后新出现的访问组合会被拒绝写入（已有组合仍继续累加），因此展示的拓扑可能缺失部分对象，且保留了哪些组合取决于到达顺序。建议据此显式提示数据不完整。查询不到该标志时不返回本字段
                     * @return DataIncomplete 表级访问组合数是否已达上限。为 true 时表级拓扑数据不完整：达上限后新出现的访问组合会被拒绝写入（已有组合仍继续累加），因此展示的拓扑可能缺失部分对象，且保留了哪些组合取决于到达顺序。建议据此显式提示数据不完整。查询不到该标志时不返回本字段
                     * 
                     */
                    bool GetDataIncomplete() const;

                    /**
                     * 判断参数 DataIncomplete 是否已赋值
                     * @return DataIncomplete 是否已赋值
                     * 
                     */
                    bool DataIncompleteHasBeenSet() const;

                    /**
                     * 获取数据最后计算时间。拓扑数据由后台预聚合产生，存在链路延迟；多成员账号场景取各成员中最早的一个
                     * @return LastCalcTime 数据最后计算时间。拓扑数据由后台预聚合产生，存在链路延迟；多成员账号场景取各成员中最早的一个
                     * 
                     */
                    std::string GetLastCalcTime() const;

                    /**
                     * 判断参数 LastCalcTime 是否已赋值
                     * @return LastCalcTime 是否已赋值
                     * 
                     */
                    bool LastCalcTimeHasBeenSet() const;

                private:

                    /**
                     * 来源IP数
                     */
                    int64_t m_sourceIpCount;
                    bool m_sourceIpCountHasBeenSet;

                    /**
                     * 访问账号数
                     */
                    int64_t m_accountCount;
                    bool m_accountCountHasBeenSet;

                    /**
                     * 被访问的库数
                     */
                    int64_t m_dbCount;
                    bool m_dbCountHasBeenSet;

                    /**
                     * 被访问的表数
                     */
                    int64_t m_tableCount;
                    bool m_tableCountHasBeenSet;

                    /**
                     * 近7天访问次数
                     */
                    int64_t m_accessCountLast7Days;
                    bool m_accessCountLast7DaysHasBeenSet;

                    /**
                     * 近30天访问次数
                     */
                    int64_t m_accessCountLast30Days;
                    bool m_accessCountLast30DaysHasBeenSet;

                    /**
                     * 表级访问组合数（实例+账号+来源IP+库+schema+表 的去重组合数）
                     */
                    int64_t m_tableCombinationCount;
                    bool m_tableCombinationCountHasBeenSet;

                    /**
                     * 表级访问组合数是否已达上限。为 true 时表级拓扑数据不完整：达上限后新出现的访问组合会被拒绝写入（已有组合仍继续累加），因此展示的拓扑可能缺失部分对象，且保留了哪些组合取决于到达顺序。建议据此显式提示数据不完整。查询不到该标志时不返回本字段
                     */
                    bool m_dataIncomplete;
                    bool m_dataIncompleteHasBeenSet;

                    /**
                     * 数据最后计算时间。拓扑数据由后台预聚合产生，存在链路延迟；多成员账号场景取各成员中最早的一个
                     */
                    std::string m_lastCalcTime;
                    bool m_lastCalcTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMACCESSTOPOLOGYSUMMARYRESPONSE_H_
