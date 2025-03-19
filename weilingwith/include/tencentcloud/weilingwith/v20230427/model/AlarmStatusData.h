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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMSTATUSDATA_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMSTATUSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 告警状态返回结构体
                */
                class AlarmStatusData : public AbstractModel
                {
                public:
                    AlarmStatusData();
                    ~AlarmStatusData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警状态ID
                     * @return StatusID 告警状态ID
                     * 
                     */
                    std::string GetStatusID() const;

                    /**
                     * 设置告警状态ID
                     * @param _statusID 告警状态ID
                     * 
                     */
                    void SetStatusID(const std::string& _statusID);

                    /**
                     * 判断参数 StatusID 是否已赋值
                     * @return StatusID 是否已赋值
                     * 
                     */
                    bool StatusIDHasBeenSet() const;

                    /**
                     * 获取告警状态名称
                     * @return StatusName 告警状态名称
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置告警状态名称
                     * @param _statusName 告警状态名称
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取告警状态类型
                     * @return StatusType 告警状态类型
                     * 
                     */
                    std::string GetStatusType() const;

                    /**
                     * 设置告警状态类型
                     * @param _statusType 告警状态类型
                     * 
                     */
                    void SetStatusType(const std::string& _statusType);

                    /**
                     * 判断参数 StatusType 是否已赋值
                     * @return StatusType 是否已赋值
                     * 
                     */
                    bool StatusTypeHasBeenSet() const;

                private:

                    /**
                     * 告警状态ID
                     */
                    std::string m_statusID;
                    bool m_statusIDHasBeenSet;

                    /**
                     * 告警状态名称
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * 告警状态类型
                     */
                    std::string m_statusType;
                    bool m_statusTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ALARMSTATUSDATA_H_
