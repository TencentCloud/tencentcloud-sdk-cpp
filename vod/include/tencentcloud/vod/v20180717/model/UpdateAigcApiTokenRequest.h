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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_

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
                * UpdateAigcApiToken请求参数结构体
                */
                class UpdateAigcApiTokenRequest : public AbstractModel
                {
                public:
                    UpdateAigcApiTokenRequest();
                    ~UpdateAigcApiTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>要更新Api Key</p>
                     * @return ApiToken <p>要更新Api Key</p>
                     * 
                     */
                    std::string GetApiToken() const;

                    /**
                     * 设置<p>要更新Api Key</p>
                     * @param _apiToken <p>要更新Api Key</p>
                     * 
                     */
                    void SetApiToken(const std::string& _apiToken);

                    /**
                     * 判断参数 ApiToken 是否已赋值
                     * @return ApiToken 是否已赋值
                     * 
                     */
                    bool ApiTokenHasBeenSet() const;

                    /**
                     * 获取<p>Merge（默认，对 ExtInfo JSON 按顶层 key 合并）、Overwrite（直接覆盖）</p>
                     * @return ActionType <p>Merge（默认，对 ExtInfo JSON 按顶层 key 合并）、Overwrite（直接覆盖）</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>Merge（默认，对 ExtInfo JSON 按顶层 key 合并）、Overwrite（直接覆盖）</p>
                     * @param _actionType <p>Merge（默认，对 ExtInfo JSON 按顶层 key 合并）、Overwrite（直接覆盖）</p>
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>token 的扩展信息</p>
                     * @return ExtInfo <p>token 的扩展信息</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>token 的扩展信息</p>
                     * @param _extInfo <p>token 的扩展信息</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>要更新Api Key</p>
                     */
                    std::string m_apiToken;
                    bool m_apiTokenHasBeenSet;

                    /**
                     * <p>Merge（默认，对 ExtInfo JSON 按顶层 key 合并）、Overwrite（直接覆盖）</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>token 的扩展信息</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_UPDATEAIGCAPITOKENREQUEST_H_
