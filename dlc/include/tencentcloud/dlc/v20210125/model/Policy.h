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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 权限对象
                */
                class Policy : public AbstractModel
                {
                public:
                    Policy();
                    ~Policy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要授权的数据库名，填 * 代表当前Catalog下所有数据库。当授权类型为管理员级别时，只允许填 “*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定数据库。
                     * @return Database 需要授权的数据库名，填 * 代表当前Catalog下所有数据库。当授权类型为管理员级别时，只允许填 “*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定数据库。
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置需要授权的数据库名，填 * 代表当前Catalog下所有数据库。当授权类型为管理员级别时，只允许填 “*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定数据库。
                     * @param _database 需要授权的数据库名，填 * 代表当前Catalog下所有数据库。当授权类型为管理员级别时，只允许填 “*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定数据库。
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取需要授权的数据源名称，管理员级别下只支持填  * （代表该级别全部资源）；数据源级别和数据库级别鉴权的情况下，只支持填COSDataCatalog或者*；在数据表级别鉴权下可以填写用户自定义数据源。不填情况下默认为DataLakeCatalog。注意：如果是对用户自定义数据源进行鉴权，DLC能够管理的权限是用户接入数据源的时候提供的账户的子集。
                     * @return Catalog 需要授权的数据源名称，管理员级别下只支持填  * （代表该级别全部资源）；数据源级别和数据库级别鉴权的情况下，只支持填COSDataCatalog或者*；在数据表级别鉴权下可以填写用户自定义数据源。不填情况下默认为DataLakeCatalog。注意：如果是对用户自定义数据源进行鉴权，DLC能够管理的权限是用户接入数据源的时候提供的账户的子集。
                     * 
                     */
                    std::string GetCatalog() const;

                    /**
                     * 设置需要授权的数据源名称，管理员级别下只支持填  * （代表该级别全部资源）；数据源级别和数据库级别鉴权的情况下，只支持填COSDataCatalog或者*；在数据表级别鉴权下可以填写用户自定义数据源。不填情况下默认为DataLakeCatalog。注意：如果是对用户自定义数据源进行鉴权，DLC能够管理的权限是用户接入数据源的时候提供的账户的子集。
                     * @param _catalog 需要授权的数据源名称，管理员级别下只支持填  * （代表该级别全部资源）；数据源级别和数据库级别鉴权的情况下，只支持填COSDataCatalog或者*；在数据表级别鉴权下可以填写用户自定义数据源。不填情况下默认为DataLakeCatalog。注意：如果是对用户自定义数据源进行鉴权，DLC能够管理的权限是用户接入数据源的时候提供的账户的子集。
                     * 
                     */
                    void SetCatalog(const std::string& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                    /**
                     * 获取需要授权的表名，填 * 代表当前Database下所有表。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定数据表。
                     * @return Table 需要授权的表名，填 * 代表当前Database下所有表。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定数据表。
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置需要授权的表名，填 * 代表当前Database下所有表。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定数据表。
                     * @param _table 需要授权的表名，填 * 代表当前Database下所有表。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定数据表。
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取授权的权限操作，对于不同级别的鉴权提供不同操作。管理员权限：ALL，不填默认为ALL；数据连接级鉴权：CREATE；数据库级别鉴权：ALL、CREATE、ALTER、DROP；数据表权限：ALL、SELECT、INSERT、ALTER、DELETE、DROP、UPDATE。注意：在数据表权限下，指定的数据源不为COSDataCatalog的时候，只支持SELECT操作。
                     * @return Operation 授权的权限操作，对于不同级别的鉴权提供不同操作。管理员权限：ALL，不填默认为ALL；数据连接级鉴权：CREATE；数据库级别鉴权：ALL、CREATE、ALTER、DROP；数据表权限：ALL、SELECT、INSERT、ALTER、DELETE、DROP、UPDATE。注意：在数据表权限下，指定的数据源不为COSDataCatalog的时候，只支持SELECT操作。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置授权的权限操作，对于不同级别的鉴权提供不同操作。管理员权限：ALL，不填默认为ALL；数据连接级鉴权：CREATE；数据库级别鉴权：ALL、CREATE、ALTER、DROP；数据表权限：ALL、SELECT、INSERT、ALTER、DELETE、DROP、UPDATE。注意：在数据表权限下，指定的数据源不为COSDataCatalog的时候，只支持SELECT操作。
                     * @param _operation 授权的权限操作，对于不同级别的鉴权提供不同操作。管理员权限：ALL，不填默认为ALL；数据连接级鉴权：CREATE；数据库级别鉴权：ALL、CREATE、ALTER、DROP；数据表权限：ALL、SELECT、INSERT、ALTER、DELETE、DROP、UPDATE。注意：在数据表权限下，指定的数据源不为COSDataCatalog的时候，只支持SELECT操作。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取授权类型，现在支持八种授权类型：ADMIN:管理员级别鉴权 DATASOURCE：数据连接级别鉴权 DATABASE：数据库级别鉴权 TABLE：表级别鉴权 VIEW：视图级别鉴权 FUNCTION：函数级别鉴权 COLUMN：列级别鉴权 ENGINE：数据引擎鉴权。不填默认为管理员级别鉴权。
                     * @return PolicyType 授权类型，现在支持八种授权类型：ADMIN:管理员级别鉴权 DATASOURCE：数据连接级别鉴权 DATABASE：数据库级别鉴权 TABLE：表级别鉴权 VIEW：视图级别鉴权 FUNCTION：函数级别鉴权 COLUMN：列级别鉴权 ENGINE：数据引擎鉴权。不填默认为管理员级别鉴权。
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置授权类型，现在支持八种授权类型：ADMIN:管理员级别鉴权 DATASOURCE：数据连接级别鉴权 DATABASE：数据库级别鉴权 TABLE：表级别鉴权 VIEW：视图级别鉴权 FUNCTION：函数级别鉴权 COLUMN：列级别鉴权 ENGINE：数据引擎鉴权。不填默认为管理员级别鉴权。
                     * @param _policyType 授权类型，现在支持八种授权类型：ADMIN:管理员级别鉴权 DATASOURCE：数据连接级别鉴权 DATABASE：数据库级别鉴权 TABLE：表级别鉴权 VIEW：视图级别鉴权 FUNCTION：函数级别鉴权 COLUMN：列级别鉴权 ENGINE：数据引擎鉴权。不填默认为管理员级别鉴权。
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取需要授权的函数名，填 * 代表当前Catalog下所有函数。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定函数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Function 需要授权的函数名，填 * 代表当前Catalog下所有函数。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定函数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置需要授权的函数名，填 * 代表当前Catalog下所有函数。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定函数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _function 需要授权的函数名，填 * 代表当前Catalog下所有函数。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定函数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取需要授权的视图，填 * 代表当前Database下所有视图。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定视图。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return View 需要授权的视图，填 * 代表当前Database下所有视图。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定视图。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetView() const;

                    /**
                     * 设置需要授权的视图，填 * 代表当前Database下所有视图。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定视图。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _view 需要授权的视图，填 * 代表当前Database下所有视图。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定视图。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetView(const std::string& _view);

                    /**
                     * 判断参数 View 是否已赋值
                     * @return View 是否已赋值
                     * 
                     */
                    bool ViewHasBeenSet() const;

                    /**
                     * 获取需要授权的列，填 * 代表当前所有列。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Column 需要授权的列，填 * 代表当前所有列。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumn() const;

                    /**
                     * 设置需要授权的列，填 * 代表当前所有列。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _column 需要授权的列，填 * 代表当前所有列。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumn(const std::string& _column);

                    /**
                     * 判断参数 Column 是否已赋值
                     * @return Column 是否已赋值
                     * 
                     */
                    bool ColumnHasBeenSet() const;

                    /**
                     * 获取需要授权的数据引擎，填 * 代表当前所有引擎。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngine 需要授权的数据引擎，填 * 代表当前所有引擎。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置需要授权的数据引擎，填 * 代表当前所有引擎。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngine 需要授权的数据引擎，填 * 代表当前所有引擎。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取用户是否可以进行二次授权。当为true的时候，被授权的用户可以将本次获取的权限再次授权给其他子用户。默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReAuth 用户是否可以进行二次授权。当为true的时候，被授权的用户可以将本次获取的权限再次授权给其他子用户。默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetReAuth() const;

                    /**
                     * 设置用户是否可以进行二次授权。当为true的时候，被授权的用户可以将本次获取的权限再次授权给其他子用户。默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reAuth 用户是否可以进行二次授权。当为true的时候，被授权的用户可以将本次获取的权限再次授权给其他子用户。默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReAuth(const bool& _reAuth);

                    /**
                     * 判断参数 ReAuth 是否已赋值
                     * @return ReAuth 是否已赋值
                     * 
                     */
                    bool ReAuthHasBeenSet() const;

                    /**
                     * 获取权限来源，入参不填。USER：权限来自用户本身；WORKGROUP：权限来自绑定的工作组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 权限来源，入参不填。USER：权限来自用户本身；WORKGROUP：权限来自绑定的工作组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置权限来源，入参不填。USER：权限来自用户本身；WORKGROUP：权限来自绑定的工作组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 权限来源，入参不填。USER：权限来自用户本身；WORKGROUP：权限来自绑定的工作组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取授权模式，入参不填。COMMON：普通模式；SENIOR：高级模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 授权模式，入参不填。COMMON：普通模式；SENIOR：高级模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置授权模式，入参不填。COMMON：普通模式；SENIOR：高级模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode 授权模式，入参不填。COMMON：普通模式；SENIOR：高级模式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取操作者，入参不填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作者，入参不填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者，入参不填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 操作者，入参不填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取权限创建的时间，入参不填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 权限创建的时间，入参不填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置权限创建的时间，入参不填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 权限创建的时间，入参不填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取权限所属工作组的ID，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceId 权限所属工作组的ID，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceId() const;

                    /**
                     * 设置权限所属工作组的ID，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceId 权限所属工作组的ID，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceId(const int64_t& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取权限所属工作组的名称，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceName 权限所属工作组的名称，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置权限所属工作组的名称，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceName 权限所属工作组的名称，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取引擎类型

                     * @return EngineGeneration 引擎类型

                     * 
                     */
                    std::string GetEngineGeneration() const;

                    /**
                     * 设置引擎类型

                     * @param _engineGeneration 引擎类型

                     * 
                     */
                    void SetEngineGeneration(const std::string& _engineGeneration);

                    /**
                     * 判断参数 EngineGeneration 是否已赋值
                     * @return EngineGeneration 是否已赋值
                     * 
                     */
                    bool EngineGenerationHasBeenSet() const;

                private:

                    /**
                     * 需要授权的数据库名，填 * 代表当前Catalog下所有数据库。当授权类型为管理员级别时，只允许填 “*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定数据库。
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 需要授权的数据源名称，管理员级别下只支持填  * （代表该级别全部资源）；数据源级别和数据库级别鉴权的情况下，只支持填COSDataCatalog或者*；在数据表级别鉴权下可以填写用户自定义数据源。不填情况下默认为DataLakeCatalog。注意：如果是对用户自定义数据源进行鉴权，DLC能够管理的权限是用户接入数据源的时候提供的账户的子集。
                     */
                    std::string m_catalog;
                    bool m_catalogHasBeenSet;

                    /**
                     * 需要授权的表名，填 * 代表当前Database下所有表。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定数据表。
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 授权的权限操作，对于不同级别的鉴权提供不同操作。管理员权限：ALL，不填默认为ALL；数据连接级鉴权：CREATE；数据库级别鉴权：ALL、CREATE、ALTER、DROP；数据表权限：ALL、SELECT、INSERT、ALTER、DELETE、DROP、UPDATE。注意：在数据表权限下，指定的数据源不为COSDataCatalog的时候，只支持SELECT操作。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 授权类型，现在支持八种授权类型：ADMIN:管理员级别鉴权 DATASOURCE：数据连接级别鉴权 DATABASE：数据库级别鉴权 TABLE：表级别鉴权 VIEW：视图级别鉴权 FUNCTION：函数级别鉴权 COLUMN：列级别鉴权 ENGINE：数据引擎鉴权。不填默认为管理员级别鉴权。
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 需要授权的函数名，填 * 代表当前Catalog下所有函数。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别时只允许填空，其他类型下可以任意指定函数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 需要授权的视图，填 * 代表当前Database下所有视图。当授权类型为管理员级别时，只允许填“*”，当授权类型为数据连接级别、数据库级别时只允许填空，其他类型下可以任意指定视图。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_view;
                    bool m_viewHasBeenSet;

                    /**
                     * 需要授权的列，填 * 代表当前所有列。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_column;
                    bool m_columnHasBeenSet;

                    /**
                     * 需要授权的数据引擎，填 * 代表当前所有引擎。当授权类型为管理员级别时，只允许填“*”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * 用户是否可以进行二次授权。当为true的时候，被授权的用户可以将本次获取的权限再次授权给其他子用户。默认为false
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_reAuth;
                    bool m_reAuthHasBeenSet;

                    /**
                     * 权限来源，入参不填。USER：权限来自用户本身；WORKGROUP：权限来自绑定的工作组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 授权模式，入参不填。COMMON：普通模式；SENIOR：高级模式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 操作者，入参不填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 权限创建的时间，入参不填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 权限所属工作组的ID，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 权限所属工作组的名称，只有当该权限的来源为工作组时才会有值。即仅当Source字段的值为WORKGROUP时该字段才有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 引擎类型

                     */
                    std::string m_engineGeneration;
                    bool m_engineGenerationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_POLICY_H_
