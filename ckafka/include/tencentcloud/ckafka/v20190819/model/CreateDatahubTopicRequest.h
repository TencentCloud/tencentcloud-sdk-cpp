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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateDatahubTopic请求参数结构体
                */
                class CreateDatahubTopicRequest : public AbstractModel
                {
                public:
                    CreateDatahubTopicRequest();
                    ~CreateDatahubTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>名称，是一个不超过 128 个字符的字符串，必须以“AppId-”为首字符，剩余部分可以包含字母、数字和横划线(-)，可通过接口DescribeAppInfo获取。</p>
                     * @return Name <p>名称，是一个不超过 128 个字符的字符串，必须以“AppId-”为首字符，剩余部分可以包含字母、数字和横划线(-)，可通过接口DescribeAppInfo获取。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称，是一个不超过 128 个字符的字符串，必须以“AppId-”为首字符，剩余部分可以包含字母、数字和横划线(-)，可通过接口DescribeAppInfo获取。</p>
                     * @param _name <p>名称，是一个不超过 128 个字符的字符串，必须以“AppId-”为首字符，剩余部分可以包含字母、数字和横划线(-)，可通过接口DescribeAppInfo获取。</p>
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
                     * 获取<p>Partition个数，最大值为500，大于0</p>
                     * @return PartitionNum <p>Partition个数，最大值为500，大于0</p>
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置<p>Partition个数，最大值为500，大于0</p>
                     * @param _partitionNum <p>Partition个数，最大值为500，大于0</p>
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取<p>消息保留时间，单位ms，当前最小值为60000ms</p>
                     * @return RetentionMs <p>消息保留时间，单位ms，当前最小值为60000ms</p>
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置<p>消息保留时间，单位ms，当前最小值为60000ms</p>
                     * @param _retentionMs <p>消息保留时间，单位ms，当前最小值为60000ms</p>
                     * 
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取<p>主题备注，是一个不超过 64 个字符的字符串，可以包含字母、数字和横划线(-)。</p>
                     * @return Note <p>主题备注，是一个不超过 64 个字符的字符串，可以包含字母、数字和横划线(-)。</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>主题备注，是一个不超过 64 个字符的字符串，可以包含字母、数字和横划线(-)。</p>
                     * @param _note <p>主题备注，是一个不超过 64 个字符的字符串，可以包含字母、数字和横划线(-)。</p>
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>名称，是一个不超过 128 个字符的字符串，必须以“AppId-”为首字符，剩余部分可以包含字母、数字和横划线(-)，可通过接口DescribeAppInfo获取。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Partition个数，最大值为500，大于0</p>
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * <p>消息保留时间，单位ms，当前最小值为60000ms</p>
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * <p>主题备注，是一个不超过 64 个字符的字符串，可以包含字母、数字和横划线(-)。</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTOPICREQUEST_H_
