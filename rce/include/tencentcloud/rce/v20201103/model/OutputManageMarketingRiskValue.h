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
                     * 获取账号ID：对应输入参数。
当AccountType为1时，对应QQ的OpenId；
当AccountType为2时，对应微信的OpenId/UnionId；
当AccountType为10004时，对应手机号的MD5值；
当AccountType为10005时，对应手机号的SHA256值。
                     * @return UserId 账号ID：对应输入参数。
当AccountType为1时，对应QQ的OpenId；
当AccountType为2时，对应微信的OpenId/UnionId；
当AccountType为10004时，对应手机号的MD5值；
当AccountType为10005时，对应手机号的SHA256值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置账号ID：对应输入参数。
当AccountType为1时，对应QQ的OpenId；
当AccountType为2时，对应微信的OpenId/UnionId；
当AccountType为10004时，对应手机号的MD5值；
当AccountType为10005时，对应手机号的SHA256值。
                     * @param _userId 账号ID：对应输入参数。
当AccountType为1时，对应QQ的OpenId；
当AccountType为2时，对应微信的OpenId/UnionId；
当AccountType为10004时，对应手机号的MD5值；
当AccountType为10005时，对应手机号的SHA256值。
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
                     * 获取操作时间戳，单位秒（对应输入参数）。
                     * @return PostTime 操作时间戳，单位秒（对应输入参数）。
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置操作时间戳，单位秒（对应输入参数）。
                     * @param _postTime 操作时间戳，单位秒（对应输入参数）。
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
                     * 获取业务预留参数（暂无实际业务含义， 无需关注返回值）
                     * @return AssociateAccount 业务预留参数（暂无实际业务含义， 无需关注返回值）
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置业务预留参数（暂无实际业务含义， 无需关注返回值）
                     * @param _associateAccount 业务预留参数（暂无实际业务含义， 无需关注返回值）
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
                     * 获取操作来源的外网IP（对应输入参数）。
                     * @return UserIp 操作来源的外网IP（对应输入参数）。
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置操作来源的外网IP（对应输入参数）。
                     * @param _userIp 操作来源的外网IP（对应输入参数）。
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
                     * 获取风险等级
pass：无恶意
review：低风险，需要人工审核
reject：高风险，建议拦截
                     * @return RiskLevel 风险等级
pass：无恶意
review：低风险，需要人工审核
reject：高风险，建议拦截
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
pass：无恶意
review：低风险，需要人工审核
reject：高风险，建议拦截
                     * @param _riskLevel 风险等级
pass：无恶意
review：低风险，需要人工审核
reject：高风险，建议拦截
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
                     * 获取风险类型，可能同时命中多个风险类型
1: 账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素。
11: 疑似低活跃账号，账号活跃度与正常用户有差异。
2: 垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报。
21: 疑似小号，账号有疑似线上养号，小号等行为。
22: 疑似违规账号，账号曾有违规行为、曾被举报过、曾因违规被处罚过等。
3: 无效账号，送检账号参数无法成功解析，请检查微信 OpenId 是否有误/AppId 与 QQ OpenId 无法关联/微信 OpenId 权限是否开通/手机号是否为中国大陆手机号；
4: 黑名单，该账号在业务侧有过拉黑记录。
5: 白名单，业务自行有添加过白名单记录。
101: 批量操作，存在 IP/设备/环境等因素的聚集性异常。
1011: 疑似 IP 属性聚集，出现 IP 聚集。
1012: 疑似设备属性聚集，出现设备聚集。
102: 自动机，疑似自动机批量请求。
103: 恶意行为-网赚，疑似网赚。
104: 微信登录态无效，检查 WeChatAccessToken 参数，是否已经失效。
201: 环境风险，环境异常操作 IP/设备/环境存在异常。当前 IP 为非常用 IP 或恶意 IP 段。
2011: 疑似非常用IP，请求当前请求 IP 非该账号常用 IP。
2012: 疑似 IP 异常，使用 IDC 机房 IP 或使用代理 IP 或使用恶意 IP 等。
205: 非公网有效 IP，传进来的 IP 地址为内网 IP 地址或者 IP 保留地址。
                     * @return RiskType 风险类型，可能同时命中多个风险类型
