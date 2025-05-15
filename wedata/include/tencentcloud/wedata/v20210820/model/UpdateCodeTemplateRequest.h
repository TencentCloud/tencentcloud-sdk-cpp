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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATECODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATECODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskExtDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateCodeTemplate请求参数结构体
                */
                class UpdateCodeTemplateRequest : public AbstractModel
                {
                public:
                    UpdateCodeTemplateRequest();
                    ~UpdateCodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取模版id
                     * @return CodeTemplateId 模版id
                     * 
                     */
                    std::string GetCodeTemplateId() const;

                    /**
                     * 设置模版id
                     * @param _codeTemplateId 模版id
                     * 
                     */
                    void SetCodeTemplateId(const std::string& _codeTemplateId);

                    /**
                     * 判断参数 CodeTemplateId 是否已赋值
                     * @return CodeTemplateId 是否已赋值
                     * 
                     */
                    bool CodeTemplateIdHasBeenSet() const;

                    /**
                     * 获取模版名	
                     * @return CodeTemplateName 模版名	
                     * 
                     */
                    std::string GetCodeTemplateName() const;

                    /**
                     * 设置模版名	
                     * @param _codeTemplateName 模版名	
                     * 
                     */
                    void SetCodeTemplateName(const std::string& _codeTemplateName);

                    /**
                     * 判断参数 CodeTemplateName 是否已赋值
                     * @return CodeTemplateName 是否已赋值
                     * 
                     */
                    bool CodeTemplateNameHasBeenSet() const;

                    /**
                     * 获取责任人列表
                     * @return InChargeId 责任人列表
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置责任人列表
                     * @param _inChargeId 责任人列表
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取责任人名称
                     * @return InCharge 责任人名称
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人名称
                     * @param _inCharge 责任人名称
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取扩展属性
                     * @return Ext 扩展属性
                     * 
                     */
                    TaskExtDsVO GetExt() const;

                    /**
                     * 设置扩展属性
                     * @param _ext 扩展属性
                     * 
                     */
                    void SetExt(const TaskExtDsVO& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取执行机ip
                     * @return BrokerIp 执行机ip
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置执行机ip
                     * @param _brokerIp 执行机ip
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取资源组id
                     * @return ResourceGroup 资源组id
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置资源组id
                     * @param _resourceGroup 资源组id
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取模版描述	
                     * @return CodeTemplateDesc 模版描述	
                     * 
                     */
                    std::string GetCodeTemplateDesc() const;

                    /**
                     * 设置模版描述	
                     * @param _codeTemplateDesc 模版描述	
                     * 
                     */
                    void SetCodeTemplateDesc(const std::string& _codeTemplateDesc);

                    /**
                     * 判断参数 CodeTemplateDesc 是否已赋值
                     * @return CodeTemplateDesc 是否已赋值
                     * 
                     */
                    bool CodeTemplateDescHasBeenSet() const;

                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取脚本是否发生变化
                     * @return ScriptChange 脚本是否发生变化
                     * 
                     */
                    bool GetScriptChange() const;

                    /**
                     * 设置脚本是否发生变化
                     * @param _scriptChange 脚本是否发生变化
                     * 
                     */
                    void SetScriptChange(const bool& _scriptChange);

                    /**
                     * 判断参数 ScriptChange 是否已赋值
                     * @return ScriptChange 是否已赋值
                     * 
                     */
                    bool ScriptChangeHasBeenSet() const;

                    /**
                     * 获取转Base64的代码内容
                     * @return Content 转Base64的代码内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置转Base64的代码内容
                     * @param _content 转Base64的代码内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模版id
                     */
                    std::string m_codeTemplateId;
                    bool m_codeTemplateIdHasBeenSet;

                    /**
                     * 模版名	
                     */
                    std::string m_codeTemplateName;
                    bool m_codeTemplateNameHasBeenSet;

                    /**
                     * 责任人列表
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * 责任人名称
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 扩展属性
                     */
                    TaskExtDsVO m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 执行机ip
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 模版描述	
                     */
                    std::string m_codeTemplateDesc;
                    bool m_codeTemplateDescHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 脚本是否发生变化
                     */
                    bool m_scriptChange;
                    bool m_scriptChangeHasBeenSet;

                    /**
                     * 转Base64的代码内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATECODETEMPLATEREQUEST_H_
