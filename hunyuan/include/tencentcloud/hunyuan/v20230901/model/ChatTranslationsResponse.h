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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Usage.h>
#include <tencentcloud/hunyuan/v20230901/model/TranslationChoice.h>
#include <tencentcloud/hunyuan/v20230901/model/ErrorMsg.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * ChatTranslations返回参数结构体
                */
                class ChatTranslationsResponse : public AbstractModel
                {
                public:
                    ChatTranslationsResponse();
                    ~ChatTranslationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次请求的 RequestId。
                     * @return Id 本次请求的 RequestId。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取免责声明。
                     * @return Note 免责声明。
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Unix 时间戳，单位为秒。
                     * @return Created Unix 时间戳，单位为秒。
                     * 
                     */
                    int64_t GetCreated() const;

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取Token 统计信息。
按照总 Token 数量计费。
                     * @return Usage Token 统计信息。
按照总 Token 数量计费。
                     * 
                     */
                    Usage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取回复内容。
                     * @return Choices 回复内容。
                     * 
                     */
                    std::vector<TranslationChoice> GetChoices() const;

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取错误信息。
如果流式返回中服务处理异常，返回该错误信息。
                     * @return ErrorMsg 错误信息。
如果流式返回中服务处理异常，返回该错误信息。
                     * 
                     */
                    ErrorMsg GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 本次请求的 RequestId。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 免责声明。
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Unix 时间戳，单位为秒。
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * Token 统计信息。
按照总 Token 数量计费。
                     */
                    Usage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 回复内容。
                     */
                    std::vector<TranslationChoice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * 错误信息。
如果流式返回中服务处理异常，返回该错误信息。
                     */
                    ErrorMsg m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSRESPONSE_H_
