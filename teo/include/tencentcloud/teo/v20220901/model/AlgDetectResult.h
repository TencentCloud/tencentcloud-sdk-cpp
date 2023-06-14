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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRESULT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot主动特征识别校验结果。
                */
                class AlgDetectResult : public AbstractModel
                {
                public:
                    AlgDetectResult();
                    ~AlgDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取校验结果，取值有：
<li>invalid：不合法Cookie；</li>
<li>cookie_empty：末携带Cookie或Cookie己过期；</li>
<li>js_empty：客户端末启用JS（末完成检测）；</li>
<li>low：会话速率和周期特征校验低风险；</li>
<li>middle：会话速率和周期特征校验中风险；</li>
<li>high：会话速率和周期特征校验高风险；</li>
<li>timeout：检测超时时长；</li>
<li>not_browser：不合法浏览器；</li>
<li>is_bot：Bot客户端。</li>
                     * @return Result 校验结果，取值有：
<li>invalid：不合法Cookie；</li>
<li>cookie_empty：末携带Cookie或Cookie己过期；</li>
<li>js_empty：客户端末启用JS（末完成检测）；</li>
<li>low：会话速率和周期特征校验低风险；</li>
<li>middle：会话速率和周期特征校验中风险；</li>
<li>high：会话速率和周期特征校验高风险；</li>
<li>timeout：检测超时时长；</li>
<li>not_browser：不合法浏览器；</li>
<li>is_bot：Bot客户端。</li>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置校验结果，取值有：
<li>invalid：不合法Cookie；</li>
<li>cookie_empty：末携带Cookie或Cookie己过期；</li>
<li>js_empty：客户端末启用JS（末完成检测）；</li>
<li>low：会话速率和周期特征校验低风险；</li>
<li>middle：会话速率和周期特征校验中风险；</li>
<li>high：会话速率和周期特征校验高风险；</li>
<li>timeout：检测超时时长；</li>
<li>not_browser：不合法浏览器；</li>
<li>is_bot：Bot客户端。</li>
                     * @param _result 校验结果，取值有：
<li>invalid：不合法Cookie；</li>
<li>cookie_empty：末携带Cookie或Cookie己过期；</li>
<li>js_empty：客户端末启用JS（末完成检测）；</li>
<li>low：会话速率和周期特征校验低风险；</li>
<li>middle：会话速率和周期特征校验中风险；</li>
<li>high：会话速率和周期特征校验高风险；</li>
<li>timeout：检测超时时长；</li>
<li>not_browser：不合法浏览器；</li>
<li>is_bot：Bot客户端。</li>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取处罚动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>silence：静默；</li>
<li>shortdelay：（短时间）等待后响应；</li>
<li>longdelay：（长时间）等待后响应。</li>
                     * @return Action 处罚动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>silence：静默；</li>
<li>shortdelay：（短时间）等待后响应；</li>
<li>longdelay：（长时间）等待后响应。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处罚动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>silence：静默；</li>
<li>shortdelay：（短时间）等待后响应；</li>
<li>longdelay：（长时间）等待后响应。</li>
                     * @param _action 处罚动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>silence：静默；</li>
<li>shortdelay：（短时间）等待后响应；</li>
<li>longdelay：（长时间）等待后响应。</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 校验结果，取值有：
<li>invalid：不合法Cookie；</li>
<li>cookie_empty：末携带Cookie或Cookie己过期；</li>
<li>js_empty：客户端末启用JS（末完成检测）；</li>
<li>low：会话速率和周期特征校验低风险；</li>
<li>middle：会话速率和周期特征校验中风险；</li>
<li>high：会话速率和周期特征校验高风险；</li>
<li>timeout：检测超时时长；</li>
<li>not_browser：不合法浏览器；</li>
<li>is_bot：Bot客户端。</li>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 处罚动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>silence：静默；</li>
<li>shortdelay：（短时间）等待后响应；</li>
<li>longdelay：（长时间）等待后响应。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTRESULT_H_
