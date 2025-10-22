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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_INPUTBOXCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_INPUTBOXCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 输入框配置
                */
                class InputBoxConfig : public AbstractModel
                {
                public:
                    InputBoxConfig();
                    ~InputBoxConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入框按钮，1：上传图片、2：上传文档，3：腾讯文档，4：联网搜索
                     * @return InputBoxButtons 输入框按钮，1：上传图片、2：上传文档，3：腾讯文档，4：联网搜索
                     * 
                     */
                    std::vector<uint64_t> GetInputBoxButtons() const;

                    /**
                     * 设置输入框按钮，1：上传图片、2：上传文档，3：腾讯文档，4：联网搜索
                     * @param _inputBoxButtons 输入框按钮，1：上传图片、2：上传文档，3：腾讯文档，4：联网搜索
                     * 
                     */
                    void SetInputBoxButtons(const std::vector<uint64_t>& _inputBoxButtons);

                    /**
                     * 判断参数 InputBoxButtons 是否已赋值
                     * @return InputBoxButtons 是否已赋值
                     * 
                     */
                    bool InputBoxButtonsHasBeenSet() const;

                private:

                    /**
                     * 输入框按钮，1：上传图片、2：上传文档，3：腾讯文档，4：联网搜索
                     */
                    std::vector<uint64_t> m_inputBoxButtons;
                    bool m_inputBoxButtonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_INPUTBOXCONFIG_H_
