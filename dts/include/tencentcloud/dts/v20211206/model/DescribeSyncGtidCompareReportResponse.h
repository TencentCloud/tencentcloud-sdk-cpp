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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCGTIDCOMPAREREPORTRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCGTIDCOMPAREREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DifferenceDetails.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSyncGtidCompareReport返回参数结构体
                */
                class DescribeSyncGtidCompareReportResponse : public AbstractModel
                {
                public:
                    DescribeSyncGtidCompareReportResponse();
                    ~DescribeSyncGtidCompareReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取校验结论
                     * @return Conclusion 校验结论
                     * 
                     */
                    std::string GetConclusion() const;

                    /**
                     * 判断参数 Conclusion 是否已赋值
                     * @return Conclusion 是否已赋值
                     * 
                     */
                    bool ConclusionHasBeenSet() const;

                    /**
                     * 获取校验状态
                     * @return Status 校验状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取校验类型
                     * @return Type 校验类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取不一致详情
                     * @return Detail 不一致详情
                     * 
                     */
                    std::vector<DifferenceDetails> GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 校验结论
                     */
                    std::string m_conclusion;
                    bool m_conclusionHasBeenSet;

                    /**
                     * 校验状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 校验类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 不一致详情
                     */
                    std::vector<DifferenceDetails> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCGTIDCOMPAREREPORTRESPONSE_H_
