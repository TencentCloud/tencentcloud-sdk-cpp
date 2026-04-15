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
#include <tencentcloud/tcb/v20180608/model/LogServiceInfo.h>
#include <tencentcloud/tcb/v20180608/model/StaticStorageInfo.h>
#include <tencentcloud/tcb/v20180608/model/Tag.h>
#include <tencentcloud/tcb/v20180608/model/ClsInfo.h>


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
                     * 获取<p>账户下该环境唯一标识</p>
                     * @return EnvId <p>账户下该环境唯一标识</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>账户下该环境唯一标识</p>
                     * @param _envId <p>账户下该环境唯一标识</p>
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
                     * 获取<p>环境来源。包含以下取值：</p><li>miniapp：微信小程序</li><li>qcloud ：腾讯云</li>
                     * @return Source <p>环境来源。包含以下取值：</p><li>miniapp：微信小程序</li><li>qcloud ：腾讯云</li>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>环境来源。包含以下取值：</p><li>miniapp：微信小程序</li><li>qcloud ：腾讯云</li>
                     * @param _source <p>环境来源。包含以下取值：</p><li>miniapp：微信小程序</li><li>qcloud ：腾讯云</li>
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
                     * 获取<p>环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     * @return Alias <p>环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     * @param _alias <p>环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最后修改时间</p>
                     * @return UpdateTime <p>最后修改时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最后修改时间</p>
                     * @param _updateTime <p>最后修改时间</p>
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
                     * 获取<p>环境状态。包含以下取值：</p><li>NORMAL：正常可用</li><li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * @return Status <p>环境状态。包含以下取值：</p><li>NORMAL：正常可用</li><li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>环境状态。包含以下取值：</p><li>NORMAL：正常可用</li><li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     * @param _status <p>环境状态。包含以下取值：</p><li>NORMAL：正常可用</li><li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
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
                     * 获取<p>数据库列表</p>
                     * @return Databases <p>数据库列表</p>
                     * 
                     */
                    std::vector<DatabasesInfo> GetDatabases() const;

                    /**
                     * 设置<p>数据库列表</p>
                     * @param _databases <p>数据库列表</p>
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
                     * 获取<p>存储列表</p>
                     * @return Storages <p>存储列表</p>
                     * 
                     */
                    std::vector<StorageInfo> GetStorages() const;

                    /**
                     * 设置<p>存储列表</p>
                     * @param _storages <p>存储列表</p>
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
                     * 获取<p>函数列表</p>
                     * @return Functions <p>函数列表</p>
                     * 
                     */
                    std::vector<FunctionInfo> GetFunctions() const;

                    /**
                     * 设置<p>函数列表</p>
                     * @param _functions <p>函数列表</p>
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
                     * 获取<p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     * @return PackageId <p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     * @param _packageId <p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
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
                     * 获取<p>套餐中文名称，参考DescribePackages接口的返回值。</p>
                     * @return PackageName <p>套餐中文名称，参考DescribePackages接口的返回值。</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>套餐中文名称，参考DescribePackages接口的返回值。</p>
                     * @param _packageName <p>套餐中文名称，参考DescribePackages接口的返回值。</p>
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取<p>云日志服务列表</p>
                     * @return LogServices <p>云日志服务列表</p>
                     * 
                     */
                    std::vector<LogServiceInfo> GetLogServices() const;

                    /**
                     * 设置<p>云日志服务列表</p>
                     * @param _logServices <p>云日志服务列表</p>
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
                     * 获取<p>静态资源信息</p>
                     * @return StaticStorages <p>静态资源信息</p>
                     * 
                     */
                    std::vector<StaticStorageInfo> GetStaticStorages() const;

                    /**
                     * 设置<p>静态资源信息</p>
                     * @param _staticStorages <p>静态资源信息</p>
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
                     * 获取<p>是否到期自动降为免费版</p>
                     * @return IsAutoDegrade <p>是否到期自动降为免费版</p>
                     * 
                     */
                    bool GetIsAutoDegrade() const;

                    /**
                     * 设置<p>是否到期自动降为免费版</p>
                     * @param _isAutoDegrade <p>是否到期自动降为免费版</p>
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
                     * 获取<p>环境渠道</p>
                     * @return EnvChannel <p>环境渠道</p>
                     * 
                     */
                    std::string GetEnvChannel() const;

                    /**
                     * 设置<p>环境渠道</p>
                     * @param _envChannel <p>环境渠道</p>
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
                     * 获取<p>支付方式。包含以下取值：</p><li> prepayment：预付费</li><li> postpaid：后付费</li>
                     * @return PayMode <p>支付方式。包含以下取值：</p><li> prepayment：预付费</li><li> postpaid：后付费</li>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>支付方式。包含以下取值：</p><li> prepayment：预付费</li><li> postpaid：后付费</li>
                     * @param _payMode <p>支付方式。包含以下取值：</p><li> prepayment：预付费</li><li> postpaid：后付费</li>
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
                     * 获取<p>是否为默认环境</p>
                     * @return IsDefault <p>是否为默认环境</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否为默认环境</p>
                     * @param _isDefault <p>是否为默认环境</p>
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
                     * 获取<p>环境所属地域</p>
                     * @return Region <p>环境所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>环境所属地域</p>
                     * @param _region <p>环境所属地域</p>
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
                     * 获取<p>环境标签列表</p>
                     * @return Tags <p>环境标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>环境标签列表</p>
                     * @param _tags <p>环境标签列表</p>
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
                     * 获取<p>自定义日志服务</p>
                     * @return CustomLogServices <p>自定义日志服务</p>
                     * 
                     */
                    std::vector<ClsInfo> GetCustomLogServices() const;

                    /**
                     * 设置<p>自定义日志服务</p>
                     * @param _customLogServices <p>自定义日志服务</p>
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
                     * 获取<p>环境类型：baas, run, hoting, weda</p>
                     * @return EnvType <p>环境类型：baas, run, hoting, weda</p>
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置<p>环境类型：baas, run, hoting, weda</p>
                     * @param _envType <p>环境类型：baas, run, hoting, weda</p>
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
                     * 获取<p>是否是dau新套餐</p>
                     * @return IsDauPackage <p>是否是dau新套餐</p>
                     * 
                     */
                    bool GetIsDauPackage() const;

                    /**
                     * 设置<p>是否是dau新套餐</p>
                     * @param _isDauPackage <p>是否是dau新套餐</p>
                     * 
                     */
                    void SetIsDauPackage(const bool& _isDauPackage);

                    /**
                     * 判断参数 IsDauPackage 是否已赋值
                     * @return IsDauPackage 是否已赋值
                     * 
                     */
                    bool IsDauPackageHasBeenSet() const;

                    /**
                     * 获取<p>套餐类型:空\baas\tcbr</p>
                     * @return PackageType <p>套餐类型:空\baas\tcbr</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>套餐类型:空\baas\tcbr</p>
                     * @param _packageType <p>套餐类型:空\baas\tcbr</p>
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>架构类型</p>
                     * @return ArchitectureType <p>架构类型</p>
                     * 
                     */
                    std::string GetArchitectureType() const;

                    /**
                     * 设置<p>架构类型</p>
                     * @param _architectureType <p>架构类型</p>
                     * 
                     */
                    void SetArchitectureType(const std::string& _architectureType);

                    /**
                     * 判断参数 ArchitectureType 是否已赋值
                     * @return ArchitectureType 是否已赋值
                     * 
                     */
                    bool ArchitectureTypeHasBeenSet() const;

                    /**
                     * 获取<p>回收标志，默认为空</p>
                     * @return Recycle <p>回收标志，默认为空</p>
                     * 
                     */
                    std::string GetRecycle() const;

                    /**
                     * 设置<p>回收标志，默认为空</p>
                     * @param _recycle <p>回收标志，默认为空</p>
                     * 
                     */
                    void SetRecycle(const std::string& _recycle);

                    /**
                     * 判断参数 Recycle 是否已赋值
                     * @return Recycle 是否已赋值
                     * 
                     */
                    bool RecycleHasBeenSet() const;

                private:

                    /**
                     * <p>账户下该环境唯一标识</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>环境来源。包含以下取值：</p><li>miniapp：微信小程序</li><li>qcloud ：腾讯云</li>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>环境别名，要以a-z开头，不能包含 a-zA-z0-9- 以外的字符</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最后修改时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>环境状态。包含以下取值：</p><li>NORMAL：正常可用</li><li>UNAVAILABLE：服务不可用，可能是尚未初始化或者初始化过程中</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据库列表</p>
                     */
                    std::vector<DatabasesInfo> m_databases;
                    bool m_databasesHasBeenSet;

                    /**
                     * <p>存储列表</p>
                     */
                    std::vector<StorageInfo> m_storages;
                    bool m_storagesHasBeenSet;

                    /**
                     * <p>函数列表</p>
                     */
                    std::vector<FunctionInfo> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * <p>tcb产品套餐ID，参考DescribePackages接口的返回值。</p>
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>套餐中文名称，参考DescribePackages接口的返回值。</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>云日志服务列表</p>
                     */
                    std::vector<LogServiceInfo> m_logServices;
                    bool m_logServicesHasBeenSet;

                    /**
                     * <p>静态资源信息</p>
                     */
                    std::vector<StaticStorageInfo> m_staticStorages;
                    bool m_staticStoragesHasBeenSet;

                    /**
                     * <p>是否到期自动降为免费版</p>
                     */
                    bool m_isAutoDegrade;
                    bool m_isAutoDegradeHasBeenSet;

                    /**
                     * <p>环境渠道</p>
                     */
                    std::string m_envChannel;
                    bool m_envChannelHasBeenSet;

                    /**
                     * <p>支付方式。包含以下取值：</p><li> prepayment：预付费</li><li> postpaid：后付费</li>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>是否为默认环境</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>环境所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>环境标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>自定义日志服务</p>
                     */
                    std::vector<ClsInfo> m_customLogServices;
                    bool m_customLogServicesHasBeenSet;

                    /**
                     * <p>环境类型：baas, run, hoting, weda</p>
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * <p>是否是dau新套餐</p>
                     */
                    bool m_isDauPackage;
                    bool m_isDauPackageHasBeenSet;

                    /**
                     * <p>套餐类型:空\baas\tcbr</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>架构类型</p>
                     */
                    std::string m_architectureType;
                    bool m_architectureTypeHasBeenSet;

                    /**
                     * <p>回收标志，默认为空</p>
                     */
                    std::string m_recycle;
                    bool m_recycleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENVINFO_H_
