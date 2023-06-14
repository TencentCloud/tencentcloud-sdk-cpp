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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIAPREPROCESSOPERATION_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIAPREPROCESSOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体处理视频合成任务的预处理操作。
                */
                class MediaPreprocessOperation : public AbstractModel
                {
                public:
                    MediaPreprocessOperation();
                    ~MediaPreprocessOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预处理操作的类型，取值范围：
<li>ImageTextMask：图片文字遮罩。</li>
                     * @return Type 预处理操作的类型，取值范围：
<li>ImageTextMask：图片文字遮罩。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置预处理操作的类型，取值范围：
<li>ImageTextMask：图片文字遮罩。</li>
                     * @param _type 预处理操作的类型，取值范围：
<li>ImageTextMask：图片文字遮罩。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取预处理操作参数。
当 Type 取值 ImageTextMask 时，参数为要保留的文字。
                     * @return Args 预处理操作参数。
当 Type 取值 ImageTextMask 时，参数为要保留的文字。
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置预处理操作参数。
当 Type 取值 ImageTextMask 时，参数为要保留的文字。
                     * @param _args 预处理操作参数。
当 Type 取值 ImageTextMask 时，参数为要保留的文字。
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 预处理操作的类型，取值范围：
<li>ImageTextMask：图片文字遮罩。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 预处理操作参数。
当 Type 取值 ImageTextMask 时，参数为要保留的文字。
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIAPREPROCESSOPERATION_H_
