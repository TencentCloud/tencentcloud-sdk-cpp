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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/VanityNameServers.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyZone请求参数结构体
                */
                class ModifyZoneRequest : public AbstractModel
                {
                public:
                    ModifyZoneRequest();
                    ~ModifyZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID，用于唯一标识站点信息
                     * @return Id 站点 ID，用于唯一标识站点信息
                     */
                    std::string GetId() const;

                    /**
                     * 设置站点 ID，用于唯一标识站点信息
                     * @param Id 站点 ID，用于唯一标识站点信息
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点接入方式
- full NS 接入
- partial CNAME 接入
                     * @return Type 站点接入方式
- full NS 接入
- partial CNAME 接入
                     */
                    std::string GetType() const;

                    /**
                     * 设置站点接入方式
- full NS 接入
- partial CNAME 接入
                     * @param Type 站点接入方式
- full NS 接入
- partial CNAME 接入
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取自定义站点信息
                     * @return VanityNameServers 自定义站点信息
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置自定义站点信息
                     * @param VanityNameServers 自定义站点信息
                     */
                    void SetVanityNameServers(const VanityNameServers& _vanityNameServers);

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     */
                    bool VanityNameServersHasBeenSet() const;

                private:

                    /**
                     * 站点 ID，用于唯一标识站点信息
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点接入方式
- full NS 接入
- partial CNAME 接入
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自定义站点信息
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONEREQUEST_H_
