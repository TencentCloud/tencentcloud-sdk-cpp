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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_AUTODELSTRATEGYINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_AUTODELSTRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 自动删除策略信息
                */
                class AutoDelStrategyInfo : public AbstractModel
                {
                public:
                    AutoDelStrategyInfo();
                    ~AutoDelStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取仓库名
                     * @return RepoName 仓库名
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置仓库名
                     * @param _repoName 仓库名
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
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
                     * 获取策略值
                     * @return Value 策略值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置策略值
                     * @param _value 策略值
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Valid
                     * @return Valid Valid
                     * 
                     */
                    int64_t GetValid() const;

                    /**
                     * 设置Valid
                     * @param _valid Valid
                     * 
                     */
                    void SetValid(const int64_t& _valid);

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 仓库名
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 策略值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Valid
                     */
                    int64_t m_valid;
                    bool m_validHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_AUTODELSTRATEGYINFO_H_
