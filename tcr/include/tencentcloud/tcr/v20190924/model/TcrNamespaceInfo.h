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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_

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
                * Tcr 命名空间的描述
                */
                class TcrNamespaceInfo : public AbstractModel
                {
                public:
                    TcrNamespaceInfo();
                    ~TcrNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间名称
                     * @return Name 命名空间名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名称
                     * @param Name 命名空间名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param CreationTime 创建时间
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取访问级别
                     * @return Public 访问级别
                     */
                    bool GetPublic() const;

                    /**
                     * 设置访问级别
                     * @param Public 访问级别
                     */
                    void SetPublic(const bool& _public);

                    /**
                     * 判断参数 Public 是否已赋值
                     * @return Public 是否已赋值
                     */
                    bool PublicHasBeenSet() const;

                    /**
                     * 获取命名空间的Id
                     * @return NamespaceId 命名空间的Id
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置命名空间的Id
                     * @param NamespaceId 命名空间的Id
                     */
                    void SetNamespaceId(const int64_t& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     */
                    bool NamespaceIdHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 访问级别
                     */
                    bool m_public;
                    bool m_publicHasBeenSet;

                    /**
                     * 命名空间的Id
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRNAMESPACEINFO_H_
