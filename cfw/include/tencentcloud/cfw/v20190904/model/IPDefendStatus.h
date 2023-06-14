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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IPDEFENDSTATUS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IPDEFENDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ip防护状态
                */
                class IPDefendStatus : public AbstractModel
                {
                public:
                    IPDefendStatus();
                    ~IPDefendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip地址
                     * @return IP ip地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置ip地址
                     * @param _iP ip地址
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取防护状态   1:防护打开; -1:地址错误; 其他:未防护
                     * @return Status 防护状态   1:防护打开; -1:地址错误; 其他:未防护
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置防护状态   1:防护打开; -1:地址错误; 其他:未防护
                     * @param _status 防护状态   1:防护打开; -1:地址错误; 其他:未防护
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ip地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 防护状态   1:防护打开; -1:地址错误; 其他:未防护
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IPDEFENDSTATUS_H_
