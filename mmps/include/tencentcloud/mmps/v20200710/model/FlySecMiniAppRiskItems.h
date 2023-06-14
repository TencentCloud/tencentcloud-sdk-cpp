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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_FLYSECMINIAPPRISKITEMS_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_FLYSECMINIAPPRISKITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * 翼扬诊断小程序的诊断报告风险数据
                */
                class FlySecMiniAppRiskItems : public AbstractModel
                {
                public:
                    FlySecMiniAppRiskItems();
                    ~FlySecMiniAppRiskItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代码防护(基础诊断)
                     * @return RiskItem1Score 代码防护(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem1Score() const;

                    /**
                     * 设置代码防护(基础诊断)
                     * @param _riskItem1Score 代码防护(基础诊断)
                     * 
                     */
                    void SetRiskItem1Score(const int64_t& _riskItem1Score);

                    /**
                     * 判断参数 RiskItem1Score 是否已赋值
                     * @return RiskItem1Score 是否已赋值
                     * 
                     */
                    bool RiskItem1ScoreHasBeenSet() const;

                    /**
                     * 获取开发测试信息泄露(基础诊断)
                     * @return RiskItem2Score 开发测试信息泄露(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem2Score() const;

                    /**
                     * 设置开发测试信息泄露(基础诊断)
                     * @param _riskItem2Score 开发测试信息泄露(基础诊断)
                     * 
                     */
                    void SetRiskItem2Score(const int64_t& _riskItem2Score);

                    /**
                     * 判断参数 RiskItem2Score 是否已赋值
                     * @return RiskItem2Score 是否已赋值
                     * 
                     */
                    bool RiskItem2ScoreHasBeenSet() const;

                    /**
                     * 获取编码规范(基础诊断)
                     * @return RiskItem3Score 编码规范(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem3Score() const;

                    /**
                     * 设置编码规范(基础诊断)
                     * @param _riskItem3Score 编码规范(基础诊断)
                     * 
                     */
                    void SetRiskItem3Score(const int64_t& _riskItem3Score);

                    /**
                     * 判断参数 RiskItem3Score 是否已赋值
                     * @return RiskItem3Score 是否已赋值
                     * 
                     */
                    bool RiskItem3ScoreHasBeenSet() const;

                    /**
                     * 获取配置风险(基础诊断)
                     * @return RiskItem4Score 配置风险(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem4Score() const;

                    /**
                     * 设置配置风险(基础诊断)
                     * @param _riskItem4Score 配置风险(基础诊断)
                     * 
                     */
                    void SetRiskItem4Score(const int64_t& _riskItem4Score);

                    /**
                     * 判断参数 RiskItem4Score 是否已赋值
                     * @return RiskItem4Score 是否已赋值
                     * 
                     */
                    bool RiskItem4ScoreHasBeenSet() const;

                    /**
                     * 获取账号安全(基础诊断)
                     * @return RiskItem5Score 账号安全(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem5Score() const;

                    /**
                     * 设置账号安全(基础诊断)
                     * @param _riskItem5Score 账号安全(基础诊断)
                     * 
                     */
                    void SetRiskItem5Score(const int64_t& _riskItem5Score);

                    /**
                     * 判断参数 RiskItem5Score 是否已赋值
                     * @return RiskItem5Score 是否已赋值
                     * 
                     */
                    bool RiskItem5ScoreHasBeenSet() const;

                    /**
                     * 获取用户信息安全(基础诊断)
                     * @return RiskItem6Score 用户信息安全(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem6Score() const;

                    /**
                     * 设置用户信息安全(基础诊断)
                     * @param _riskItem6Score 用户信息安全(基础诊断)
                     * 
                     */
                    void SetRiskItem6Score(const int64_t& _riskItem6Score);

                    /**
                     * 判断参数 RiskItem6Score 是否已赋值
                     * @return RiskItem6Score 是否已赋值
                     * 
                     */
                    bool RiskItem6ScoreHasBeenSet() const;

                    /**
                     * 获取内部信息泄露(基础诊断)
                     * @return RiskItem7Score 内部信息泄露(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem7Score() const;

                    /**
                     * 设置内部信息泄露(基础诊断)
                     * @param _riskItem7Score 内部信息泄露(基础诊断)
                     * 
                     */
                    void SetRiskItem7Score(const int64_t& _riskItem7Score);

                    /**
                     * 判断参数 RiskItem7Score 是否已赋值
                     * @return RiskItem7Score 是否已赋值
                     * 
                     */
                    bool RiskItem7ScoreHasBeenSet() const;

                    /**
                     * 获取其他安全(基础诊断)
                     * @return RiskItem8Score 其他安全(基础诊断)
                     * 
                     */
                    int64_t GetRiskItem8Score() const;

                    /**
                     * 设置其他安全(基础诊断)
                     * @param _riskItem8Score 其他安全(基础诊断)
                     * 
                     */
                    void SetRiskItem8Score(const int64_t& _riskItem8Score);

                    /**
                     * 判断参数 RiskItem8Score 是否已赋值
                     * @return RiskItem8Score 是否已赋值
                     * 
                     */
                    bool RiskItem8ScoreHasBeenSet() const;

                private:

                    /**
                     * 代码防护(基础诊断)
                     */
                    int64_t m_riskItem1Score;
                    bool m_riskItem1ScoreHasBeenSet;

                    /**
                     * 开发测试信息泄露(基础诊断)
                     */
                    int64_t m_riskItem2Score;
                    bool m_riskItem2ScoreHasBeenSet;

                    /**
                     * 编码规范(基础诊断)
                     */
                    int64_t m_riskItem3Score;
                    bool m_riskItem3ScoreHasBeenSet;

                    /**
                     * 配置风险(基础诊断)
                     */
                    int64_t m_riskItem4Score;
                    bool m_riskItem4ScoreHasBeenSet;

                    /**
                     * 账号安全(基础诊断)
                     */
                    int64_t m_riskItem5Score;
                    bool m_riskItem5ScoreHasBeenSet;

                    /**
                     * 用户信息安全(基础诊断)
                     */
                    int64_t m_riskItem6Score;
                    bool m_riskItem6ScoreHasBeenSet;

                    /**
                     * 内部信息泄露(基础诊断)
                     */
                    int64_t m_riskItem7Score;
                    bool m_riskItem7ScoreHasBeenSet;

                    /**
                     * 其他安全(基础诊断)
                     */
                    int64_t m_riskItem8Score;
                    bool m_riskItem8ScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_FLYSECMINIAPPRISKITEMS_H_
