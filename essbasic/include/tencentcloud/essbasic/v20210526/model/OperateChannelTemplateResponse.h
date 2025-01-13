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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATERESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/AuthFailMessage.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * OperateChannelTemplate返回参数结构体
                */
                class OperateChannelTemplateResponse : public AbstractModel
                {
                public:
                    OperateChannelTemplateResponse();
                    ~OperateChannelTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取第三方应用平台的应用ID
                     * @return AppId 第三方应用平台的应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取合同模板ID
                     * @return TemplateId 合同模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取描述模板可见性更改的结果。
<ul>
<li>all-success: 全部成功</li>
<li>part-success: 部分成功,失败的会在FailMessageList中展示</li>
<li>fail:全部失败, 失败的会在FailMessageList中展示</li>
</ul>
                     * @return OperateResult 描述模板可见性更改的结果。
<ul>
<li>all-success: 全部成功</li>
<li>part-success: 部分成功,失败的会在FailMessageList中展示</li>
<li>fail:全部失败, 失败的会在FailMessageList中展示</li>
</ul>
                     * 
                     */
                    std::string GetOperateResult() const;

                    /**
                     * 判断参数 OperateResult 是否已赋值
                     * @return OperateResult 是否已赋值
                     * 
                     */
                    bool OperateResultHasBeenSet() const;

                    /**
                     * 获取模板可见范围:
**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业
                     * @return AuthTag 模板可见范围:
**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业
                     * 
                     */
                    std::string GetAuthTag() const;

                    /**
                     * 判断参数 AuthTag 是否已赋值
                     * @return AuthTag 是否已赋值
                     * 
                     */
                    bool AuthTagHasBeenSet() const;

                    /**
                     * 获取第三方平台子客企业标识列表
                     * @return ProxyOrganizationOpenIds 第三方平台子客企业标识列表
                     * 
                     */
                    std::vector<std::string> GetProxyOrganizationOpenIds() const;

                    /**
                     * 判断参数 ProxyOrganizationOpenIds 是否已赋值
                     * @return ProxyOrganizationOpenIds 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdsHasBeenSet() const;

                    /**
                     * 获取操作失败信息数组
                     * @return FailMessageList 操作失败信息数组
                     * 
                     */
                    std::vector<AuthFailMessage> GetFailMessageList() const;

                    /**
                     * 判断参数 FailMessageList 是否已赋值
                     * @return FailMessageList 是否已赋值
                     * 
                     */
                    bool FailMessageListHasBeenSet() const;

                private:

                    /**
                     * 第三方应用平台的应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 合同模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 描述模板可见性更改的结果。
<ul>
<li>all-success: 全部成功</li>
<li>part-success: 部分成功,失败的会在FailMessageList中展示</li>
<li>fail:全部失败, 失败的会在FailMessageList中展示</li>
</ul>
                     */
                    std::string m_operateResult;
                    bool m_operateResultHasBeenSet;

                    /**
                     * 模板可见范围:
**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业
                     */
                    std::string m_authTag;
                    bool m_authTagHasBeenSet;

                    /**
                     * 第三方平台子客企业标识列表
                     */
                    std::vector<std::string> m_proxyOrganizationOpenIds;
                    bool m_proxyOrganizationOpenIdsHasBeenSet;

                    /**
                     * 操作失败信息数组
                     */
                    std::vector<AuthFailMessage> m_failMessageList;
                    bool m_failMessageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATERESPONSE_H_
