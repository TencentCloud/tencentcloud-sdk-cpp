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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REMOVEMODELREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REMOVEMODELREWRITEREQUEST_H_

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
                * RemoveModelRewrite请求参数结构体
                */
                class RemoveModelRewriteRequest : public AbstractModel
                {
                public:
                    RemoveModelRewriteRequest();
                    ~RemoveModelRewriteRequest() = default;
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
                     * 获取<p>要删除的源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示删除兜底规则。</p><p>当指定的 SourceModel 当前不存在重写规则时，请求幂等成功。</p>
                     * @return SourceModel <p>要删除的源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示删除兜底规则。</p><p>当指定的 SourceModel 当前不存在重写规则时，请求幂等成功。</p>
                     * 
                     */
                    std::string GetSourceModel() const;

                    /**
                     * 设置<p>要删除的源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示删除兜底规则。</p><p>当指定的 SourceModel 当前不存在重写规则时，请求幂等成功。</p>
                     * @param _sourceModel <p>要删除的源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示删除兜底规则。</p><p>当指定的 SourceModel 当前不存在重写规则时，请求幂等成功。</p>
                     * 
                     */
                    void SetSourceModel(const std::string& _sourceModel);

                    /**
                     * 判断参数 SourceModel 是否已赋值
                     * @return SourceModel 是否已赋值
                     * 
                     */
                    bool SourceModelHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例 ID。</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>要删除的源模型名（重写规则的 key）。</p><p>长度 1-255 字符；支持特殊值 <code>default</code> 表示删除兜底规则。</p><p>当指定的 SourceModel 当前不存在重写规则时，请求幂等成功。</p>
                     */
                    std::string m_sourceModel;
                    bool m_sourceModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REMOVEMODELREWRITEREQUEST_H_
