/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGRESULT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGRESULT_H_

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
                * 日志结果
                */
                class LogResult : public AbstractModel
                {
                public:
                    LogResult();
                    ~LogResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库ID</p>
                     * @return DBId <p>数据库ID</p>
                     * 
                     */
                    int64_t GetDBId() const;

                    /**
                     * 设置<p>数据库ID</p>
                     * @param _dBId <p>数据库ID</p>
                     * 
                     */
                    void SetDBId(const int64_t& _dBId);

                    /**
                     * 判断参数 DBId 是否已赋值
                     * @return DBId 是否已赋值
                     * 
                     */
                    bool DBIdHasBeenSet() const;

                    /**
                     * 获取<p>命令延迟（毫秒）</p>
                     * @return CommandLatency <p>命令延迟（毫秒）</p>
                     * 
                     */
                    int64_t GetCommandLatency() const;

                    /**
                     * 设置<p>命令延迟（毫秒）</p>
                     * @param _commandLatency <p>命令延迟（毫秒）</p>
                     * 
                     */
                    void SetCommandLatency(const int64_t& _commandLatency);

                    /**
                     * 判断参数 CommandLatency 是否已赋值
                     * @return CommandLatency 是否已赋值
                     * 
                     */
                    bool CommandLatencyHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（格式：2006-01-02 15:04:05.000）</p>
                     * @return Timestamp <p>创建时间（格式：2006-01-02 15:04:05.000）</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>创建时间（格式：2006-01-02 15:04:05.000）</p>
                     * @param _timestamp <p>创建时间（格式：2006-01-02 15:04:05.000）</p>
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>客户端地址</p>
                     * @return ClientAddr <p>客户端地址</p>
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置<p>客户端地址</p>
                     * @param _clientAddr <p>客户端地址</p>
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>命令类型</p>
                     * @return CommandType <p>命令类型</p>
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置<p>命令类型</p>
                     * @param _commandType <p>命令类型</p>
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取<p>缓存代码，后端redis节点</p>
                     * @return CacheCode <p>缓存代码，后端redis节点</p>
                     * 
                     */
                    std::string GetCacheCode() const;

                    /**
                     * 设置<p>缓存代码，后端redis节点</p>
                     * @param _cacheCode <p>缓存代码，后端redis节点</p>
                     * 
                     */
                    void SetCacheCode(const std::string& _cacheCode);

                    /**
                     * 判断参数 CacheCode 是否已赋值
                     * @return CacheCode 是否已赋值
                     * 
                     */
                    bool CacheCodeHasBeenSet() const;

                    /**
                     * 获取<p>命令详情</p>
                     * @return CommandDetail <p>命令详情</p>
                     * 
                     */
                    std::string GetCommandDetail() const;

                    /**
                     * 设置<p>命令详情</p>
                     * @param _commandDetail <p>命令详情</p>
                     * 
                     */
                    void SetCommandDetail(const std::string& _commandDetail);

                    /**
                     * 判断参数 CommandDetail 是否已赋值
                     * @return CommandDetail 是否已赋值
                     * 
                     */
                    bool CommandDetailHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errMsg <p>错误信息</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>数据库ID</p>
                     */
                    int64_t m_dBId;
                    bool m_dBIdHasBeenSet;

                    /**
                     * <p>命令延迟（毫秒）</p>
                     */
                    int64_t m_commandLatency;
                    bool m_commandLatencyHasBeenSet;

                    /**
                     * <p>创建时间（格式：2006-01-02 15:04:05.000）</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>客户端地址</p>
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>命令类型</p>
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * <p>缓存代码，后端redis节点</p>
                     */
                    std::string m_cacheCode;
                    bool m_cacheCodeHasBeenSet;

                    /**
                     * <p>命令详情</p>
                     */
                    std::string m_commandDetail;
                    bool m_commandDetailHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGRESULT_H_
