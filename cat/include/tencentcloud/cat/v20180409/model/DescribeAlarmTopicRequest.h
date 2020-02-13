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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMTOPICREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeAlarmTopic请求参数结构体
                */
                class DescribeAlarmTopicRequest : public AbstractModel
                {
                public:
                    DescribeAlarmTopicRequest();
                    ~DescribeAlarmTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取如果不存在拨测相关的主题，是否自动创建一个。取值可为0, 1，默认为0
                     * @return NeedAdd 如果不存在拨测相关的主题，是否自动创建一个。取值可为0, 1，默认为0
                     */
                    uint64_t GetNeedAdd() const;

                    /**
                     * 设置如果不存在拨测相关的主题，是否自动创建一个。取值可为0, 1，默认为0
                     * @param NeedAdd 如果不存在拨测相关的主题，是否自动创建一个。取值可为0, 1，默认为0
                     */
                    void SetNeedAdd(const uint64_t& _needAdd);

                    /**
                     * 判断参数 NeedAdd 是否已赋值
                     * @return NeedAdd 是否已赋值
                     */
                    bool NeedAddHasBeenSet() const;

                private:

                    /**
                     * 如果不存在拨测相关的主题，是否自动创建一个。取值可为0, 1，默认为0
                     */
                    uint64_t m_needAdd;
                    bool m_needAddHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEALARMTOPICREQUEST_H_
