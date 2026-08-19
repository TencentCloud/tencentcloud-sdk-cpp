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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECUSTOMITEMCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECUSTOMITEMCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 在策略上对内置检测项做自定义值覆盖的配置项。
                */
                class BaselineCustomItemConf : public AbstractModel
                {
                public:
                    BaselineCustomItemConf();
                    ~BaselineCustomItemConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内置检测项规则 ID，与 CustomItemID 二选一传入。</p>
                     * @return RuleID <p>内置检测项规则 ID，与 CustomItemID 二选一传入。</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>内置检测项规则 ID，与 CustomItemID 二选一传入。</p>
                     * @param _ruleID <p>内置检测项规则 ID，与 CustomItemID 二选一传入。</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义的判定值列表，需符合检测项 WebEditParam 定义的取值约束。</p>
                     * @return CustomValueList <p>用户自定义的判定值列表，需符合检测项 WebEditParam 定义的取值约束。</p>
                     * 
                     */
                    std::vector<std::string> GetCustomValueList() const;

                    /**
                     * 设置<p>用户自定义的判定值列表，需符合检测项 WebEditParam 定义的取值约束。</p>
                     * @param _customValueList <p>用户自定义的判定值列表，需符合检测项 WebEditParam 定义的取值约束。</p>
                     * 
                     */
                    void SetCustomValueList(const std::vector<std::string>& _customValueList);

                    /**
                     * 判断参数 CustomValueList 是否已赋值
                     * @return CustomValueList 是否已赋值
                     * 
                     */
                    bool CustomValueListHasBeenSet() const;

                    /**
                     * 获取<p>已存在的自定义配置 ID；新增时可不传，编辑时回填。</p>
                     * @return CustomItemID <p>已存在的自定义配置 ID；新增时可不传，编辑时回填。</p>
                     * 
                     */
                    uint64_t GetCustomItemID() const;

                    /**
                     * 设置<p>已存在的自定义配置 ID；新增时可不传，编辑时回填。</p>
                     * @param _customItemID <p>已存在的自定义配置 ID；新增时可不传，编辑时回填。</p>
                     * 
                     */
                    void SetCustomItemID(const uint64_t& _customItemID);

                    /**
                     * 判断参数 CustomItemID 是否已赋值
                     * @return CustomItemID 是否已赋值
                     * 
                     */
                    bool CustomItemIDHasBeenSet() const;

                private:

                    /**
                     * <p>内置检测项规则 ID，与 CustomItemID 二选一传入。</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>用户自定义的判定值列表，需符合检测项 WebEditParam 定义的取值约束。</p>
                     */
                    std::vector<std::string> m_customValueList;
                    bool m_customValueListHasBeenSet;

                    /**
                     * <p>已存在的自定义配置 ID；新增时可不传，编辑时回填。</p>
                     */
                    uint64_t m_customItemID;
                    bool m_customItemIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINECUSTOMITEMCONF_H_
