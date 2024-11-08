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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/LookupAttribute.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * LookUpEvents请求参数结构体
                */
                class LookUpEventsRequest : public AbstractModel
                {
                public:
                    LookUpEventsRequest();
                    ~LookUpEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取检索条件
                     * @return LookupAttributes 检索条件
                     * 
                     */
                    std::vector<LookupAttribute> GetLookupAttributes() const;

                    /**
                     * 设置检索条件
                     * @param _lookupAttributes 检索条件
                     * 
                     */
                    void SetLookupAttributes(const std::vector<LookupAttribute>& _lookupAttributes);

                    /**
                     * 判断参数 LookupAttributes 是否已赋值
                     * @return LookupAttributes 是否已赋值
                     * 
                     */
                    bool LookupAttributesHasBeenSet() const;

                    /**
                     * 获取查看更多日志的凭证
                     * @return NextToken 查看更多日志的凭证
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置查看更多日志的凭证
                     * @param _nextToken 查看更多日志的凭证
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取返回日志的最大条数
                     * @return MaxResults 返回日志的最大条数
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置返回日志的最大条数
                     * @param _maxResults 返回日志的最大条数
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取操作审计模式，有效值：standard | quick，其中standard是标准模式，quick是极速模式。默认为标准模式
                     * @return Mode 操作审计模式，有效值：standard | quick，其中standard是标准模式，quick是极速模式。默认为标准模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置操作审计模式，有效值：standard | quick，其中standard是标准模式，quick是极速模式。默认为标准模式
                     * @param _mode 操作审计模式，有效值：standard | quick，其中standard是标准模式，quick是极速模式。默认为标准模式
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 检索条件
                     */
                    std::vector<LookupAttribute> m_lookupAttributes;
                    bool m_lookupAttributesHasBeenSet;

                    /**
                     * 查看更多日志的凭证
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 返回日志的最大条数
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 操作审计模式，有效值：standard | quick，其中standard是标准模式，quick是极速模式。默认为标准模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LOOKUPEVENTSREQUEST_H_
