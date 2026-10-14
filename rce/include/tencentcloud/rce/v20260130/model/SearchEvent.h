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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_SEARCHEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_SEARCHEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 查询事件详情（营销保护）
                */
                class SearchEvent : public AbstractModel
                {
                public:
                    SearchEvent();
                    ~SearchEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>查询场景。例如：查询航班、查询库存等。</p>
                     * @return SearchScene <p>查询场景。例如：查询航班、查询库存等。</p>
                     * 
                     */
                    std::string GetSearchScene() const;

                    /**
                     * 设置<p>查询场景。例如：查询航班、查询库存等。</p>
                     * @param _searchScene <p>查询场景。例如：查询航班、查询库存等。</p>
                     * 
                     */
                    void SetSearchScene(const std::string& _searchScene);

                    /**
                     * 判断参数 SearchScene 是否已赋值
                     * @return SearchScene 是否已赋值
                     * 
                     */
                    bool SearchSceneHasBeenSet() const;

                    /**
                     * 获取<p>查询参数。查询时输入的参数。</p>
                     * @return SearchParam <p>查询参数。查询时输入的参数。</p>
                     * 
                     */
                    std::string GetSearchParam() const;

                    /**
                     * 设置<p>查询参数。查询时输入的参数。</p>
                     * @param _searchParam <p>查询参数。查询时输入的参数。</p>
                     * 
                     */
                    void SetSearchParam(const std::string& _searchParam);

                    /**
                     * 判断参数 SearchParam 是否已赋值
                     * @return SearchParam 是否已赋值
                     * 
                     */
                    bool SearchParamHasBeenSet() const;

                    /**
                     * 获取<p>上一个网页URL</p>
                     * @return ReferPageUrl <p>上一个网页URL</p>
                     * 
                     */
                    std::string GetReferPageUrl() const;

                    /**
                     * 设置<p>上一个网页URL</p>
                     * @param _referPageUrl <p>上一个网页URL</p>
                     * 
                     */
                    void SetReferPageUrl(const std::string& _referPageUrl);

                    /**
                     * 判断参数 ReferPageUrl 是否已赋值
                     * @return ReferPageUrl 是否已赋值
                     * 
                     */
                    bool ReferPageUrlHasBeenSet() const;

                    /**
                     * 获取<p>游客账号ID</p>
                     * @return GuestId <p>游客账号ID</p>
                     * 
                     */
                    std::string GetGuestId() const;

                    /**
                     * 设置<p>游客账号ID</p>
                     * @param _guestId <p>游客账号ID</p>
                     * 
                     */
                    void SetGuestId(const std::string& _guestId);

                    /**
                     * 判断参数 GuestId 是否已赋值
                     * @return GuestId 是否已赋值
                     * 
                     */
                    bool GuestIdHasBeenSet() const;

                    /**
                     * 获取<p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>查询场景。例如：查询航班、查询库存等。</p>
                     */
                    std::string m_searchScene;
                    bool m_searchSceneHasBeenSet;

                    /**
                     * <p>查询参数。查询时输入的参数。</p>
                     */
                    std::string m_searchParam;
                    bool m_searchParamHasBeenSet;

                    /**
                     * <p>上一个网页URL</p>
                     */
                    std::string m_referPageUrl;
                    bool m_referPageUrlHasBeenSet;

                    /**
                     * <p>游客账号ID</p>
                     */
                    std::string m_guestId;
                    bool m_guestIdHasBeenSet;

                    /**
                     * <p>与RCE-PRO约定的定制化信息。为K:V 格式的对象数组。<br>示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_SEARCHEVENT_H_
