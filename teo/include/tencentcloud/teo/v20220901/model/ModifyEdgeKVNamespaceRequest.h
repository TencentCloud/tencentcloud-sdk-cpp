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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYEDGEKVNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYEDGEKVNAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyEdgeKVNamespace请求参数结构体
                */
                class ModifyEdgeKVNamespaceRequest : public AbstractModel
                {
                public:
                    ModifyEdgeKVNamespaceRequest();
                    ~ModifyEdgeKVNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取命名空间名称。
                     * @return Namespace 命名空间名称。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称。
                     * @param _namespace 命名空间名称。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取命名空间描述。用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * @return Remark 命名空间描述。用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置命名空间描述。用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * @param _remark 命名空间描述。用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 命名空间名称。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 命名空间描述。用于说明命名空间的用途或业务含义。最大支持 256 个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYEDGEKVNAMESPACEREQUEST_H_
