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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ASSIGNMENT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ASSIGNMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/GroupInfoTopics.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 存储着分配给该消费者的 partition 信息
                */
                class Assignment : public AbstractModel
                {
                public:
                    Assignment();
                    ~Assignment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取assingment版本信息
                     * @return Version assingment版本信息
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置assingment版本信息
                     * @param _version assingment版本信息
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取topic信息列表
                     * @return Topics topic信息列表
                     * 
                     */
                    std::vector<GroupInfoTopics> GetTopics() const;

                    /**
                     * 设置topic信息列表
                     * @param _topics topic信息列表
                     * 
                     */
                    void SetTopics(const std::vector<GroupInfoTopics>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * assingment版本信息
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * topic信息列表
                     */
                    std::vector<GroupInfoTopics> m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ASSIGNMENT_H_
