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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOKENLENGTHROUTERULE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOKENLENGTHROUTERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLLMModelServiceSubRoute.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关Token长度路由规则
                */
                class AIGWTokenLengthRouteRule : public AbstractModel
                {
                public:
                    AIGWTokenLengthRouteRule();
                    ~AIGWTokenLengthRouteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>token 长度下界，闭区间；0 合法</p>
                     * @return MinTokenLength <p>token 长度下界，闭区间；0 合法</p>
                     * 
                     */
                    int64_t GetMinTokenLength() const;

                    /**
                     * 设置<p>token 长度下界，闭区间；0 合法</p>
                     * @param _minTokenLength <p>token 长度下界，闭区间；0 合法</p>
                     * 
                     */
                    void SetMinTokenLength(const int64_t& _minTokenLength);

                    /**
                     * 判断参数 MinTokenLength 是否已赋值
                     * @return MinTokenLength 是否已赋值
                     * 
                     */
                    bool MinTokenLengthHasBeenSet() const;

                    /**
                     * 获取<p>token 长度上界，闭区间</p>
                     * @return MaxTokenLength <p>token 长度上界，闭区间</p>
                     * 
                     */
                    int64_t GetMaxTokenLength() const;

                    /**
                     * 设置<p>token 长度上界，闭区间</p>
                     * @param _maxTokenLength <p>token 长度上界，闭区间</p>
                     * 
                     */
                    void SetMaxTokenLength(const int64_t& _maxTokenLength);

                    /**
                     * 判断参数 MaxTokenLength 是否已赋值
                     * @return MaxTokenLength 是否已赋值
                     * 
                     */
                    bool MaxTokenLengthHasBeenSet() const;

                    /**
                     * 获取<p>命中该分段后执行的二级路由</p>
                     * @return Target <p>命中该分段后执行的二级路由</p>
                     * 
                     */
                    AIGWLLMModelServiceSubRoute GetTarget() const;

                    /**
                     * 设置<p>命中该分段后执行的二级路由</p>
                     * @param _target <p>命中该分段后执行的二级路由</p>
                     * 
                     */
                    void SetTarget(const AIGWLLMModelServiceSubRoute& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * <p>token 长度下界，闭区间；0 合法</p>
                     */
                    int64_t m_minTokenLength;
                    bool m_minTokenLengthHasBeenSet;

                    /**
                     * <p>token 长度上界，闭区间</p>
                     */
                    int64_t m_maxTokenLength;
                    bool m_maxTokenLengthHasBeenSet;

                    /**
                     * <p>命中该分段后执行的二级路由</p>
                     */
                    AIGWLLMModelServiceSubRoute m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOKENLENGTHROUTERULE_H_
