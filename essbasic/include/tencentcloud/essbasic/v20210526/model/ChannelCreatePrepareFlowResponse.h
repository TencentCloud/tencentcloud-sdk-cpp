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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreatePrepareFlow返回参数结构体
                */
                class ChannelCreatePrepareFlowResponse : public AbstractModel
                {
                public:
                    ChannelCreatePrepareFlowResponse();
                    ~ChannelCreatePrepareFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取发起的合同嵌入链接， 可以直接点击进入进行合同发起， 有效期为5分钟
                     * @return PrepareFlowUrl 发起的合同嵌入链接， 可以直接点击进入进行合同发起， 有效期为5分钟
                     * 
                     */
                    std::string GetPrepareFlowUrl() const;

                    /**
                     * 判断参数 PrepareFlowUrl 是否已赋值
                     * @return PrepareFlowUrl 是否已赋值
                     * 
                     */
                    bool PrepareFlowUrlHasBeenSet() const;

                    /**
                     * 获取合同发起后预览链接， 注意此时合同并未发起，仅只是展示效果， 有效期为5分钟
                     * @return PreviewFlowUrl 合同发起后预览链接， 注意此时合同并未发起，仅只是展示效果， 有效期为5分钟
                     * 
                     */
                    std::string GetPreviewFlowUrl() const;

                    /**
                     * 判断参数 PreviewFlowUrl 是否已赋值
                     * @return PreviewFlowUrl 是否已赋值
                     * 
                     */
                    bool PreviewFlowUrlHasBeenSet() const;

                    /**
                     * 获取发起的合同临时Id， 只有当点击进入链接，成功发起合同后， 此Id才有效
                     * @return FlowId 发起的合同临时Id， 只有当点击进入链接，成功发起合同后， 此Id才有效
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取临时的草稿id（还未实际保存草稿），用户可以记录此字段对应后续页面保存的草稿，若在页面上未保存草稿，则此字段无效。
                     * @return DraftId 临时的草稿id（还未实际保存草稿），用户可以记录此字段对应后续页面保存的草稿，若在页面上未保存草稿，则此字段无效。
                     * 
                     */
                    std::string GetDraftId() const;

                    /**
                     * 判断参数 DraftId 是否已赋值
                     * @return DraftId 是否已赋值
                     * 
                     */
                    bool DraftIdHasBeenSet() const;

                private:

                    /**
                     * 发起的合同嵌入链接， 可以直接点击进入进行合同发起， 有效期为5分钟
                     */
                    std::string m_prepareFlowUrl;
                    bool m_prepareFlowUrlHasBeenSet;

                    /**
                     * 合同发起后预览链接， 注意此时合同并未发起，仅只是展示效果， 有效期为5分钟
                     */
                    std::string m_previewFlowUrl;
                    bool m_previewFlowUrlHasBeenSet;

                    /**
                     * 发起的合同临时Id， 只有当点击进入链接，成功发起合同后， 此Id才有效
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 临时的草稿id（还未实际保存草稿），用户可以记录此字段对应后续页面保存的草稿，若在页面上未保存草稿，则此字段无效。
                     */
                    std::string m_draftId;
                    bool m_draftIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWRESPONSE_H_
