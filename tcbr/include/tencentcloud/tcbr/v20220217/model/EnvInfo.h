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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_ENVINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_ENVINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/DatabasesInfo.h>
#include <tencentcloud/tcbr/v20220217/model/StorageInfo.h>
#include <tencentcloud/tcbr/v20220217/model/FunctionInfo.h>
#include <tencentcloud/tcbr/v20220217/model/LogServiceInfo.h>
#include <tencentcloud/tcbr/v20220217/model/StaticStorageInfo.h>
#include <tencentcloud/tcbr/v20220217/model/Tag.h>
#include <tencentcloud/tcbr/v20220217/model/ClsInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
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
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置账户下该环境唯一标识
                     * @param _envId 账户下该环境唯一标识
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     * @return Source 环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
                     * @param _source 环境来源。包含以下取值：
<li>miniapp：微信小程序</li>
<li>qcloud ：腾讯云</li>
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
                     * 获取环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     * @return Alias 环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     * @param _alias 环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取最后修改时间
                     * @return UpdateTime 最后修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后修改时间
                     * @param _updateTime 最后修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * @return Status 环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * @param _status 环境状态。包含以下取值：
<li>NORMAL：正常可用</li>
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否到期自动降为免费版
                     * @return IsAutoDegrade 是否到期自动降为免费版
                     * 
                     */
                    bool GetIsAutoDegrade() const;

                    /**
                     * 设置是否到期自动降为免费版
                     * @param _isAutoDegrade 是否到期自动降为免费版
                     * 
                     */
                    void SetIsAutoDegrade(const bool& _isAutoDegrade);

                    /**
                     * 判断参数 IsAutoDegrade 是否已赋值
                     * @return IsAutoDegrade 是否已赋值
                     * 
                     */
                    bool IsAutoDegradeHasBeenSet() const;

                    /**
                     * 获取环境渠道
                     * @return EnvChannel 环境渠道
                     * 
                     */
                    std::string GetEnvChannel() const;

                    /**
                     * 设置环境渠道
                     * @param _envChannel 环境渠道
                     * 
                     */
                    void SetEnvChannel(const std::string& _envChannel);

                    /**
                     * 判断参数 EnvChannel 是否已赋值
                     * @return EnvChannel 是否已赋值
                     * 
                     */
                    bool EnvChannelHasBeenSet() const;

                    /**
                     * 获取支付方式。包含以下取值：
<li> prepayment：预付费</li>
<li> postpaid：后付费</li>
                     * @return PayMode 支付方式。包含以下取值：
<li> prepayment：预付费</li>
<li> postpaid：后付费</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置支付方式。包含以下取值：
<li> prepayment：预付费</li>
<li> postpaid：后付费</li>
                     * @param _payMode 支付方式。包含以下取值：
<li> prepayment：预付费</li>
<li> postpaid：后付费</li>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取是否为默认环境
                     * @return IsDefault 是否为默认环境
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否为默认环境
                     * @param _isDefault 是否为默认环境
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取环境所属地域
                     * @return Region 环境所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置环境所属地域
                     * @param _region 环境所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取环境类型：baas, run, hosting, weda,tcbr
                     * @return EnvType 环境类型：baas, run, hosting, weda,tcbr
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置环境类型：baas, run, hosting, weda,tcbr
                     * @param _envType 环境类型：baas, run, hosting, weda,tcbr
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取数据库列表
                     * @return Databases 数据库列表
                     * 
                     */
                    std::vector<DatabasesInfo> GetDatabases() const;

                    /**
                     * 设置数据库列表
                     * @param _databases 数据库列表
                     * 
                     */
                    void SetDatabases(const std::vector<DatabasesInfo>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                    /**
                     * 获取存储列表
                     * @return Storages 存储列表
                     * 
                     */
                    std::vector<StorageInfo> GetStorages() const;

                    /**
                     * 设置存储列表
                     * @param _storages 存储列表
                     * 
                     */
                    void SetStorages(const std::vector<StorageInfo>& _storages);

                    /**
                     * 判断参数 Storages 是否已赋值
                     * @return Storages 是否已赋值
                     * 
                     */
                    bool StoragesHasBeenSet() const;

                    /**
                     * 获取函数列表
                     * @return Functions 函数列表
                     * 
                     */
                    std::vector<FunctionInfo> GetFunctions() const;

                    /**
                     * 设置函数列表
                     * @param _functions 函数列表
                     * 
                     */
                    void SetFunctions(const std::vector<FunctionInfo>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取云日志服务列表
                     * @return LogServices 云日志服务列表
                     * 
                     */
                    std::vector<LogServiceInfo> GetLogServices() const;

                    /**
                     * 设置云日志服务列表
                     * @param _logServices 云日志服务列表
                     * 
                     */
                    void SetLogServices(const std::vector<LogServiceInfo>& _logServices);

                    /**
                     * 判断参数 LogServices 是否已赋值
                     * @return LogServices 是否已赋值
                     * 
                     */
                    bool LogServicesHasBeenSet() const;

                    /**
                     * 获取静态资源信息
                     * @return StaticStorages 静态资源信息
                     * 
                     */
                    std::vector<StaticStorageInfo> GetStaticStorages() const;

                    /**
                     * 设置静态资源信息
                     * @param _staticStorages 静态资源信息
                     * 
                     */
                    void SetStaticStorages(const std::vector<StaticStorageInfo>& _staticStorages);

                    /**
                     * 判断参数 StaticStorages 是否已赋值
                     * @return StaticStorages 是否已赋值
                     * 
                     */
                    bool StaticStoragesHasBeenSet() const;

                    /**
                     * 获取环境标签列表
                     * @return Tags 环境标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置环境标签列表
                     * @param _tags 环境标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取自定义日志服务
                     * @return CustomLogServices 自定义日志服务
                     * 
                     */
                    std::vector<ClsInfo> GetCustomLogServices() const;

                    /**
                     * 设置自定义日志服务
                     * @param _customLogServices 自定义日志服务
                     * 
                     */
                    void SetCustomLogServices(const std::vector<ClsInfo>& _customLogServices);

                    /**
                     * 判断参数 CustomLogServices 是否已赋值
                     * @return CustomLogServices 是否已赋值
                     * 
                     */
                    bool CustomLogServicesHasBeenSet() const;

                    /**
                     * 获取tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * @return PackageId tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * @param _packageId tcb产品套餐ID，参考DescribePackages接口的返回值。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取套餐中文名称，参考DescribePackages接口的返回值。
                     * @return PackageName 套餐中文名称，参考DescribePackages接口的返回值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置套餐中文名称，参考DescribePackages接口的返回值。
                     * @param _packageName 套餐中文名称，参考DescribePackages接口的返回值。
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
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
                     * 环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符
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
<li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否到期自动降为免费版
                     */
                    bool m_isAutoDegrade;
                    bool m_isAutoDegradeHasBeenSet;

                    /**
                     * 环境渠道
                     */
                    std::string m_envChannel;
                    bool m_envChannelHasBeenSet;

                    /**
                     * 支付方式。包含以下取值：
<li> prepayment：预付费</li>
<li> postpaid：后付费</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否为默认环境
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 环境所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 环境类型：baas, run, hosting, weda,tcbr
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

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
                     * 云日志服务列表
                     */
                    std::vector<LogServiceInfo> m_logServices;
                    bool m_logServicesHasBeenSet;

                    /**
                     * 静态资源信息
                     */
                    std::vector<StaticStorageInfo> m_staticStorages;
                    bool m_staticStoragesHasBeenSet;

                    /**
                     * 环境标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自定义日志服务
                     */
                    std::vector<ClsInfo> m_customLogServices;
                    bool m_customLogServicesHasBeenSet;

                    /**
                     * tcb产品套餐ID，参考DescribePackages接口的返回值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 套餐中文名称，参考DescribePackages接口的返回值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_ENVINFO_H_
