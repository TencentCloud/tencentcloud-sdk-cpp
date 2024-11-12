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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Item.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线规则
                */
                class BaselineRule : public AbstractModel
                {
                public:
                    BaselineRule();
                    ~BaselineRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称,长度不超过128英文字符
                     * @return RuleName 规则名称,长度不超过128英文字符
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称,长度不超过128英文字符
                     * @param _ruleName 规则名称,长度不超过128英文字符
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则类型 [0:系统|1:自定义]
                     * @return RuleType 规则类型 [0:系统|1:自定义]
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型 [0:系统|1:自定义]
                     * @param _ruleType 规则类型 [0:系统|1:自定义]
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则分类
                     * @return CategoryId 规则分类
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置规则分类
                     * @param _categoryId 规则分类
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return RuleDesc 规则描述
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置规则描述
                     * @param _ruleDesc 规则描述
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取主机数
                     * @return HostCount 主机数
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置主机数
                     * @param _hostCount 主机数
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取适配项ID列表
                     * @return Items 适配项ID列表
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置适配项ID列表
                     * @param _items 适配项ID列表
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取[0:所有专业版旗舰版|1:hostID|2:ip]
                     * @return AssetType [0:所有专业版旗舰版|1:hostID|2:ip]
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置[0:所有专业版旗舰版|1:hostID|2:ip]
                     * @param _assetType [0:所有专业版旗舰版|1:hostID|2:ip]
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取主机Id集合
                     * @return HostIds 主机Id集合
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置主机Id集合
                     * @param _hostIds 主机Id集合
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return HostIps 主机IP
                     * 
                     */
                    std::vector<std::string> GetHostIps() const;

                    /**
                     * 设置主机IP
                     * @param _hostIps 主机IP
                     * 
                     */
                    void SetHostIps(const std::vector<std::string>& _hostIps);

                    /**
                     * 判断参数 HostIps 是否已赋值
                     * @return HostIps 是否已赋值
                     * 
                     */
                    bool HostIpsHasBeenSet() const;

                private:

                    /**
                     * 规则名称,长度不超过128英文字符
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则类型 [0:系统|1:自定义]
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则分类
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * 主机数
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 适配项ID列表
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * [0:所有专业版旗舰版|1:hostID|2:ip]
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 主机Id集合
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULE_H_
