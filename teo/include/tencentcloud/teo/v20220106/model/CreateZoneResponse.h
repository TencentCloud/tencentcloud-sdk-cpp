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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateZone返回参数结构体
                */
                class CreateZoneResponse : public AbstractModel
                {
                public:
                    CreateZoneResponse();
                    ~CreateZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID
                     * @return Id 站点ID
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取站点接入方式
                     * @return Type 站点接入方式
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取站点状态
- pending 未切换NS
- active NS 已切换到分配的 NS
- moved NS 从腾讯云切走
                     * @return Status 站点状态
- pending 未切换NS
- active NS 已切换到分配的 NS
- moved NS 从腾讯云切走
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前使用的 NS 列表
                     * @return OriginalNameServers 当前使用的 NS 列表
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取给用户分配的 NS 列表
                     * @return NameServers 给用户分配的 NS 列表
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取站点创建时间
                     * @return CreatedOn 站点创建时间
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取站点更新时间
                     * @return ModifiedOn 站点更新时间
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * 站点ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点接入方式
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 站点状态
- pending 未切换NS
- active NS 已切换到分配的 NS
- moved NS 从腾讯云切走
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前使用的 NS 列表
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * 给用户分配的 NS 列表
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * 站点创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 站点更新时间
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEZONERESPONSE_H_
