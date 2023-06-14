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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHBINDEDES_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHBINDEDES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Logstash绑定的ES集群信息
                */
                class LogstashBindedES : public AbstractModel
                {
                public:
                    LogstashBindedES();
                    ~LogstashBindedES() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ES集群ID
                     * @return ESInstanceId ES集群ID
                     * 
                     */
                    std::string GetESInstanceId() const;

                    /**
                     * 设置ES集群ID
                     * @param _eSInstanceId ES集群ID
                     * 
                     */
                    void SetESInstanceId(const std::string& _eSInstanceId);

                    /**
                     * 判断参数 ESInstanceId 是否已赋值
                     * @return ESInstanceId 是否已赋值
                     * 
                     */
                    bool ESInstanceIdHasBeenSet() const;

                    /**
                     * 获取ES集群用户名
                     * @return ESUserName ES集群用户名
                     * 
                     */
                    std::string GetESUserName() const;

                    /**
                     * 设置ES集群用户名
                     * @param _eSUserName ES集群用户名
                     * 
                     */
                    void SetESUserName(const std::string& _eSUserName);

                    /**
                     * 判断参数 ESUserName 是否已赋值
                     * @return ESUserName 是否已赋值
                     * 
                     */
                    bool ESUserNameHasBeenSet() const;

                    /**
                     * 获取ES集群密码
                     * @return ESPassword ES集群密码
                     * 
                     */
                    std::string GetESPassword() const;

                    /**
                     * 设置ES集群密码
                     * @param _eSPassword ES集群密码
                     * 
                     */
                    void SetESPassword(const std::string& _eSPassword);

                    /**
                     * 判断参数 ESPassword 是否已赋值
                     * @return ESPassword 是否已赋值
                     * 
                     */
                    bool ESPasswordHasBeenSet() const;

                private:

                    /**
                     * ES集群ID
                     */
                    std::string m_eSInstanceId;
                    bool m_eSInstanceIdHasBeenSet;

                    /**
                     * ES集群用户名
                     */
                    std::string m_eSUserName;
                    bool m_eSUserNameHasBeenSet;

                    /**
                     * ES集群密码
                     */
                    std::string m_eSPassword;
                    bool m_eSPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_LOGSTASHBINDEDES_H_
