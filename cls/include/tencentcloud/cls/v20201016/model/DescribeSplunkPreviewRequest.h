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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKPREVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKPREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetadataInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeSplunkPreview请求参数结构体
                */
                class DescribeSplunkPreviewRequest : public AbstractModel
                {
                public:
                    DescribeSplunkPreviewRequest();
                    ~DescribeSplunkPreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @return TopicId <p>日志主题id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @param _topicId <p>日志主题id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
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
                     * 获取<p>splunk投递任务-元信息</p>
                     * @return MetadataInfo <p>splunk投递任务-元信息</p>
                     * 
                     */
                    MetadataInfo GetMetadataInfo() const;

                    /**
                     * 设置<p>splunk投递任务-元信息</p>
                     * @param _metadataInfo <p>splunk投递任务-元信息</p>
                     * 
                     */
                    void SetMetadataInfo(const MetadataInfo& _metadataInfo);

                    /**
                     * 判断参数 MetadataInfo 是否已赋值
                     * @return MetadataInfo 是否已赋值
                     * 
                     */
                    bool MetadataInfoHasBeenSet() const;

                    /**
                     * 获取<p>splunk投递任务-投递 splunk过滤原始日志语句</p>
                     * @return DSLFilter <p>splunk投递任务-投递 splunk过滤原始日志语句</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>splunk投递任务-投递 splunk过滤原始日志语句</p>
                     * @param _dSLFilter <p>splunk投递任务-投递 splunk过滤原始日志语句</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题id。- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>splunk投递任务-元信息</p>
                     */
                    MetadataInfo m_metadataInfo;
                    bool m_metadataInfoHasBeenSet;

                    /**
                     * <p>splunk投递任务-投递 splunk过滤原始日志语句</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESPLUNKPREVIEWREQUEST_H_
