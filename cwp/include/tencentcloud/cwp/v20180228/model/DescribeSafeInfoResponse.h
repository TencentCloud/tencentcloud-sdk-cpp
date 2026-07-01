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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESAFEINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESAFEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSafeInfo返回参数结构体
                */
                class DescribeSafeInfoResponse : public AbstractModel
                {
                public:
                    DescribeSafeInfoResponse();
                    ~DescribeSafeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文本内容</p>
                     * @return Context <p>文本内容</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>超链接地址</p>
                     * @return Url <p>超链接地址</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>受影响机器数</p>
                     * @return EffectHostCount <p>受影响机器数</p>
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 判断参数 EffectHostCount 是否已赋值
                     * @return EffectHostCount 是否已赋值
                     * 
                     */
                    bool EffectHostCountHasBeenSet() const;

                    /**
                     * 获取<p>受影响事件名称</p>
                     * @return EventName <p>受影响事件名称</p>
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取<p>受影响事件类型 0 无 1 木马 2 漏洞 3基线</p>
                     * @return EventCategory <p>受影响事件类型 0 无 1 木马 2 漏洞 3基线</p>
                     * 
                     */
                    uint64_t GetEventCategory() const;

                    /**
                     * 判断参数 EventCategory 是否已赋值
                     * @return EventCategory 是否已赋值
                     * 
                     */
                    bool EventCategoryHasBeenSet() const;

                    /**
                     * 获取<p>是否展示通知</p>
                     * @return IsShow <p>是否展示通知</p>
                     * 
                     */
                    bool GetIsShow() const;

                    /**
                     * 判断参数 IsShow 是否已赋值
                     * @return IsShow 是否已赋值
                     * 
                     */
                    bool IsShowHasBeenSet() const;

                    /**
                     * 获取<p>Id值</p>
                     * @return Id <p>Id值</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * <p>文本内容</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>超链接地址</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>受影响机器数</p>
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                    /**
                     * <p>受影响事件名称</p>
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * <p>受影响事件类型 0 无 1 木马 2 漏洞 3基线</p>
                     */
                    uint64_t m_eventCategory;
                    bool m_eventCategoryHasBeenSet;

                    /**
                     * <p>是否展示通知</p>
                     */
                    bool m_isShow;
                    bool m_isShowHasBeenSet;

                    /**
                     * <p>Id值</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESAFEINFORESPONSE_H_
