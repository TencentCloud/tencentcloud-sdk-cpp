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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERLOG_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 容器日志
                */
                class ContainerLog : public AbstractModel
                {
                public:
                    ContainerLog();
                    ~ContainerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取容器名称
                     * @return Name 容器名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置容器名称
                     * @param _name 容器名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志
                     * @return Log 日志
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置日志
                     * @param _log 日志
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取日志记录时间
                     * @return Time 日志记录时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日志记录时间
                     * @param _time 日志记录时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 容器名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 日志记录时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_CONTAINERLOG_H_
