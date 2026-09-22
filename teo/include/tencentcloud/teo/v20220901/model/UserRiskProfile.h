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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_USERRISKPROFILE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_USERRISKPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 用户风险等级配置。风险分数范围为 0～100，分数越高表示风险越高。
                */
                class UserRiskProfile : public AbstractModel
                {
                public:
                    UserRiskProfile();
                    ~UserRiskProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>高风险请求的最低风险分数。分数大于等于该值时，判定为高风险。</p><p>取值范围：[2, 99]</p><p>默认值：50</p>
                     * @return HighRiskMinScore <p>高风险请求的最低风险分数。分数大于等于该值时，判定为高风险。</p><p>取值范围：[2, 99]</p><p>默认值：50</p>
                     * 
                     */
                    uint64_t GetHighRiskMinScore() const;

                    /**
                     * 设置<p>高风险请求的最低风险分数。分数大于等于该值时，判定为高风险。</p><p>取值范围：[2, 99]</p><p>默认值：50</p>
                     * @param _highRiskMinScore <p>高风险请求的最低风险分数。分数大于等于该值时，判定为高风险。</p><p>取值范围：[2, 99]</p><p>默认值：50</p>
                     * 
                     */
                    void SetHighRiskMinScore(const uint64_t& _highRiskMinScore);

                    /**
                     * 判断参数 HighRiskMinScore 是否已赋值
                     * @return HighRiskMinScore 是否已赋值
                     * 
                     */
                    bool HighRiskMinScoreHasBeenSet() const;

                    /**
                     * 获取<p>高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * @return HighRiskRequestAction <p>高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * 
                     */
                    SecurityAction GetHighRiskRequestAction() const;

                    /**
                     * 设置<p>高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * @param _highRiskRequestAction <p>高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * 
                     */
                    void SetHighRiskRequestAction(const SecurityAction& _highRiskRequestAction);

                    /**
                     * 判断参数 HighRiskRequestAction 是否已赋值
                     * @return HighRiskRequestAction 是否已赋值
                     * 
                     */
                    bool HighRiskRequestActionHasBeenSet() const;

                    /**
                     * 获取<p>中风险请求的最低风险分数。分数大于等于该值且小于 HighRiskMinScore 时，判定为中风险；低于该值时，判定为低风险。</p><p>取值范围：[1, 98]</p><p>默认值：15</p>
                     * @return MediumRiskMinScore <p>中风险请求的最低风险分数。分数大于等于该值且小于 HighRiskMinScore 时，判定为中风险；低于该值时，判定为低风险。</p><p>取值范围：[1, 98]</p><p>默认值：15</p>
                     * 
                     */
                    uint64_t GetMediumRiskMinScore() const;

                    /**
                     * 设置<p>中风险请求的最低风险分数。分数大于等于该值且小于 HighRiskMinScore 时，判定为中风险；低于该值时，判定为低风险。</p><p>取值范围：[1, 98]</p><p>默认值：15</p>
                     * @param _mediumRiskMinScore <p>中风险请求的最低风险分数。分数大于等于该值且小于 HighRiskMinScore 时，判定为中风险；低于该值时，判定为低风险。</p><p>取值范围：[1, 98]</p><p>默认值：15</p>
                     * 
                     */
                    void SetMediumRiskMinScore(const uint64_t& _mediumRiskMinScore);

                    /**
                     * 判断参数 MediumRiskMinScore 是否已赋值
                     * @return MediumRiskMinScore 是否已赋值
                     * 
                     */
                    bool MediumRiskMinScoreHasBeenSet() const;

                    /**
                     * 获取<p>中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * @return MediumRiskRequestAction <p>中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * 
                     */
                    SecurityAction GetMediumRiskRequestAction() const;

                    /**
                     * 设置<p>中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * @param _mediumRiskRequestAction <p>中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     * 
                     */
                    void SetMediumRiskRequestAction(const SecurityAction& _mediumRiskRequestAction);

                    /**
                     * 判断参数 MediumRiskRequestAction 是否已赋值
                     * @return MediumRiskRequestAction 是否已赋值
                     * 
                     */
                    bool MediumRiskRequestActionHasBeenSet() const;

                private:

                    /**
                     * <p>高风险请求的最低风险分数。分数大于等于该值时，判定为高风险。</p><p>取值范围：[2, 99]</p><p>默认值：50</p>
                     */
                    uint64_t m_highRiskMinScore;
                    bool m_highRiskMinScoreHasBeenSet;

                    /**
                     * <p>高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     */
                    SecurityAction m_highRiskRequestAction;
                    bool m_highRiskRequestActionHasBeenSet;

                    /**
                     * <p>中风险请求的最低风险分数。分数大于等于该值且小于 HighRiskMinScore 时，判定为中风险；低于该值时，判定为低风险。</p><p>取值范围：[1, 98]</p><p>默认值：15</p>
                     */
                    uint64_t m_mediumRiskMinScore;
                    bool m_mediumRiskMinScoreHasBeenSet;

                    /**
                     * <p>中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值：Monitor</p>
                     */
                    SecurityAction m_mediumRiskRequestAction;
                    bool m_mediumRiskRequestActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_USERRISKPROFILE_H_
