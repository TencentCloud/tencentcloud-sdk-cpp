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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_NAMESPACEINFORESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_NAMESPACEINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/NamespaceInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 获取命名空间信息返回
                */
                class NamespaceInfoResp : public AbstractModel
                {
                public:
                    NamespaceInfoResp();
                    ~NamespaceInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间数量
                     * @return NamespaceCount 命名空间数量
                     * 
                     */
                    int64_t GetNamespaceCount() const;

                    /**
                     * 设置命名空间数量
                     * @param _namespaceCount 命名空间数量
                     * 
                     */
                    void SetNamespaceCount(const int64_t& _namespaceCount);

                    /**
                     * 判断参数 NamespaceCount 是否已赋值
                     * @return NamespaceCount 是否已赋值
                     * 
                     */
                    bool NamespaceCountHasBeenSet() const;

                    /**
                     * 获取命名空间信息
                     * @return NamespaceInfo 命名空间信息
                     * 
                     */
                    std::vector<NamespaceInfo> GetNamespaceInfo() const;

                    /**
                     * 设置命名空间信息
                     * @param _namespaceInfo 命名空间信息
                     * 
                     */
                    void SetNamespaceInfo(const std::vector<NamespaceInfo>& _namespaceInfo);

                    /**
                     * 判断参数 NamespaceInfo 是否已赋值
                     * @return NamespaceInfo 是否已赋值
                     * 
                     */
                    bool NamespaceInfoHasBeenSet() const;

                private:

                    /**
                     * 命名空间数量
                     */
                    int64_t m_namespaceCount;
                    bool m_namespaceCountHasBeenSet;

                    /**
                     * 命名空间信息
                     */
                    std::vector<NamespaceInfo> m_namespaceInfo;
                    bool m_namespaceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_NAMESPACEINFORESP_H_
