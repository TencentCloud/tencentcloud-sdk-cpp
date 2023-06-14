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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CLSLOGOBJECT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CLSLOGOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CLS日志搜索对象
                */
                class ClsLogObject : public AbstractModel
                {
                public:
                    ClsLogObject();
                    ~ClsLogObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题ID
                     * @return TopicId 主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题ID
                     * @param _topicId 主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取主题名字
                     * @return TopicName 主题名字
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名字
                     * @param _topicName 主题名字
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取日志时间
                     * @return Timestamp 日志时间
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置日志时间
                     * @param _timestamp 日志时间
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取日志内容
                     * @return Content 日志内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置日志内容
                     * @param _content 日志内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取采集路径
                     * @return Filename 采集路径
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置采集路径
                     * @param _filename 采集路径
                     * 
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     * 
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取日志来源设备
                     * @return Source 日志来源设备
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置日志来源设备
                     * @param _source 日志来源设备
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题名字
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 日志时间
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 采集路径
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * 日志来源设备
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CLSLOGOBJECT_H_