1: 账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素。
11: 疑似低活跃账号，账号活跃度与正常用户有差异。
2: 垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报。
21: 疑似小号，账号有疑似线上养号，小号等行为。
22: 疑似违规账号，账号曾有违规行为、曾被举报过、曾因违规被处罚过等。
3: 无效账号，送检账号参数无法成功解析，请检查微信 OpenId 是否有误/AppId 与 QQ OpenId 无法关联/微信 OpenId 权限是否开通/手机号是否为中国大陆手机号；
4: 黑名单，该账号在业务侧有过拉黑记录。
5: 白名单，业务自行有添加过白名单记录。
101: 批量操作，存在 IP/设备/环境等因素的聚集性异常。
1011: 疑似 IP 属性聚集，出现 IP 聚集。
1012: 疑似设备属性聚集，出现设备聚集。
102: 自动机，疑似自动机批量请求。
103: 恶意行为-网赚，疑似网赚。
104: 微信登录态无效，检查 WeChatAccessToken 参数，是否已经失效。
201: 环境风险，环境异常操作 IP/设备/环境存在异常。当前 IP 为非常用 IP 或恶意 IP 段。
2011: 疑似非常用IP，请求当前请求 IP 非该账号常用 IP。
2012: 疑似 IP 异常，使用 IDC 机房 IP 或使用代理 IP 或使用恶意 IP 等。
205: 非公网有效 IP，传进来的 IP 地址为内网 IP 地址或者 IP 保留地址。
                     * 
                     */
                    std::vector<int64_t> GetRiskType() const;

                    /**
                     * 设置风险类型，可能同时命中多个风险类型
1: 账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素。
11: 疑似低活跃账号，账号活跃度与正常用户有差异。
2: 垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报。
21: 疑似小号，账号有疑似线上养号，小号等行为。
22: 疑似违规账号，账号曾有违规行为、曾被举报过、曾因违规被处罚过等。
3: 无效账号，送检账号参数无法成功解析，请检查微信 OpenId 是否有误/AppId 与 QQ OpenId 无法关联/微信 OpenId 权限是否开通/手机号是否为中国大陆手机号；
4: 黑名单，该账号在业务侧有过拉黑记录。
5: 白名单，业务自行有添加过白名单记录。
101: 批量操作，存在 IP/设备/环境等因素的聚集性异常。
1011: 疑似 IP 属性聚集，出现 IP 聚集。
1012: 疑似设备属性聚集，出现设备聚集。
102: 自动机，疑似自动机批量请求。
103: 恶意行为-网赚，疑似网赚。
104: 微信登录态无效，检查 WeChatAccessToken 参数，是否已经失效。
201: 环境风险，环境异常操作 IP/设备/环境存在异常。当前 IP 为非常用 IP 或恶意 IP 段。
2011: 疑似非常用IP，请求当前请求 IP 非该账号常用 IP。
2012: 疑似 IP 异常，使用 IDC 机房 IP 或使用代理 IP 或使用恶意 IP 等。
205: 非公网有效 IP，传进来的 IP 地址为内网 IP 地址或者 IP 保留地址。
                     * @param _riskType 风险类型，可能同时命中多个风险类型
1: 账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素。
11: 疑似低活跃账号，账号活跃度与正常用户有差异。
2: 垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报。
21: 疑似小号，账号有疑似线上养号，小号等行为。
22: 疑似违规账号，账号曾有违规行为、曾被举报过、曾因违规被处罚过等。
3: 无效账号，送检账号参数无法成功解析，请检查微信 OpenId 是否有误/AppId 与 QQ OpenId 无法关联/微信 OpenId 权限是否开通/手机号是否为中国大陆手机号；
4: 黑名单，该账号在业务侧有过拉黑记录。
5: 白名单，业务自行有添加过白名单记录。
101: 批量操作，存在 IP/设备/环境等因素的聚集性异常。
1011: 疑似 IP 属性聚集，出现 IP 聚集。
1012: 疑似设备属性聚集，出现设备聚集。
102: 自动机，疑似自动机批量请求。
103: 恶意行为-网赚，疑似网赚。
104: 微信登录态无效，检查 WeChatAccessToken 参数，是否已经失效。
201: 环境风险，环境异常操作 IP/设备/环境存在异常。当前 IP 为非常用 IP 或恶意 IP 段。
2011: 疑似非常用IP，请求当前请求 IP 非该账号常用 IP。
2012: 疑似 IP 异常，使用 IDC 机房 IP 或使用代理 IP 或使用恶意 IP 等。
205: 非公网有效 IP，传进来的 IP 地址为内网 IP 地址或者 IP 保留地址。
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
                     * 获取设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回"-1"标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。
                     * @return ConstId 设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回"-1"标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。
                     * 
                     */
                    std::string GetConstId() const;

                    /**
                     * 设置设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回"-1"标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。
                     * @param _constId 设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回"-1"标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。
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
                     * 获取风险扩展数据。
                     * @return RiskInformation 风险扩展数据。
                     * 
                     */
                    std::string GetRiskInformation() const;

                    /**
                     * 设置风险扩展数据。
                     * @param _riskInformation 风险扩展数据。
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
                     * 账号ID：对应输入参数。
当AccountType为1时，对应QQ的OpenId；
当AccountType为2时，对应微信的OpenId/UnionId；
当AccountType为10004时，对应手机号的MD5值；
当AccountType为10005时，对应手机号的SHA256值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 操作时间戳，单位秒（对应输入参数）。
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 业务预留参数（暂无实际业务含义， 无需关注返回值）
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 操作来源的外网IP（对应输入参数）。
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 风险等级
pass：无恶意
review：低风险，需要人工审核
reject：高风险，建议拦截
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险类型，可能同时命中多个风险类型
1: 账号信用低，账号近期存在因恶意被处罚历史，网络低活跃，被举报等因素。
11: 疑似低活跃账号，账号活跃度与正常用户有差异。
2: 垃圾账号，疑似批量注册小号，近期存在严重违规或大量举报。
21: 疑似小号，账号有疑似线上养号，小号等行为。
22: 疑似违规账号，账号曾有违规行为、曾被举报过、曾因违规被处罚过等。
3: 无效账号，送检账号参数无法成功解析，请检查微信 OpenId 是否有误/AppId 与 QQ OpenId 无法关联/微信 OpenId 权限是否开通/手机号是否为中国大陆手机号；
4: 黑名单，该账号在业务侧有过拉黑记录。
5: 白名单，业务自行有添加过白名单记录。
101: 批量操作，存在 IP/设备/环境等因素的聚集性异常。
1011: 疑似 IP 属性聚集，出现 IP 聚集。
1012: 疑似设备属性聚集，出现设备聚集。
102: 自动机，疑似自动机批量请求。
103: 恶意行为-网赚，疑似网赚。
104: 微信登录态无效，检查 WeChatAccessToken 参数，是否已经失效。
201: 环境风险，环境异常操作 IP/设备/环境存在异常。当前 IP 为非常用 IP 或恶意 IP 段。
2011: 疑似非常用IP，请求当前请求 IP 非该账号常用 IP。
2012: 疑似 IP 异常，使用 IDC 机房 IP 或使用代理 IP 或使用恶意 IP 等。
205: 非公网有效 IP，传进来的 IP 地址为内网 IP 地址或者 IP 保留地址。
                     */
                    std::vector<int64_t> m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 设备指纹ID，如果集成了设备指纹，并传入了正确的DeviceToken和Platform，该字段正常输出；如果DeviceToken异常（校验不通过），则会在RiskType中返回"-1"标签，ConstId字段为空；如果没有集成设备指纹ConstId字段默认为空。
                     */
                    std::string m_constId;
                    bool m_constIdHasBeenSet;

                    /**
                     * 风险扩展数据。
                     */
                    std::string m_riskInformation;
                    bool m_riskInformationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTMANAGEMARKETINGRISKVALUE_H_
