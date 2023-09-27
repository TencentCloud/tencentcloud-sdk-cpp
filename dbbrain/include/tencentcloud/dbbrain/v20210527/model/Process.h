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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROCESS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实时会话详情。
                */
                class Process : public AbstractModel
                {
                public:
                    Process();
                    ~Process() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话 ID。
                     * @return Id 会话 ID。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置会话 ID。
                     * @param _id 会话 ID。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取访问来源，IP 地址和端口号。
                     * @return Address 访问来源，IP 地址和端口号。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置访问来源，IP 地址和端口号。
                     * @param _address 访问来源，IP 地址和端口号。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取文件描述符。
                     * @return FileDescriptor 文件描述符。
                     * 
                     */
                    int64_t GetFileDescriptor() const;

                    /**
                     * 设置文件描述符。
                     * @param _fileDescriptor 文件描述符。
                     * 
                     */
                    void SetFileDescriptor(const int64_t& _fileDescriptor);

                    /**
                     * 判断参数 FileDescriptor 是否已赋值
                     * @return FileDescriptor 是否已赋值
                     * 
                     */
                    bool FileDescriptorHasBeenSet() const;

                    /**
                     * 获取会话名称，使用 CLIENT SETNAME 命令设置。
                     * @return Name 会话名称，使用 CLIENT SETNAME 命令设置。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置会话名称，使用 CLIENT SETNAME 命令设置。
                     * @param _name 会话名称，使用 CLIENT SETNAME 命令设置。
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
                     * 获取最后一次执行的命令。
                     * @return LastCommand 最后一次执行的命令。
                     * 
                     */
                    std::string GetLastCommand() const;

                    /**
                     * 设置最后一次执行的命令。
                     * @param _lastCommand 最后一次执行的命令。
                     * 
                     */
                    void SetLastCommand(const std::string& _lastCommand);

                    /**
                     * 判断参数 LastCommand 是否已赋值
                     * @return LastCommand 是否已赋值
                     * 
                     */
                    bool LastCommandHasBeenSet() const;

                    /**
                     * 获取会话存活时间，单位：秒。
                     * @return Age 会话存活时间，单位：秒。
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置会话存活时间，单位：秒。
                     * @param _age 会话存活时间，单位：秒。
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取最后一次执行命令后空闲的时间，单位：秒。
                     * @return Idle 最后一次执行命令后空闲的时间，单位：秒。
                     * 
                     */
                    int64_t GetIdle() const;

                    /**
                     * 设置最后一次执行命令后空闲的时间，单位：秒。
                     * @param _idle 最后一次执行命令后空闲的时间，单位：秒。
                     * 
                     */
                    void SetIdle(const int64_t& _idle);

                    /**
                     * 判断参数 Idle 是否已赋值
                     * @return Idle 是否已赋值
                     * 
                     */
                    bool IdleHasBeenSet() const;

                    /**
                     * 获取会话所属的 Proxy节点 ID。
                     * @return ProxyId 会话所属的 Proxy节点 ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置会话所属的 Proxy节点 ID。
                     * @param _proxyId 会话所属的 Proxy节点 ID。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                private:

                    /**
                     * 会话 ID。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 访问来源，IP 地址和端口号。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 文件描述符。
                     */
                    int64_t m_fileDescriptor;
                    bool m_fileDescriptorHasBeenSet;

                    /**
                     * 会话名称，使用 CLIENT SETNAME 命令设置。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 最后一次执行的命令。
                     */
                    std::string m_lastCommand;
                    bool m_lastCommandHasBeenSet;

                    /**
                     * 会话存活时间，单位：秒。
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 最后一次执行命令后空闲的时间，单位：秒。
                     */
                    int64_t m_idle;
                    bool m_idleHasBeenSet;

                    /**
                     * 会话所属的 Proxy节点 ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROCESS_H_
