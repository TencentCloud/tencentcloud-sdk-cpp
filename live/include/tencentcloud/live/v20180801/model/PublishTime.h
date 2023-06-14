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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PUBLISHTIME_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PUBLISHTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 推流时间。
                */
                class PublishTime : public AbstractModel
                {
                public:
                    PublishTime();
                    ~PublishTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推流时间。
UTC 格式，例如：2018-06-29T19:00:00Z。
                     * @return PublishTime 推流时间。
UTC 格式，例如：2018-06-29T19:00:00Z。
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置推流时间。
UTC 格式，例如：2018-06-29T19:00:00Z。
                     * @param _publishTime 推流时间。
UTC 格式，例如：2018-06-29T19:00:00Z。
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                private:

                    /**
                     * 推流时间。
UTC 格式，例如：2018-06-29T19:00:00Z。
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUBLISHTIME_H_
