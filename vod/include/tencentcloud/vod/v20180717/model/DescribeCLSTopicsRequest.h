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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSTOPICSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCLSTopics请求参数结构体
                */
                class DescribeCLSTopicsRequest : public AbstractModel
                {
                public:
                    DescribeCLSTopicsRequest();
                    ~DescribeCLSTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志集所属的地域，取值有： <li>ap-guangzhou：广州；</li> <li>ap-beijing：北京；</li> <li>ap-chengdu：成都；</li> <li>ap-chongqing：重庆；</li> <li>ap-nanjing：南京；</li> <li>ap-shanghai：上海；</li> <li>ap-singapore：新加坡。</li>
                     * @return CLSRegion 日志集所属的地域，取值有： <li>ap-guangzhou：广州；</li> <li>ap-beijing：北京；</li> <li>ap-chengdu：成都；</li> <li>ap-chongqing：重庆；</li> <li>ap-nanjing：南京；</li> <li>ap-shanghai：上海；</li> <li>ap-singapore：新加坡。</li>
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置日志集所属的地域，取值有： <li>ap-guangzhou：广州；</li> <li>ap-beijing：北京；</li> <li>ap-chengdu：成都；</li> <li>ap-chongqing：重庆；</li> <li>ap-nanjing：南京；</li> <li>ap-shanghai：上海；</li> <li>ap-singapore：新加坡。</li>
                     * @param _cLSRegion 日志集所属的地域，取值有： <li>ap-guangzhou：广州；</li> <li>ap-beijing：北京；</li> <li>ap-chengdu：成都；</li> <li>ap-chongqing：重庆；</li> <li>ap-nanjing：南京；</li> <li>ap-shanghai：上海；</li> <li>ap-singapore：新加坡。</li>
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取日志主题所属日志集 ID。
                     * @return LogsetId 日志主题所属日志集 ID。
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志主题所属日志集 ID。
                     * @param _logsetId 日志主题所属日志集 ID。
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题 ID 列表。如果不填，表示查询所有的日志主题。
                     * @return TopicIds 日志主题 ID 列表。如果不填，表示查询所有的日志主题。
                     * 
                     */
                    std::vector<std::string> GetTopicIds() const;

                    /**
                     * 设置日志主题 ID 列表。如果不填，表示查询所有的日志主题。
                     * @param _topicIds 日志主题 ID 列表。如果不填，表示查询所有的日志主题。
                     * 
                     */
                    void SetTopicIds(const std::vector<std::string>& _topicIds);

                    /**
                     * 判断参数 TopicIds 是否已赋值
                     * @return TopicIds 是否已赋值
                     * 
                     */
                    bool TopicIdsHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：20，最大值：100。
                     * @return Limit 返回记录条数，默认值：20，最大值：100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：20，最大值：100。
                     * @param _limit 返回记录条数，默认值：20，最大值：100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 日志集所属的地域，取值有： <li>ap-guangzhou：广州；</li> <li>ap-beijing：北京；</li> <li>ap-chengdu：成都；</li> <li>ap-chongqing：重庆；</li> <li>ap-nanjing：南京；</li> <li>ap-shanghai：上海；</li> <li>ap-singapore：新加坡。</li>
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * 日志主题所属日志集 ID。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题 ID 列表。如果不填，表示查询所有的日志主题。
                     */
                    std::vector<std::string> m_topicIds;
                    bool m_topicIdsHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：20，最大值：100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECLSTOPICSREQUEST_H_
