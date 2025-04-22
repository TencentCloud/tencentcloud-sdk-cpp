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
#include <tencentcloud/waf/v20180125/model/FieldWriteConfig.h>


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

                    /**
                     * 获取压缩算法，支持gzip 和 lz4
                     * @return Compression 压缩算法，支持gzip 和 lz4
                     * 
                     */
                    std::string GetCompression() const;

                    /**
                     * 设置压缩算法，支持gzip 和 lz4
                     * @param _compression 压缩算法，支持gzip 和 lz4
                     * 
                     */
                    void SetCompression(const std::string& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                    /**
                     * 获取是否支持SASL,0-关闭，1-开启
                     * @return SASLEnable 是否支持SASL,0-关闭，1-开启
                     * 
                     */
                    int64_t GetSASLEnable() const;

                    /**
                     * 设置是否支持SASL,0-关闭，1-开启
                     * @param _sASLEnable 是否支持SASL,0-关闭，1-开启
                     * 
                     */
                    void SetSASLEnable(const int64_t& _sASLEnable);

                    /**
                     * 判断参数 SASLEnable 是否已赋值
                     * @return SASLEnable 是否已赋值
                     * 
                     */
                    bool SASLEnableHasBeenSet() const;

                    /**
                     * 获取SASL用户名
                     * @return SASLUser SASL用户名
                     * 
                     */
                    std::string GetSASLUser() const;

                    /**
                     * 设置SASL用户名
                     * @param _sASLUser SASL用户名
                     * 
                     */
                    void SetSASLUser(const std::string& _sASLUser);

                    /**
                     * 判断参数 SASLUser 是否已赋值
                     * @return SASLUser 是否已赋值
                     * 
                     */
                    bool SASLUserHasBeenSet() const;

                    /**
                     * 获取SALS密码
                     * @return SASLPassword SALS密码
                     * 
                     */
                    std::string GetSASLPassword() const;

                    /**
                     * 设置SALS密码
                     * @param _sASLPassword SALS密码
                     * 
                     */
                    void SetSASLPassword(const std::string& _sASLPassword);

                    /**
                     * 判断参数 SASLPassword 是否已赋值
                     * @return SASLPassword 是否已赋值
                     * 
                     */
                    bool SASLPasswordHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Content 描述信息
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置描述信息
                     * @param _content 描述信息
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取1-外网TGW，2-支撑环境，默认为支撑环境
                     * @return VipType 1-外网TGW，2-支撑环境，默认为支撑环境
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置1-外网TGW，2-支撑环境，默认为支撑环境
                     * @param _vipType 1-外网TGW，2-支撑环境，默认为支撑环境
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取配置状态
                     * @return WriteConfig 配置状态
                     * 
                     */
                    FieldWriteConfig GetWriteConfig() const;

                    /**
                     * 设置配置状态
                     * @param _writeConfig 配置状态
                     * 
                     */
                    void SetWriteConfig(const FieldWriteConfig& _writeConfig);

                    /**
                     * 判断参数 WriteConfig 是否已赋值
                     * @return WriteConfig 是否已赋值
                     * 
                     */
                    bool WriteConfigHasBeenSet() const;

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

                    /**
                     * 压缩算法，支持gzip 和 lz4
                     */
                    std::string m_compression;
                    bool m_compressionHasBeenSet;

                    /**
                     * 是否支持SASL,0-关闭，1-开启
                     */
                    int64_t m_sASLEnable;
                    bool m_sASLEnableHasBeenSet;

                    /**
                     * SASL用户名
                     */
                    std::string m_sASLUser;
                    bool m_sASLUserHasBeenSet;

                    /**
                     * SALS密码
                     */
                    std::string m_sASLPassword;
                    bool m_sASLPasswordHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 1-外网TGW，2-支撑环境，默认为支撑环境
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * 配置状态
                     */
                    FieldWriteConfig m_writeConfig;
                    bool m_writeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_POSTCKAFKAFLOWINFO_H_
