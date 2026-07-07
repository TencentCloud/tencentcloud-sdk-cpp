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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELREWRITEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELREWRITEREQUEST_H_

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
                * DescribeModelRewrite请求参数结构体
                */
                class DescribeModelRewriteRequest : public AbstractModel
                {
                public:
                    DescribeModelRewriteRequest();
                    ~DescribeModelRewriteRequest() = default;
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
                     * 获取<p>选填，按源模型名精确过滤（大小写敏感）。</p><p>长度 1-255 字符；不传则返回该实例的全部重写规则；命中至多 1 条；未命中返回空列表（不报错）。</p>
                     * @return SourceModel <p>选填，按源模型名精确过滤（大小写敏感）。</p><p>长度 1-255 字符；不传则返回该实例的全部重写规则；命中至多 1 条；未命中返回空列表（不报错）。</p>
                     * 
                     */
                    std::string GetSourceModel() const;

                    /**
                     * 设置<p>选填，按源模型名精确过滤（大小写敏感）。</p><p>长度 1-255 字符；不传则返回该实例的全部重写规则；命中至多 1 条；未命中返回空列表（不报错）。</p>
                     * @param _sourceModel <p>选填，按源模型名精确过滤（大小写敏感）。</p><p>长度 1-255 字符；不传则返回该实例的全部重写规则；命中至多 1 条；未命中返回空列表（不报错）。</p>
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
                     * <p>选填，按源模型名精确过滤（大小写敏感）。</p><p>长度 1-255 字符；不传则返回该实例的全部重写规则；命中至多 1 条；未命中返回空列表（不报错）。</p>
                     */
                    std::string m_sourceModel;
                    bool m_sourceModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELREWRITEREQUEST_H_
