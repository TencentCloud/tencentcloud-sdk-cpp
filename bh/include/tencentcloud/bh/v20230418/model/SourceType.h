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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SOURCETYPE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SOURCETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ioa用户源信息
                */
                class SourceType : public AbstractModel
                {
                public:
                    SourceType();
                    ~SourceType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号组来源
                     * @return Source 账号组来源
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置账号组来源
                     * @param _source 账号组来源
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取账号组来源类型
                     * @return Type 账号组来源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置账号组来源类型
                     * @param _type 账号组来源类型
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
                     * 获取账号组来源名称
                     * @return Name 账号组来源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号组来源名称
                     * @param _name 账号组来源名称
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
                     * 获取区分ioa原来和iam-mini
                     * @return Target 区分ioa原来和iam-mini
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置区分ioa原来和iam-mini
                     * @param _target 区分ioa原来和iam-mini
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                private:

                    /**
                     * 账号组来源
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 账号组来源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 账号组来源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区分ioa原来和iam-mini
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SOURCETYPE_H_
