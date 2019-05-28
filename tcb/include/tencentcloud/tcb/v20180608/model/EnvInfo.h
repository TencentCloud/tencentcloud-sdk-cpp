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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ENVINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ENVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/DatabasesInfo.h>
#include <tencentcloud/tcb/v20180608/model/StorageInfo.h>
#include <tencentcloud/tcb/v20180608/model/FunctionInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 环境信息
                */
                class EnvInfo : public AbstractModel
                {
                public:
                    EnvInfo();
                    ~EnvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户下该环境唯一标识
                     * @return EnvId 账户下该环境唯一标识
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置账户下该环境唯一标识
                     * @param EnvId 账户下该环境唯一标识
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     * @return Source 环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     */
                    std::string GetSource() const;

                    /**
                     * 设置环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     * @param Source 环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取备注名
                     * @return Alias 备注名
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置备注名
                     * @param Alias 备注名
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间
                     * @return UpdateTime 最后修改时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后修改时间
                     * @param UpdateTime 最后修改时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>HALTED：停服，用量超限或后台封禁</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * @return Status 环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>HALTED：停服，用量超限或后台封禁</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>HALTED：停服，用量超限或后台封禁</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * @param Status 环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>HALTED：停服，用量超限或后台封禁</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据库列表
                     * @return Databases 数据库列表
                     */
                    std::vector<DatabasesInfo> GetDatabases() const;

                    /**
                     * 设置数据库列表
                     * @param Databases 数据库列表
                     */
                    void SetDatabases(const std::vector<DatabasesInfo>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取存储列表
                     * @return Storages 存储列表
                     */
                    std::vector<StorageInfo> GetStorages() const;

                    /**
                     * 设置存储列表
                     * @param Storages 存储列表
                     */
                    void SetStorages(const std::vector<StorageInfo>& _storages);

                    /**
                     * 判断参数 Storages 是否已赋值
                     * @return Storages 是否已赋值
                     */
                    bool StoragesHasBeenSet() const;

                    /**
                     * 获取函数列表
                     * @return Functions 函数列表
                     */
                    std::vector<FunctionInfo> GetFunctions() const;

                    /**
                     * 设置函数列表
                     * @param Functions 函数列表
                     */
                    void SetFunctions(const std::vector<FunctionInfo>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取套餐ID。包含以下取值：
<li>baisc ：表示基础版</li>
<li>professional ：表示专业版</li>
<li>business ： 表示企业版</li>
<li>flagship：表示旗舰版</li>
<li>supremacy：表示至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 套餐ID。包含以下取值：
<li>baisc ：表示基础版</li>
<li>professional ：表示专业版</li>
<li>business ： 表示企业版</li>
<li>flagship：表示旗舰版</li>
<li>supremacy：表示至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置套餐ID。包含以下取值：
<li>baisc ：表示基础版</li>
<li>professional ：表示专业版</li>
<li>business ： 表示企业版</li>
<li>flagship：表示旗舰版</li>
<li>supremacy：表示至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageId 套餐ID。包含以下取值：
<li>baisc ：表示基础版</li>
<li>professional ：表示专业版</li>
<li>business ： 表示企业版</li>
<li>flagship：表示旗舰版</li>
<li>supremacy：表示至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取套餐中文名称。包含以下取值：
<li>基础版</li>
<li>专业版</li>
<li>企业版</li>
<li>旗舰版</li>
<li>至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName 套餐中文名称。包含以下取值：
<li>基础版</li>
<li>专业版</li>
<li>企业版</li>
<li>旗舰版</li>
<li>至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置套餐中文名称。包含以下取值：
<li>基础版</li>
<li>专业版</li>
<li>企业版</li>
<li>旗舰版</li>
<li>至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageName 套餐中文名称。包含以下取值：
<li>基础版</li>
<li>专业版</li>
<li>企业版</li>
<li>旗舰版</li>
<li>至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * 账户下该环境唯一标识
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 备注名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>HALTED：停服，用量超限或后台封禁</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据库列表
                     */
                    std::vector<DatabasesInfo> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * 存储列表
                     */
                    std::vector<StorageInfo> m_storages;
                    bool m_storagesHasBeenSet;

                    /**
                     * 函数列表
                     */
                    std::vector<FunctionInfo> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 套餐ID。包含以下取值：
<li>baisc ：表示基础版</li>
<li>professional ：表示专业版</li>
<li>business ： 表示企业版</li>
<li>flagship：表示旗舰版</li>
<li>supremacy：表示至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 套餐中文名称。包含以下取值：
<li>基础版</li>
<li>专业版</li>
<li>企业版</li>
<li>旗舰版</li>
<li>至尊版</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENVINFO_H_
