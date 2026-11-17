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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_POSTCLSFLOWINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_POSTCLSFLOWINFO_H_

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
                class PostCLSFlowInfo : public AbstractModel
                {
                public:
                    PostCLSFlowInfo();
                    ~PostCLSFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>投递流唯一ID</p>
                     * @return FlowId <p>投递流唯一ID</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置<p>投递流唯一ID</p>
                     * @param _flowId <p>投递流唯一ID</p>
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
                     * 获取<p>1-访问日志 2-攻击日志</p>
                     * @return LogType <p>1-访问日志 2-攻击日志</p>
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置<p>1-访问日志 2-攻击日志</p>
                     * @param _logType <p>1-访问日志 2-攻击日志</p>
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
                     * 获取<p>状态 0-为关闭 1-为启用</p>
                     * @return Status <p>状态 0-为关闭 1-为启用</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态 0-为关闭 1-为启用</p>
                     * @param _status <p>状态 0-为关闭 1-为启用</p>
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
                     * 获取<p>CLS所在区域</p>
                     * @return CLSRegion <p>CLS所在区域</p>
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置<p>CLS所在区域</p>
                     * @param _cLSRegion <p>CLS所在区域</p>
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志集合名称</p>
                     * @return LogsetName <p>CLS日志集合名称</p>
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置<p>CLS日志集合名称</p>
                     * @param _logsetName <p>CLS日志集合名称</p>
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志集合ID</p>
                     * @return LogsetID <p>CLS日志集合ID</p>
                     * 
                     */
                    std::string GetLogsetID() const;

                    /**
                     * 设置<p>CLS日志集合ID</p>
                     * @param _logsetID <p>CLS日志集合ID</p>
                     * 
                     */
                    void SetLogsetID(const std::string& _logsetID);

                    /**
                     * 判断参数 LogsetID 是否已赋值
                     * @return LogsetID 是否已赋值
                     * 
                     */
                    bool LogsetIDHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志主题名称</p>
                     * @return LogTopicName <p>CLS日志主题名称</p>
                     * 
                     */
                    std::string GetLogTopicName() const;

                    /**
                     * 设置<p>CLS日志主题名称</p>
                     * @param _logTopicName <p>CLS日志主题名称</p>
                     * 
                     */
                    void SetLogTopicName(const std::string& _logTopicName);

                    /**
                     * 判断参数 LogTopicName 是否已赋值
                     * @return LogTopicName 是否已赋值
                     * 
                     */
                    bool LogTopicNameHasBeenSet() const;

                    /**
                     * 获取<p>CLS日志集合ID</p>
                     * @return LogTopicID <p>CLS日志集合ID</p>
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置<p>CLS日志集合ID</p>
                     * @param _logTopicID <p>CLS日志集合ID</p>
                     * 
                     */
                    void SetLogTopicID(const std::string& _logTopicID);

                    /**
                     * 判断参数 LogTopicID 是否已赋值
                     * @return LogTopicID 是否已赋值
                     * 
                     */
                    bool LogTopicIDHasBeenSet() const;

                    /**
                     * 获取<p>写配置</p>
                     * @return WriteConfig <p>写配置</p>
                     * 
                     */
                    FieldWriteConfig GetWriteConfig() const;

                    /**
                     * 设置<p>写配置</p>
                     * @param _writeConfig <p>写配置</p>
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
                     * <p>投递流唯一ID</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>1-访问日志 2-攻击日志</p>
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>状态 0-为关闭 1-为启用</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>CLS所在区域</p>
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * <p>CLS日志集合名称</p>
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * <p>CLS日志集合ID</p>
                     */
                    std::string m_logsetID;
                    bool m_logsetIDHasBeenSet;

                    /**
                     * <p>CLS日志主题名称</p>
                     */
                    std::string m_logTopicName;
                    bool m_logTopicNameHasBeenSet;

                    /**
                     * <p>CLS日志集合ID</p>
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * <p>写配置</p>
                     */
                    FieldWriteConfig m_writeConfig;
                    bool m_writeConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_POSTCLSFLOWINFO_H_
