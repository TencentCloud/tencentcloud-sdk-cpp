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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASEINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 服务基本信息
                */
                class ServerBaseInfo : public AbstractModel
                {
                public:
                    ServerBaseInfo();
                    ~ServerBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务名</p>
                     * @return ServerName <p>服务名</p>
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置<p>服务名</p>
                     * @param _serverName <p>服务名</p>
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取<p>默认服务域名</p>
                     * @return DefaultDomainName <p>默认服务域名</p>
                     * 
                     */
                    std::string GetDefaultDomainName() const;

                    /**
                     * 设置<p>默认服务域名</p>
                     * @param _defaultDomainName <p>默认服务域名</p>
                     * 
                     */
                    void SetDefaultDomainName(const std::string& _defaultDomainName);

                    /**
                     * 判断参数 DefaultDomainName 是否已赋值
                     * @return DefaultDomainName 是否已赋值
                     * 
                     */
                    bool DefaultDomainNameHasBeenSet() const;

                    /**
                     * 获取<p>自定义域名</p>
                     * @return CustomDomainName <p>自定义域名</p>
                     * 
                     */
                    std::string GetCustomDomainName() const;

                    /**
                     * 设置<p>自定义域名</p>
                     * @param _customDomainName <p>自定义域名</p>
                     * 
                     */
                    void SetCustomDomainName(const std::string& _customDomainName);

                    /**
                     * 判断参数 CustomDomainName 是否已赋值
                     * @return CustomDomainName 是否已赋值
                     * 
                     */
                    bool CustomDomainNameHasBeenSet() const;

                    /**
                     * 获取<p>服务状态：creating/create_failed/freezing/freeze_fail/froze/unfreezing/unfreeze_fail/normal/deleting/delete_failed/abnormal</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>create_failed： 创建失败</li><li>freezing： 冻结中</li><li>freeze_fail： 冻结失败</li><li>froze： 已冻结</li><li>unfreezing： 解冻中</li><li>unfreeze_fail： 解冻失败</li><li>normal： 正常</li><li>deleting： 删除中</li><li>delete_failed： 删除失败</li><li>abnormal： 服务异常</li></ul>
                     * @return Status <p>服务状态：creating/create_failed/freezing/freeze_fail/froze/unfreezing/unfreeze_fail/normal/deleting/delete_failed/abnormal</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>create_failed： 创建失败</li><li>freezing： 冻结中</li><li>freeze_fail： 冻结失败</li><li>froze： 已冻结</li><li>unfreezing： 解冻中</li><li>unfreeze_fail： 解冻失败</li><li>normal： 正常</li><li>deleting： 删除中</li><li>delete_failed： 删除失败</li><li>abnormal： 服务异常</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>服务状态：creating/create_failed/freezing/freeze_fail/froze/unfreezing/unfreeze_fail/normal/deleting/delete_failed/abnormal</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>create_failed： 创建失败</li><li>freezing： 冻结中</li><li>freeze_fail： 冻结失败</li><li>froze： 已冻结</li><li>unfreezing： 解冻中</li><li>unfreeze_fail： 解冻失败</li><li>normal： 正常</li><li>deleting： 删除中</li><li>delete_failed： 删除失败</li><li>abnormal： 服务异常</li></ul>
                     * @param _status <p>服务状态：creating/create_failed/freezing/freeze_fail/froze/unfreezing/unfreeze_fail/normal/deleting/delete_failed/abnormal</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>create_failed： 创建失败</li><li>freezing： 冻结中</li><li>freeze_fail： 冻结失败</li><li>froze： 已冻结</li><li>unfreezing： 解冻中</li><li>unfreeze_fail： 解冻失败</li><li>normal： 正常</li><li>deleting： 删除中</li><li>delete_failed： 删除失败</li><li>abnormal： 服务异常</li></ul>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>公网访问类型</p>
                     * @return AccessTypes <p>公网访问类型</p>
                     * 
                     */
                    std::vector<std::string> GetAccessTypes() const;

                    /**
                     * 设置<p>公网访问类型</p>
                     * @param _accessTypes <p>公网访问类型</p>
                     * 
                     */
                    void SetAccessTypes(const std::vector<std::string>& _accessTypes);

                    /**
                     * 判断参数 AccessTypes 是否已赋值
                     * @return AccessTypes 是否已赋值
                     * 
                     */
                    bool AccessTypesHasBeenSet() const;

                    /**
                     * 获取<p>展示自定义域名</p>
                     * @return CustomDomainNames <p>展示自定义域名</p>
                     * 
                     */
                    std::vector<std::string> GetCustomDomainNames() const;

                    /**
                     * 设置<p>展示自定义域名</p>
                     * @param _customDomainNames <p>展示自定义域名</p>
                     * 
                     */
                    void SetCustomDomainNames(const std::vector<std::string>& _customDomainNames);

                    /**
                     * 判断参数 CustomDomainNames 是否已赋值
                     * @return CustomDomainNames 是否已赋值
                     * 
                     */
                    bool CustomDomainNamesHasBeenSet() const;

                    /**
                     * 获取<p>服务类型: function 云函数2.0；container 容器服务</p>
                     * @return ServerType <p>服务类型: function 云函数2.0；container 容器服务</p>
                     * 
                     */
                    std::string GetServerType() const;

                    /**
                     * 设置<p>服务类型: function 云函数2.0；container 容器服务</p>
                     * @param _serverType <p>服务类型: function 云函数2.0；container 容器服务</p>
                     * 
                     */
                    void SetServerType(const std::string& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取<p>流量类型，目前只有 FLOW</p>
                     * @return TrafficType <p>流量类型，目前只有 FLOW</p>
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置<p>流量类型，目前只有 FLOW</p>
                     * @param _trafficType <p>流量类型，目前只有 FLOW</p>
                     * 
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

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

                private:

                    /**
                     * <p>服务名</p>
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * <p>默认服务域名</p>
                     */
                    std::string m_defaultDomainName;
                    bool m_defaultDomainNameHasBeenSet;

                    /**
                     * <p>自定义域名</p>
                     */
                    std::string m_customDomainName;
                    bool m_customDomainNameHasBeenSet;

                    /**
                     * <p>服务状态：creating/create_failed/freezing/freeze_fail/froze/unfreezing/unfreeze_fail/normal/deleting/delete_failed/abnormal</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>create_failed： 创建失败</li><li>freezing： 冻结中</li><li>freeze_fail： 冻结失败</li><li>froze： 已冻结</li><li>unfreezing： 解冻中</li><li>unfreeze_fail： 解冻失败</li><li>normal： 正常</li><li>deleting： 删除中</li><li>delete_failed： 删除失败</li><li>abnormal： 服务异常</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>公网访问类型</p>
                     */
                    std::vector<std::string> m_accessTypes;
                    bool m_accessTypesHasBeenSet;

                    /**
                     * <p>展示自定义域名</p>
                     */
                    std::vector<std::string> m_customDomainNames;
                    bool m_customDomainNamesHasBeenSet;

                    /**
                     * <p>服务类型: function 云函数2.0；container 容器服务</p>
                     */
                    std::string m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * <p>流量类型，目前只有 FLOW</p>
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_SERVERBASEINFO_H_
