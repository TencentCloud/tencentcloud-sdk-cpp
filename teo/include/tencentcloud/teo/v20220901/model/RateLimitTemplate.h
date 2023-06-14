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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RateLimitTemplateDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 速率限制模板
                */
                class RateLimitTemplate : public AbstractModel
                {
                public:
                    RateLimitTemplate();
                    ~RateLimitTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板等级名称，取值有：
<li>sup_loose：超级宽松；</li>
<li>loose：宽松；</li>
<li>emergency：紧急；</li>
<li>normal：适中；</li>
<li>strict：严格；</li>
<li>close：关闭，仅精准速率限制生效。</li>
                     * @return Mode 模板等级名称，取值有：
<li>sup_loose：超级宽松；</li>
<li>loose：宽松；</li>
<li>emergency：紧急；</li>
<li>normal：适中；</li>
<li>strict：严格；</li>
<li>close：关闭，仅精准速率限制生效。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模板等级名称，取值有：
<li>sup_loose：超级宽松；</li>
<li>loose：宽松；</li>
<li>emergency：紧急；</li>
<li>normal：适中；</li>
<li>strict：严格；</li>
<li>close：关闭，仅精准速率限制生效。</li>
                     * @param _mode 模板等级名称，取值有：
<li>sup_loose：超级宽松；</li>
<li>loose：宽松；</li>
<li>emergency：紧急；</li>
<li>normal：适中；</li>
<li>strict：严格；</li>
<li>close：关闭，仅精准速率限制生效。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取模板处置方式，取值有：
<li>alg：JavaScript挑战；</li>
<li>monitor：观察。</li>不填写默认取alg。
                     * @return Action 模板处置方式，取值有：
<li>alg：JavaScript挑战；</li>
<li>monitor：观察。</li>不填写默认取alg。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置模板处置方式，取值有：
<li>alg：JavaScript挑战；</li>
<li>monitor：观察。</li>不填写默认取alg。
                     * @param _action 模板处置方式，取值有：
<li>alg：JavaScript挑战；</li>
<li>monitor：观察。</li>不填写默认取alg。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取模板值详情。仅出参返回。
                     * @return RateLimitTemplateDetail 模板值详情。仅出参返回。
                     * 
                     */
                    RateLimitTemplateDetail GetRateLimitTemplateDetail() const;

                    /**
                     * 设置模板值详情。仅出参返回。
                     * @param _rateLimitTemplateDetail 模板值详情。仅出参返回。
                     * 
                     */
                    void SetRateLimitTemplateDetail(const RateLimitTemplateDetail& _rateLimitTemplateDetail);

                    /**
                     * 判断参数 RateLimitTemplateDetail 是否已赋值
                     * @return RateLimitTemplateDetail 是否已赋值
                     * 
                     */
                    bool RateLimitTemplateDetailHasBeenSet() const;

                private:

                    /**
                     * 模板等级名称，取值有：
<li>sup_loose：超级宽松；</li>
<li>loose：宽松；</li>
<li>emergency：紧急；</li>
<li>normal：适中；</li>
<li>strict：严格；</li>
<li>close：关闭，仅精准速率限制生效。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 模板处置方式，取值有：
<li>alg：JavaScript挑战；</li>
<li>monitor：观察。</li>不填写默认取alg。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 模板值详情。仅出参返回。
                     */
                    RateLimitTemplateDetail m_rateLimitTemplateDetail;
                    bool m_rateLimitTemplateDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITTEMPLATE_H_
