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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 忽略检测项影响主机信息
                */
                class IgnoreRuleEffectHostInfo : public AbstractModel
                {
                public:
                    IgnoreRuleEffectHostInfo();
                    ~IgnoreRuleEffectHostInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取危害等级：1-低位，2-中危，3-高危，4-严重
                     * @return Level 危害等级：1-低位，2-中危，3-高危，4-严重
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危害等级：1-低位，2-中危，3-高危，4-严重
                     * @param _level 危害等级：1-低位，2-中危，3-高危，4-严重
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取主机标签数组
                     * @return TagList 主机标签数组
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置主机标签数组
                     * @param _tagList 主机标签数组
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取状态：0-未通过，1-忽略，3-已通过，5-检测中
                     * @return Status 状态：0-未通过，1-忽略，3-已通过，5-检测中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态：0-未通过，1-忽略，3-已通过，5-检测中
                     * @param _status 状态：0-未通过，1-忽略，3-已通过，5-检测中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后检测时间
                     * @return LastScanTime 最后检测时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后检测时间
                     * @param _lastScanTime 最后检测时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return EventId 事件id
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件id
                     * @param _eventId 事件id
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取主机quuid
                     * @return Quuid 主机quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid
                     * @param _quuid 主机quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 危害等级：1-低位，2-中危，3-高危，4-严重
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 主机标签数组
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 状态：0-未通过，1-忽略，3-已通过，5-检测中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 事件id
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 主机quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_IGNORERULEEFFECTHOSTINFO_H_
