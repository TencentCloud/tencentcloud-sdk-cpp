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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRKEYWORDLIBREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRKEYWORDLIBREQUEST_H_

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
                * UpdateAsrKeyWordLib请求参数结构体
                */
                class UpdateAsrKeyWordLibRequest : public AbstractModel
                {
                public:
                    UpdateAsrKeyWordLibRequest();
                    ~UpdateAsrKeyWordLibRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关键词表ID</p>
                     * @return KeyWordLibId <p>关键词表ID</p>
                     * 
                     */
                    std::string GetKeyWordLibId() const;

                    /**
                     * 设置<p>关键词表ID</p>
                     * @param _keyWordLibId <p>关键词表ID</p>
                     * 
                     */
                    void SetKeyWordLibId(const std::string& _keyWordLibId);

                    /**
                     * 判断参数 KeyWordLibId 是否已赋值
                     * @return KeyWordLibId 是否已赋值
                     * 
                     */
                    bool KeyWordLibIdHasBeenSet() const;

                    /**
                     * 获取<p>词表名称，长度在1-20之间<br>仅限中英文数字-_</p>
                     * @return Name <p>词表名称，长度在1-20之间<br>仅限中英文数字-_</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>词表名称，长度在1-20之间<br>仅限中英文数字-_</p>
                     * @param _name <p>词表名称，长度在1-20之间<br>仅限中英文数字-_</p>
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
                     * 获取<ul><li>词文件（纯文本文件）以行分隔 ，进行二进制base64编码</li><li>格式要求：TXT 每行只有一个词，不满足格式则报错无法上传 </li><li>每个词最多5个汉字或15个字符，单个词库最多不超过100个词</li><li>此参数为空则只更新词表名称</li></ul>
                     * @return KeyWordFile <ul><li>词文件（纯文本文件）以行分隔 ，进行二进制base64编码</li><li>格式要求：TXT 每行只有一个词，不满足格式则报错无法上传 </li><li>每个词最多5个汉字或15个字符，单个词库最多不超过100个词</li><li>此参数为空则只更新词表名称</li></ul>
                     * 
                     */
                    std::string GetKeyWordFile() const;

                    /**
                     * 设置<ul><li>词文件（纯文本文件）以行分隔 ，进行二进制base64编码</li><li>格式要求：TXT 每行只有一个词，不满足格式则报错无法上传 </li><li>每个词最多5个汉字或15个字符，单个词库最多不超过100个词</li><li>此参数为空则只更新词表名称</li></ul>
                     * @param _keyWordFile <ul><li>词文件（纯文本文件）以行分隔 ，进行二进制base64编码</li><li>格式要求：TXT 每行只有一个词，不满足格式则报错无法上传 </li><li>每个词最多5个汉字或15个字符，单个词库最多不超过100个词</li><li>此参数为空则只更新词表名称</li></ul>
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
                     * <p>关键词表ID</p>
                     */
                    std::string m_keyWordLibId;
                    bool m_keyWordLibIdHasBeenSet;

                    /**
                     * <p>词表名称，长度在1-20之间<br>仅限中英文数字-_</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <ul><li>词文件（纯文本文件）以行分隔 ，进行二进制base64编码</li><li>格式要求：TXT 每行只有一个词，不满足格式则报错无法上传 </li><li>每个词最多5个汉字或15个字符，单个词库最多不超过100个词</li><li>此参数为空则只更新词表名称</li></ul>
                     */
                    std::string m_keyWordFile;
                    bool m_keyWordFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRKEYWORDLIBREQUEST_H_
