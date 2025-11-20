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
                     * 获取禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮
                     * @return DisableTemporaryStore 禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮
                     * 
                     */
                    bool GetDisableTemporaryStore() const;

                    /**
                     * 设置禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮
                     * @param _disableTemporaryStore 禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮
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
                     * 获取禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮
                     * @return DisableExport 禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮
                     * 
                     */
                    bool GetDisableExport() const;

                    /**
                     * 设置禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮
                     * @param _disableExport 禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮
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
                     * 获取禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮
                     * @return DisableReviewAgain 禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮
                     * 
                     */
                    bool GetDisableReviewAgain() const;

                    /**
                     * 设置禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮
                     * @param _disableReviewAgain 禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮
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
                     * 获取禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码
                     * @return DisableWxQrcode 禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码
                     * 
                     */
                    bool GetDisableWxQrcode() const;

                    /**
                     * 设置禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码
                     * @param _disableWxQrcode 禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码
                     * 
                     */
                    void SetDisableWxQrcode(const bool& _disableWxQrcode);

                    /**
                     * 判断参数 DisableWxQrcode 是否已赋值
                     * @return DisableWxQrcode 是否已赋值
                     * 
                     */
                    bool DisableWxQrcodeHasBeenSet() const;

                private:

                    /**
                     * 禁用暂存。 默认 false，设置为 true 会隐藏界面上的临时保存按钮
                     */
                    bool m_disableTemporaryStore;
                    bool m_disableTemporaryStoreHasBeenSet;

                    /**
                     * 禁用导出。默认 false，设置为 true 会隐藏界面上的导出按钮
                     */
                    bool m_disableExport;
                    bool m_disableExportHasBeenSet;

                    /**
                     * 禁用重新审查。默认 false，设置为 true 会隐藏界面上的重新审查按钮
                     */
                    bool m_disableReviewAgain;
                    bool m_disableReviewAgainHasBeenSet;

                    /**
                     * 禁用二维码分享。默认 false，设置为 true 会隐藏界面上的分享二维码
                     */
                    bool m_disableWxQrcode;
                    bool m_disableWxQrcodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CONTRACTREVIEWWEBURLOPTION_H_
