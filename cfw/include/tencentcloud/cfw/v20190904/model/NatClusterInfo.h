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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATCLUSTERINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * NAT集群模式开关信息
                */
                class NatClusterInfo : public AbstractModel
                {
                public:
                    NatClusterInfo();
                    ~NatClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>nat网关ID</p>
                     * @return NatInsId <p>nat网关ID</p>
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置<p>nat网关ID</p>
                     * @param _natInsId <p>nat网关ID</p>
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取<p>nat网关名称</p>
                     * @return NatInsName <p>nat网关名称</p>
                     * 
                     */
                    std::string GetNatInsName() const;

                    /**
                     * 设置<p>nat网关名称</p>
                     * @param _natInsName <p>nat网关名称</p>
                     * 
                     */
                    void SetNatInsName(const std::string& _natInsName);

                    /**
                     * 判断参数 NatInsName 是否已赋值
                     * @return NatInsName 是否已赋值
                     * 
                     */
                    bool NatInsNameHasBeenSet() const;

                private:

                    /**
                     * <p>nat网关ID</p>
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * <p>nat网关名称</p>
                     */
                    std::string m_natInsName;
                    bool m_natInsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATCLUSTERINFO_H_
