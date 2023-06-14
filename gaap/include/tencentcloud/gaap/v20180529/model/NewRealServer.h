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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_NEWREALSERVER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_NEWREALSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 新添加源站信息
                */
                class NewRealServer : public AbstractModel
                {
                public:
                    NewRealServer();
                    ~NewRealServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站ID
                     * @return RealServerId 源站ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param _realServerId 源站ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取源站ip或域名
                     * @return RealServerIP 源站ip或域名
                     * 
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置源站ip或域名
                     * @param _realServerIP 源站ip或域名
                     * 
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                private:

                    /**
                     * 源站ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 源站ip或域名
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_NEWREALSERVER_H_
