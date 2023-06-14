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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DATABASEWHITELISTRULEDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DATABASEWHITELISTRULEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 数据库白名单规则数据
                */
                class DatabaseWhiteListRuleData : public AbstractModel
                {
                public:
                    DatabaseWhiteListRuleData();
                    ~DatabaseWhiteListRuleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问源
                     * @return SourceIp 访问源
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置访问源
                     * @param _sourceIp 访问源
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取访问源类型，1 ip；6 实例；100 资源分组
                     * @return SourceType 访问源类型，1 ip；6 实例；100 资源分组
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置访问源类型，1 ip；6 实例；100 资源分组
                     * @param _sourceType 访问源类型，1 ip；6 实例；100 资源分组
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取访问目的
                     * @return TargetIp 访问目的
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置访问目的
                     * @param _targetIp 访问目的
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取访问目的类型，1 ip；6 实例；100 资源分组
                     * @return TargetType 访问目的类型，1 ip；6 实例；100 资源分组
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置访问目的类型，1 ip；6 实例；100 资源分组
                     * @param _targetType 访问目的类型，1 ip；6 实例；100 资源分组
                     * 
                     */
                    void SetTargetType(const int64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Detail 规则描述
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置规则描述
                     * @param _detail 规则描述
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
                     * 获取是否地域规则，0不是 1是
                     * @return IsRegionRule 是否地域规则，0不是 1是
                     * 
                     */
                    int64_t GetIsRegionRule() const;

                    /**
                     * 设置是否地域规则，0不是 1是
                     * @param _isRegionRule 是否地域规则，0不是 1是
                     * 
                     */
                    void SetIsRegionRule(const int64_t& _isRegionRule);

                    /**
                     * 判断参数 IsRegionRule 是否已赋值
                     * @return IsRegionRule 是否已赋值
                     * 
                     */
                    bool IsRegionRuleHasBeenSet() const;

                    /**
                     * 获取是否云厂商规则，0不是 1 时
                     * @return IsCloudRule 是否云厂商规则，0不是 1 时
                     * 
                     */
                    int64_t GetIsCloudRule() const;

                    /**
                     * 设置是否云厂商规则，0不是 1 时
                     * @param _isCloudRule 是否云厂商规则，0不是 1 时
                     * 
                     */
                    void SetIsCloudRule(const int64_t& _isCloudRule);

                    /**
                     * 判断参数 IsCloudRule 是否已赋值
                     * @return IsCloudRule 是否已赋值
                     * 
                     */
                    bool IsCloudRuleHasBeenSet() const;

                    /**
                     * 获取是否启用，0 不启用，1启用
                     * @return Enable 是否启用，0 不启用，1启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用，0 不启用，1启用
                     * @param _enable 是否启用，0 不启用，1启用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取地域码1
                     * @return FirstLevelRegionCode 地域码1
                     * 
                     */
                    int64_t GetFirstLevelRegionCode() const;

                    /**
                     * 设置地域码1
                     * @param _firstLevelRegionCode 地域码1
                     * 
                     */
                    void SetFirstLevelRegionCode(const int64_t& _firstLevelRegionCode);

                    /**
                     * 判断参数 FirstLevelRegionCode 是否已赋值
                     * @return FirstLevelRegionCode 是否已赋值
                     * 
                     */
                    bool FirstLevelRegionCodeHasBeenSet() const;

                    /**
                     * 获取地域码2
                     * @return SecondLevelRegionCode 地域码2
                     * 
                     */
                    int64_t GetSecondLevelRegionCode() const;

                    /**
                     * 设置地域码2
                     * @param _secondLevelRegionCode 地域码2
                     * 
                     */
                    void SetSecondLevelRegionCode(const int64_t& _secondLevelRegionCode);

                    /**
                     * 判断参数 SecondLevelRegionCode 是否已赋值
                     * @return SecondLevelRegionCode 是否已赋值
                     * 
                     */
                    bool SecondLevelRegionCodeHasBeenSet() const;

                    /**
                     * 获取地域名称1
                     * @return FirstLevelRegionName 地域名称1
                     * 
                     */
                    std::string GetFirstLevelRegionName() const;

                    /**
                     * 设置地域名称1
                     * @param _firstLevelRegionName 地域名称1
                     * 
                     */
                    void SetFirstLevelRegionName(const std::string& _firstLevelRegionName);

                    /**
                     * 判断参数 FirstLevelRegionName 是否已赋值
                     * @return FirstLevelRegionName 是否已赋值
                     * 
                     */
                    bool FirstLevelRegionNameHasBeenSet() const;

                    /**
                     * 获取地域名称2
                     * @return SecondLevelRegionName 地域名称2
                     * 
                     */
                    std::string GetSecondLevelRegionName() const;

                    /**
                     * 设置地域名称2
                     * @param _secondLevelRegionName 地域名称2
                     * 
                     */
                    void SetSecondLevelRegionName(const std::string& _secondLevelRegionName);

                    /**
                     * 判断参数 SecondLevelRegionName 是否已赋值
                     * @return SecondLevelRegionName 是否已赋值
                     * 
                     */
                    bool SecondLevelRegionNameHasBeenSet() const;

                    /**
                     * 获取云厂商码
                     * @return CloudCode 云厂商码
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置云厂商码
                     * @param _cloudCode 云厂商码
                     * 
                     */
                    void SetCloudCode(const std::string& _cloudCode);

                    /**
                     * 判断参数 CloudCode 是否已赋值
                     * @return CloudCode 是否已赋值
                     * 
                     */
                    bool CloudCodeHasBeenSet() const;

                private:

                    /**
                     * 访问源
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 访问源类型，1 ip；6 实例；100 资源分组
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 访问目的
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * 访问目的类型，1 ip；6 实例；100 资源分组
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 是否地域规则，0不是 1是
                     */
                    int64_t m_isRegionRule;
                    bool m_isRegionRuleHasBeenSet;

                    /**
                     * 是否云厂商规则，0不是 1 时
                     */
                    int64_t m_isCloudRule;
                    bool m_isCloudRuleHasBeenSet;

                    /**
                     * 是否启用，0 不启用，1启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 地域码1
                     */
                    int64_t m_firstLevelRegionCode;
                    bool m_firstLevelRegionCodeHasBeenSet;

                    /**
                     * 地域码2
                     */
                    int64_t m_secondLevelRegionCode;
                    bool m_secondLevelRegionCodeHasBeenSet;

                    /**
                     * 地域名称1
                     */
                    std::string m_firstLevelRegionName;
                    bool m_firstLevelRegionNameHasBeenSet;

                    /**
                     * 地域名称2
                     */
                    std::string m_secondLevelRegionName;
                    bool m_secondLevelRegionNameHasBeenSet;

                    /**
                     * 云厂商码
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DATABASEWHITELISTRULEDATA_H_
