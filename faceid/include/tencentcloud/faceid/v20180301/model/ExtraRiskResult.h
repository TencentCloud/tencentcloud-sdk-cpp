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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/BlackListItem.h>
#include <tencentcloud/faceid/v20180301/model/RiskDetailItem.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ExtraRiskResult
                */
                class ExtraRiskResult : public AbstractModel
                {
                public:
                    ExtraRiskResult();
                    ~ExtraRiskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>本次附加检查的完成度，回答“这次结果可否采信”。</p><p>枚举值：</p><ul><li>Completed： 本次请求所需的检查均已给出结论（命中或通过）</li><li>Partial： 至少一项检查未能给出结论：依赖不可用、数据不足、入参不完整或非法。结果仅供参考，不代表安全</li></ul>
                     * @return Status <p>本次附加检查的完成度，回答“这次结果可否采信”。</p><p>枚举值：</p><ul><li>Completed： 本次请求所需的检查均已给出结论（命中或通过）</li><li>Partial： 至少一项检查未能给出结论：依赖不可用、数据不足、入参不完整或非法。结果仅供参考，不代表安全</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>本次附加检查的完成度，回答“这次结果可否采信”。</p><p>枚举值：</p><ul><li>Completed： 本次请求所需的检查均已给出结论（命中或通过）</li><li>Partial： 至少一项检查未能给出结论：依赖不可用、数据不足、入参不完整或非法。结果仅供参考，不代表安全</li></ul>
                     * @param _status <p>本次附加检查的完成度，回答“这次结果可否采信”。</p><p>枚举值：</p><ul><li>Completed： 本次请求所需的检查均已给出结论（命中或通过）</li><li>Partial： 至少一项检查未能给出结论：依赖不可用、数据不足、入参不完整或非法。结果仅供参考，不代表安全</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>附加风险等级，可能为空字符串</p><p>枚举值：</p><ul><li>High： 存在已生效的风险命中项（此时 RiskDetailList 非空）</li><li>Low： 检查已完成，且确认无命中</li><li>&quot;&quot;（空字符串）    ： 未识别：本次没有任何一项检查能给出结论，或检查未全部完成。既不代表有风险，也不代表安全</li></ul>
                     * @return RiskLevel <p>附加风险等级，可能为空字符串</p><p>枚举值：</p><ul><li>High： 存在已生效的风险命中项（此时 RiskDetailList 非空）</li><li>Low： 检查已完成，且确认无命中</li><li>&quot;&quot;（空字符串）    ： 未识别：本次没有任何一项检查能给出结论，或检查未全部完成。既不代表有风险，也不代表安全</li></ul>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>附加风险等级，可能为空字符串</p><p>枚举值：</p><ul><li>High： 存在已生效的风险命中项（此时 RiskDetailList 非空）</li><li>Low： 检查已完成，且确认无命中</li><li>&quot;&quot;（空字符串）    ： 未识别：本次没有任何一项检查能给出结论，或检查未全部完成。既不代表有风险，也不代表安全</li></ul>
                     * @param _riskLevel <p>附加风险等级，可能为空字符串</p><p>枚举值：</p><ul><li>High： 存在已生效的风险命中项（此时 RiskDetailList 非空）</li><li>Low： 检查已完成，且确认无命中</li><li>&quot;&quot;（空字符串）    ： 未识别：本次没有任何一项检查能给出结论，或检查未全部完成。既不代表有风险，也不代表安全</li></ul>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>命中的风险项列表，未命中时为空数组 []</p>
                     * @return BlackListResult <p>命中的风险项列表，未命中时为空数组 []</p>
                     * 
                     */
                    std::vector<BlackListItem> GetBlackListResult() const;

                    /**
                     * 设置<p>命中的风险项列表，未命中时为空数组 []</p>
                     * @param _blackListResult <p>命中的风险项列表，未命中时为空数组 []</p>
                     * 
                     */
                    void SetBlackListResult(const std::vector<BlackListItem>& _blackListResult);

                    /**
                     * 判断参数 BlackListResult 是否已赋值
                     * @return BlackListResult 是否已赋值
                     * 
                     */
                    bool BlackListResultHasBeenSet() const;

                    /**
                     * 获取<p>人脸黑名单命中明细，未命中时为空数组 []</p>
                     * @return RiskDetailList <p>人脸黑名单命中明细，未命中时为空数组 []</p>
                     * 
                     */
                    std::vector<RiskDetailItem> GetRiskDetailList() const;

                    /**
                     * 设置<p>人脸黑名单命中明细，未命中时为空数组 []</p>
                     * @param _riskDetailList <p>人脸黑名单命中明细，未命中时为空数组 []</p>
                     * 
                     */
                    void SetRiskDetailList(const std::vector<RiskDetailItem>& _riskDetailList);

                    /**
                     * 判断参数 RiskDetailList 是否已赋值
                     * @return RiskDetailList 是否已赋值
                     * 
                     */
                    bool RiskDetailListHasBeenSet() const;

                private:

                    /**
                     * <p>本次附加检查的完成度，回答“这次结果可否采信”。</p><p>枚举值：</p><ul><li>Completed： 本次请求所需的检查均已给出结论（命中或通过）</li><li>Partial： 至少一项检查未能给出结论：依赖不可用、数据不足、入参不完整或非法。结果仅供参考，不代表安全</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>附加风险等级，可能为空字符串</p><p>枚举值：</p><ul><li>High： 存在已生效的风险命中项（此时 RiskDetailList 非空）</li><li>Low： 检查已完成，且确认无命中</li><li>&quot;&quot;（空字符串）    ： 未识别：本次没有任何一项检查能给出结论，或检查未全部完成。既不代表有风险，也不代表安全</li></ul>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>命中的风险项列表，未命中时为空数组 []</p>
                     */
                    std::vector<BlackListItem> m_blackListResult;
                    bool m_blackListResultHasBeenSet;

                    /**
                     * <p>人脸黑名单命中明细，未命中时为空数组 []</p>
                     */
                    std::vector<RiskDetailItem> m_riskDetailList;
                    bool m_riskDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKRESULT_H_
