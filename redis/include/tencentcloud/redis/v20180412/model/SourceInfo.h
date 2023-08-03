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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SOURCEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 访问来源信息
                */
                class SourceInfo : public AbstractModel
                {
                public:
                    SourceInfo();
                    ~SourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取来源 IP 地址。
                     * @return Ip 来源 IP 地址。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置来源 IP 地址。
                     * @param _ip 来源 IP 地址。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取客户端连接数量。
                     * @return Conn 客户端连接数量。
                     * 
                     */
                    int64_t GetConn() const;

                    /**
                     * 设置客户端连接数量。
                     * @param _conn 客户端连接数量。
                     * 
                     */
                    void SetConn(const int64_t& _conn);

                    /**
                     * 判断参数 Conn 是否已赋值
                     * @return Conn 是否已赋值
                     * 
                     */
                    bool ConnHasBeenSet() const;

                    /**
                     * 获取命令
                     * @return Cmd 命令
                     * 
                     */
                    int64_t GetCmd() const;

                    /**
                     * 设置命令
                     * @param _cmd 命令
                     * 
                     */
                    void SetCmd(const int64_t& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                private:

                    /**
                     * 来源 IP 地址。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 客户端连接数量。
                     */
                    int64_t m_conn;
                    bool m_connHasBeenSet;

                    /**
                     * 命令
                     */
                    int64_t m_cmd;
                    bool m_cmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SOURCEINFO_H_
