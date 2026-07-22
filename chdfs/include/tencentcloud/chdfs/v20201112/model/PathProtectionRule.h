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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_PATHPROTECTIONRULE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_PATHPROTECTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * 路径保护规则
                */
                class PathProtectionRule : public AbstractModel
                {
                public:
                    PathProtectionRule();
                    ~PathProtectionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路径保护规则ID
                     * @return PathProtectionRuleId 路径保护规则ID
                     * 
                     */
                    uint64_t GetPathProtectionRuleId() const;

                    /**
                     * 设置路径保护规则ID
                     * @param _pathProtectionRuleId 路径保护规则ID
                     * 
                     */
                    void SetPathProtectionRuleId(const uint64_t& _pathProtectionRuleId);

                    /**
                     * 判断参数 PathProtectionRuleId 是否已赋值
                     * @return PathProtectionRuleId 是否已赋值
                     * 
                     */
                    bool PathProtectionRuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取指定保护路径
                     * @return Path 指定保护路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置指定保护路径
                     * @param _path 指定保护路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取规则状态（1：打开；2：关闭）
                     * @return Status 规则状态（1：打开；2：关闭）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态（1：打开；2：关闭）
                     * @param _status 规则状态（1：打开；2：关闭）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 路径保护规则ID
                     */
                    uint64_t m_pathProtectionRuleId;
                    bool m_pathProtectionRuleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 指定保护路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 规则状态（1：打开；2：关闭）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_PATHPROTECTIONRULE_H_
