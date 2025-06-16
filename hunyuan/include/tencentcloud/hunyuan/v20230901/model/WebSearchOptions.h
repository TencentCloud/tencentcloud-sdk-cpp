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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_WEBSEARCHOPTIONS_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_WEBSEARCHOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Knowledge.h>
#include <tencentcloud/hunyuan/v20230901/model/UserLocation.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 知识注入相关的参数信息
                */
                class WebSearchOptions : public AbstractModel
                {
                public:
                    WebSearchOptions();
                    ~WebSearchOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表示用户注入的知识信息
                     * @return Knowledge 表示用户注入的知识信息
                     * 
                     */
                    std::vector<Knowledge> GetKnowledge() const;

                    /**
                     * 设置表示用户注入的知识信息
                     * @param _knowledge 表示用户注入的知识信息
                     * 
                     */
                    void SetKnowledge(const std::vector<Knowledge>& _knowledge);

                    /**
                     * 判断参数 Knowledge 是否已赋值
                     * @return Knowledge 是否已赋值
                     * 
                     */
                    bool KnowledgeHasBeenSet() const;

                    /**
                     * 获取用户位置详细信息
                     * @return UserLocation 用户位置详细信息
                     * 
                     */
                    UserLocation GetUserLocation() const;

                    /**
                     * 设置用户位置详细信息
                     * @param _userLocation 用户位置详细信息
                     * 
                     */
                    void SetUserLocation(const UserLocation& _userLocation);

                    /**
                     * 判断参数 UserLocation 是否已赋值
                     * @return UserLocation 是否已赋值
                     * 
                     */
                    bool UserLocationHasBeenSet() const;

                    /**
                     * 获取打开开关，会返回搜索状态
                     * @return Processes 打开开关，会返回搜索状态
                     * 
                     */
                    bool GetProcesses() const;

                    /**
                     * 设置打开开关，会返回搜索状态
                     * @param _processes 打开开关，会返回搜索状态
                     * 
                     */
                    void SetProcesses(const bool& _processes);

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                private:

                    /**
                     * 表示用户注入的知识信息
                     */
                    std::vector<Knowledge> m_knowledge;
                    bool m_knowledgeHasBeenSet;

                    /**
                     * 用户位置详细信息
                     */
                    UserLocation m_userLocation;
                    bool m_userLocationHasBeenSet;

                    /**
                     * 打开开关，会返回搜索状态
                     */
                    bool m_processes;
                    bool m_processesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_WEBSEARCHOPTIONS_H_
