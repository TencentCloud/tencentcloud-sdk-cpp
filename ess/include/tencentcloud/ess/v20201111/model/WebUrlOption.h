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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_WEBURLOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_WEBURLOPTION_H_

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
                * 提取web嵌入页面个性化设置
                */
                class WebUrlOption : public AbstractModel
                {
                public:
                    WebUrlOption();
                    ~WebUrlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取禁用链接预览
                     * @return DisableLinkPreview 禁用链接预览
                     * 
                     */
                    bool GetDisableLinkPreview() const;

                    /**
                     * 设置禁用链接预览
                     * @param _disableLinkPreview 禁用链接预览
                     * 
                     */
                    void SetDisableLinkPreview(const bool& _disableLinkPreview);

                    /**
                     * 判断参数 DisableLinkPreview 是否已赋值
                     * @return DisableLinkPreview 是否已赋值
                     * 
                     */
                    bool DisableLinkPreviewHasBeenSet() const;

                    /**
                     * 获取禁用任务编辑
                     * @return DisableTaskEditing 禁用任务编辑
                     * 
                     */
                    bool GetDisableTaskEditing() const;

                    /**
                     * 设置禁用任务编辑
                     * @param _disableTaskEditing 禁用任务编辑
                     * 
                     */
                    void SetDisableTaskEditing(const bool& _disableTaskEditing);

                    /**
                     * 判断参数 DisableTaskEditing 是否已赋值
                     * @return DisableTaskEditing 是否已赋值
                     * 
                     */
                    bool DisableTaskEditingHasBeenSet() const;

                    /**
                     * 获取禁用任务结果编辑
                     * @return DisableTaskResultEditing 禁用任务结果编辑
                     * 
                     */
                    bool GetDisableTaskResultEditing() const;

                    /**
                     * 设置禁用任务结果编辑
                     * @param _disableTaskResultEditing 禁用任务结果编辑
                     * 
                     */
                    void SetDisableTaskResultEditing(const bool& _disableTaskResultEditing);

                    /**
                     * 判断参数 DisableTaskResultEditing 是否已赋值
                     * @return DisableTaskResultEditing 是否已赋值
                     * 
                     */
                    bool DisableTaskResultEditingHasBeenSet() const;

                private:

                    /**
                     * 禁用链接预览
                     */
                    bool m_disableLinkPreview;
                    bool m_disableLinkPreviewHasBeenSet;

                    /**
                     * 禁用任务编辑
                     */
                    bool m_disableTaskEditing;
                    bool m_disableTaskEditingHasBeenSet;

                    /**
                     * 禁用任务结果编辑
                     */
                    bool m_disableTaskResultEditing;
                    bool m_disableTaskResultEditingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_WEBURLOPTION_H_
