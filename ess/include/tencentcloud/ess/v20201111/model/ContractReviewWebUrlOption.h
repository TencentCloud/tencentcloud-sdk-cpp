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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWWEBURLOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWWEBURLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查个性化参数，用于控制页面的展示内容
                */
                class ContractReviewWebUrlOption : public AbstractModel
                {
                public:
                    ContractReviewWebUrlOption();
                    ~ContractReviewWebUrlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮</p>
                     * @return DisableTemporaryStore <p>禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮</p>
                     * 
                     */
                    bool GetDisableTemporaryStore() const;

                    /**
                     * 设置<p>禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮</p>
                     * @param _disableTemporaryStore <p>禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮</p>
                     * 
                     */
                    void SetDisableTemporaryStore(const bool& _disableTemporaryStore);

                    /**
                     * 判断参数 DisableTemporaryStore 是否已赋值
                     * @return DisableTemporaryStore 是否已赋值
                     * 
                     */
                    bool DisableTemporaryStoreHasBeenSet() const;

                    /**
                     * 获取<p>禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮</p>
                     * @return DisableExport <p>禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮</p>
                     * 
                     */
                    bool GetDisableExport() const;

                    /**
                     * 设置<p>禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮</p>
                     * @param _disableExport <p>禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮</p>
                     * 
                     */
                    void SetDisableExport(const bool& _disableExport);

                    /**
                     * 判断参数 DisableExport 是否已赋值
                     * @return DisableExport 是否已赋值
                     * 
                     */
                    bool DisableExportHasBeenSet() const;

                    /**
                     * 获取<p>禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮</p>
                     * @return DisableReviewAgain <p>禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮</p>
                     * 
                     */
                    bool GetDisableReviewAgain() const;

                    /**
                     * 设置<p>禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮</p>
                     * @param _disableReviewAgain <p>禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮</p>
                     * 
                     */
                    void SetDisableReviewAgain(const bool& _disableReviewAgain);

                    /**
                     * 判断参数 DisableReviewAgain 是否已赋值
                     * @return DisableReviewAgain 是否已赋值
                     * 
                     */
                    bool DisableReviewAgainHasBeenSet() const;

                    /**
                     * 获取<p>禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码</p>
                     * @return DisableWxQrcode <p>禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码</p>
                     * 
                     */
                    bool GetDisableWxQrcode() const;

                    /**
                     * 设置<p>禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码</p>
                     * @param _disableWxQrcode <p>禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码</p>
                     * 
                     */
                    void SetDisableWxQrcode(const bool& _disableWxQrcode);

                    /**
                     * 判断参数 DisableWxQrcode 是否已赋值
                     * @return DisableWxQrcode 是否已赋值
                     * 
                     */
                    bool DisableWxQrcodeHasBeenSet() const;

                    /**
                     * 获取<p>禁用忽略风险。默认false，设置为true，会根据用户合同审查忽略风险权限点决定是否禁用忽略选项。</p>
                     * @return DisableIgnoreRisk <p>禁用忽略风险。默认false，设置为true，会根据用户合同审查忽略风险权限点决定是否禁用忽略选项。</p>
                     * 
                     */
                    bool GetDisableIgnoreRisk() const;

                    /**
                     * 设置<p>禁用忽略风险。默认false，设置为true，会根据用户合同审查忽略风险权限点决定是否禁用忽略选项。</p>
                     * @param _disableIgnoreRisk <p>禁用忽略风险。默认false，设置为true，会根据用户合同审查忽略风险权限点决定是否禁用忽略选项。</p>
                     * 
                     */
                    void SetDisableIgnoreRisk(const bool& _disableIgnoreRisk);

                    /**
                     * 判断参数 DisableIgnoreRisk 是否已赋值
                     * @return DisableIgnoreRisk 是否已赋值
                     * 
                     */
                    bool DisableIgnoreRiskHasBeenSet() const;

                    /**
                     * 获取<p>关闭原文修改。默认false，设置为true，根据用户合同审查修订操作权限点决定能否修改、一键修订原文。</p>
                     * @return DisableRevisedRisk <p>关闭原文修改。默认false，设置为true，根据用户合同审查修订操作权限点决定能否修改、一键修订原文。</p>
                     * 
                     */
                    bool GetDisableRevisedRisk() const;

                    /**
                     * 设置<p>关闭原文修改。默认false，设置为true，根据用户合同审查修订操作权限点决定能否修改、一键修订原文。</p>
                     * @param _disableRevisedRisk <p>关闭原文修改。默认false，设置为true，根据用户合同审查修订操作权限点决定能否修改、一键修订原文。</p>
                     * 
                     */
                    void SetDisableRevisedRisk(const bool& _disableRevisedRisk);

                    /**
                     * 判断参数 DisableRevisedRisk 是否已赋值
                     * @return DisableRevisedRisk 是否已赋值
                     * 
                     */
                    bool DisableRevisedRiskHasBeenSet() const;

                private:

                    /**
                     * <p>禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮</p>
                     */
                    bool m_disableTemporaryStore;
                    bool m_disableTemporaryStoreHasBeenSet;

                    /**
                     * <p>禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮</p>
                     */
                    bool m_disableExport;
                    bool m_disableExportHasBeenSet;

                    /**
                     * <p>禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮</p>
                     */
                    bool m_disableReviewAgain;
                    bool m_disableReviewAgainHasBeenSet;

                    /**
                     * <p>禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码</p>
                     */
                    bool m_disableWxQrcode;
                    bool m_disableWxQrcodeHasBeenSet;

                    /**
                     * <p>禁用忽略风险。默认false，设置为true，会根据用户合同审查忽略风险权限点决定是否禁用忽略选项。</p>
                     */
                    bool m_disableIgnoreRisk;
                    bool m_disableIgnoreRiskHasBeenSet;

                    /**
                     * <p>关闭原文修改。默认false，设置为true，根据用户合同审查修订操作权限点决定能否修改、一键修订原文。</p>
                     */
                    bool m_disableRevisedRisk;
                    bool m_disableRevisedRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWWEBURLOPTION_H_
