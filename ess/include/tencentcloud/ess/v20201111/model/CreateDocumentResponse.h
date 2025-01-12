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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ApproverItem.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateDocument返回参数结构体
                */
                class CreateDocumentResponse : public AbstractModel
                {
                public:
                    CreateDocumentResponse();
                    ~CreateDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同流程的底层电子文档ID，为32位字符串。

注:
后续需用同样的FlowId再次调用[发起签署流程](https://qian.tencent.com/developers/companyApis/startFlows/StartFlow)，合同才能进入签署环节
                     * @return DocumentId 合同流程的底层电子文档ID，为32位字符串。

注:
后续需用同样的FlowId再次调用[发起签署流程](https://qian.tencent.com/developers/companyApis/startFlows/StartFlow)，合同才能进入签署环节
                     * 
                     */
                    std::string GetDocumentId() const;

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                    /**
                     * 获取合同预览链接URL。

注: `1.如果是预览模式(即NeedPreview设置为true)时, 才会有此预览链接URL`
`2.当使用的模板中存在动态表格控件时，预览结果中没有动态表格的填写内容,完整的预览链接需通过[合同文档合成完成回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign/#%E4%B9%9D-%E5%90%88%E5%90%8C%E6%96%87%E6%A1%A3%E5%90%88%E6%88%90%E5%AE%8C%E6%88%90%E5%9B%9E%E8%B0%83)获取。
                     * @return PreviewFileUrl 合同预览链接URL。

注: `1.如果是预览模式(即NeedPreview设置为true)时, 才会有此预览链接URL`
`2.当使用的模板中存在动态表格控件时，预览结果中没有动态表格的填写内容,完整的预览链接需通过[合同文档合成完成回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign/#%E4%B9%9D-%E5%90%88%E5%90%8C%E6%96%87%E6%A1%A3%E5%90%88%E6%88%90%E5%AE%8C%E6%88%90%E5%9B%9E%E8%B0%83)获取。
                     * 
                     */
                    std::string GetPreviewFileUrl() const;

                    /**
                     * 判断参数 PreviewFileUrl 是否已赋值
                     * @return PreviewFileUrl 是否已赋值
                     * 
                     */
                    bool PreviewFileUrlHasBeenSet() const;

                    /**
                     * 获取签署方信息，如角色ID、角色名称等
                     * @return Approvers 签署方信息，如角色ID、角色名称等
                     * 
                     */
                    std::vector<ApproverItem> GetApprovers() const;

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                private:

                    /**
                     * 合同流程的底层电子文档ID，为32位字符串。

注:
后续需用同样的FlowId再次调用[发起签署流程](https://qian.tencent.com/developers/companyApis/startFlows/StartFlow)，合同才能进入签署环节
                     */
                    std::string m_documentId;
                    bool m_documentIdHasBeenSet;

                    /**
                     * 合同预览链接URL。

注: `1.如果是预览模式(即NeedPreview设置为true)时, 才会有此预览链接URL`
`2.当使用的模板中存在动态表格控件时，预览结果中没有动态表格的填写内容,完整的预览链接需通过[合同文档合成完成回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign/#%E4%B9%9D-%E5%90%88%E5%90%8C%E6%96%87%E6%A1%A3%E5%90%88%E6%88%90%E5%AE%8C%E6%88%90%E5%9B%9E%E8%B0%83)获取。
                     */
                    std::string m_previewFileUrl;
                    bool m_previewFileUrlHasBeenSet;

                    /**
                     * 签署方信息，如角色ID、角色名称等
                     */
                    std::vector<ApproverItem> m_approvers;
                    bool m_approversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEDOCUMENTRESPONSE_H_
