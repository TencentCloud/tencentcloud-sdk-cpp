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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_AGENTTAXPAYMENTBATCH_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_AGENTTAXPAYMENTBATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 代理商完税证明批次信息
                */
                class AgentTaxPaymentBatch : public AbstractModel
                {
                public:
                    AgentTaxPaymentBatch();
                    ~AgentTaxPaymentBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态消息
                     * @return StatusMsg 状态消息
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置状态消息
                     * @param _statusMsg 状态消息
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取批次号
                     * @return BatchNum 批次号
                     * 
                     */
                    int64_t GetBatchNum() const;

                    /**
                     * 设置批次号
                     * @param _batchNum 批次号
                     * 
                     */
                    void SetBatchNum(const int64_t& _batchNum);

                    /**
                     * 判断参数 BatchNum 是否已赋值
                     * @return BatchNum 是否已赋值
                     * 
                     */
                    bool BatchNumHasBeenSet() const;

                    /**
                     * 获取录入记录的条数
                     * @return InfoNum 录入记录的条数
                     * 
                     */
                    int64_t GetInfoNum() const;

                    /**
                     * 设置录入记录的条数
                     * @param _infoNum 录入记录的条数
                     * 
                     */
                    void SetInfoNum(const int64_t& _infoNum);

                    /**
                     * 判断参数 InfoNum 是否已赋值
                     * @return InfoNum 是否已赋值
                     * 
                     */
                    bool InfoNumHasBeenSet() const;

                    /**
                     * 获取源电子凭证下载地址
                     * @return RawElectronicCertUrl 源电子凭证下载地址
                     * 
                     */
                    std::string GetRawElectronicCertUrl() const;

                    /**
                     * 设置源电子凭证下载地址
                     * @param _rawElectronicCertUrl 源电子凭证下载地址
                     * 
                     */
                    void SetRawElectronicCertUrl(const std::string& _rawElectronicCertUrl);

                    /**
                     * 判断参数 RawElectronicCertUrl 是否已赋值
                     * @return RawElectronicCertUrl 是否已赋值
                     * 
                     */
                    bool RawElectronicCertUrlHasBeenSet() const;

                    /**
                     * 获取代理商账号
                     * @return AgentId 代理商账号
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置代理商账号
                     * @param _agentId 代理商账号
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取状态码。0表示下载成功
                     * @return StatusCode 状态码。0表示下载成功
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置状态码。0表示下载成功
                     * @param _statusCode 状态码。0表示下载成功
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取渠道号
                     * @return Channel 渠道号
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置渠道号
                     * @param _channel 渠道号
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取0-视同，1-个体工商户
                     * @return Type 0-视同，1-个体工商户
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0-视同，1-个体工商户
                     * @param _type 0-视同，1-个体工商户
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 状态消息
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * 批次号
                     */
                    int64_t m_batchNum;
                    bool m_batchNumHasBeenSet;

                    /**
                     * 录入记录的条数
                     */
                    int64_t m_infoNum;
                    bool m_infoNumHasBeenSet;

                    /**
                     * 源电子凭证下载地址
                     */
                    std::string m_rawElectronicCertUrl;
                    bool m_rawElectronicCertUrlHasBeenSet;

                    /**
                     * 代理商账号
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 状态码。0表示下载成功
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 渠道号
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 0-视同，1-个体工商户
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_AGENTTAXPAYMENTBATCH_H_
