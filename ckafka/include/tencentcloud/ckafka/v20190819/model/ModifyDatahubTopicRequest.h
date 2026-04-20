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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYDATAHUBTOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYDATAHUBTOPICREQUEST_H_

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
                * ModifyDatahubTopic请求参数结构体
                */
                class ModifyDatahubTopicRequest : public AbstractModel
                {
                public:
                    ModifyDatahubTopicRequest();
                    ~ModifyDatahubTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * @return Name <p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * @param _name <p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
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
                     * 获取<p>消息保留时间，单位：ms，当前最小值为60000ms。</p>
                     * @return RetentionMs <p>消息保留时间，单位：ms，当前最小值为60000ms。</p>
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置<p>消息保留时间，单位：ms，当前最小值为60000ms。</p>
                     * @param _retentionMs <p>消息保留时间，单位：ms，当前最小值为60000ms。</p>
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
                     * 获取<p>主题备注</p><p>入参限制：不超过64个字符</p>
                     * @return Note <p>主题备注</p><p>入参限制：不超过64个字符</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>主题备注</p><p>入参限制：不超过64个字符</p>
                     * @param _note <p>主题备注</p><p>入参限制：不超过64个字符</p>
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
                     * <p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>消息保留时间，单位：ms，当前最小值为60000ms。</p>
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * <p>主题备注</p><p>入参限制：不超过64个字符</p>
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

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYDATAHUBTOPICREQUEST_H_
