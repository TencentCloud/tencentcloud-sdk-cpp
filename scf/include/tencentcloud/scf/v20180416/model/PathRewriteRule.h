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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PATHREWRITERULE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PATHREWRITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 路径路由重写规则
                */
                class PathRewriteRule : public AbstractModel
                {
                public:
                    PathRewriteRule();
                    ~PathRewriteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要重路由的路径，取值规范：/，/*，/xxx，/xxx/a，/xxx/*
                     * @return Path 需要重路由的路径，取值规范：/，/*，/xxx，/xxx/a，/xxx/*
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置需要重路由的路径，取值规范：/，/*，/xxx，/xxx/a，/xxx/*
                     * @param _path 需要重路由的路径，取值规范：/，/*，/xxx，/xxx/a，/xxx/*
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
                     * 获取匹配规，取值范围： WildcardRules 通配符匹配， ExactRules 精确匹配
                     * @return Type 匹配规，取值范围： WildcardRules 通配符匹配， ExactRules 精确匹配
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置匹配规，取值范围： WildcardRules 通配符匹配， ExactRules 精确匹配
                     * @param _type 匹配规，取值范围： WildcardRules 通配符匹配， ExactRules 精确匹配
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取替换值：比如/, /$
                     * @return Rewrite 替换值：比如/, /$
                     * 
                     */
                    std::string GetRewrite() const;

                    /**
                     * 设置替换值：比如/, /$
                     * @param _rewrite 替换值：比如/, /$
                     * 
                     */
                    void SetRewrite(const std::string& _rewrite);

                    /**
                     * 判断参数 Rewrite 是否已赋值
                     * @return Rewrite 是否已赋值
                     * 
                     */
                    bool RewriteHasBeenSet() const;

                private:

                    /**
                     * 需要重路由的路径，取值规范：/，/*，/xxx，/xxx/a，/xxx/*
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 匹配规，取值范围： WildcardRules 通配符匹配， ExactRules 精确匹配
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 替换值：比如/, /$
                     */
                    std::string m_rewrite;
                    bool m_rewriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PATHREWRITERULE_H_
