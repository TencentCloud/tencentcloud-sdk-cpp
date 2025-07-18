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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREVIEWTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREVIEWTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateReviewTemplate请求参数结构体
                */
                class CreateReviewTemplateRequest : public AbstractModel
                {
                public:
                    CreateReviewTemplateRequest();
                    ~CreateReviewTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的违规标签列表，可选值为：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Ad：广告；</li>
<li>Moan：娇喘。</li>
                     * @return Labels 需要返回的违规标签列表，可选值为：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Ad：广告；</li>
<li>Moan：娇喘。</li>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置需要返回的违规标签列表，可选值为：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Ad：广告；</li>
<li>Moan：娇喘。</li>
                     * @param _labels 需要返回的违规标签列表，可选值为：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Ad：广告；</li>
<li>Moan：娇喘。</li>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取审核模板名称，长度限制：64 个字符。
                     * @return Name 审核模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置审核模板名称，长度限制：64 个字符。
                     * @param _name 审核模板名称，长度限制：64 个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取审核模板描述信息，长度限制：256 个字符。
                     * @return Comment 审核模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置审核模板描述信息，长度限制：256 个字符。
                     * @param _comment 审核模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 需要返回的违规标签列表，可选值为：
<li>Porn：色情；</li>
<li>Terror：暴力；</li>
<li>Polity：不适宜的信息；</li>
<li>Illegal：违法；</li>
<li>Abuse：谩骂；</li>
<li>Ad：广告；</li>
<li>Moan：娇喘。</li>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 审核模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 审核模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREVIEWTEMPLATEREQUEST_H_
