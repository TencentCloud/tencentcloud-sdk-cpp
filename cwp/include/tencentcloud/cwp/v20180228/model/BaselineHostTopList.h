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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTTOPLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTTOPLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineEventLevelInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线影响服务器列表数据
                */
                class BaselineHostTopList : public AbstractModel
                {
                public:
                    BaselineHostTopList();
                    ~BaselineHostTopList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件等级与次数列表
                     * @return EventLevelList 事件等级与次数列表
                     * 
                     */
                    std::vector<BaselineEventLevelInfo> GetEventLevelList() const;

                    /**
                     * 设置事件等级与次数列表
                     * @param _eventLevelList 事件等级与次数列表
                     * 
                     */
                    void SetEventLevelList(const std::vector<BaselineEventLevelInfo>& _eventLevelList);

                    /**
                     * 判断参数 EventLevelList 是否已赋值
                     * @return EventLevelList 是否已赋值
                     * 
                     */
                    bool EventLevelListHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param _quuid 主机Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取计算权重的分数
                     * @return Score 计算权重的分数
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置计算权重的分数
                     * @param _score 计算权重的分数
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 事件等级与次数列表
                     */
                    std::vector<BaselineEventLevelInfo> m_eventLevelList;
                    bool m_eventLevelListHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 计算权重的分数
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTTOPLIST_H_
