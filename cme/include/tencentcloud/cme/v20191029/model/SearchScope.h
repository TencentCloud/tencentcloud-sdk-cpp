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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SEARCHSCOPE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SEARCHSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 搜索空间
                */
                class SearchScope : public AbstractModel
                {
                public:
                    SearchScope();
                    ~SearchScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类路径归属。
                     * @return Owner 分类路径归属。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置分类路径归属。
                     * @param _owner 分类路径归属。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取按分类路径检索。 不填则默认按根分类路径检索。
                     * @return ClassPath 按分类路径检索。 不填则默认按根分类路径检索。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置按分类路径检索。 不填则默认按根分类路径检索。
                     * @param _classPath 按分类路径检索。 不填则默认按根分类路径检索。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                private:

                    /**
                     * 分类路径归属。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 按分类路径检索。 不填则默认按根分类路径检索。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SEARCHSCOPE_H_
