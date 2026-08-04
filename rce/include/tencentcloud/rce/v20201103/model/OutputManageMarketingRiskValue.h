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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTMANAGEMARKETINGRISKVALUE_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTMANAGEMARKETINGRISKVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 全栈式风控引擎出参值
                */
                class OutputManageMarketingRiskValue : public AbstractModel
                {
                public:
                    OutputManageMarketingRiskValue();
                    ~OutputManageMarketingRiskValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账号ID：对应输入参数。<br>当AccountType为1时，对应QQ的OpenId；<br>当AccountType为2时，对应微信的OpenId/UnionId；<br>当AccountType为10004时，对应手机号的MD5值；<br>当AccountType为10005时，对应手机号的SHA256值。</p>
                     * @return UserId <p>账号ID：对应输入参数。<br>当AccountType为1时，对应QQ的OpenId；<br>当AccountType为2时，对应微信的OpenId/UnionId；<br>当AccountType为10004时，对应手机号的MD5值；<br>当AccountType为10005时，对应手机号的SHA256值。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>账号ID：对应输入参数。<br>当AccountType为1时，对应QQ的OpenId；<br>当AccountType为2时，对应微信的OpenId/UnionId；<br>当AccountType为10004时，对应手机号的MD5值；<br>当AccountType为10005时，对应手机号的SHA256值。</p>
                     * @param _userId <p>账号ID：对应输入参数。<br>当AccountType为1时，对应QQ的OpenId；<br>当AccountType为2时，对应微信的OpenId/UnionId；<br>当AccountType为10004时，对应手机号的MD5值；<br>当AccountType为10005时，对应手机号的SHA256值。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>操作时间戳，单位秒（对应输入参数）。</p>
                     * @return PostTime <p>操作时间戳，单位秒（对应输入参数）。</p>
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置<p>操作时间戳，单位秒（对应输入参数）。</p>
                     * @param _postTime <p>操作时间戳，单位秒（对应输入参数）。</p>
                     * 
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取<p>业务预留参数（暂无实际业务含义， 无需关注返回值）</p>
                     * @return AssociateAccount <p>业务预留参数（暂无实际业务含义， 无需关注返回值）</p>
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置<p>业务预留参数（暂无实际业务含义， 无需关注返回值）</p>
                     * @param _associateAccount <p>业务预留参数（暂无实际业务含义， 无需关注返回值）</p>
                     * 
                     */
                    void SetAssociateAccount(const std::string& _associateAccount);

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     * 
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取<p>操作来源的外网IP（对应输入参数）。</p>
                     * @return UserIp <p>操作来源的外网IP（对应输入参数）。</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>操作来源的外网IP（对应输入参数）。</p>
                     * @param _userIp <p>操作来源的外网IP（对应输入参数）。</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取<p>风险等级<br>pass：无恶意<br>review：低风险，需要人工审核<br>reject：高风险，建议拦截</p>
                     * @return RiskLevel <p>风险等级<br>pass：无恶意<br>review：低风险，需要人工审核<br>reject：高风险，建议拦截</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级<br>pass：无恶意<br>review：低风险，需要人工审核<br>reject：高风险，建议拦截</p>
                     * @param _riskLevel <p>风险等级<br>pass：无恶意<br>review：低风险，需要人工审核<br>reject：高风险，建议拦截</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>风险类型，可能同时命中多个风险类型<br>1: 账号信用低。<br>11: 疑似低活跃账号。<br>2: 垃圾账号。<br>21: 疑似小号。<br>22: 疑似违规账号。<br>3: 无效账号。<br>4: 黑名单。<br>5: 白名单。<br>101: 批量操作。<br>1011: 疑似 IP 属性聚集。<br>1012: 疑似设备属性聚集。<br>102: 自动机。<br>103: 恶意行为。<br>104: 登录态无效。<br>201: 环境风险。<br>2011: 疑似非常用IP。<br>2012: 疑似 IP 异常。<br>205: 非公网有效 IP。</p>
                     * @return RiskType <p>风险类型，可能同时命中多个风险类型<br>1: 账号信用低。<br>11: 疑似低活跃账号。<br>2: 垃圾账号。<br>21: 疑似小号。<br>22: 疑似违规账号。<br>3: 无效账号。<br>4: 黑名单。<br>5: 白名单。<br>101: 批量操作。<br>1011: 疑似 IP 属性聚集。<br>1012: 疑似设备属性聚集。<br>102: 自动机。<br>103: 恶意行为。<br>104: 登录态无效。<br>201: 环境风险。<br>2011: 疑似非常用IP。<br>2012: 疑似 IP 异常。<br>205: 非公网有效 IP。</p>
                     * 
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 设置<p>风险类型，可能同时命中多个风险类型<br>1: 账号信用低。<br>11: 疑似低活跃账号。<br>2: 垃圾账号。<br>21: 疑似小号。<br>22: 疑似违规账号。<br>3: 无效账号。<br>4: 黑名单。<br>5: 白名单。<br>101: 批量操作。<br>1011: 疑似 IP 属性聚集。<br>1012: 疑似设备属性聚集。<br>102: 自动机。<br>103: 恶意行为。<br>104: 登录态无效。<br>201: 环境风险。<br>2011: 疑似非常用IP。<br>2012: 疑似 IP 异常。<br>205: 非公网有效 IP。</p>
                     * @param _riskType <p>风险类型，可能同时命中多个风险类型<br>1: 账号信用低。<br>11: 疑似低活跃账号。<br>2: 垃圾账号。<br>21: 疑似小号。<br>22: 疑似违规账号。<br>3: 无效账号。<br>4: 黑名单。<br>5: 白名单。<br>101: 批量操作。<br>1011: 疑似 IP 属性聚集。<br>1012: 疑似设备属性聚集。<br>102: 自动机。<br>103: 恶意行为。<br>104: 登录态无效。<br>201: 环境风险。<br>2011: 疑似非常用IP。<br>2012: 疑似 IP 异常。<br>205: 非公网有效 IP。</p>
                     * 
                     */
                    void SetRiskType(const std::vector<int64_t>& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回&quot;-1&quot;标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。</p>
                     * @return ConstId <p>设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回&quot;-1&quot;标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。</p>
                     * 
                     */
                    std::string GetConstId() const;

                    /**
                     * 设置<p>设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回&quot;-1&quot;标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。</p>
                     * @param _constId <p>设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回&quot;-1&quot;标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。</p>
                     * 
                     */
                    void SetConstId(const std::string& _constId);

                    /**
                     * 判断参数 ConstId 是否已赋值
                     * @return ConstId 是否已赋值
                     * 
                     */
                    bool ConstIdHasBeenSet() const;

                    /**
                     * 获取<p>风险扩展数据。</p>
                     * @return RiskInformation <p>风险扩展数据。</p>
                     * 
                     */
                    std::string GetRiskInformation() const;

                    /**
                     * 设置<p>风险扩展数据。</p>
                     * @param _riskInformation <p>风险扩展数据。</p>
                     * 
                     */
                    void SetRiskInformation(const std::string& _riskInformation);

                    /**
                     * 判断参数 RiskInformation 是否已赋值
                     * @return RiskInformation 是否已赋值
                     * 
                     */
                    bool RiskInformationHasBeenSet() const;

                private:

                    /**
                     * <p>账号ID：对应输入参数。<br>当AccountType为1时，对应QQ的OpenId；<br>当AccountType为2时，对应微信的OpenId/UnionId；<br>当AccountType为10004时，对应手机号的MD5值；<br>当AccountType为10005时，对应手机号的SHA256值。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>操作时间戳，单位秒（对应输入参数）。</p>
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * <p>业务预留参数（暂无实际业务含义， 无需关注返回值）</p>
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * <p>操作来源的外网IP（对应输入参数）。</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * <p>风险等级<br>pass：无恶意<br>review：低风险，需要人工审核<br>reject：高风险，建议拦截</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>风险类型，可能同时命中多个风险类型<br>1: 账号信用低。<br>11: 疑似低活跃账号。<br>2: 垃圾账号。<br>21: 疑似小号。<br>22: 疑似违规账号。<br>3: 无效账号。<br>4: 黑名单。<br>5: 白名单。<br>101: 批量操作。<br>1011: 疑似 IP 属性聚集。<br>1012: 疑似设备属性聚集。<br>102: 自动机。<br>103: 恶意行为。<br>104: 登录态无效。<br>201: 环境风险。<br>2011: 疑似非常用IP。<br>2012: 疑似 IP 异常。<br>205: 非公网有效 IP。</p>
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * <p>设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回&quot;-1&quot;标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。</p>
                     */
                    std::string m_constId;
                    bool m_constIdHasBeenSet;

                    /**
                     * <p>风险扩展数据。</p>
                     */
                    std::string m_riskInformation;
                    bool m_riskInformationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTMANAGEMARKETINGRISKVALUE_H_
