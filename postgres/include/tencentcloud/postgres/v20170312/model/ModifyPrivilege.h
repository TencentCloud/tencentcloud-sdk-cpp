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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPRIVILEGE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DatabasePrivilege.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用于修改数据库对象的权限，其中包含了数据库对象描述的数据结构、需要修改的权限列表以及修改的类型等。
                */
                class ModifyPrivilege : public AbstractModel
                {
                public:
                    ModifyPrivilege();
                    ~ModifyPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>要修改的数据库对象及权限列表</p>
                     * @return DatabasePrivilege <p>要修改的数据库对象及权限列表</p>
                     * 
                     */
                    DatabasePrivilege GetDatabasePrivilege() const;

                    /**
                     * 设置<p>要修改的数据库对象及权限列表</p>
                     * @param _databasePrivilege <p>要修改的数据库对象及权限列表</p>
                     * 
                     */
                    void SetDatabasePrivilege(const DatabasePrivilege& _databasePrivilege);

                    /**
                     * 判断参数 DatabasePrivilege 是否已赋值
                     * @return DatabasePrivilege 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegeHasBeenSet() const;

                    /**
                     * 获取<p>修改的方式，当前仅支持grantObject、revokeObject、alterRole、grantRole、revoke，当前仅支持grantObject、revokeObject、alterRole、grantRole、revokeRole。gRole。grantObject代表授权、revokeObject代表收回权、alterRole代表修改账号类型、grantRole代表加入对应角色、revokeRole 代表移出对应角色。</p>
                     * @return ModifyType <p>修改的方式，当前仅支持grantObject、revokeObject、alterRole、grantRole、revoke，当前仅支持grantObject、revokeObject、alterRole、grantRole、revokeRole。gRole。grantObject代表授权、revokeObject代表收回权、alterRole代表修改账号类型、grantRole代表加入对应角色、revokeRole 代表移出对应角色。</p>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置<p>修改的方式，当前仅支持grantObject、revokeObject、alterRole、grantRole、revoke，当前仅支持grantObject、revokeObject、alterRole、grantRole、revokeRole。gRole。grantObject代表授权、revokeObject代表收回权、alterRole代表修改账号类型、grantRole代表加入对应角色、revokeRole 代表移出对应角色。</p>
                     * @param _modifyType <p>修改的方式，当前仅支持grantObject、revokeObject、alterRole、grantRole、revoke，当前仅支持grantObject、revokeObject、alterRole、grantRole、revokeRole。gRole。grantObject代表授权、revokeObject代表收回权、alterRole代表修改账号类型、grantRole代表加入对应角色、revokeRole 代表移出对应角色。</p>
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>当ModifyType为revokeObject才需要此参数，参数为true时，撤销权限会级联撤销。默认为false。</p>
                     * @return IsCascade <p>当ModifyType为revokeObject才需要此参数，参数为true时，撤销权限会级联撤销。默认为false。</p>
                     * 
                     */
                    bool GetIsCascade() const;

                    /**
                     * 设置<p>当ModifyType为revokeObject才需要此参数，参数为true时，撤销权限会级联撤销。默认为false。</p>
                     * @param _isCascade <p>当ModifyType为revokeObject才需要此参数，参数为true时，撤销权限会级联撤销。默认为false。</p>
                     * 
                     */
                    void SetIsCascade(const bool& _isCascade);

                    /**
                     * 判断参数 IsCascade 是否已赋值
                     * @return IsCascade 是否已赋值
                     * 
                     */
                    bool IsCascadeHasBeenSet() const;

                private:

                    /**
                     * <p>要修改的数据库对象及权限列表</p>
                     */
                    DatabasePrivilege m_databasePrivilege;
                    bool m_databasePrivilegeHasBeenSet;

                    /**
                     * <p>修改的方式，当前仅支持grantObject、revokeObject、alterRole、grantRole、revoke，当前仅支持grantObject、revokeObject、alterRole、grantRole、revokeRole。gRole。grantObject代表授权、revokeObject代表收回权、alterRole代表修改账号类型、grantRole代表加入对应角色、revokeRole 代表移出对应角色。</p>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * <p>当ModifyType为revokeObject才需要此参数，参数为true时，撤销权限会级联撤销。默认为false。</p>
                     */
                    bool m_isCascade;
                    bool m_isCascadeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPRIVILEGE_H_
