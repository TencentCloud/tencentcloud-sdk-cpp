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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_SGRULERESP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_SGRULERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 规则列表响应数据结构
                */
                class SgRuleResp : public AbstractModel
                {
                public:
                    SgRuleResp();
                    ~SgRuleResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Sequence 优先级
                     * 
                     */
                    int64_t GetSequence() const;

                    /**
                     * 设置优先级
                     * @param _sequence 优先级
                     * 
                     */
                    void SetSequence(const int64_t& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取ip类型
                     * @return IpVersion ip类型
                     * 
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置ip类型
                     * @param _ipVersion ip类型
                     * 
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取源内容
                     * @return SrcContent 源内容
                     * 
                     */
                    std::string GetSrcContent() const;

                    /**
                     * 设置源内容
                     * @param _srcContent 源内容
                     * 
                     */
                    void SetSrcContent(const std::string& _srcContent);

                    /**
                     * 判断参数 SrcContent 是否已赋值
                     * @return SrcContent 是否已赋值
                     * 
                     */
                    bool SrcContentHasBeenSet() const;

                    /**
                     * 获取源类型
                     * @return SrcType 源类型
                     * 
                     */
                    std::string GetSrcType() const;

                    /**
                     * 设置源类型
                     * @param _srcType 源类型
                     * 
                     */
                    void SetSrcType(const std::string& _srcType);

                    /**
                     * 判断参数 SrcType 是否已赋值
                     * @return SrcType 是否已赋值
                     * 
                     */
                    bool SrcTypeHasBeenSet() const;

                    /**
                     * 获取目的内容
                     * @return DstContent 目的内容
                     * 
                     */
                    std::string GetDstContent() const;

                    /**
                     * 设置目的内容
                     * @param _dstContent 目的内容
                     * 
                     */
                    void SetDstContent(const std::string& _dstContent);

                    /**
                     * 判断参数 DstContent 是否已赋值
                     * @return DstContent 是否已赋值
                     * 
                     */
                    bool DstContentHasBeenSet() const;

                    /**
                     * 获取目的类型
                     * @return DstType 目的类型
                     * 
                     */
                    std::string GetDstType() const;

                    /**
                     * 设置目的类型
                     * @param _dstType 目的类型
                     * 
                     */
                    void SetDstType(const std::string& _dstType);

                    /**
                     * 判断参数 DstType 是否已赋值
                     * @return DstType 是否已赋值
                     * 
                     */
                    bool DstTypeHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取协议端口参数模板
                     * @return ProtocolPortType 协议端口参数模板
                     * 
                     */
                    int64_t GetProtocolPortType() const;

                    /**
                     * 设置协议端口参数模板
                     * @param _protocolPortType 协议端口参数模板
                     * 
                     */
                    void SetProtocolPortType(const int64_t& _protocolPortType);

                    /**
                     * 判断参数 ProtocolPortType 是否已赋值
                     * @return ProtocolPortType 是否已赋值
                     * 
                     */
                    bool ProtocolPortTypeHasBeenSet() const;

                    /**
                     * 获取协议端口参数模板id
                     * @return ServiceTemplateId 协议端口参数模板id
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置协议端口参数模板id
                     * @param _serviceTemplateId 协议端口参数模板id
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取端口段,支持单端口,多端口和端口段
                     * @return DstPort 端口段,支持单端口,多端口和端口段
                     * 
                     */
                    std::string GetDstPort() const;

                    /**
                     * 设置端口段,支持单端口,多端口和端口段
                     * @param _dstPort 端口段,支持单端口,多端口和端口段
                     * 
                     */
                    void SetDstPort(const std::string& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取策略，1阻断，2放行
                     * @return RuleAction 策略，1阻断，2放行
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置策略，1阻断，2放行
                     * @param _ruleAction 策略，1阻断，2放行
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Detail 描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置描述
                     * @param _detail 描述
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取规则来源，0为用户控制台添加
                     * @return RuleSource 规则来源，0为用户控制台添加
                     * 
                     */
                    std::string GetRuleSource() const;

                    /**
                     * 设置规则来源，0为用户控制台添加
                     * @param _ruleSource 规则来源，0为用户控制台添加
                     * 
                     */
                    void SetRuleSource(const std::string& _ruleSource);

                    /**
                     * 判断参数 RuleSource 是否已赋值
                     * @return RuleSource 是否已赋值
                     * 
                     */
                    bool RuleSourceHasBeenSet() const;

                    /**
                     * 获取生效范围,字节位,1:SG 企业安全组,2:LH 轻量服务器
                     * @return Scope 生效范围,字节位,1:SG 企业安全组,2:LH 轻量服务器
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置生效范围,字节位,1:SG 企业安全组,2:LH 轻量服务器
                     * @param _scope 生效范围,字节位,1:SG 企业安全组,2:LH 轻量服务器
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * ip类型
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * 源内容
                     */
                    std::string m_srcContent;
                    bool m_srcContentHasBeenSet;

                    /**
                     * 源类型
                     */
                    std::string m_srcType;
                    bool m_srcTypeHasBeenSet;

                    /**
                     * 目的内容
                     */
                    std::string m_dstContent;
                    bool m_dstContentHasBeenSet;

                    /**
                     * 目的类型
                     */
                    std::string m_dstType;
                    bool m_dstTypeHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 协议端口参数模板
                     */
                    int64_t m_protocolPortType;
                    bool m_protocolPortTypeHasBeenSet;

                    /**
                     * 协议端口参数模板id
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 端口段,支持单端口,多端口和端口段
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 策略，1阻断，2放行
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 规则来源，0为用户控制台添加
                     */
                    std::string m_ruleSource;
                    bool m_ruleSourceHasBeenSet;

                    /**
                     * 生效范围,字节位,1:SG 企业安全组,2:LH 轻量服务器
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_SGRULERESP_H_
