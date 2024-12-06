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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_PUTEVALUATIONSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_PUTEVALUATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Evaluation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * PutEvaluations请求参数结构体
                */
                class PutEvaluationsRequest : public AbstractModel
                {
                public:
                    PutEvaluationsRequest();
                    ~PutEvaluationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回调令牌。从自定义规则所选的scf云函数入参中取参数ResultToken值
<a href="https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E" target="_blank">云函数入参说明</a>
                     * @return ResultToken 回调令牌。从自定义规则所选的scf云函数入参中取参数ResultToken值
<a href="https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E" target="_blank">云函数入参说明</a>
                     * 
                     */
                    std::string GetResultToken() const;

                    /**
                     * 设置回调令牌。从自定义规则所选的scf云函数入参中取参数ResultToken值
<a href="https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E" target="_blank">云函数入参说明</a>
                     * @param _resultToken 回调令牌。从自定义规则所选的scf云函数入参中取参数ResultToken值
<a href="https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E" target="_blank">云函数入参说明</a>
                     * 
                     */
                    void SetResultToken(const std::string& _resultToken);

                    /**
                     * 判断参数 ResultToken 是否已赋值
                     * @return ResultToken 是否已赋值
                     * 
                     */
                    bool ResultTokenHasBeenSet() const;

                    /**
                     * 获取自定义规则评估结果信息。
                     * @return Evaluations 自定义规则评估结果信息。
                     * 
                     */
                    std::vector<Evaluation> GetEvaluations() const;

                    /**
                     * 设置自定义规则评估结果信息。
                     * @param _evaluations 自定义规则评估结果信息。
                     * 
                     */
                    void SetEvaluations(const std::vector<Evaluation>& _evaluations);

                    /**
                     * 判断参数 Evaluations 是否已赋值
                     * @return Evaluations 是否已赋值
                     * 
                     */
                    bool EvaluationsHasBeenSet() const;

                private:

                    /**
                     * 回调令牌。从自定义规则所选的scf云函数入参中取参数ResultToken值
<a href="https://cloud.tencent.com/document/product/583/9210#.E5.87.BD.E6.95.B0.E5.85.A5.E5.8F.82.3Ca-id.3D.22input.22.3E.3C.2Fa.3E" target="_blank">云函数入参说明</a>
                     */
                    std::string m_resultToken;
                    bool m_resultTokenHasBeenSet;

                    /**
                     * 自定义规则评估结果信息。
                     */
                    std::vector<Evaluation> m_evaluations;
                    bool m_evaluationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_PUTEVALUATIONSREQUEST_H_
