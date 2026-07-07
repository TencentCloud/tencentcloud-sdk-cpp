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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ADDMODELREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ADDMODELREWRITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * AddModelRewrite请求参数结构体
                */
                class AddModelRewriteRequest : public AbstractModel
                {
                public:
                    AddModelRewriteRequest();
                    ~AddModelRewriteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例 ID。</p>
                     * @return ModelRouterId <p>模型路由实例 ID。</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例 ID。</p>
                     * @param _modelRouterId <p>模型路由实例 ID。</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示兜底规则（命中所有未显式列出的源模型）。</p><p>不允许使用 <code>IntentRouter/</code> 前缀（大小写不敏感），即 IntentRouter 不能作为 source。</p>
                     * @return SourceModel <p>源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示兜底规则（命中所有未显式列出的源模型）。</p><p>不允许使用 <code>IntentRouter/</code> 前缀（大小写不敏感），即 IntentRouter 不能作为 source。</p>
                     * 
                     */
                    std::string GetSourceModel() const;

                    /**
                     * 设置<p>源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示兜底规则（命中所有未显式列出的源模型）。</p><p>不允许使用 <code>IntentRouter/</code> 前缀（大小写不敏感），即 IntentRouter 不能作为 source。</p>
                     * @param _sourceModel <p>源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示兜底规则（命中所有未显式列出的源模型）。</p><p>不允许使用 <code>IntentRouter/</code> 前缀（大小写不敏感），即 IntentRouter 不能作为 source。</p>
                     * 
                     */
                    void SetSourceModel(const std::string& _sourceModel);

                    /**
                     * 判断参数 SourceModel 是否已赋值
                     * @return SourceModel 是否已赋值
                     * 
                     */
                    bool SourceModelHasBeenSet() const;

                    /**
                     * 获取<p>目标模型名（重写规则的 value）。</p><p>长度 1-255 字符；必须是已关联到该模型路由实例的模型（含 IntentRouter/* 也需先通过 AssociateModels 关联）。</p><p>不允许使用 <code>default</code>；不允许与 SourceModel 相同（大小写不敏感）。</p>
                     * @return TargetModel <p>目标模型名（重写规则的 value）。</p><p>长度 1-255 字符；必须是已关联到该模型路由实例的模型（含 IntentRouter/* 也需先通过 AssociateModels 关联）。</p><p>不允许使用 <code>default</code>；不允许与 SourceModel 相同（大小写不敏感）。</p>
                     * 
                     */
                    std::string GetTargetModel() const;

                    /**
                     * 设置<p>目标模型名（重写规则的 value）。</p><p>长度 1-255 字符；必须是已关联到该模型路由实例的模型（含 IntentRouter/* 也需先通过 AssociateModels 关联）。</p><p>不允许使用 <code>default</code>；不允许与 SourceModel 相同（大小写不敏感）。</p>
                     * @param _targetModel <p>目标模型名（重写规则的 value）。</p><p>长度 1-255 字符；必须是已关联到该模型路由实例的模型（含 IntentRouter/* 也需先通过 AssociateModels 关联）。</p><p>不允许使用 <code>default</code>；不允许与 SourceModel 相同（大小写不敏感）。</p>
                     * 
                     */
                    void SetTargetModel(const std::string& _targetModel);

                    /**
                     * 判断参数 TargetModel 是否已赋值
                     * @return TargetModel 是否已赋值
                     * 
                     */
                    bool TargetModelHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例 ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示兜底规则（命中所有未显式列出的源模型）。</p><p>不允许使用 <code>IntentRouter/</code> 前缀（大小写不敏感），即 IntentRouter 不能作为 source。</p>
                     */
                    std::string m_sourceModel;
                    bool m_sourceModelHasBeenSet;

                    /**
                     * <p>目标模型名（重写规则的 value）。</p><p>长度 1-255 字符；必须是已关联到该模型路由实例的模型（含 IntentRouter/* 也需先通过 AssociateModels 关联）。</p><p>不允许使用 <code>default</code>；不允许与 SourceModel 相同（大小写不敏感）。</p>
                     */
                    std::string m_targetModel;
                    bool m_targetModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ADDMODELREWRITEREQUEST_H_
