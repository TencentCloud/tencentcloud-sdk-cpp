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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATEASRKEYWORDLIBREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATEASRKEYWORDLIBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CreateAsrKeyWordLib请求参数结构体
                */
                class CreateAsrKeyWordLibRequest : public AbstractModel
                {
                public:
                    CreateAsrKeyWordLibRequest();
                    ~CreateAsrKeyWordLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取词表名称，长度在1-20之间
仅限中英文数字-_
                     * @return Name 词表名称，长度在1-20之间
仅限中英文数字-_
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置词表名称，长度在1-20之间
仅限中英文数字-_
                     * @param _name 词表名称，长度在1-20之间
仅限中英文数字-_
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取词文件（纯文本文件）的二进制base64编码，以行分隔
格式要求：TXT
每行只有一个词，不满足格式则报错无法上传
每个词限制**5个汉字，15个字符**，单个词库最多不超过100个词
注意不要有空行，尤其是最后一行
                     * @return KeyWordFile 词文件（纯文本文件）的二进制base64编码，以行分隔
格式要求：TXT
每行只有一个词，不满足格式则报错无法上传
每个词限制**5个汉字，15个字符**，单个词库最多不超过100个词
注意不要有空行，尤其是最后一行
                     * 
                     */
                    std::string GetKeyWordFile() const;

                    /**
                     * 设置词文件（纯文本文件）的二进制base64编码，以行分隔
格式要求：TXT
每行只有一个词，不满足格式则报错无法上传
每个词限制**5个汉字，15个字符**，单个词库最多不超过100个词
注意不要有空行，尤其是最后一行
                     * @param _keyWordFile 词文件（纯文本文件）的二进制base64编码，以行分隔
格式要求：TXT
每行只有一个词，不满足格式则报错无法上传
每个词限制**5个汉字，15个字符**，单个词库最多不超过100个词
注意不要有空行，尤其是最后一行
                     * 
                     */
                    void SetKeyWordFile(const std::string& _keyWordFile);

                    /**
                     * 判断参数 KeyWordFile 是否已赋值
                     * @return KeyWordFile 是否已赋值
                     * 
                     */
                    bool KeyWordFileHasBeenSet() const;

                private:

                    /**
                     * 词表名称，长度在1-20之间
仅限中英文数字-_
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 词文件（纯文本文件）的二进制base64编码，以行分隔
格式要求：TXT
每行只有一个词，不满足格式则报错无法上传
每个词限制**5个汉字，15个字符**，单个词库最多不超过100个词
注意不要有空行，尤其是最后一行
                     */
                    std::string m_keyWordFile;
                    bool m_keyWordFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATEASRKEYWORDLIBREQUEST_H_
