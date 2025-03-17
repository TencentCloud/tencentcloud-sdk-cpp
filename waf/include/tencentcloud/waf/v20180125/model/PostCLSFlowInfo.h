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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_POSTCLSFLOWINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_POSTCLSFLOWINFO_H_

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
                class PostCLSFlowInfo : public AbstractModel
                {
                public:
                    PostCLSFlowInfo();
                    ~PostCLSFlowInfo() = default;
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
                     * 获取CLS所在区域
                     * @return CLSRegion CLS所在区域
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置CLS所在区域
                     * @param _cLSRegion CLS所在区域
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
                     * 获取CLS日志集合名称
                     * @return LogsetName CLS日志集合名称
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置CLS日志集合名称
                     * @param _logsetName CLS日志集合名称
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
                     * 获取CLS日志集合ID
                     * @return LogsetID CLS日志集合ID
                     * 
                     */
                    std::string GetLogsetID() const;

                    /**
                     * 设置CLS日志集合ID
                     * @param _logsetID CLS日志集合ID
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
                     * 获取CLS日志主题名称
                     * @return LogTopicName CLS日志主题名称
                     * 
                     */
                    std::string GetLogTopicName() const;

                    /**
                     * 设置CLS日志主题名称
                     * @param _logTopicName CLS日志主题名称
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
                     * 获取CLS日志集合ID
                     * @return LogTopicID CLS日志集合ID
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置CLS日志集合ID
                     * @param _logTopicID CLS日志集合ID
                     * 
                     */
                    void SetLogTopicID(const std::string& _logTopicID);

                    /**
                     * 判断参数 LogTopicID 是否已赋值
                     * @return LogTopicID 是否已赋值
                     * 
                     */
                    bool LogTopicIDHasBeenSet() const;

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
                     * CLS所在区域
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * CLS日志集合名称
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * CLS日志集合ID
                     */
                    std::string m_logsetID;
                    bool m_logsetIDHasBeenSet;

                    /**
                     * CLS日志主题名称
                     */
                    std::string m_logTopicName;
                    bool m_logTopicNameHasBeenSet;

                    /**
                     * CLS日志集合ID
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_POSTCLSFLOWINFO_H_
