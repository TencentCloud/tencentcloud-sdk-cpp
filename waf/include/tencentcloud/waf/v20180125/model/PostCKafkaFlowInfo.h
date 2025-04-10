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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_POSTCKAFKAFLOWINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_POSTCKAFKAFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CKafka投递流
                */
                class PostCKafkaFlowInfo : public AbstractModel
                {
                public:
                    PostCKafkaFlowInfo();
                    ~PostCKafkaFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递流唯一ID
                     * @return FlowId 投递流唯一ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置投递流唯一ID
                     * @param _flowId 投递流唯一ID
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取1-访问日志 2-攻击日志
                     * @return LogType 1-访问日志 2-攻击日志
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置1-访问日志 2-攻击日志
                     * @param _logType 1-访问日志 2-攻击日志
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取状态 0-为关闭 1-为启用
                     * @return Status 状态 0-为关闭 1-为启用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0-为关闭 1-为启用
                     * @param _status 状态 0-为关闭 1-为启用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CKafka所在区域
                     * @return CKafkaRegion CKafka所在区域
                     * 
                     */
                    std::string GetCKafkaRegion() const;

                    /**
                     * 设置CKafka所在区域
                     * @param _cKafkaRegion CKafka所在区域
                     * 
                     */
                    void SetCKafkaRegion(const std::string& _cKafkaRegion);

                    /**
                     * 判断参数 CKafkaRegion 是否已赋值
                     * @return CKafkaRegion 是否已赋值
                     * 
                     */
                    bool CKafkaRegionHasBeenSet() const;

                    /**
                     * 获取CKafka实例ID
                     * @return CKafkaID CKafka实例ID
                     * 
                     */
                    std::string GetCKafkaID() const;

                    /**
                     * 设置CKafka实例ID
                     * @param _cKafkaID CKafka实例ID
                     * 
                     */
                    void SetCKafkaID(const std::string& _cKafkaID);

                    /**
                     * 判断参数 CKafkaID 是否已赋值
                     * @return CKafkaID 是否已赋值
                     * 
                     */
                    bool CKafkaIDHasBeenSet() const;

                    /**
                     * 获取ckafka地址信息
                     * @return Brokers ckafka地址信息
                     * 
                     */
                    std::string GetBrokers() const;

                    /**
                     * 设置ckafka地址信息
                     * @param _brokers ckafka地址信息
                     * 
                     */
                    void SetBrokers(const std::string& _brokers);

                    /**
                     * 判断参数 Brokers 是否已赋值
                     * @return Brokers 是否已赋值
                     * 
                     */
                    bool BrokersHasBeenSet() const;

                    /**
                     * 获取ckafka版本号
                     * @return Version ckafka版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置ckafka版本号
                     * @param _version ckafka版本号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取主题名称
                     * @return Topic 主题名称
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称
                     * @param _topic 主题名称
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                private:

                    /**
                     * 投递流唯一ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 1-访问日志 2-攻击日志
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 状态 0-为关闭 1-为启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CKafka所在区域
                     */
                    std::string m_cKafkaRegion;
                    bool m_cKafkaRegionHasBeenSet;

                    /**
                     * CKafka实例ID
                     */
                    std::string m_cKafkaID;
                    bool m_cKafkaIDHasBeenSet;

                    /**
                     * ckafka地址信息
                     */
                    std::string m_brokers;
                    bool m_brokersHasBeenSet;

                    /**
                     * ckafka版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 主题名称
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_POSTCKAFKAFLOWINFO_H_
