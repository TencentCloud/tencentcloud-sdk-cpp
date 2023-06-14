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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEROLLBACKRANGETIME_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEROLLBACKRANGETIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RollbackTimeRange.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例可回档时间范围
                */
                class InstanceRollbackRangeTime : public AbstractModel
                {
                public:
                    InstanceRollbackRangeTime();
                    ~InstanceRollbackRangeTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询数据库错误码
                     * @return Code 查询数据库错误码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置查询数据库错误码
                     * @param _code 查询数据库错误码
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取查询数据库错误信息
                     * @return Message 查询数据库错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置查询数据库错误信息
                     * @param _message 查询数据库错误信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取实例ID列表，单个实例Id的格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceId 实例ID列表，单个实例Id的格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID列表，单个实例Id的格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同
                     * @param _instanceId 实例ID列表，单个实例Id的格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取可回档时间范围
                     * @return Times 可回档时间范围
                     * 
                     */
                    std::vector<RollbackTimeRange> GetTimes() const;

                    /**
                     * 设置可回档时间范围
                     * @param _times 可回档时间范围
                     * 
                     */
                    void SetTimes(const std::vector<RollbackTimeRange>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                private:

                    /**
                     * 查询数据库错误码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 查询数据库错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 实例ID列表，单个实例Id的格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 可回档时间范围
                     */
                    std::vector<RollbackTimeRange> m_times;
                    bool m_timesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEROLLBACKRANGETIME_H_
